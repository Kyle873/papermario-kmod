#include "flo_08.h"
#include "effects.h"

#include "../common/FlowerSpawnRegion.inc.c"
#include "world/common/atomic/TexturePan.inc.c"

API_CALLABLE(N(SpawnSunEffect)) {
    fx_sun(FX_SUN_FROM_RIGHT, 0.0f, 0.0f, 0.0f, 0.0f, 0);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_flo_00_6) = EVT_EXIT_WALK(60, flo_08_ENTRY_0, "flo_00", flo_00_ENTRY_6);
EvtScript N(EVS_ExitWalk_flo_24_0) = EVT_EXIT_WALK(60, flo_08_ENTRY_1, "flo_24", flo_24_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_flo_00_6)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_flo_24_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o158, .pos = { GEN_LAVA_RESET_O158_VEC }},
    { .colliderID = COLLIDER_o132, .pos = { GEN_LAVA_RESET_O132_VEC }},
    { .colliderID = COLLIDER_o223, .pos = { GEN_LAVA_RESET_O223_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupVines))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o114, SURFACE_TYPE_SPIKES)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    // vines
    Call(SetTexPanner, MODEL_o25, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o27, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o31, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o33, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o35, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o37, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o28, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o32, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o34, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o36, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o38, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o129, SURFACE_TYPE_FLOWERS)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_1_MIN_XZ, GEN_FLOWER_VOLUME_1_MAX_XZ, GEN_FLOWER_VOLUME_1_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_2_MIN_XZ, GEN_FLOWER_VOLUME_2_MAX_XZ, GEN_FLOWER_VOLUME_2_MIN_Y)
    Exec(N(EVS_SetupFoliage))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitw, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    ExecWait(N(EVS_SetupMusic))
    IfGe(GB_StoryProgress, STORY_CH6_DESTROYED_PUFF_PUFF_MACHINE)
        Call(N(SpawnSunEffect))
    EndIf
    Return
    End
};
