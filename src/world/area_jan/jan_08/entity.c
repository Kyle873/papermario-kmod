#include "jan_08.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    EVT_MAKE_ENTITY(BellbellPlant, GEN_BELLBELL_PLANT_1_PARAMS)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(TrumpetPlant, GEN_TRUMPET_PLANT_1_PARAMS)
    Return
    End
};
