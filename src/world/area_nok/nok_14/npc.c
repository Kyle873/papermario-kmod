#include "nok_14.h"

#include "world/common/enemy/KoopaTroopa_Wander.inc.c"
#include "world/common/enemy/SpikedGoomba_Wander.inc.c"
#include "world/common/enemy/Paratroopa.inc.c"
#include "world/common/enemy/KoopaTroopa_Stationary.inc.c"

EvtScript N(EVS_NpcIdle_KoopaTroopa_01) = {
    Call(GetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
    Call(AwaitPlayerApproach, -650, -35, 100)
    Call(PlaySoundAt, SOUND_SEARCH_BUSH, SOUND_SPACE_DEFAULT, -650, 75, -120)
    Thread
        Loop(5)
            Call(TranslateModel, MODEL_o122, 2, 0, 0)
            Wait(1)
            Call(TranslateModel, MODEL_o122, -2, 0, 0)
            Wait(1)
        EndLoop
    EndThread
    Wait(5)
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_IGNORE_WORLD_COLLISION | NPC_FLAG_IGNORE_CAMERA_FOR_YAW | NPC_FLAG_FLIP_INSTANTLY, TRUE)
    Thread
        Call(MakeLerp, 0, 360, 20, EASING_LINEAR)
        Label(1)
        Call(UpdateLerp)
        Call(SetNpcRotation, NPC_SELF, 0, LVar0, 0)
        Wait(1)
        IfEq(LVar1, 1)
            Goto(1)
        EndIf
    EndThread
    Call(SetNpcJumpscale, NPC_SELF, Float(0.6))
    Call(NpcJump0, NPC_SELF, -650, 75, -30, 20)
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_IGNORE_WORLD_COLLISION | NPC_FLAG_IGNORE_CAMERA_FOR_YAW | NPC_FLAG_FLIP_INSTANTLY, FALSE)
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_GRAVITY, TRUE)
    Call(BindNpcAI, NPC_SELF, Ref(N(EVS_NpcAI_KoopaTroopa_Wander)))
    Return
    End
};

EvtScript N(EVS_NpcInit_KoopaTroopa_01) = {
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_GRAVITY, FALSE)
    Call(SetNpcPos, NPC_SELF, -650, 75, -150)
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_KoopaTroopa_01)))
    Return
    End
};

EvtScript N(EVS_NpcInit_KoopaTroopa_02) = {
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_HAS_SHADOW, FALSE)
    Return
    End
};

NpcData N(NpcData_KoopaTroopa_01) = {
    .id = NPC_KoopaTroopa_01,
    .pos = { GEN_NPC_KOOPA_TROOPA_01_VEC },
    .yaw = GEN_NPC_KOOPA_TROOPA_01_DIR,
    .territory = GEN_NPC_KOOPA_TROOPA_01_TERRITORY,
    .init = &N(EVS_NpcInit_KoopaTroopa_01),
    .settings = &N(NpcSettings_KoopaTroopa_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = KOOPA_TROOPA_NOK_DROPS,
    .animations = KOOPA_TROOPA_ANIMS,
};

NpcData N(NpcData_ParaTroopa) = {
    .id = NPC_ParaTroopa,
    .pos = { GEN_NPC_PARA_TROOPA_VEC },
    .yaw = GEN_NPC_PARA_TROOPA_DIR,
    .territory = GEN_NPC_PARA_TROOPA_TERRITORY,
    .settings = &N(NpcSettings_ParaTroopa),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PARATROOPA_DROPS,
    .animations = PARATROOPA_ANIMS,
};

NpcData N(NpcData_SpikedGoomba) = {
    .id = NPC_SpikedGoomba,
    .pos = { GEN_NPC_SPIKED_GOOMBA_VEC },
    .yaw = GEN_NPC_SPIKED_GOOMBA_DIR,
    .territory = GEN_NPC_SPIKED_GOOMBA_TERRITORY,
    .settings = &N(NpcSettings_SpikedGoomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = SPIKED_GOOMBA_DROPS,
    .animations = SPIKED_GOOMBA_ANIMS,
};

NpcData N(NpcData_KoopaTroopa_02) = {
    .id = NPC_KoopaTroopa_02,
    .pos = { GEN_NPC_KOOPA_TROOPA_02_VEC },
    .yaw = GEN_NPC_KOOPA_TROOPA_02_DIR,
    .territory = GEN_NPC_KOOPA_TROOPA_02_TERRITORY,
    .init = &N(EVS_NpcInit_KoopaTroopa_02),
    .settings = &N(NpcSettings_KoopaTroopa_Stationary),
    .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_HAS_NO_SPRITE,
    .drops = KOOPA_TROOPA_NOK_DROPS,
    .animations = KOOPA_TROOPA_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_KoopaTroopa_01), BTL_NOK_FORMATION_0B, BTL_NOK_STAGE_00),
    NPC_GROUP(N(NpcData_ParaTroopa), BTL_NOK_FORMATION_11, BTL_NOK_STAGE_02),
    NPC_GROUP(N(NpcData_SpikedGoomba), BTL_NOK_FORMATION_06, BTL_NOK_STAGE_00),
    NPC_GROUP(N(NpcData_KoopaTroopa_02), BTL_NOK_FORMATION_0C, BTL_NOK_STAGE_00),
    {}
};
