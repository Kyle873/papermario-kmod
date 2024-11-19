#include "arn_04.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};
