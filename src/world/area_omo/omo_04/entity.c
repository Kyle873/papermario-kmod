#include "omo_04.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_StoreroomKey) = {
    Set(LVarA, ITEM_STOREROOM_KEY)
    Set(GF_OMO04_Chest_StoreroomKey, TRUE)
    ExecWait(N(EVS_Chest_GetItem))
    Set(GF_MAC04_StoreroomKeyStolen, TRUE)
    Set(GB_StoryProgress, STORY_CH4_GOT_STOREROOM_KEY)
    Return
    End
};

EvtScript N(EVS_TetherCamToPlayer) = {
    Label(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(SetCamTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
        Goto(0)
    Return
    End
};

Vec3i N(StarBoxLaunchTargets)[] = {
    { -852,   0, -125 },
    { -887,   0,   98 },
    { -682,  80,  -77 },
    { -542,  80,   62 },
    { -647,  80,  132 },
    { -507,  80,  132 },
    {  672, 105,  132 },
    {  927,  80,  -87 },
};

EvtScript N(EVS_StarBoxLaunch_Impl) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    UseBuf(Ref(N(StarBoxLaunchTargets)))
    Loop(LVar0)
        BufRead3(LVar7, LVar8, LVar9)
    EndLoop
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Wait(1)
    Call(SetPlayerActionState, ACTION_STATE_LAUNCH)
    Wait(1)
    Call(EnableCameraFollowPlayerY)
    ExecGetTID(N(EVS_TetherCamToPlayer), LVarA)
    Call(SetPlayerJumpscale, Float(0.7))
    Call(PlayerJump, LVar7, LVar8, LVar9, 40)
    KillThread(LVarA)
    Call(DisableCameraFollowPlayerY)
    Wait(1)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch1) = {
    Set(LVar0, 1) // entityID
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch2) = {
    Set(LVar0, 2) // entityID
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch3) = {
    Set(LVar0, 3) // entityID
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch4) = {
    Set(LVar0, 4) // entityID
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch5) = {
    Set(LVar0, 5) // entityID
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch6) = {
    Set(LVar0, 6) // entityID
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch7) = {
    Set(LVar0, 7) // entityID
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

API_CALLABLE(N(func_802402F4_DAD6F4)) {
    f32 playerVx = gPlayerStatus.curSpeed * 5.0f * sin_deg(gPlayerStatus.targetYaw);
    f32 playerVz = gPlayerStatus.curSpeed * 5.0f * -cos_deg(gPlayerStatus.targetYaw);
    script->varTable[0] = (gPlayerStatus.pos.x + playerVx);
    script->varTable[1] = (gPlayerStatus.pos.z + playerVz);

    return ApiStatus_DONE2;
}

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_1_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_1_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_2_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_2_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_3_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_3_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_4_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_4_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_5_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_5_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_6_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_6_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_7_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_7_SCRIPT))
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_3_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_3_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_4_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_5_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_6_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_7_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_8_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_9_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_10_PARAMS)
    Return
    End
};
