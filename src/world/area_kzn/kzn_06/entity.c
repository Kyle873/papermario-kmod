#include "kzn_06.h"
#include "effects.h"
#include "entity.h"

#include "world/common/atomic/PushBlockGravity.inc.c"

EvtScript N(EVS_OnBreakBlock) = {
    Set(GF_KZN06_Hammer3Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    IfEq(GF_KZN06_Hammer3Block, FALSE)
        EVT_MAKE_ENTITY(Hammer3BlockWideZ, GEN_HAMMER3_BLOCK_WIDE_Z_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_WIDE_Z_1_SCRIPT))
    EndIf
    IfLt(GB_StoryProgress, STORY_CH5_LAVA_STREAM_BLOCKED)
        Call(CreatePushBlockGrid, GEN_PUSH_BLOCKS_1_GRID_PARAMS)
        GEN_PUSH_BLOCKS_1_GRID_CONTENT
        Call(SetPushBlockFallEffect, 0, Ref(N(push_block_handle_fall)))
    Else
        Call(CreatePushBlockGrid, GEN_PUSH_BLOCKS_2_GRID_PARAMS)
        GEN_PUSH_BLOCKS_2_GRID_CONTENT
    EndIf
    Return
    End
};
