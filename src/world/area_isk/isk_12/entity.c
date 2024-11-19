#include "isk_12.h"
#include "entity.h"
#include "effects.h"

EvtScript N(EVS_SmashBlock_Stone) = {
    Set(GF_ISK12_Hammer2Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_ISK12_Hammer2Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2Block, GEN_HAMMER2_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_1_SCRIPT))
    EndIf
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 415, -453, 291, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 505, -453, 44, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 415, -643, 291, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 505, -643, 44, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 417, -643, 196, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 444, -643, 120, Float(0.3), LVar0)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};
