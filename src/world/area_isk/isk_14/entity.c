#include "isk_14.h"
#include "entity.h"
#include "effects.h"

EvtScript N(EVS_OnSmash_Block) = {
    Set(GF_ISK14_Hammer2Block, TRUE)
    Call(SetNpcVar, NPC_StoneChomp, 1, 1)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    IfEq(GF_ISK14_Hammer2Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2BlockWideX, GEN_HAMMER2_BLOCK_WIDE_X_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_WIDE_X_1_SCRIPT))
    EndIf
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -459, -583, -214, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -358, -583, -358, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -459, -713, -214, Float(0.3), LVar0)
    Return
    End
};
