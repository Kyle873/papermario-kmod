#include "trd_09.h"
#include "entity.h"

EvtScript N(EVS_BombRock) = {
    Set(GF_TRD09_BombedRock, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_TRD09_BombedRock, FALSE)
        EVT_MAKE_ENTITY(BombableRockWide, GEN_BOMBABLE_ROCK_WIDE_1_PARAMS)
        Call(AssignScript, Ref(GEN_BOMBABLE_ROCK_WIDE_1_SCRIPT))
    EndIf
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    Return
    End
};
