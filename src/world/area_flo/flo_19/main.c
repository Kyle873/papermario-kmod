#include "flo_19.h"
#include "effects.h"

#include "world/common/atomic/TexturePan.inc.c"

API_CALLABLE(N(SpawnSunEffect)) {
    fx_sun(FX_SUN_FROM_RIGHT, 0.0f, 0.0f, 0.0f, 0.0f, 0);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_flo_21_0) = EVT_EXIT_WALK(60, flo_19_ENTRY_1, "flo_21", flo_21_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_flo_21_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Set(GF_MAP_CloudyClimb, TRUE)
    ExecWait(N(EVS_MakeEntities))
    Call(ParentColliderToModel, COLLIDER_o117, MODEL_o142)
    Call(HidePlayerShadow, TRUE)
    Exec(N(EVS_SetupBeanstalk))
    Exec(N(EVS_SetupClouds))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o122, SURFACE_TYPE_CLOUD)
    Call(SetTexPanner, MODEL_o59, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o60, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(GetEntryID, LVar0)
    IfNe(LVar0, flo_19_ENTRY_3)
        Set(AF_FLO_RidingBeanstalk, FALSE)
    EndIf
    Switch(LVar0)
        CaseEq(flo_19_ENTRY_0)
            Exec(N(EVS_BindExitTriggers))
        CaseEq(flo_19_ENTRY_1)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
        CaseEq(flo_19_ENTRY_2)
            Exec(N(EVS_Scene_BeanstalkGrowing))
            Exec(N(EVS_BindExitTriggers))
        CaseEq(flo_19_ENTRY_3)
            Exec(N(EVS_Enter_Beanstalk))
            Exec(N(EVS_BindExitTriggers))
    EndSwitch
    ExecWait(N(EVS_SetupMusic))
    IfGe(GB_StoryProgress, STORY_CH6_DESTROYED_PUFF_PUFF_MACHINE)
        Call(N(SpawnSunEffect))
    EndIf
    Return
    End
};
