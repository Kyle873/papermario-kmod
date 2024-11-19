#include "jan_17.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(PinkFlower, GEN_PINK_FLOWER_1_PARAMS)
    Return
    End
};
