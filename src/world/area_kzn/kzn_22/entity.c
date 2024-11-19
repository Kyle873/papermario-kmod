#include "kzn_22.h"
#include "entity.h"

EvtScript N(EVS_OpenChest) = {
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Return
    End
};
