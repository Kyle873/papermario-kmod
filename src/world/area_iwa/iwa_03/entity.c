#include "iwa_03.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

API_CALLABLE(N(MonitorPlayerAltitude)) {
    s32 result = -1;

    if (gPlayerStatus.lastGoodPos.y > 200.0) {
        result = 0;
    }
    if (gPlayerStatus.lastGoodPos.y < 40.0) {
        result = 1;
    }
    if (result >= 0) {
        evt_set_variable(script, MV_PlayerCliffLevel, result);
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

EvtScript N(EVS_UseSpring) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_LAUNCH)
    Wait(1)
    ExecGetTID(N(EVS_TetherCameraToPlayer), LVarA)
    IfEq(MV_PlayerCliffLevel, 0)
        Call(SetPlayerJumpscale, Float(1.4))
        Call(PlayerJump, -1582, 23, 60, 15)
    Else
        Call(SetPlayerJumpscale, Float(0.7))
        Call(PlayerJump, -1582, 408, -60, 40)
    EndIf
    KillThread(LVarA)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_OpenChest) = EVT_OPEN_CHEST(ITEM_DAMAGE_DODGE_B, GF_IWA03_Chest_DamageDodgeB);

EvtScript N(EVS_MakeEntities) = {
    Thread
        Call(N(MonitorPlayerAltitude))
    EndThread
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
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
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    Return
    End
};
