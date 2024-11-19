#include "tst_04.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(RedSwitch, GEN_RED_SWITCH_1_PARAMS)
    Return
    End
};
