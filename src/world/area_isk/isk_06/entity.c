#include "isk_06.h"
#include "effects.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 415, -253, -291, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 291, -253, -415, Float(0.3), LVar0)
    Return
    End
};
