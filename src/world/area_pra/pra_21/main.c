#include "pra_21.h"

s32 N(DoorModelsL)[] = { MODEL_o977, -1 };
s32 N(DoorModelsR)[] = { MODEL_o976, -1 };

EvtScript N(EVS_ExitDoor_pra_20_1) = EVT_EXIT_SINGLE_DOOR(pra_21_ENTRY_0, "pra_20", pra_20_ENTRY_1,
    COLLIDER_deilittnnw, MODEL_o774, DOOR_SWING_IN);

EvtScript N(EVS_ExitDoors_pra_36_0) = {
    SetGroup(EVT_GROUP_EXIT_MAP)
    Call(DisablePlayerInput, TRUE)
    Set(LVar0, pra_21_ENTRY_1)
    Set(LVar1, COLLIDER_deilittnne)
    Set(LVar2, Ref(N(DoorModelsL)))
    Set(LVar3, Ref(N(DoorModelsR)))
    Exec(BaseExitDoor)
    Wait(17)
    Call(GotoMap, Ref("pra_36"), pra_36_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitDoor_pra_20_1)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittnnw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoors_pra_36_0)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittnne, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(pra_21_ENTRY_0)
            Set(LVar2, MODEL_o774)
            Set(LVar3, DOOR_SWING_IN)
            ExecWait(EnterSingleDoor)
        CaseEq(pra_21_ENTRY_1)
            Set(LVar2, Ref(N(DoorModelsL)))
            Set(LVar3, Ref(N(DoorModelsR)))
            ExecWait(BaseEnterDoor)
    EndSwitch
    Exec(N(EVS_BindExitTriggers))
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(24, 24, 40)
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    IfLt(GB_StoryProgress, STORY_CH7_FOUND_HIDDEN_ROOM_UNDER_STATUE)
        Set(LVar0, 0)
    Else
        Switch(GB_PRA_TwinStatueState)
            CaseEq(0)
                Set(LVar0, -50)
            CaseEq(1)
                Set(LVar0, -50)
            CaseEq(2)
                Set(LVar0, 50)
        EndSwitch
    EndIf
    Call(ParentColliderToModel, COLLIDER_o1063, MODEL_o980)
    Call(TranslateModel, MODEL_o980, LVar0, 0, 0)
    Call(TranslateModel, MODEL_o981, LVar0, 0, 0)
    Call(TranslateModel, MODEL_o982, LVar0, 0, 0)
    Call(TranslateModel, MODEL_o983, LVar0, 0, 0)
    Call(TranslateModel, MODEL_o984, LVar0, 0, 0)
    Call(UpdateColliderTransform, COLLIDER_o1063)
    Exec(N(EVS_EnterMap))
    Wait(1)
    Return
    End
};
