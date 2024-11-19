#include "kpa_134.h"
#include "entity.h"

API_CALLABLE(N(UnusedSetEntityPosition)) {
    Entity* entity = get_entity_by_index(script->varTable[10]);

    entity->pos.x = script->varTable[0];
    entity->pos.y = script->varTable[1];
    entity->pos.z = script->varTable[2];
    return ApiStatus_DONE2;
}

#include "world/common/todo/SetEntityPosition.inc.c"
#include "world/common/todo/RemovePadlock.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

EvtScript N(EVS_BreakBlock_Brick) = {
    IfEq(GF_KPA134_BlueSwitch, TRUE)
        Return
    EndIf
    Call(DisablePlayerInput, TRUE)
    Set(LVar5, -224)
    Call(MakeLerp, 355, 370, 4, EASING_QUADRATIC_OUT)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_SwitchEntityID, LVar5, LVar0, 0)
        Wait(1)
        Sub(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(MakeLerp, LVar0, 240, 16, EASING_QUADRATIC_IN)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_SwitchEntityID, LVar5, LVar0, 0)
        Wait(1)
        Sub(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

s32 N(KeyList_BowsersCastle)[] = {
    ITEM_BOWSER_CASTLE_KEY,
    ITEM_NONE,
};

EvtScript N(EVS_UnlockPrompt_Door) = {
    Call(ShowKeyChoicePopup)
    IfEq(LVar0, 0)
        Call(ShowMessageAtScreenPos, MSG_Menus_00D8, 160, 40)
        Call(CloseChoicePopup)
        Return
    EndIf
    IfEq(LVar0, -1)
        Call(CloseChoicePopup)
        Return
    EndIf
    Call(RemoveKeyItemAt, LVar1)
    Set(GF_KPA134_UnlockedDoor, TRUE)
    Call(N(GetEntityPosition), MV_PadlockEntityID, LVar0, LVar1, LVar2)
    Call(PlaySoundAt, SOUND_USE_KEY, SOUND_SPACE_DEFAULT, LVar0, LVar1, LVar2)
    Set(LVar0, MV_PadlockEntityID)
    Call(N(RemovePadlock))
    Set(LVar1, 0)
    Wait(5)
    Call(CloseChoicePopup)
    Unbind
    BindTrigger(Ref(N(EVS_ExitDoors_kpa_130_0)), TRIGGER_WALL_PRESS_A, COLLIDER_nno, 1, 0)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KPA134_UnlockedDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Set(MV_PadlockEntityID, LVar0)
        BindPadlock(Ref(N(EVS_UnlockPrompt_Door)), TRIGGER_WALL_PRESS_A, EVT_ENTITY_INDEX(0), Ref(N(KeyList_BowsersCastle)), 0, 1)
    Else
        BindTrigger(Ref(N(EVS_ExitDoors_kpa_130_0)), TRIGGER_WALL_PRESS_A, COLLIDER_nno, 1, 0)
    EndIf
    IfEq(GF_KPA134_BlueSwitch, FALSE)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
        Set(MV_SwitchEntityID, LVar0)
    EndIf
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    Call(AssignScript, Ref(GEN_BRICK_BLOCK_1_SCRIPT))
    EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_1_PARAMS)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    Return
    End
};
