#include "isk_05.h"
#include "effects.h"
#include "entity.h"

EvtScript N(D_80242210_97FCE0) = {
    Set(GF_ISK05_Hammer2Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    IfEq(GF_ISK05_Hammer2Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2BlockWideX, GEN_HAMMER2_BLOCK_WIDE_X_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_WIDE_X_1_SCRIPT))
    EndIf
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 415, 196, -290, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 290, 196, -411, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 415, 66, -290, Float(0.3), LVar0)
    Return
    End
};
