#include "omo_05.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    IfEq(GF_OMO05_Item_Cookbook, FALSE)
        IfGt(GB_StoryProgress, STORY_CH4_GOT_TAYCE_TS_CAKE)
            EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
        EndIf
    EndIf
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_2_FLAG)
    Return
    End
};
