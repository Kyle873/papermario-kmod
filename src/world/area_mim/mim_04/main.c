#include "mim_04.h"

#include "../common/SetForeverForestFog.inc.c"

EvtScript N(EVS_ExitWalk_n) = EVT_EXIT_WALK(60, mim_04_ENTRY_0, "mim_05", mim_05_ENTRY_2);
EvtScript N(EVS_ExitWalk_w) = EVT_EXIT_WALK(60, mim_04_ENTRY_1, "mim_01", mim_01_ENTRY_1);
EvtScript N(EVS_ExitWalk_s) = EVT_EXIT_WALK(60, mim_04_ENTRY_2, "mim_01", mim_01_ENTRY_1);
EvtScript N(EVS_ExitWalk_e) = EVT_EXIT_WALK(60, mim_04_ENTRY_3, "mim_03", mim_03_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_n)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilin, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_w)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_s)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilis, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_e)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_MIM_04)
    EVT_SETUP_CAMERA_MIM()
    Set(AB_MIM_2, GB_MIM_CurrentMapID)
    Call(GetMapID, GB_MIM_CurrentMapID)
    ExecWait(N(EVS_SetupGates))
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    Exec(N(EVS_SetupMusic))
    Exec(N(EVS_SetupExitHint))
    Call(N(SetForeverForestFog))
    Call(SetCamSpeed, CAM_DEFAULT, Float(3.0))
    Return
    End
};
