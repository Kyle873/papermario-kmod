#include "sbk_66.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_2_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_3_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_3_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_4_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_4_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_5_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_5_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_6_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_6_FLAG)
    Return
    End
};
