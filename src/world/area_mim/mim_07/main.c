#include "mim_07.h"

#include "../common/SetForeverForestFog.inc.c"

EvtScript N(EVS_ExitWalk_n) = EVT_EXIT_WALK(60, mim_07_ENTRY_0, "mim_09", mim_09_ENTRY_2);
EvtScript N(EVS_ExitWalk_w) = EVT_EXIT_WALK(60, mim_07_ENTRY_1, "mim_01", mim_01_ENTRY_1);
EvtScript N(EVS_ExitWalk_s) = EVT_EXIT_WALK(60, mim_07_ENTRY_2, "mim_06", mim_06_ENTRY_0);
EvtScript N(EVS_ExitWalk_e) = EVT_EXIT_WALK(60, mim_07_ENTRY_3, "mim_11", mim_11_ENTRY_0);

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
    Call(SetSpriteShading, SHADING_MIM_07)
    EVT_SETUP_CAMERA_MIM()
    Set(AB_MIM_2, GB_MIM_CurrentMapID)
    Call(GetMapID, GB_MIM_CurrentMapID)
    ExecWait(N(EVS_SetupGates))
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    Exec(N(EVS_PlayForestMusic))
    ExecWait(N(EVS_SetupExitHint))
    Call(N(SetForeverForestFog))
    Call(GetEntryID, LVar0)
    IfEq(LVar0, mim_07_ENTRY_3)
        Call(UseSettingsFrom, CAM_DEFAULT, 500, -100, 0)
        Call(SetPanTarget, CAM_DEFAULT, 530, 0, 0)
        Call(SetCamSpeed, CAM_DEFAULT, Float(90.0))
        Call(PanToTarget, CAM_DEFAULT, 0, TRUE)
        Wait(1)
        Thread
            Call(PanToTarget, CAM_DEFAULT, 0, FALSE)
            Call(SetCamSpeed, CAM_DEFAULT, Float(3.0))
        EndThread
    Else
        Call(SetCamSpeed, CAM_DEFAULT, Float(3.0))
    EndIf
    Return
    End
};
