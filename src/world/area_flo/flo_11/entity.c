#include "flo_11.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    Return
    End
};
