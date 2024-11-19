#include "tik_10.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    Call(CreatePushBlockGrid, GEN_PUSH_BLOCKS_1_GRID_PARAMS)
    GEN_PUSH_BLOCKS_1_GRID_CONTENT
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    Call(UseDynamicShadow, TRUE)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_2_FLAG)
    Call(UseDynamicShadow, TRUE)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_3_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_3_FLAG)
    Call(UseDynamicShadow, TRUE)
    Return
    End
};
