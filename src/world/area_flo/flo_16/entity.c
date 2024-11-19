#include "flo_16.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

EvtScript N(EVS_TetherCameraToPlayer) = {
    Label(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
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
    Wait(2)
    Call(GetPlayerPos, LVar7, LVar8, LVar9)
    ExecGetTID(N(EVS_TetherCameraToPlayer), LVarA)
    Call(SetPlayerJumpscale, Float(0.7))
    Call(PlayerJump, 450, 180, -120, 30)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

API_CALLABLE(N(IsPlayerPounding)) {
    script->varTable[0] = FALSE;
    if (gPlayerStatus.actionState == ACTION_STATE_SPIN_POUND || gPlayerStatus.actionState == ACTION_STATE_TORNADO_POUND) {
        script->varTable[0] = TRUE;
    }
    return ApiStatus_DONE2;
}

EvtScript N(EVS_MonitorCeilingPound) = {
    IfEq(AF_FLO16_FoundHiddenStarPiece, FALSE)
        Call(N(IsPlayerPounding))
        IfEq(LVar0, 0)
            Return
        EndIf
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Switch(LVar0)
            CaseRange(620, 660)
                EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
                Set(AF_FLO16_FoundHiddenStarPiece, TRUE)
        EndSwitch
    EndIf
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    Set(AF_FLO16_FoundHiddenStarPiece, FALSE)
    BindTrigger(Ref(N(EVS_MonitorCeilingPound)), TRIGGER_FLOOR_TOUCH, COLLIDER_o214, 1, 0)
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
    Return
    End
};
