#include "flo_17.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};
