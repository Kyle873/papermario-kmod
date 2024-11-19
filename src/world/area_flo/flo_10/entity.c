#include "flo_10.h"

EvtScript N(EVS_MakeEntities) = {
    IfGe(GB_StoryProgress, STORY_CH6_FILLED_SPRING_WITH_WATER)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EndIf
    Return
    End
};
