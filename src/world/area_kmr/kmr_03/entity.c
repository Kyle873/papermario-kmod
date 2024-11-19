#include "kmr_03.h"
#include "entity.h"

EvtScript N(EVS_OnSmashBlock1) = {
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_tt1, COLLIDER_FLAGS_UPPER_MASK)
    Set(GB_StoryProgress, STORY_CH0_LEFT_THE_PLAYGROUND)
    Return
    End
};

EvtScript N(EVS_OnSmashBlock2) = {
    Set(GF_KMR03_Hammer1Block, TRUE)
    Return
    End
};

API_CALLABLE(func_80240358_8C82E8) {
    PlayerStatus* playerStatus = &gPlayerStatus;

    f32 xDelta = playerStatus->curSpeed * 5.0f * sin_deg(playerStatus->targetYaw);
    f32 zDelta = playerStatus->curSpeed * 5.0f * -cos_deg(playerStatus->targetYaw);

    script->varTable[0] = playerStatus->pos.x + xDelta;
    script->varTable[1] = playerStatus->pos.z + zDelta;

    return ApiStatus_DONE2;
}

EvtScript N(EVS_TetherCameraToPlayer) = {
    Label(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(SetCamTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
        Goto(0)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfLt(GB_StoryProgress, STORY_CH0_LEFT_THE_PLAYGROUND)
        EVT_MAKE_ENTITY(Hammer1Block, GEN_HAMMER1_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER1_BLOCK_1_SCRIPT))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_tt1, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    IfEq(GF_KMR03_Hammer1Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2Block, GEN_HAMMER2_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_1_SCRIPT))
    EndIf
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_4_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_5_PARAMS)
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    Return
    End
};
