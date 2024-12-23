#include "jan_22.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_jan_03_2) = EVT_EXIT_WALK(60, jan_22_ENTRY_0, "jan_03", jan_03_ENTRY_2);
EvtScript N(EVS_ExitWalk_jan_16_1) = EVT_EXIT_WALK(60, jan_22_ENTRY_1, "jan_16", jan_16_ENTRY_1);
EvtScript N(EVS_ExitWalk_kzn_01_0) = EVT_EXIT_WALK(60, jan_22_ENTRY_2, "kzn_01", kzn_01_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_jan_03_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_16_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilin, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_kzn_01_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o170, .pos = { GEN_LAVA_RESET_O170_VEC }},
    { .colliderID = COLLIDER_o70, .pos = { GEN_LAVA_RESET_O70_VEC }},
    { .colliderID = COLLIDER_o119, .pos = { GEN_LAVA_RESET_O119_VEC }},
    { .colliderID = COLLIDER_o276, .pos = { GEN_LAVA_RESET_O276_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(D_8024202C_B861AC) = {
    IfLt(GB_StoryProgress, STORY_CH5_ZIP_LINE_READY)
        Call(SetGroupVisibility, MODEL_g39, MODEL_GROUP_HIDDEN)
        Call(SetGroupVisibility, MODEL_g52, MODEL_GROUP_HIDDEN)
        Call(SetGroupVisibility, MODEL_g58, MODEL_GROUP_HIDDEN)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_g29, COLLIDER_FLAGS_UPPER_MASK)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_g39, COLLIDER_FLAGS_UPPER_MASK)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_g86, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    IfGe(GB_StoryProgress, STORY_CH5_RAPHAEL_WAITING_FOR_MARIO)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o149, COLLIDER_FLAGS_UPPER_MASK)
        ExecWait(N(EVS_SeparateBushesImmediately))
    EndIf
    Switch(GB_StoryProgress)
        CaseEq(STORY_CH5_RAPHAEL_MOVED_ROOT)
            Thread
                Exec(N(EVS_Scene_RaphaelComingThrough))
                Wait(200)
                Exec(N(EVS_BindExitTriggers))
            EndThread
        CaseEq(STORY_CH5_BEGAN_PEACH_MISSION)
            Exec(N(EVS_BindExitTriggers))
        CaseDefault
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
            Wait(1)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o304, COLLIDER_FLAGS_UPPER_MASK)
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH5_RAPHAEL_MOVED_ROOT)
            Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
        CaseEq(STORY_CH5_BEGAN_PEACH_MISSION)
            Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
        CaseDefault
            Call(MakeNpcs, FALSE, Ref(N(RavenNPCs)))
    EndSwitch
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupZiplines))
    Exec(N(EVS_SetupBasketElevator))
    Exec(N(EVS_SetupTrees))
    Exec(N(EVS_SetupBushes))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o294, SURFACE_TYPE_LAVA)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    Call(SetTexPanner, MODEL_o262, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o269, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o261, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o275, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o274, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o263, TEX_PANNER_3)
    Call(SetTexPanner, MODEL_o271, TEX_PANNER_3)
    Thread
        GEN_TEX_PANNER_3
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o267, TEX_PANNER_4)
    Call(SetTexPanner, MODEL_o272, TEX_PANNER_4)
    Thread
        GEN_TEX_PANNER_4
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitw, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitn, COLLIDER_FLAGS_UPPER_MASK)
    Exec(N(D_8024202C_B861AC))
    IfEq(GB_StoryProgress, STORY_CH5_BEGAN_PEACH_MISSION)
        Wait(65)
    EndIf
    ExecWait(N(EVS_SetupMusic))
    Return
    End
};
