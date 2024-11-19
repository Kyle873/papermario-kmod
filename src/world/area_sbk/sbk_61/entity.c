#include "sbk_61.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenRedBlock, GEN_HIDDEN_RED_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_RED_BLOCK_1_FLAG)
    Return
    End
};
