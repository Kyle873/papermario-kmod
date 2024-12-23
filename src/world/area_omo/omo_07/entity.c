#include "omo_07.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_FryingPan) = {
    Set(LVarA, ITEM_FRYING_PAN)
    Set(GF_OMO07_Chest_FryingPan, TRUE)
    Set(GB_StoryProgress, STORY_CH4_GOT_FRYING_PAN)
    ExecWait(N(EVS_Chest_GetItem))
    Return
    End
};

EvtScript N(EVS_OpenChest_DefendPlus) = EVT_OPEN_CHEST(ITEM_DEFEND_PLUS_A, GF_OMO07_Chest_DefendPlusA);

EvtScript N(EVS_OpenChest_IcePower) = EVT_OPEN_CHEST(ITEM_ICE_POWER, GF_OMO07_Chest_IcePower);

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
    { -337,  80,  -55 },
    { -472,   0,  127 },
    { -192,   0,  127 },
};

EvtScript N(EVS_StarBoxLaunch_Impl) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    UseBuf(Ref(N(StarBoxLaunchTargets)))
    Loop(LVar0)
        BufRead3(LVar7, LVar8, LVar9)
    EndLoop
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
    Call(PlayerJump, LVar7, LVar8, LVar9, 40)
    KillThread(LVarA)
    Wait(3)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Call(DisableCameraFollowPlayerY)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch1) = {
    Set(LVar0, 1)
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch2) = {
    Set(LVar0, 2)
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_StarBoxLaunch3) = {
    Set(LVar0, 3)
    ExecWait(N(EVS_StarBoxLaunch_Impl))
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_2_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_2_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_2_SCRIPT))
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_3_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_3_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_3_SCRIPT))
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_1_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_1_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_2_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_2_SCRIPT))
    EVT_MAKE_ENTITY(StarBoxLauncher, GEN_STAR_BOX_LAUNCHER_3_PARAMS)
    Call(AssignScript, Ref(GEN_STAR_BOX_LAUNCHER_3_SCRIPT))
    Return
    End
};
