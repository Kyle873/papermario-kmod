#include "kpa_13.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    Set(AF_KPA13_HitSwitchA, FALSE)
    Set(AF_KPA13_HitSwitchB, FALSE)
    IfEq(GF_KPA13_BlueSwitchA, FALSE)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
    EndIf
    IfEq(GF_KPA13_BlueSwitchB, FALSE)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_2_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_2_FLAG))
    EndIf
    Return
    End
};
