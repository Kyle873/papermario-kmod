#include "jan_16.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(PinkFlower, GEN_PINK_FLOWER_1_PARAMS)
    EVT_MAKE_ENTITY(PinkFlower, GEN_PINK_FLOWER_2_PARAMS)
    Return
    End
};
