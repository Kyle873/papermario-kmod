#include "kmr_02.h"
#include "entity.h"
#include "effects.h"

API_CALLABLE(N(PlayerHasBadgeEquipped)) {
    PlayerData* playerData = &gPlayerData;
    s32 hasBadgeEquipped = FALSE;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(playerData->equippedBadges); i++) {
        if (playerData->equippedBadges[i] != 0) {
            hasBadgeEquipped = TRUE;
            break;
        }
    }

    script->varTable[0] = hasBadgeEquipped;
    return ApiStatus_DONE2;
}

#include "world/common/todo/SetEntityPositionF.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

EvtScript N(EVS_GotoMap_tik_01_2) = {
    Call(GotoMap, Ref("tik_01"), tik_01_ENTRY_2)
    Wait(100)
    Return
    End
};

API_CALLABLE(N(AnimateBlockScale)) {
    Entity* entity = get_entity_by_index(script->varTable[10]);

    if (isInitialCall) {
        script->functionTemp[0] = 0;
        script->functionTemp[1] = 60;
    }

    entity->scale.x = (60 - script->functionTemp[1]) / 60.0f;
    entity->scale.y = (60 - script->functionTemp[1]) / 60.0f;
    entity->scale.z = (60 - script->functionTemp[1]) / 60.0f;
    entity->rot.y = (1.0f - cos_rad(entity->scale.y * PI)) * 990.0 * 0.5f;
    script->functionTemp[1]--;

    if (script->functionTemp[1] == -1) {
        return ApiStatus_DONE2;
    }
    return ApiStatus_BLOCK;
}

EvtScript N(EVS_OnSmash_GateBlock) = {
    Call(DisablePlayerInput, TRUE)
    Wait(20 * DT)
    Call(SpeakToPlayer, NPC_Goompapa, ANIM_Goompapa_Talk, ANIM_Goompapa_Idle, 0, MSG_CH0_0066)
    Wait(10 * DT)
    Call(N(PlayerHasBadgeEquipped))
    IfEq(LVar0, FALSE)
        Call(SpeakToPlayer, NPC_Goompapa, ANIM_Goompapa_Talk, ANIM_Goompapa_Idle, 0, MSG_CH0_0067)
        Wait(10 * DT)
    EndIf
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_tt2, COLLIDER_FLAGS_UPPER_MASK)
    Set(GB_StoryProgress, STORY_CH0_SMASHED_GATE_BLOCK)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_SummonGateBlock) = {
    Call(PlaySoundAt, SOUND_KAMMY_SUMMON_MAGIC, SOUND_SPACE_DEFAULT, 373, 88, 255)
    Call(GetNpcPos, NPC_Kammy, LVar0, LVar1, LVar2)
    PlayEffect(EFFECT_GATHER_ENERGY_PINK, 0, 373, 88, 255, 1, 100)
    Wait(20 * DT)
    Call(PlaySoundAt, SOUND_KAMMY_SUMMON_BLOCK, SOUND_SPACE_DEFAULT, 326, 150, 261)
    PlayEffect(EFFECT_GATHER_ENERGY_PINK, 1, 326, 150, 261, 1, 60)
    Wait(20 * DT)
    PlayEffect(EFFECT_GATHER_ENERGY_PINK, 1, 326, 150, 261, 1, 60)
    Wait(10 * DT)
    PlayEffect(EFFECT_GATHER_ENERGY_PINK, 1, 326, 150, 261, 1, 60)
    Wait(5 * DT)
    PlayEffect(EFFECT_GATHER_ENERGY_PINK, 1, 326, 150, 261, 1, 60)
    Wait(3 * DT)
    PlayEffect(EFFECT_GATHER_ENERGY_PINK, 1, 326, 150, 261, 1, 60)
    EVT_MAKE_ENTITY(Hammer1Block, GEN_HAMMER1_BLOCK_1_PARAMS)
    Set(LVarA, LVar0)
    Call(AssignScript, Ref(N(EVS_OnSmash_GateBlock)))
    Call(N(AnimateBlockScale))
    Set(LVar9, LVarA)
    Call(N(GetEntityPosition), LVar9, LVar2, LVar3, LVar4)
    Call(MakeLerp, LVar3, 300, 20 * DT, EASING_QUADRATIC_IN)
    Label(10)
        Call(UpdateLerp)
        Call(N(SetEntityPositionF), LVar9, LVar2, LVar0, LVar4)
        Wait(1)
        IfEq(LVar1, 1)
            Goto(10)
        EndIf
    Call(PlaySoundAt, SOUND_KAMMY_RAISE_OBJECT, SOUND_SPACE_DEFAULT, LVar2, LVar0, LVar4)
    Wait(20 * DT)
    Call(SetNpcAnimation, NPC_Kammy, ANIM_WorldKammy_Anim0F)
    Thread
        Wait(15)
        PlayEffect(EFFECT_LANDING_DUST, 4, LVar2, 0, LVar4, 0)
    EndThread
    Call(PlaySoundAt, SOUND_KAMMY_LOWER_OBJECT, SOUND_SPACE_DEFAULT, LVar2, LVar0, LVar4)
    Call(MakeLerp, 300, 0, 20 * DT, EASING_CUBIC_IN)
    Label(20)
        Call(UpdateLerp)
        Call(N(SetEntityPositionF), LVar9, LVar2, LVar0, LVar4)
        Wait(1)
        IfEq(LVar1, 1)
            Goto(20)
        EndIf
    Call(EnableGroup, MODEL_2, TRUE)
    Call(EnableGroup, MODEL_1, FALSE)
    Call(PlaySoundAt, SOUND_HEAVY_OBJECT_DROP, SOUND_SPACE_DEFAULT, LVar2, LVar0, LVar4)
    Thread
        Call(ShakeCam, CAM_DEFAULT, 0, 15 * DT, Float(1.0))
    EndThread
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH0_GATE_CRUSHED)
        CaseLt(STORY_CH0_SMASHED_GATE_BLOCK)
            EVT_MAKE_ENTITY(Hammer1BlockWideX, GEN_HAMMER1_BLOCK_WIDE_X_1_PARAMS)
            Call(AssignScript, Ref(GEN_HAMMER1_BLOCK_WIDE_X_1_SCRIPT))
        CaseLt(STORY_CH0_TWINK_GAVE_LUCKY_STAR)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_tt2, COLLIDER_FLAGS_UPPER_MASK)
    EndSwitch
    IfEq(GF_KMR02_WarpPipe, FALSE)
        IfEq(GF_TIK01_WarpPipes, TRUE)
            Call(GetEntryID, LVar0)
            IfNe(LVar0, kmr_02_ENTRY_3)
                Set(GF_KMR02_WarpPipe, TRUE)
            EndIf
        EndIf
    EndIf
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_1_PARAMS)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    IfGe(GB_StoryProgress, STORY_CH0_TWINK_GAVE_LUCKY_STAR)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EndIf
    Return
    End
};
