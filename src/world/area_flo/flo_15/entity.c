#include "flo_15.h"
#include "entity.h"

EvtScript N(EVS_OnBlast_Rock) = {
    Set(GF_FLO15_BombedRock, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_FLO15_BombedRock, FALSE)
        EVT_MAKE_ENTITY(BombableRock, GEN_BOMBABLE_ROCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_BOMBABLE_ROCK_1_SCRIPT))
    EndIf
    Return
    End
};
