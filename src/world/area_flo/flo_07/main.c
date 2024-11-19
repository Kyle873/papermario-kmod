#include "flo_07.h"

#include "world/common/atomic/TexturePan.inc.c"

#include "../common/FlowerSpawnRegion.inc.c"

#include "world/common/todo/SpawnSunEffect.inc.c"

EvtScript N(EVS_ExitWalk_flo_25_1) = EVT_EXIT_WALK(60, flo_07_ENTRY_0, "flo_25", flo_25_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_flo_25_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

API_CALLABLE(N(CreateCrystalTreeSparkles)) {
    EffectInstance* effect = fx_misc_particles(3, -272.0f, 80.0f, 20.0f, 200.0f, 120.0f, 4.0f, 8, 0);

    effect->data.miscParticles->innerColor.r = 240;
    effect->data.miscParticles->innerColor.g = 240;
    effect->data.miscParticles->innerColor.b = 240;
    effect->data.miscParticles->glowColor.r = 230;
    effect->data.miscParticles->glowColor.g = 230;
    effect->data.miscParticles->glowColor.b = 240;
    return ApiStatus_DONE2;
}

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Set(AF_FLO_MadeCrystalBerry, FALSE)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_SetupFoliage))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o76, SURFACE_TYPE_FLOWERS)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_1_MIN_XZ, GEN_FLOWER_VOLUME_1_MAX_XZ, GEN_FLOWER_VOLUME_1_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_2_MIN_XZ, GEN_FLOWER_VOLUME_2_MAX_XZ, GEN_FLOWER_VOLUME_2_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_3_MIN_XZ, GEN_FLOWER_VOLUME_3_MAX_XZ, GEN_FLOWER_VOLUME_3_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_4_MIN_XZ, GEN_FLOWER_VOLUME_4_MAX_XZ, GEN_FLOWER_VOLUME_4_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_5_MIN_XZ, GEN_FLOWER_VOLUME_5_MAX_XZ, GEN_FLOWER_VOLUME_5_MIN_Y)
    // waters edge
    Call(SetTexPanner, MODEL_o51, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // water fall
    Call(SetTexPanner, MODEL_o36, TEX_PANNER_3)
    Call(SetTexPanner, MODEL_o37, TEX_PANNER_3)
    Thread
        GEN_TEX_PANNER_3
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(GetEntryID, LVar0)
    IfEq(LVar0, flo_07_ENTRY_1)
        Exec(N(EVS_Scene_SunReturns))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
        Exec(N(EVS_TryKickingPlayerOut))
    EndIf
    ExecWait(N(EVS_SetupMusic))
    IfGe(GB_StoryProgress, STORY_CH6_DESTROYED_PUFF_PUFF_MACHINE)
        Call(N(SpawnSunEffect))
    EndIf
    Call(N(CreateCrystalTreeSparkles))
    Return
    End
};
