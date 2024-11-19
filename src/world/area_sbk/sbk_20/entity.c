#include "sbk_20.h"
#include "effects.h"
#include "entity.h"

EvtScript N(EVS_OnHitInertBlock) = {
    Add(MV_BlockHitCounter, 1)
    Switch(MV_BlockHitCounter)
        CaseEq(1)
            IfEq(GF_SBK20_ItemBlock_Mushroom, FALSE)
                Call(PlaySound, SOUND_CHIME_SOLVED_PUZZLE)
                Call(PlaySoundAt, SOUND_SPAWN_BLOCK, SOUND_SPACE_DEFAULT, -80, 60, -200)
                PlayEffect(EFFECT_SPARKLES, 0, -80, 73, -200, 10)
                EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
                Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
            EndIf
        CaseEq(10)
            IfEq(GF_SBK20_ItemBlock_SuperShroom, FALSE)
                Call(PlaySound, SOUND_CHIME_SOLVED_PUZZLE)
                Call(PlaySoundAt, SOUND_SPAWN_BLOCK, SOUND_SPACE_DEFAULT, -180, 60, -200)
                PlayEffect(EFFECT_SPARKLES, 0, -180, 73, -200, 10)
                EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
                Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
            EndIf
        CaseEq(100)
            IfEq(GF_SBK20_ItemBlock_UltraShroom, FALSE)
                Call(PlaySound, SOUND_CHIME_SOLVED_PUZZLE)
                Call(PlaySoundAt, SOUND_SPAWN_BLOCK, SOUND_SPACE_DEFAULT, -130, 60, -150)
                PlayEffect(EFFECT_SPARKLES, 0, -130, 73, -150, 10)
                EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_3_PARAMS)
                Call(AssignBlockFlag, GEN_YELLOW_BLOCK_3_FLAG)
            EndIf
    EndSwitch
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(InertYellowBlock, GEN_INERT_YELLOW_BLOCK_1_PARAMS)
    Call(AssignScript, Ref(GEN_INERT_YELLOW_BLOCK_1_SCRIPT))
    IfEq(GF_SBK20_ItemBlock_Mushroom, TRUE)
        EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_4_PARAMS)
        Call(AssignBlockFlag, GEN_YELLOW_BLOCK_4_FLAG)
    EndIf
    IfEq(GF_SBK20_ItemBlock_SuperShroom, TRUE)
        EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_5_PARAMS)
        Call(AssignBlockFlag, GEN_YELLOW_BLOCK_5_FLAG)
    EndIf
    IfEq(GF_SBK20_ItemBlock_UltraShroom, TRUE)
        EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_6_PARAMS)
        Call(AssignBlockFlag, GEN_YELLOW_BLOCK_6_FLAG)
    EndIf
    Return
    End
};
