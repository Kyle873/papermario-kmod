#include "trd_03.h"
#include "entity.h"

extern EvtScript N(EVS_TogglePlatforms_LeftSwitch);
extern EvtScript N(EVS_TogglePlatforms_RightSwitch);

EvtScript N(EVS_MakeEntities) = {
    Set(MV_PlatformsExtended, FALSE)
    EVT_MAKE_ENTITY(RedSwitch, GEN_RED_SWITCH_1_PARAMS)
    Call(AssignScript, Ref(GEN_RED_SWITCH_1_SCRIPT))
    EVT_MAKE_ENTITY(RedSwitch, GEN_RED_SWITCH_2_PARAMS)
    Call(AssignScript, Ref(GEN_RED_SWITCH_2_SCRIPT))
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    Return
    End
};
