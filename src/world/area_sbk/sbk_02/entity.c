#include "sbk_02.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfGe(GB_StoryProgress, STORY_CH2_UNCOVERED_DRY_DRY_RUINS)
        EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EndIf
    Return
    End
};
