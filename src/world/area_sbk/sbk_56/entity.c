
#include "sbk_56.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    Return
    End
};
