#include "isk_07.h"
#include "entity.h"
#include "effects.h"

EvtScript N(EVS_HitBlock_Trigger) = {
    Set(GF_ISK07_OpenedSarcophagi, TRUE)
    Return
    End
};

EvtScript N(EVS_SmashBlock_Stone) = {
    Set(GF_ISK07_Hammer2Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_ISK07_UnlockedDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Set(MV_LockEntityID, LVar0)
    EndIf
    IfEq(GF_ISK07_Hammer2Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2BlockWideX, GEN_HAMMER2_BLOCK_WIDE_X_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_WIDE_X_1_SCRIPT))
    EndIf
    IfEq(GF_ISK07_OpenedSarcophagi, FALSE)
        EVT_MAKE_ENTITY(TriggerBlock, GEN_TRIGGER_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_TRIGGER_BLOCK_1_SCRIPT))
    EndIf
    IfEq(GF_ISK07_Defeated_Mummies, TRUE)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EndIf
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 415, -193, 291, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 291, -193, 415, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 131, -193, 489, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -44, -193, 505, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -214, -193, 459, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 415, -323, 291, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 291, -323, 415, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 131, -323, 489, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -44, -323, 505, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -214, -323, 459, Float(0.3), LVar0)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    Return
    End
};
