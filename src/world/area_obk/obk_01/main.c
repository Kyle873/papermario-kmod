#include "obk_01.h"

EvtScript N(EVS_ExitDoors_mim_11_2) = EVT_EXIT_DOUBLE_DOOR_SET_SOUNDS(obk_01_ENTRY_0, "mim_11", mim_11_ENTRY_2,
    COLLIDER_tt1, MODEL_door1_2, MODEL_door1_1, DOOR_SOUNDS_CREAKY);

EvtScript N(EVS_ExitDoor_obk_02_0) = {
    IfLt(GB_StoryProgress, STORY_CH3_WEIGHED_DOWN_CHANDELIER)
        Return
    EndIf
    SetGroup(EVT_GROUP_EXIT_MAP)
    Call(DisablePlayerInput, TRUE)
    Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
    Set(LVar0, obk_01_ENTRY_1)
    Set(LVar1, COLLIDER_tt2)
    Set(LVar2, MODEL_door2)
    Set(LVar3, DOOR_SWING_IN)
    Exec(ExitSingleDoor)
    Wait(17)
    Call(GotoMap, Ref("obk_02"), obk_02_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitDoor_obk_05_0) = {
    SetGroup(EVT_GROUP_EXIT_MAP)
    IfLt(GB_StoryProgress, STORY_CH3_TRIGGERED_DOOR_JUMP_SCARE)
        Exec(N(EVS_Scene_JumpScareBoo))
        Return
    EndIf
    Call(DisablePlayerInput, TRUE)
    Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
    Set(LVar0, obk_01_ENTRY_2)
    Set(LVar1, COLLIDER_tt3)
    Set(LVar2, MODEL_door3)
    Set(LVar3, DOOR_SWING_IN)
    Exec(ExitSingleDoor)
    Wait(17)
    Call(GotoMap, Ref("obk_05"), obk_05_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitDoor_obk_07_0) = {
    SetGroup(EVT_GROUP_EXIT_MAP)
    IfLt(GB_StoryProgress, STORY_CH3_TRIGGERED_DOOR_JUMP_SCARE)
        Exec(N(EVS_Scene_JumpScareBoo))
        Return
    EndIf
    Call(DisablePlayerInput, TRUE)
    Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
    Set(LVar0, obk_01_ENTRY_3)
    Set(LVar1, COLLIDER_tt4)
    Set(LVar2, MODEL_door4)
    Set(LVar3, DOOR_SWING_IN)
    Exec(ExitSingleDoor)
    Wait(17)
    Call(GotoMap, Ref("obk_07"), obk_07_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitDoor_obk_08_0) = {
    SetGroup(EVT_GROUP_EXIT_MAP)
    IfLt(GB_StoryProgress, STORY_CH3_TRIGGERED_DOOR_JUMP_SCARE)
        Exec(N(EVS_Scene_JumpScareBoo))
        Return
    EndIf
    Call(DisablePlayerInput, TRUE)
    Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
    Set(LVar0, obk_01_ENTRY_4)
    Set(LVar1, COLLIDER_tt5)
    Set(LVar2, MODEL_door5)
    Set(LVar3, DOOR_SWING_IN)
    Exec(ExitSingleDoor)
    Wait(17)
    Call(GotoMap, Ref("obk_08"), obk_08_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitDoor_obk_09_0) = EVT_EXIT_DOUBLE_DOOR_SET_SOUNDS(obk_01_ENTRY_5, "obk_09", obk_09_ENTRY_0,
    COLLIDER_tt6, MODEL_door6_1, MODEL_door6_2, DOOR_SOUNDS_CREAKY);

EvtScript N(EVS_ExitDoor_obk_09_1) = EVT_EXIT_DOUBLE_DOOR_SET_SOUNDS(obk_01_ENTRY_6, "obk_09", obk_09_ENTRY_1,
    COLLIDER_tt6_1, MODEL_door7_1, MODEL_door7_2, DOOR_SOUNDS_CREAKY);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitDoors_mim_11_2)), TRIGGER_WALL_PRESS_A, COLLIDER_tt1, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoor_obk_02_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tt2, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoor_obk_05_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tt3, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoor_obk_07_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tt4, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoor_obk_08_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tt5, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoor_obk_09_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tt6, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoor_obk_09_1)), TRIGGER_WALL_PRESS_A, COLLIDER_tt6_1, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(GetLoadType, LVar1)
    IfEq(LVar1, LOAD_FROM_FILE_SELECT)
        Exec(EnterSavePoint)
        Exec(N(EVS_BindExitTriggers))
        Return
    EndIf
    Exec(N(EVS_BindExitTriggers))
    Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(obk_01_ENTRY_0)
            IfEq(GF_OBK01_Visited, FALSE)
                Set(GF_OBK01_Visited, TRUE)
                Set(GB_StoryProgress, STORY_CH3_ENTERED_BOOS_MANSION)
            EndIf
            Call(UseDoorSounds, DOOR_SOUNDS_CREAKY)
            Set(LVar2, MODEL_door1_2)
            Set(LVar3, MODEL_door1_1)
            ExecWait(EnterDoubleDoor)
        CaseEq(obk_01_ENTRY_1)
            Set(LVar2, MODEL_door2)
            Set(LVar3, DOOR_SWING_IN)
            ExecWait(EnterSingleDoor)
        CaseEq(obk_01_ENTRY_2)
            Set(LVar2, MODEL_door3)
            Set(LVar3, DOOR_SWING_IN)
            ExecWait(EnterSingleDoor)
        CaseEq(obk_01_ENTRY_3)
            Set(LVar2, MODEL_door4)
            Set(LVar3, DOOR_SWING_IN)
            ExecWait(EnterSingleDoor)
        CaseEq(obk_01_ENTRY_4)
            Set(LVar2, MODEL_door5)
            Set(LVar3, DOOR_SWING_IN)
            ExecWait(EnterSingleDoor)
        CaseEq(obk_01_ENTRY_5)
            Call(UseDoorSounds, DOOR_SOUNDS_CREAKY)
            Set(LVar2, MODEL_door6_1)
            Set(LVar3, MODEL_door6_2)
            ExecWait(EnterDoubleDoor)
        CaseEq(obk_01_ENTRY_6)
            Call(UseDoorSounds, DOOR_SOUNDS_CREAKY)
            Set(LVar2, MODEL_door7_1)
            Set(LVar3, MODEL_door7_2)
            ExecWait(EnterDoubleDoor)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Set(GF_MAP_BoosMansion, TRUE)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupChandelier))
    Exec(N(EVS_SetupPortrait))
    Exec(N(EVS_SetupMusic))
    Exec(N(EVS_EnterMap))
    Return
    End
};
