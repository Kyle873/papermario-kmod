#include "kpa_13.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_kpa_12_1) = EVT_EXIT_WALK(60, kpa_13_ENTRY_0, "kpa_12", kpa_12_ENTRY_1);
EvtScript N(EVS_ExitWalk_kpa_15_0) = EVT_EXIT_WALK(60, kpa_13_ENTRY_2, "kpa_15", kpa_15_ENTRY_0);
EvtScript N(EVS_ExitWalk_kpa_14_0) = EVT_EXIT_WALK(60, kpa_13_ENTRY_1, "kpa_14", kpa_14_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_kpa_12_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_kpa_15_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilin, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_kpa_14_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_TexPan_Lava) = {
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o926, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_o927, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_o928, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_o925, TEX_PANNER_0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o1043, .pos = { GEN_LAVA_RESET_O1043_VEC }},
    { .colliderID = COLLIDER_o1047, .pos = { GEN_LAVA_RESET_O1047_VEC }},
    { .colliderID = COLLIDER_o1048, .pos = { GEN_LAVA_RESET_O1048_VEC }},
    { .colliderID = COLLIDER_o1041, .pos = { GEN_LAVA_RESET_O1041_VEC }},
    { .colliderID = COLLIDER_o1051, .pos = { GEN_LAVA_RESET_O1051_VEC }},
    { .colliderID = COLLIDER_o1040, .pos = { GEN_LAVA_RESET_O1040_VEC }},
    { .colliderID = COLLIDER_o1050, .pos = { GEN_LAVA_RESET_O1050_VEC }},
    { .colliderID = COLLIDER_o1062, .pos = { GEN_LAVA_RESET_O1062_VEC }},
    { .colliderID = COLLIDER_o1064, .pos = { GEN_LAVA_RESET_O1064_VEC }},
    { .colliderID = COLLIDER_o1066, .pos = { GEN_LAVA_RESET_O1066_VEC }},
    { .colliderID = COLLIDER_o1068, .pos = { GEN_LAVA_RESET_O1068_VEC }},
    { .colliderID = COLLIDER_o1042, .pos = { GEN_LAVA_RESET_O1042_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    IfEq(GF_KPA16_ShutOffLava, FALSE)
        Call(EnableGroup, MODEL_after, FALSE)
        Exec(N(EVS_TexPan_Lava))
    Else
        Call(EnableGroup, MODEL_before, FALSE)
    EndIf
    Exec(N(EVS_SetupMusic))
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    IfEq(GF_KPA16_ShutOffLava, FALSE)
        Exec(N(EVS_SetupPlatforms))
    EndIf
    IfEq(GF_KPA16_ShutOffLava, FALSE)
        Thread
            Wait(2)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1039, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o805, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1028, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1029, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1030, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1031, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1032, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1033, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1034, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1035, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1036, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1037, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1038, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1074, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1075, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_deilin, SURFACE_TYPE_LAVA)
            Thread
                Call(ResetFromLava, Ref(N(SafeFloorColliders)))
            EndThread
        EndThread
    EndIf
    Return
    End
};
