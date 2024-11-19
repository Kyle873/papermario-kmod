#include "isk_03.h"
#include "effects.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 358, -123, 358, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 457, -123, 214, Float(0.3), LVar0)
    Return
    End
};
