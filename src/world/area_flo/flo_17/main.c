#include "flo_17.h"
#include "effects.h"

#include "../common/FlowerSpawnRegion.inc.c"
#include "world/common/atomic/TexturePan.inc.c"

API_CALLABLE(N(SpawnSunEffect)) {
    fx_sun(FX_SUN_FROM_RIGHT, 0.0f, 0.0f, 0.0f, 0.0f, 0);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_flo_16_1) = EVT_EXIT_WALK(60, flo_17_ENTRY_0, "flo_16", flo_16_ENTRY_1);
EvtScript N(EVS_ExitWalk_flo_18_0) = EVT_EXIT_WALK(60, flo_17_ENTRY_1, "flo_18", flo_18_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_flo_16_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_flo_18_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o116, .pos = { GEN_LAVA_RESET_O116_VEC }},
    { .colliderID = COLLIDER_o118, .pos = { GEN_LAVA_RESET_O118_VEC }},
    { .colliderID = COLLIDER_o117, .pos = { GEN_LAVA_RESET_O117_VEC }},
    { .colliderID = COLLIDER_o121, .pos = { GEN_LAVA_RESET_O121_VEC }},
    { .colliderID = COLLIDER_o120, .pos = { GEN_LAVA_RESET_O120_VEC }},
    { .colliderID = COLLIDER_o119, .pos = { GEN_LAVA_RESET_O119_VEC }},
    { .colliderID = COLLIDER_o124, .pos = { GEN_LAVA_RESET_O124_VEC }},
    { .colliderID = COLLIDER_o123, .pos = { GEN_LAVA_RESET_O123_VEC }},
    { .colliderID = COLLIDER_o122, .pos = { GEN_LAVA_RESET_O122_VEC }},
    { .colliderID = COLLIDER_o128, .pos = { GEN_LAVA_RESET_O128_VEC }},
    { .colliderID = COLLIDER_o127, .pos = { GEN_LAVA_RESET_O127_VEC }},
    { .colliderID = COLLIDER_o125, .pos = { GEN_LAVA_RESET_O125_VEC }},
    { .colliderID = COLLIDER_o126, .pos = { GEN_LAVA_RESET_O126_VEC }},
    { .colliderID = COLLIDER_o132, .pos = { GEN_LAVA_RESET_O132_VEC }},
    { .colliderID = COLLIDER_o131, .pos = { GEN_LAVA_RESET_O131_VEC }},
    { .colliderID = COLLIDER_o130, .pos = { GEN_LAVA_RESET_O130_VEC }},
    { .colliderID = COLLIDER_o129, .pos = { GEN_LAVA_RESET_O129_VEC }},
    { .colliderID = COLLIDER_o134, .pos = { GEN_LAVA_RESET_O134_VEC }},
    { .colliderID = COLLIDER_o133, .pos = { GEN_LAVA_RESET_O133_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupLogBridges))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o116, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o117, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o121, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o124, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o126, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o128, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o129, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o132, SURFACE_TYPE_FLOWERS)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o133, SURFACE_TYPE_FLOWERS)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_1_MIN_XZ, GEN_FLOWER_VOLUME_1_MAX_XZ, GEN_FLOWER_VOLUME_1_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_2_MIN_XZ, GEN_FLOWER_VOLUME_2_MAX_XZ, GEN_FLOWER_VOLUME_2_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_3_MIN_XZ, GEN_FLOWER_VOLUME_3_MAX_XZ, GEN_FLOWER_VOLUME_3_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_4_MIN_XZ, GEN_FLOWER_VOLUME_4_MAX_XZ, GEN_FLOWER_VOLUME_4_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_5_MIN_XZ, GEN_FLOWER_VOLUME_5_MAX_XZ, GEN_FLOWER_VOLUME_5_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_6_MIN_XZ, GEN_FLOWER_VOLUME_6_MAX_XZ, GEN_FLOWER_VOLUME_6_MIN_Y)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o103, SURFACE_TYPE_SPIKES)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    // vines scrolling left
    Call(SetTexPanner, MODEL_o34, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o36, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o37, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o40, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o41, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o44, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o45, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o47, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o48, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o51, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o52, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o55, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o23, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o25, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o26, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o29, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o30, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o33, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // vines scrolling right
    Call(SetTexPanner, MODEL_o35, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o38, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o39, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o42, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o43, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o46, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o49, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o50, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o53, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o54, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o24, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o27, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o28, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o31, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o32, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
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
