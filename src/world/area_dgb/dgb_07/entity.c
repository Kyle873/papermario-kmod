#include "dgb_07.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_1_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_2_PARAMS)
    Return
    End
};
