#include "pra_14.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_2_FLAG)
    Return
    End
};
