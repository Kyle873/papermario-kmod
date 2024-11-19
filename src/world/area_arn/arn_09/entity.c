#include "arn_09.h"
#include "entity.h"

EvtScript N(EVS_UseSpring) = {
    IfEq(AF_ARN_01, TRUE)
        Return
    EndIf
    Set(AF_ARN_01, TRUE)
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_LAUNCH)
    Wait(1)
    Call(SetPlayerJumpscale, Float(1.0))
    Call(PlayerJump, 0, 200, 0, 30)
    Call(GotoMap, Ref("arn_08"), arn_08_ENTRY_1)
    Wait(100)
    Call(DisablePlayerInput, FALSE)
    Call(DisablePlayerPhysics, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(ScriptSpring, GEN_SCRIPT_SPRING_1_PARAMS)
    Call(AssignScript, Ref(GEN_SCRIPT_SPRING_1_SCRIPT))
    Return
    End
};
