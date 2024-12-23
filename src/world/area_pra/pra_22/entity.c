#include "pra_22.h"
#include "entity.h"

API_CALLABLE(N(GetTargetPosXForSpring)) {
    PlayerStatus* playerStatus = &gPlayerStatus;

    if (playerStatus->targetYaw >= 0.0f && playerStatus->targetYaw < 180.0f) {
        script->varTable[0] = 425;
    }
    if (playerStatus->targetYaw >= 180.0f && playerStatus->targetYaw < 360.0f) {
        script->varTable[0] = 325;
    }
    return ApiStatus_DONE2;
}

API_CALLABLE(N(MonitorPlayerFloor)) {
    PlayerStatus* playerStatus = &gPlayerStatus;

    if (playerStatus->lastGoodPos.y == 0) {
        evt_set_variable(script, MV_PlayerFloor, 0);
    }
    if (playerStatus->lastGoodPos.y == -200) {
        evt_set_variable(script, MV_PlayerFloor, 1);
    }
    return ApiStatus_BLOCK;
}

EvtScript N(EVS_TetherCamToPlayer) = {
    Label(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        IfGe(LVar1, LVar3)
            Set(LVar1, LVar3)
        EndIf
        Call(SetCamTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
        Goto(0)
    Return
    End
};

EvtScript N(EVS_UseSpring) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_LAUNCH)
    Call(GetPlayerPos, LVar7, LVar8, LVar9)
    IfEq(MV_PlayerFloor, 0)
        Set(LVar3, -175)
        ExecGetTID(N(EVS_TetherCamToPlayer), LVarA)
        Call(N(GetTargetPosXForSpring))
        Set(LVar1, -200)
        Set(LVar2, 15)
        Call(SetPlayerJumpscale, Float(2.0))
    Else
        Set(LVar3, 0)
        ExecGetTID(N(EVS_TetherCamToPlayer), LVarA)
        IfEq(GB_PRA_TwinStatueState, 2)
            Set(LVar0, 340)
        Else
            Set(LVar0, 410)
        EndIf
        Set(LVar1, 0)
        Set(LVar2, 35)
        Call(SetPlayerJumpscale, Float(0.7))
    EndIf
    Call(PlayerJump, LVar0, LVar1, LVar9, LVar2)
    KillThread(LVarA)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Wait(2)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    Thread
        Call(N(MonitorPlayerFloor))
    EndThread
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    Return
    End
};
