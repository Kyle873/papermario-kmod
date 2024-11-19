#include "nok_14.h"

#include "world/common/atomic/TexturePan.inc.c"

API_CALLABLE(N(UpdateEnounterStages)) {
    PlayerStatus* playerStatus = &gPlayerStatus;
    EncounterStatus* encounterStatus = &gCurrentEncounter;
    Bytecode* args = script->ptrReadPos;
    s32 xMin = evt_get_variable(script, *args++);
    s32 xMax = evt_get_variable(script, *args++);
    s32 zMin = evt_get_variable(script, *args++);
    s32 zMax = evt_get_variable(script, *args++);
    s32 stageWithoutBridge = evt_get_variable(script, *args++);
    s32 stageWithBridge = evt_get_variable(script, *args++);
    s32 stage = stageWithoutBridge;
    s32 i;

    if (xMin <= playerStatus->pos.x && playerStatus->pos.x <= xMax &&
        zMin <= playerStatus->pos.z && playerStatus->pos.z <= zMax)
    {
        stage = stageWithBridge;
    }

    for (i = 0; i < encounterStatus->numEncounters; i++) {
        encounterStatus->encounterList[i]->stage = stage;
    }
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_nok_13_2) = EVT_EXIT_WALK_NOK(60, nok_14_ENTRY_0, "nok_13", nok_13_ENTRY_2);
EvtScript N(EVS_ExitWalk_nok_15_0) = EVT_EXIT_WALK_NOK(60, nok_14_ENTRY_1, "nok_15", nok_15_ENTRY_0);

EvtScript N(EVS_SetupTexPan) = {
    // flowers
    Call(SetTexPanner, MODEL_hana1, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_hana3, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_hana4, TEX_PANNER_0)
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // water
    Call(SetTexPanner, MODEL_suimen1, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_suimen2, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_kabemizu1, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_kabemizu2, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // waterfall
    Call(SetTexPanner, MODEL_taki1, TEX_PANNER_3)
    Thread
        GEN_TEX_PANNER_3
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_nok_13_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deili1, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_nok_15_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deili2, 1, 0)
    Return
    End
};

EvtScript N(EVS_UpdateEnounterStages) = {
    Label(0)
        IfGe(GB_StoryProgress, STORY_CH1_MADE_SECOND_BRIDGE)
            Call(N(UpdateEnounterStages), -115, 110, -110, 999, BTL_NOK_STAGE_00, BTL_NOK_STAGE_02)
        EndIf
        Wait(1)
        Goto(0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupTexPan))
    Exec(N(EVS_SetupBridge))
    Exec(N(EVS_UpdateEnounterStages))
    Exec(N(EVS_SetupMusic))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilit, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilit2, COLLIDER_FLAGS_UPPER_MASK)
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    Return
    End
};
