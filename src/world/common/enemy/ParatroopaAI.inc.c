#include "common.h"

// prerequisites
#include "world/common/enemy/FlyingAI.inc.c"

// ai-specific states
enum AiStateParatroopa {
    AI_STATE_PARATROOPA_WINDUP          = 12,
    AI_STATE_PARATROOPA_DIVE            = 13,
    AI_STATE_PARATROOPA_OVERSHOOT       = 14,
    AI_STATE_PARATROOPA_RESET           = 15
};

void N(ParatroopaAI_Windup)(Evt* script, NpcAISettings* aiSettings, EnemyDetectVolume* territory) {
    Bytecode* args = script->ptrReadPos;
    Enemy* enemy = script->owner1.enemy;
    Npc* npc = get_npc_unsafe(enemy->npcID);
    f32 yawTemp;

    npc->currentAnim.w = enemy->animList[9];
    npc->jumpVelocity = -5.0f;
    npc->jumpScale = 0.15f;
    npc->collisionHeight = enemy->varTable[8] / 2;

    dist2D(npc->pos.x, npc->pos.z, gPlayerStatusPtr->position.x, gPlayerStatusPtr->position.z);
    npc->moveSpeed = 7.0f;
    enemy->unk_10.x = npc->pos.x;
    enemy->unk_10.y = npc->pos.y;
    enemy->unk_10.z = npc->pos.z;
    enemy->unk_07 = 1;

    ai_enemy_play_sound(npc, SOUND_UNUSED_2C1, 0);
    yawTemp = atan2(npc->pos.x, npc->pos.z, gPlayerStatusPtr->position.x, gPlayerStatusPtr->position.z);
    npc->duration = 12;
    npc->yaw = yawTemp;
    script->AI_TEMP_STATE = AI_STATE_PARATROOPA_DIVE;
}

void N(ParatroopaAI_Dive)(Evt* script, NpcAISettings* aiSettings, EnemyDetectVolume* territory) {
    Enemy* enemy = script->owner1.enemy;
    Npc* npc = get_npc_unsafe(script->owner1.enemy->npcID);

    npc->jumpVelocity += npc->jumpScale;
    npc->pos.y += npc->jumpVelocity;
    npc_move_heading(npc, npc->moveSpeed, npc->yaw);
    npc->duration--;

    if (npc->duration <= 0) {
        enemy->unk_07 = 0;
        npc->jumpScale = 0.3f;
        npc->jumpVelocity = 0.0f;
        npc->moveSpeed = 3.0f;
        npc->currentAnim.w = enemy->animList[10];
        script->AI_TEMP_STATE = AI_STATE_PARATROOPA_OVERSHOOT;
    }
}

void N(ParatroopaAI_Overshoot)(Evt *script, NpcAISettings *arg1, EnemyDetectVolume *arg2)
{
    Enemy* enemy = script->owner1.enemy;
    Npc* npc = get_npc_unsafe(enemy->npcID);
    f32 overshootAmtRaw = enemy->varTable[3];
    f32 posX, posY, posZ, hitDepth;
    f32 endOvershootHeight;
    f32 overshootAmt;

    npc->jumpVelocity += npc->jumpScale;
    npc->pos.y += npc->jumpVelocity;
    overshootAmt = overshootAmtRaw / 100.0;
    npc_move_heading(npc, npc->moveSpeed, npc->yaw);
    
    posX = npc->pos.x;
    posY = npc->pos.y;
    posZ = npc->pos.z;
    hitDepth = 1000.0f;
    if (npc_raycast_down_sides(npc->collisionChannel, &posX, &posY, &posZ, &hitDepth)) {
        endOvershootHeight = posY + overshootAmt;
    } else {
        endOvershootHeight = overshootAmt;
    }

    if (!(npc->pos.y < endOvershootHeight)) {
        npc->duration = 10;
        npc->currentAnim.w = enemy->animList[11];
        npc->collisionHeight = enemy->varTable[8];
        script->AI_TEMP_STATE = AI_STATE_PARATROOPA_RESET;
    }
}

