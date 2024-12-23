#include "kzn_08.h"
#include "model.h"

#include "../common/LavaGlowLighting.inc.c"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_StartTexPanners) = {
    // background lava fall
    Call(SetTexPanner, MODEL_yougan1, TEX_PANNER_0)
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // lava channel
    Call(SetTexPanner, MODEL_yougan, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o640, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
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

ModelIDList N(LavaModelIDs) = {
    .count = 1,
    .list = { MODEL_yougan }
};

EvtScript N(EVS_ExitWalk_kzn_06) = EVT_EXIT_WALK(60, kzn_08_ENTRY_0, "kzn_06", kzn_06_ENTRY_2);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(N(EVS_ExitWalk_kzn_06), TRIGGER_FLOOR_TOUCH, COLLIDER_deili1, 1, 0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o468, .pos = { GEN_LAVA_RESET_O468_VEC }},
    { .colliderID = COLLIDER_o470, .pos = { GEN_LAVA_RESET_O470_VEC }},
    { .colliderID = COLLIDER_o322, .pos = { GEN_LAVA_RESET_O322_VEC }},
    { .colliderID = COLLIDER_o446, .pos = { GEN_LAVA_RESET_O446_VEC }},
    { .colliderID = COLLIDER_o454, .pos = { GEN_LAVA_RESET_O454_VEC }},
    { .colliderID = NO_COLLIDER }
};

// unused
EvtScript N(EVS_AnimateLavaScale) = {
    Call(DisablePlayerInput, TRUE)
    Call(MakeLerp, 1, 100, 200, EASING_LINEAR)
    Label(0)
        Call(UpdateLerp)
        DivF(LVar0, Float(10.0))
        Call(ScaleModel, MODEL_yougan1, LVar0, Float(1.0), Float(1.0))
        MulF(LVar0, Float(-5.0))
        AddF(LVar0, Float(100.0))
        Set(MV_GlowIntensity, LVar0)
        Wait(1)
        IfEq(LVar1, 1)
            Goto(0)
        EndIf
    Call(MakeLerp, 0, 35, 100, EASING_LINEAR)
    Label(10)
        Call(UpdateLerp)
        Call(TranslateModel, MODEL_yougan, 0, LVar0, 0)
        MulF(LVar0, Float(-1.25))
        AddF(LVar0, Float(50.0))
        Set(MV_GlowIntensity, LVar0)
        Wait(1)
        IfEq(LVar1, 1)
            Goto(10)
        EndIf
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_CLEAR_BITS,  COLLIDER_yougan_atari, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_yougan_atari, SURFACE_TYPE_LAVA)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    Call(DisablePlayerInput, FALSE)
    Unbind
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_KZN_08)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Call(SetMusicTrack, 0, SONG_MT_LAVALAVA, 0, 8)
    Call(PlayAmbientSounds, AMBIENT_LAVA_1)
    Set(LVar0, N(EVS_BindExitTriggers))
    Exec(EnterWalk)
    Wait(1)
    Exec(N(EVS_802455A0))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_yougan_atari, SURFACE_TYPE_LAVA)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    Call(ScaleModel, MODEL_yougan1, Float(10.0), Float(1.0), Float(1.0))
    Call(TranslateModel, MODEL_yougan, 0, 40, 0)
    Set(MV_GlowIntensity, 0)
    Thread
        SetGroup(EVT_GROUP_NEVER_PAUSE)
        Call(N(ApplyLavaGlowLighting), LAVA_GLOW_MODE_2, NULL)
    EndThread
    Thread
        Call(N(ClearLavaGlowLighting), Ref(N(LavaModelIDs)))
    EndThread
    Exec(N(EVS_StartTexPanners))
    Return
    End
};
