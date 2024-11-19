#include "isk_10.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

API_CALLABLE(N(MonitorPlayerLastFloor)) {
    s32 level = -1;

    if (gPlayerStatus.lastGoodPos.y > -600.0) {
        level = 0;
    }
    if (gPlayerStatus.lastGoodPos.y < -770.0) {
        level = 1;
    }
    if (level >= 0) {
        evt_set_variable(script, MV_LastFloorLevel, level);
    }
    return ApiStatus_BLOCK;
}

EvtScript N(EVS_UseSpring) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_JUMP)
    Wait(1)
    IfEq(MV_LastFloorLevel, 0)
        Call(SetPlayerJumpscale, Float(1.4))
        Call(PlayerJump, -577, -780, -75, 15)
    Else
        Call(SetCamSpeed, CAM_DEFAULT, Float(2.8))
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Call(SetCamPosC, CAM_DEFAULT, 0, -520)
        Call(PanToTarget, CAM_DEFAULT, 0, TRUE)
        Call(SetPlayerJumpscale, Float(1.4))
        Call(PlayerJump, -561, -520, 23, 30)
        Call(PanToTarget, CAM_DEFAULT, 0, FALSE)
        Call(SetCamSpeed, CAM_DEFAULT, Float(2.8))
    EndIf
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Call(DisablePlayerPhysics, FALSE)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    Thread
        Call(N(MonitorPlayerLastFloor))
    EndThread
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -510, -453, 43, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -510, -713, 43, Float(0.3), LVar0)
    Return
    End
};
