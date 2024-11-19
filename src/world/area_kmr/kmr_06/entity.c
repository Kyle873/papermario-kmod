#include "kmr_06.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(RedBlock, GEN_RED_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_RED_BLOCK_1_FLAG)
    Return
    End
};
