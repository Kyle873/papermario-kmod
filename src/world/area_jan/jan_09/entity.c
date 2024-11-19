#include "jan_09.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SpinningFlower, GEN_SPINNING_FLOWER_1_PARAMS)
    EVT_MAKE_ENTITY(Munchlesia, GEN_MUNCHLESIA_1_PARAMS)
    Return
    End
};
