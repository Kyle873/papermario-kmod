#include "nok_12.h"
#include "entity.h"

API_CALLABLE(N(SetNpcVarSafe)) {
    Bytecode* args = script->ptrReadPos;
    Enemy* enemy = script->owner1.enemy;
    s32 npcID = evt_get_variable(script, *args++);
    s32 varIdx = evt_get_variable(script, *args++);
    s32 val = evt_get_variable(script, *args++);

    if (npcID == NPC_SELF) {
        npcID = enemy->npcID;
    }

    enemy = get_enemy_safe(npcID);
    if (enemy != NULL) {
        enemy->varTable[varIdx] = val;
    }

    return ApiStatus_DONE2;
}

#include "world/common/todo/SetEntityPosition.inc.c"

EvtScript N(EVS_BreakBlock_Ambush) = {
    Call(N(SetNpcVarSafe), NPC_SpikedGoomba, 0, 1)
    Return
    End
};

EvtScript N(EVS_OnShakeTree_DropSwitch) = {
    IfLt(GB_StoryProgress, STORY_CH1_KNOCKED_SWITCH_FROM_TREE)
        Set(GB_StoryProgress, STORY_CH1_KNOCKED_SWITCH_FROM_TREE)
        Wait(15)
        SetGroup(EVT_GROUP_NEVER_PAUSE)
        Call(SetTimeFreezeMode, TIME_FREEZE_PARTIAL)
        Call(DisablePlayerInput, TRUE)
        Call(MakeLerp, 95, 0, 12, EASING_QUADRATIC_IN)
        Label(0)
            Call(UpdateLerp)
            Call(N(SetEntityPosition), MV_SwitchEntityID, -470, LVar0, -150)
            Wait(1)
            IfEq(LVar1, 1)
                Goto(0)
            EndIf
        Call(PlaySoundAt, SOUND_OBJECT_LAND, SOUND_SPACE_DEFAULT, -470, LVar0, -150)
        Call(ShakeCam, CAM_DEFAULT, 0, 5, Float(1.0))
        Thread
            Wait(5)
            Call(SetTimeFreezeMode, TIME_FREEZE_NONE)
        EndThread
        Call(DisablePlayerInput, FALSE)
    EndIf
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfLe(GB_StoryProgress, STORY_CH1_KNOCKED_SWITCH_FROM_TREE)
        IfEq(GB_StoryProgress, STORY_CH1_KNOCKED_SWITCH_FROM_TREE)
            EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
            Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
        Else
            Call(MakeEntity, Ref(Entity_BlueSwitch), NPC_DISPOSE_LOCATION, 0, MAKE_ENTITY_END)
            Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(AF_NOK12_HitSwitch))
            Set(MV_SwitchEntityID, LVar0)
        EndIf
    EndIf
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    Call(AssignScript, Ref(GEN_BRICK_BLOCK_1_SCRIPT))
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_3_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_4_PARAMS)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    Return
    End
};
