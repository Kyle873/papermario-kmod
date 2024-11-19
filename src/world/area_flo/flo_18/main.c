#include "flo_18.h"
#include "effects.h"

#include "world/common/atomic/TexturePan.inc.c"

API_CALLABLE(N(SpawnSunEffect)) {
    fx_sun(FX_SUN_FROM_RIGHT, 0.0f, 0.0f, 0.0f, 0.0f, 0);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_flo_17_1) = EVT_EXIT_WALK(60, flo_18_ENTRY_0, "flo_17", flo_17_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_flo_17_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o138, .pos = { GEN_LAVA_RESET_O138_VEC }},
    { .colliderID = COLLIDER_o140, .pos = { GEN_LAVA_RESET_O140_VEC }},
    { .colliderID = COLLIDER_o142, .pos = { GEN_LAVA_RESET_O142_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    Exec(N(EVS_SetupFoliage))
    Exec(N(EVS_SetupMachine))
    Exec(N(EVS_SetupMachineDamageReactions))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o44, SURFACE_TYPE_SPIKES)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    Call(SetTexPanner, MODEL_o48, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o50, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o52, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o54, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o58, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o60, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o49, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o51, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o53, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o57, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o59, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(GetEntryID, LVar0)
    IfEq(LVar0, flo_18_ENTRY_0)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitw, COLLIDER_FLAGS_UPPER_MASK)
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
    Else
        Exec(N(EVS_Scene_LakilesterLikesBeingGood))
        Exec(N(EVS_BindExitTriggers))
    EndIf
    ExecWait(N(EVS_SetupMusic))
    IfGe(GB_StoryProgress, STORY_CH6_DESTROYED_PUFF_PUFF_MACHINE)
        Call(N(SpawnSunEffect))
    EndIf
    Return
    End
};
