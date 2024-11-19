#include "iwa_04.h"
#include "entity.h"

API_CALLABLE(N(MonitorPlayerAltitude)) {
    s32 status = -1;

    if (gPlayerStatus.lastGoodPos.y > -100.0) {
        status = 0;
    }
    if (gPlayerStatus.lastGoodPos.y < -240.0) {
        status = 1;
    }
    if (status >= 0) {
        evt_set_variable(script, MV_PlayerCliffLevel, status);
    }

    return ApiStatus_BLOCK;
}

EvtScript N(TetherCameraToPlayer) = {
    Loop(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(SetCamTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
    EndLoop
    Return
    End
};

EvtScript N(EVS_UseSpring) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_LAUNCH)
    Wait(1)
    ExecGetTID(N(TetherCameraToPlayer), LVarA)
    IfEq(MV_PlayerCliffLevel, 0)
        Call(SetPlayerJumpscale, Float(1.4))
        Call(PlayerJump, -560, -250, 190, 15)
    Else
        Call(SetPlayerJumpscale, Float(0.7))
        Call(PlayerJump, -560, 0, 90, 40)
    EndIf
    KillThread(LVarA)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    Thread
        Call(N(MonitorPlayerAltitude))
    EndThread
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_1_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_2_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_3_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_4_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};
