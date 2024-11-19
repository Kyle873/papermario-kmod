#include "kmr_11.h"
#include "entity.h"
#include "effects.h"

API_CALLABLE(N(SetBlueSwitchPosition)) {
    Entity* entity = get_entity_by_index(script->varTable[10]);

    entity->pos.x = script->varTable[0];
    entity->pos.y = script->varTable[1];
    entity->pos.z = script->varTable[2];

    return ApiStatus_DONE2;
}

EvtScript N(EVS_Scene_OverhearEnemies) = {
    Call(DisablePlayerInput, TRUE)
    Call(GetNpcPos, NPC_GoombaKing, LVar0, LVar1, LVar2)
    Call(SetNpcPos, NPC_RedGoombaBro, LVar0, LVar1, LVar2)
    Call(SetNpcPos, NPC_BlueGoombaBro, LVar0, LVar1, LVar2)
    Call(SpeakToPlayer, NPC_GoombaKing, ANIM_GoombaKing_Idle, ANIM_GoombaKing_Idle, 0, MSG_CH0_00D3)
    Call(SpeakToPlayer, NPC_RedGoombaBro, ANIM_GoombaBros_Red_Talk, ANIM_GoombaBros_Red_Idle, 0, MSG_CH0_00D4)
    Call(SpeakToPlayer, NPC_GoombaKing, ANIM_GoombaKing_Idle, ANIM_GoombaKing_Idle, 0, MSG_CH0_00D5)
    Call(SpeakToPlayer, NPC_BlueGoombaBro, ANIM_GoombaBros_Blue_Talk, ANIM_GoombaBros_Blue_Idle, 0, MSG_CH0_00D6)
    Call(SpeakToPlayer, NPC_RedGoombaBro, ANIM_GoombaBros_Red_Talk, ANIM_GoombaBros_Red_Idle, 0, MSG_CH0_00D7)
    Call(SetNpcPos, NPC_RedGoombaBro, NPC_DISPOSE_LOCATION)
    Call(SetNpcPos, NPC_BlueGoombaBro, NPC_DISPOSE_LOCATION)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

// NPC_BlueGoombaBro is reused here to do the blue switch jumping
EvtScript N(EVS_TetherSwitchToBlueGoomba) = {
    Label(10)
        Call(GetNpcPos, NPC_BlueGoombaBro, LVar0, LVar1, LVar2)
        Set(LVarA, MV_SwitchEntityID)
        Call(N(SetBlueSwitchPosition))
        Wait(1)
        Goto(10)
    Return
    End
};

EvtScript N(EVS_Interact_SwitchBush) = {
    IfGe(GB_StoryProgress, STORY_CH0_FOUND_GATEHOUSE_SWITCH)
        Return
    EndIf
    Call(DisablePlayerInput, TRUE)
    Call(SetNpcPos, NPC_BlueGoombaBro, -377, -8, 81)
    Call(SetNpcFlagBits, NPC_BlueGoombaBro, NPC_FLAG_HAS_NO_SPRITE, TRUE)
    ExecGetTID(N(EVS_TetherSwitchToBlueGoomba), LVarB)
    Call(SetNpcJumpscale, NPC_BlueGoombaBro, Float(2.0))
    Call(NpcJump0, NPC_BlueGoombaBro, -445, 0, 92, 15 * DT)
    Call(PlaySoundAt, SOUND_OBJECT_LAND, SOUND_SPACE_DEFAULT, -469, 1, 92)
    Call(SetNpcJumpscale, NPC_BlueGoombaBro, Float(2.0))
    Call(NpcJump0, NPC_BlueGoombaBro, -469, 0, 92, 7 * DT)
    KillThread(LVarB)
    Call(SetNpcPos, NPC_BlueGoombaBro, NPC_DISPOSE_LOCATION)
    Set(GB_StoryProgress, STORY_CH0_FOUND_GATEHOUSE_SWITCH)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_OnBreak_SpecialBrick) = {
    Call(PlaySound, SOUND_CHIME_SOLVED_PUZZLE)
    Call(PlaySoundAt, SOUND_SPAWN_BLOCK, SOUND_SPACE_DEFAULT, 665, 35, 70)
    PlayEffect(EFFECT_SPARKLES, 0, 665, 48, 70, 10)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfLe(GB_StoryProgress, STORY_CH0_FOUND_GATEHOUSE_SWITCH)
        IfEq(GB_StoryProgress, STORY_CH0_FOUND_GATEHOUSE_SWITCH)
            EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
            Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
            Set(MV_SwitchEntityID, LVar0)
            BindTrigger(Ref(N(EVS_Scene_SelfDestruct)), TRIGGER_AREA_FLAG_SET, AF_KMR_04, 1, 0)
            BindTrigger(Ref(N(EVS_Scene_OverhearEnemies)), TRIGGER_WALL_PRESS_A, COLLIDER_tt, 1, 0)
        Else
            Call(MakeEntity, Ref(Entity_BlueSwitch), NPC_DISPOSE_LOCATION, 0, MAKE_ENTITY_END)
            Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(AF_KMR_04))
            Set(MV_SwitchEntityID, LVar0)
            BindTrigger(Ref(N(EVS_Scene_SelfDestruct)), TRIGGER_AREA_FLAG_SET, AF_KMR_04, 1, 0)
            BindTrigger(Ref(N(EVS_Scene_OverhearEnemies)), TRIGGER_WALL_PRESS_A, COLLIDER_tt, 1, 0)
        EndIf
    EndIf
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    IfEq(GF_KMR11_ItemBlock_SuperShroom, FALSE)
        Call(AssignScript, Ref(N(EVS_OnBreak_SpecialBrick)))
    Else
        EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
        Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    EndIf
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    Return
    End
};
