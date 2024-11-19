
#include "sam_12.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH7_GOT_STAR_STONE)
            EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
            Set(MV_StarStoneItemID, LVar0)
        CaseGe(STORY_CH7_GOT_STAR_STONE)
            EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EndSwitch
    Return
    End
};
