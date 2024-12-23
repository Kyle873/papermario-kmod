#include "kpa_01.h"

#include "world/common/atomic/CreateDarkness.inc.c"

EvtScript N(EVS_ExitDoor_kpa_14_1) = EVT_EXIT_SINGLE_DOOR(kpa_01_ENTRY_0, "kpa_14", kpa_14_ENTRY_1,
    COLLIDER_tte, MODEL_o205, DOOR_SWING_IN);

EvtScript N(EVS_ExitWalk_kpa_03_0) = EVT_EXIT_WALK(60, kpa_01_ENTRY_1, "kpa_03", kpa_03_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitDoor_kpa_14_1)), TRIGGER_WALL_PRESS_A, COLLIDER_tte, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_kpa_03_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(kpa_01_ENTRY_0)
            Set(LVar0, kpa_01_ENTRY_0)
            Set(LVar1, MODEL_exit2)
            Set(LVar2, MODEL_o205)
            Set(LVar3, DOOR_SWING_IN)
            Exec(EnterSingleDoor)
            Exec(N(EVS_BindExitTriggers))
        CaseEq(kpa_01_ENTRY_1)
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_CreateDarkness))
    Exec(N(EVS_EnterMap))
    Wait(1)
    Exec(N(EVS_SetupMusic))
    Return
    End
};
