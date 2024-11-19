#include "sam_08.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    IfLt(GB_StoryProgress, STORY_CH7_DEFEATED_FIRST_DUPLIGHOST)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
    EndIf
    Return
    End
};
