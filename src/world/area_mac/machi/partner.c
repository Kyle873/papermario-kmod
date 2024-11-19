#include "machi.h"
#include "sprite/player.h"

Vec3f N(FlightPath)[] = {
    GEN_PATH_1_PATH
};

EvtScript N(EVS_ChasePartner) = {
    Call(SetPlayerAnimation, ANIM_Mario1_Run)
    Label(0)
        Call(GetAngleToNPC, NPC_PARTNER, LVar0)
        Call(GetPlayerPos, LVar1, LVar2, LVar3)
        Call(AddVectorPolar, LVar1, LVar3, Float(4.0), LVar0)
        Call(InterpPlayerYaw, LVar0, 0)
        Call(SetPlayerPos, LVar1, LVar2, LVar3)
        Wait(1)
        Goto(0)
    Return
    End
};

EvtScript N(EVS_FlyPartnerAround) = {
    Call(DisablePartnerAI, 0)
    Call(SetNpcFlagBits, NPC_PARTNER, NPC_FLAG_GRAVITY, FALSE)
    Call(SetNpcFlagBits, NPC_PARTNER, NPC_FLAG_FLYING, TRUE)
    Call(EnableNpcBlur, NPC_PARTNER, TRUE)
    Label(10)
        Call(LoadPath, 500, Ref(N(FlightPath)), ARRAY_COUNT(N(FlightPath)), EASING_LINEAR)
        Label(0)
            Call(GetNextPathPos)
            Call(SetNpcPos, NPC_PARTNER, LVar1, LVar2, LVar3)
            Wait(1)
            IfEq(LVar0, 1)
                Goto(0)
            EndIf
        Goto(10)
    Return
    End
};
