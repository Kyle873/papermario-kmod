#include "kpa_117.h"

EvtScript N(EVS_Empty) = {
    Return
    End
};

EvtScript N(EVS_ExitWalk_kpa_116_1) = EVT_EXIT_WALK(60, kpa_117_ENTRY_0, "kpa_116", kpa_116_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_kpa_116_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    ExecWait(N(EVS_Empty))
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    Exec(N(EVS_SetupMusic))
    Return
    End
};
