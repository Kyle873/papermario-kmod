#include "jan_03.h"
#include "entity.h"
#include "sprite/player.h"

EvtScript N(EVS_GotoMap_tik_08_4) = {
    Call(GotoMap, Ref("tik_08"), tik_08_ENTRY_4)
    Wait(100)
    Return
    End
};


API_CALLABLE(N(GiveInitialSpringBoost)) {
    f32 x = gPlayerStatus.curSpeed * 5.0f * sin_deg(gPlayerStatus.targetYaw);
    f32 z = gPlayerStatus.curSpeed * 5.0f * -cos_deg(gPlayerStatus.targetYaw);

    script->varTable[0] = gPlayerStatus.pos.x + x;
    script->varTable[1] = gPlayerStatus.pos.z + z;
    return ApiStatus_DONE2;
}

EvtScript N(EVS_TetherCamToPlayer) = {
    Label(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(SetCamTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
        Goto(0)
    Return
    End
};

EvtScript N(EVS_UseSpring) = {
    Call(N(GiveInitialSpringBoost))
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_IDLE)
    Wait(1)
    Call(SetPlayerActionState, ACTION_STATE_LAUNCH)
    Wait(1)
    ExecGetTID(N(EVS_TetherCamToPlayer), LVarA)
    Call(SetPlayerJumpscale, Float(0.1))
    Call(PlayerJump, -556, 300, -195, 15)
    Call(DisablePlayerPhysics, FALSE)
    Call(FacePlayerTowardPoint, -630, -50, 0)
    Call(SetPlayerAnimation, ANIM_Mario1_Fall)
    Call(SetPlayerJumpscale, Float(1.0))
    Call(PlayerJump2, -601, 376, -105, 30)
    Call(SetPlayerAnimation, ANIM_Mario1_Idle)
    KillThread(LVarA)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_JAN03_WarpPipe, FALSE)
        IfEq(GF_TIK08_WarpPipe, TRUE)
            Call(GetEntryID, LVar0)
            IfNe(LVar0, jan_03_ENTRY_3)
                Set(GF_JAN03_WarpPipe, TRUE)
            EndIf
        EndIf
    EndIf
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_1_PARAMS)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
    Return
    End
};
