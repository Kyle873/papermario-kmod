#include "kmr_07.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_1_PARAMS)
    Set(MV_SpringEntityIndex, LVar0)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    Return
    End
};
