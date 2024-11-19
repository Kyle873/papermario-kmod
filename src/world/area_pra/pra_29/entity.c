#include "pra_29.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfGe(GB_StoryProgress, STORY_CH7_EXTENDED_PALACE_BRIDGE)
    Else
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_2_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_2_FLAG))
    EndIf
    Return
    End
};
