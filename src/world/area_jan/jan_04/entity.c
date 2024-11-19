#include "jan_04.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_VolcanoVase) = EVT_OPEN_CHEST(ITEM_VOLCANO_VASE, GF_JAN04_Chest_VolcanoVase);

EvtScript N(EVS_MakeEntities) = {
    Switch(GB_StoryProgress)
        CaseRange(STORY_CH5_BEGAN_PEACH_MISSION, STORY_CH8_REACHED_PEACHS_CASTLE)
            EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
            Call(AssignChestFlag, GEN_CHEST_1_FLAG)
            Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    EndSwitch
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};
