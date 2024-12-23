#include "flo_14.h"
#include "effects.h"

#include "world/common/atomic/TexturePan.inc.c"

API_CALLABLE(N(SpawnSunEffect)) {
    fx_sun(FX_SUN_FROM_LEFT, 0.0f, 0.0f, 0.0f, 0.0f, 0);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_flo_00_1) = EVT_EXIT_WALK(60, flo_14_ENTRY_0, "flo_00", flo_00_ENTRY_1);
EvtScript N(EVS_ExitWalk_flo_13_0) = EVT_EXIT_WALK(60, flo_14_ENTRY_1, "flo_13", flo_13_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_flo_13_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_flo_00_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o129, .pos = { GEN_LAVA_RESET_O129_VEC }},
    { .colliderID = COLLIDER_o137, .pos = { GEN_LAVA_RESET_O137_VEC }},
    { .colliderID = COLLIDER_o155, .pos = { GEN_LAVA_RESET_O155_VEC }},
    { .colliderID = COLLIDER_o156, .pos = { GEN_LAVA_RESET_O156_VEC }},
    { .colliderID = COLLIDER_o140, .pos = { GEN_LAVA_RESET_O140_VEC }},
    { .colliderID = COLLIDER_o157, .pos = { GEN_LAVA_RESET_O157_VEC }},
    { .colliderID = COLLIDER_o151, .pos = { GEN_LAVA_RESET_O151_VEC }},
    { .colliderID = COLLIDER_o152, .pos = { GEN_LAVA_RESET_O152_VEC }},
    { .colliderID = COLLIDER_o153, .pos = { GEN_LAVA_RESET_O153_VEC }},
    { .colliderID = COLLIDER_o154, .pos = { GEN_LAVA_RESET_O154_VEC }},
    { .colliderID = COLLIDER_o158, .pos = { GEN_LAVA_RESET_O158_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    Exec(N(EVS_MakeEntities))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o114, SURFACE_TYPE_SPIKES)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    // vines scrolling left
    Call(SetTexPanner, MODEL_o39, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o41, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o43, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o49, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o51, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o55, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o123, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o125, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o127, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o129, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o131, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o133, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o135, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // vines scrolling right
    Call(SetTexPanner, MODEL_o40, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o44, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o48, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o52, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o54, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o124, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o126, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o128, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o130, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o132, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o134, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o136, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Exec(N(EVS_SetupBubbles))
    Exec(N(EVS_SetupLogBridges))
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
