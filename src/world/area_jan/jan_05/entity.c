#include "jan_05.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(RedBlock, GEN_RED_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_RED_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(CymbalPlant, GEN_CYMBAL_PLANT_1_PARAMS)
    EVT_MAKE_ENTITY(TrumpetPlant, GEN_TRUMPET_PLANT_1_PARAMS)
    Return
    End
};
