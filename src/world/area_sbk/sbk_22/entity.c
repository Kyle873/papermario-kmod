#include "sbk_22.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_3_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_3_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_4_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_4_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_5_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_5_FLAG)
    Return
    End
};
