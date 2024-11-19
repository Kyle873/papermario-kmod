#include "kpa_16.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KPA16_ShutOffLava, FALSE)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
    EndIf
    Return
    End
};
