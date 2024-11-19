#include "kmr_09.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    Return
    End
};
