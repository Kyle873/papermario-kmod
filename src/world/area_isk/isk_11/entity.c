#include "isk_11.h"
#include "entity.h"
#include "effects.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_ISK11_UnlockedDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Set(MV_LockEntityID, LVar0)
    EndIf
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -131, -453, 489, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 131, -453, 489, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 291, -453, 415, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -44, -583, 505, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 131, -583, 489, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -44, -713, 505, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 131, -713, 489, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, -44, -843, 505, Float(0.3), LVar0)
    PlayEffect(EFFECT_FLAME, FX_FLAME_RED, 131, -843, 489, Float(0.3), LVar0)
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    Return
    End
};
