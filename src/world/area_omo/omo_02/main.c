#include "omo_02.h"

EvtScript N(EVS_ExitWalk_omo_10_1) = EVT_EXIT_WALK(60, omo_02_ENTRY_0, "omo_10", omo_10_ENTRY_1);
EvtScript N(EVS_ExitWalk_omo_14_0) = EVT_EXIT_WALK(60, omo_02_ENTRY_1, "omo_14", omo_14_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_omo_10_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deili1, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_omo_14_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deili2, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    ExecWait(N(EVS_SetupGizmos))
    ExecWait(N(EVS_SetupMusic))
    ExecWait(N(EVS_SetupBarricade))
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    Return
    End
};
