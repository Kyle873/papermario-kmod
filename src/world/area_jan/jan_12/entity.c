#include "jan_12.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(PinkFlower, GEN_PINK_FLOWER_1_PARAMS)
    EVT_MAKE_ENTITY(BellbellPlant, GEN_BELLBELL_PLANT_1_PARAMS)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    Return
    End
};
