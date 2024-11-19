#include "kzn_18.h"

extern EvtScript N(EVS_MakeEntities);
extern NpcGroupList N(DefaultNPCs);

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_kzn_17_1) = EVT_EXIT_WALK(60, kzn_18_ENTRY_0, "kzn_17", kzn_17_ENTRY_1);
EvtScript N(EVS_ExitWalk_kzn_19_0) = EVT_EXIT_WALK(60, kzn_18_ENTRY_1, "kzn_19", kzn_19_ENTRY_0);
EvtScript N(EVS_ExitWalk_kzn_19_1) = EVT_EXIT_WALK(60, kzn_18_ENTRY_2, "kzn_19", kzn_19_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(N(EVS_ExitWalk_kzn_17_1), TRIGGER_FLOOR_ABOVE, COLLIDER_deili3, 1, 0)
    BindTrigger(N(EVS_ExitWalk_kzn_19_0), TRIGGER_FLOOR_ABOVE, COLLIDER_deili2, 1, 0)
    BindTrigger(N(EVS_ExitWalk_kzn_19_1), TRIGGER_FLOOR_ABOVE, COLLIDER_deili1, 1, 0)
    Return
    End
};

EvtScript N(EVS_SetupTexPan) = {
    // lava surfaces
    Call(SetTexPanner, MODEL_yougan1_1, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_off1, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // leaking lava
    Call(SetTexPanner, MODEL_toro, TEX_PANNER_5)
    Thread
        GEN_TEX_PANNER_5
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // lava bubbles
    Call(SetTexPanner, MODEL_poko, TEX_PANNER_D)
    Thread
        GEN_TEX_PANNER_D
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // smoke
    Call(SetTexPanner, MODEL_kem1, TEX_PANNER_3)
    Thread
        GEN_TEX_PANNER_3
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_kem2, TEX_PANNER_4)
    Thread
        GEN_TEX_PANNER_4
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o382, .pos = { GEN_LAVA_RESET_O382_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_EnterMap) = {
    Call(GetLoadType, LVar1)
    IfEq(LVar1, LOAD_FROM_FILE_SELECT)
        Exec(EnterSavePoint)
        Exec(N(EVS_BindExitTriggers))
        Return
    EndIf
    Set(LVar0, N(EVS_BindExitTriggers))
    Exec(EnterWalk)
    Wait(1)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_KZN_18)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_EnterMap))
    Call(SetMusicTrack, 0, SONG_MT_LAVALAVA, 0, 8)
    Call(PlayAmbientSounds, AMBIENT_LAVA_1)
    IfLt(GB_StoryProgress, STORY_CH5_OPENED_ESCAPE_ROUTE)
        Call(EnableModel, MODEL_off1, FALSE)
        Call(EnableModel, MODEL_o506, FALSE)
        Call(EnableModel, MODEL_o509, FALSE)
        Call(EnableModel, MODEL_o511, FALSE)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_off1, COLLIDER_FLAGS_UPPER_MASK)
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_off2, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_off1, SURFACE_TYPE_LAVA)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    Exec(N(EVS_SetupTexPan))
    Return
    End
};
