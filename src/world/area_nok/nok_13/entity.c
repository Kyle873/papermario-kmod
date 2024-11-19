#include "nok_13.h"
#include "entity.h"
#include "effects.h"

EvtScript N(EVS_BreakBlock_First) = {
    IfEq(AB_NOK_1, 0)
        Set(AB_NOK_1, 1)
    EndIf
    Return
    End
};

EvtScript N(EVS_BreakBlock_Second) = {
    IfEq(AB_NOK_1, 1)
        Set(AB_NOK_1, 2)
    EndIf
    Return
    End
};

EvtScript N(EVS_BreakBlock_Third) = {
    IfEq(AB_NOK_1, 2)
        Call(PlaySound, SOUND_CHIME_SOLVED_PUZZLE)
        Call(PlaySoundAt, SOUND_SPAWN_BLOCK, SOUND_SPACE_DEFAULT, 40, 60, -285)
        Set(AB_NOK_1, 3)
        PlayEffect(EFFECT_SPARKLES, 0, 40, 73, -285, 10)
        EVT_MAKE_ENTITY(RedBlock, GEN_RED_BLOCK_1_PARAMS)
        Call(AssignBlockFlag, GEN_RED_BLOCK_1_FLAG)
    EndIf
    Return
    End
};

EvtScript N(EVS_ReadSign_Directions) = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTimeFreezeMode, TIME_FREEZE_PARTIAL)
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0178, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Call(SetTimeFreezeMode, TIME_FREEZE_NONE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Signpost, GEN_SIGNPOST_1_PARAMS)
    Call(AssignScript, Ref(GEN_SIGNPOST_1_SCRIPT))
    IfEq(GF_NOK13_BadgeBlock_AttackFXB, FALSE)
        Set(AB_NOK_1, 0)
        EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_BRICK_BLOCK_1_SCRIPT))
        EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
        Call(AssignScript, Ref(GEN_BRICK_BLOCK_2_SCRIPT))
        EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_3_PARAMS)
        Call(AssignScript, Ref(GEN_BRICK_BLOCK_3_SCRIPT))
    Else
        EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_4_PARAMS)
        EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_5_PARAMS)
        EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_6_PARAMS)
        EVT_MAKE_ENTITY(RedBlock, GEN_RED_BLOCK_2_PARAMS)
        Call(AssignBlockFlag, GEN_RED_BLOCK_2_FLAG)
    EndIf
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};
