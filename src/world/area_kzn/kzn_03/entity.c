#include "kzn_03.h"
#include "entity.h"

API_CALLABLE(N(IsPlayerOnFirstCliff)) {
    s32 result = -1;

    if (gPlayerStatus.lastGoodPos.y > 800.0) {
        result = 0;
    }
    if (gPlayerStatus.lastGoodPos.y < 680.0) {
        result = 1;
    }
    if (result >= 0) {
        evt_set_variable(script, MV_PlayerCliffState, result);
    }

    return ApiStatus_BLOCK;
}

EvtScript N(EVS_TetherCameraToPlayer) = {
    Loop(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(SetCamTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
    EndLoop
    Return
    End
};

EvtScript N(EVS_UseSpringA) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Wait(1)
    Call(SetPlayerActionState, ACTION_STATE_LAUNCH)
    Wait(1)
    Call(EnableCameraFollowPlayerY)
    ExecGetTID(N(EVS_TetherCameraToPlayer), LVarA)
    Call(SetPlayerJumpscale, Float(0.7))
    Call(PlayerJump, 335, 290, 360, 40)
    Call(SetPlayerFlagBits, PS_FLAG_FLYING, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_FALLING)
    Call(DisablePlayerPhysics, FALSE)
    KillThread(LVarA)
    Call(DisableCameraFollowPlayerY)
    Return
    End
};

EvtScript N(EVS_UseSpringB) = {
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Wait(1)
    Call(SetPlayerActionState, ACTION_STATE_JUMP)
    Wait(1)
    Call(EnableCameraFollowPlayerY)
    ExecGetTID(N(EVS_TetherCameraToPlayer), LVarA)
    Call(SetPlayerJumpscale, Float(0.7))
    Call(PlayerJump, 350, 470, 210, 40)
    Call(SetPlayerActionState, ACTION_STATE_LAND)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    KillThread(LVarA)
    Call(DisableCameraFollowPlayerY)
    Return
    End
};

EvtScript N(EVS_UseSpringC) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Wait(1)
    Call(SetPlayerActionState, ACTION_STATE_JUMP)
    Wait(1)
    Call(EnableCameraFollowPlayerY)
    ExecGetTID(N(EVS_TetherCameraToPlayer), LVarA)
    IfEq(MV_PlayerCliffState, 0)
        Call(SetPlayerJumpscale, Float(1.4))
        Call(PlayerJump, -470, 670, 71, 18)
    Else
        Call(SetPlayerJumpscale, Float(0.7))
        Call(PlayerJump, -384, 870, -22, 40)
    EndIf
    Call(SetPlayerActionState, ACTION_STATE_LAND)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    KillThread(LVarA)
    Call(DisableCameraFollowPlayerY)
    Return
    End
};

EvtScript N(EVS_OnBreakBlock) = {
    Set(GB_StoryProgress, STORY_CH5_SMASHED_ULTRA_BLOCK)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_3_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_3_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_4_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_4_FLAG)
    IfLt(GB_StoryProgress, STORY_CH5_SMASHED_ULTRA_BLOCK)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_1_SCRIPT))
        Thread
            Loop(0)
                IfGe(GB_StoryProgress, STORY_CH5_SMASHED_ULTRA_BLOCK)
                    BreakLoop
                EndIf
                Wait(1)
            EndLoop
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_on_off, COLLIDER_FLAGS_UPPER_MASK)
        EndThread
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_on_off, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_2_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_2_SCRIPT))
    Thread
        Call(N(IsPlayerOnFirstCliff))
    EndThread
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_3_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_3_SCRIPT))
    Return
    End
};