void N(ParatroopaAI_Reset)(Evt* script, NpcAISettings* aiSettings, EnemyDetectVolume* territory) {
    Npc* npc = get_npc_unsafe(script->owner1.enemy->npcID);

    npc->duration--;
    if (npc->duration <= 0) {
        script->AI_TEMP_STATE = AI_STATE_WANDER_INIT;
    }
}

ApiStatus N(ParatroopaAI_Main)(Evt* script, s32 isInitialCall) {
    Bytecode* args = script->ptrReadPos;
    Enemy* enemy = script->owner1.enemy;
    Npc* npc = get_npc_unsafe(enemy->npcID);
    EnemyDetectVolume territory;
    EnemyDetectVolume* territoryPtr = &territory;
    NpcAISettings* aiSettings = (NpcAISettings*)evt_get_variable(script, *args++);
    
    territory.skipPlayerDetectChance = 0;
    territory.shape = enemy->territory->wander.detectShape;
    territory.pointX = enemy->territory->wander.detect.x;
    territory.pointZ = enemy->territory->wander.detect.z;
    territory.sizeX = enemy->territory->wander.detectSizeX;
    territory.sizeZ = enemy->territory->wander.detectSizeZ;
    territory.halfHeight = 120.0f;
    territory.detectFlags = 0;
    
    if (isInitialCall) {
        N(FlyingAI_Init)(npc, enemy, script, aiSettings);
        enemy->varTable[8] = npc->collisionHeight;
        script->AI_TEMP_STATE = 0;
    }

    npc->verticalRenderOffset = -3;

    if (enemy->aiFlags & ENEMY_AI_FLAGS_4) {
        if (enemy->aiPaused != 0) {
            return ApiStatus_BLOCK;
        }
        enemy->aiFlags &= ~ENEMY_AI_FLAGS_4;
    }
    
    switch (script->AI_TEMP_STATE) {
        case AI_STATE_WANDER_INIT:
            N(FlyingAI_WanderInit)(script, aiSettings, territoryPtr);
            // fallthrough
        case AI_STATE_WANDER:
            N(FlyingAI_Wander)(script, aiSettings, territoryPtr);
            if (script->AI_TEMP_STATE != 2) {
                break;
            }
            // fallthrough
        case AI_STATE_LOITER_INIT:
            N(FlyingAI_LoiterInit)(script, aiSettings, territoryPtr);
            // fallthrough
        case AI_STATE_LOITER:
            N(FlyingAI_Loiter)(script, aiSettings, territoryPtr);
            if (script->AI_TEMP_STATE != AI_STATE_ALERT_INIT) {
                break;
            }
            // fallthrough
        case AI_STATE_ALERT_INIT:
            N(FlyingAI_JumpInit)(script, aiSettings, territoryPtr);
            if (script->AI_TEMP_STATE != AI_STATE_ALERT) {
                break;
            }
            // fallthrough
        case AI_STATE_ALERT:
            N(FlyingAI_Jump)(script, aiSettings, territoryPtr);
            if (script->AI_TEMP_STATE != AI_STATE_PARATROOPA_WINDUP) {
                break;
            }
            // fallthrough
        case AI_STATE_PARATROOPA_WINDUP:
            N(ParatroopaAI_Windup)(script, aiSettings, territoryPtr);
            if (script->AI_TEMP_STATE != AI_STATE_PARATROOPA_DIVE) {
                break;
            }
            // fallthrough
        case AI_STATE_PARATROOPA_DIVE:
            N(ParatroopaAI_Dive)(script, aiSettings, territoryPtr);
            if (script->AI_TEMP_STATE != AI_STATE_PARATROOPA_OVERSHOOT) {
                break;
            }
            // fallthrough
        case AI_STATE_PARATROOPA_OVERSHOOT:
            N(ParatroopaAI_Overshoot)(script, aiSettings, territoryPtr);
            if (script->AI_TEMP_STATE != AI_STATE_PARATROOPA_RESET) {
                break;
            }
            // fallthrough
        case AI_STATE_PARATROOPA_RESET:
            N(ParatroopaAI_Reset)(script, aiSettings, territoryPtr);
            break;
    }
    return ApiStatus_BLOCK;
}