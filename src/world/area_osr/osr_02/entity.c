#include "osr_02.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KKJ25_Defeated_Bowser, TRUE)
        Return
    EndIf
    IfLt(GB_StoryProgress, STORY_CH7_STAR_SPRIT_DEPARTED)
        Return
    EndIf
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    Return
    End
};
