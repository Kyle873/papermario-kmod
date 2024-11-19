#include "flo_12.h"
#include "effects.h"

#include "../common/FlowerSpawnRegion.inc.c"

API_CALLABLE(N(SpawnSunEffect)) {
    fx_sun(FX_SUN_FROM_LEFT, 0.0f, 0.0f, 0.0f, 0.0f, 0);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_flo_11_1) = EVT_EXIT_WALK(60, flo_12_ENTRY_0, "flo_11", flo_11_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_flo_11_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Set(AF_FLO_GivenCrystalBerry, FALSE)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o180, SURFACE_TYPE_FLOWERS)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_1_MIN_XZ, GEN_FLOWER_VOLUME_1_MAX_XZ, GEN_FLOWER_VOLUME_1_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_2_MIN_XZ, GEN_FLOWER_VOLUME_2_MAX_XZ, GEN_FLOWER_VOLUME_2_MIN_Y)
    GEN_FLOWER_SPAWN_REGION(GEN_FLOWER_VOLUME_3_MIN_XZ, GEN_FLOWER_VOLUME_3_MAX_XZ, GEN_FLOWER_VOLUME_3_MIN_Y)
    Call(GetEntryID, LVar0)
    IfEq(LVar0, flo_12_ENTRY_1)
        Exec(N(EVS_Scene_SunReturns))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
    EndIf
    ExecWait(N(EVS_SetupMusic))
    IfGe(GB_StoryProgress, STORY_CH6_DESTROYED_PUFF_PUFF_MACHINE)
        Call(N(SpawnSunEffect))
    EndIf
    Return
    End
};
