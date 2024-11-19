#include "kpa_17.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_1_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_2_PARAMS)
    Call(AssignCrateFlag, GEN_WOODEN_CRATE_2_FLAG)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_3_PARAMS)
    Call(AssignCrateFlag, GEN_WOODEN_CRATE_3_FLAG)
    Return
    End
};
