#include "omo_02.h"
#include "entity.h"

EvtScript N(EVS_TetherCamToPlayer) = {
    Label(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(SetCamTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
        Goto(0)
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch_Impl) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_JUMP)
    Call(GetPlayerPos, LVar0, LVar1, LVar2)
    Loop(4)
        Add(LVar1, 10)
        Call(SetPlayerPos, LVar0, LVar1, LVar2)
        Wait(1)
    EndLoop
    Call(EnableCameraFollowPlayerY)
    ExecGetTID(N(EVS_TetherCamToPlayer), LVarA)
    Call(SetPlayerJumpscale, Float(0.7))
    Call(PlayerJump, -290, 85, -78, 40)
    KillThread(LVarA)
    Call(DisableCameraFollowPlayerY)
    Wait(3)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Call(DisableCameraFollowPlayerY)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_1_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_1_SCRIPT))
    Return
    End
};
