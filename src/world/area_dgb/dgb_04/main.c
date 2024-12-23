#include "dgb_04.h"

EvtScript N(EVS_ExitDoor_dgb_06_0) = EVT_EXIT_SINGLE_DOOR_SET_SOUNDS(dgb_04_ENTRY_0, "dgb_06", dgb_06_ENTRY_0,
    COLLIDER_deilittse, MODEL_o206, DOOR_SWING_OUT, DOOR_SOUNDS_BASIC);

EvtScript N(EVS_ExitDoors_dgb_03_0) = EVT_EXIT_DOUBLE_DOOR_SET_SOUNDS(dgb_04_ENTRY_1, "dgb_03", dgb_03_ENTRY_0,
    COLLIDER_deilittne, MODEL_o102, MODEL_o101, DOOR_SOUNDS_CREAKY);

EvtScript N(EVS_EnterMap) = {
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(dgb_04_ENTRY_0)
            Call(UseDoorSounds, DOOR_SOUNDS_CREAKY)
            Set(LVar2, MODEL_o102)
            Set(LVar3, MODEL_o101)
            ExecWait(EnterDoubleDoor)
        CaseEq(dgb_04_ENTRY_1)
            Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
            Set(LVar2, MODEL_o206)
            Set(LVar3, DOOR_SWING_OUT)
            ExecWait(EnterSingleDoor)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    IfLt(GB_StoryProgress, STORY_CH3_STAR_SPIRIT_RESCUED)
        Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    EndIf
    ExecWait(N(EVS_MakeEntities))
    BindTrigger(Ref(N(EVS_ExitDoor_dgb_06_0)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittse, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoors_dgb_03_0)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittne, 1, 0)
    Exec(N(EVS_SetupMusic))
    Exec(N(EVS_EnterMap))
    Return
    End
};
