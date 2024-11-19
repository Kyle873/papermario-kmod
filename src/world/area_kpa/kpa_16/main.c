#include "kpa_16.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_kpa_14_2) = EVT_EXIT_WALK(40, kpa_16_ENTRY_0, "kpa_14", kpa_14_ENTRY_2);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_kpa_14_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Return
    End
};

EvtScript N(EVS_TexPan_Steam) = {
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o1157, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o1158, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o1159, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o1160, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o1162, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o1163, TEX_PANNER_2)
    Return
    End
};

EvtScript N(EVS_TexPan_Lava) = {
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Thread
        GEN_TEX_PANNER_3
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Thread
        GEN_TEX_PANNER_4
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Thread
        GEN_TEX_PANNER_5
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o1282, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_o1283, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_o1284, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o1285, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o1286, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o776, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o782, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o780, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o893, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o895, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o894, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o892, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o1331, TEX_PANNER_3)
    Call(SetTexPanner, MODEL_o1316, TEX_PANNER_4)
    Call(SetTexPanner, MODEL_o1321, TEX_PANNER_5)
    Call(SetTexPanner, MODEL_o1320, TEX_PANNER_5)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o197, .pos = { GEN_LAVA_RESET_O197_VEC }},
    { .colliderID = COLLIDER_o202, .pos = { GEN_LAVA_RESET_O202_VEC }},
    { .colliderID = COLLIDER_o785, .pos = { GEN_LAVA_RESET_O785_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    IfEq(GF_KPA16_Defeated_SwitchGuards, TRUE)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o958, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    IfEq(GF_KPA16_ShutOffLava, FALSE)
        Call(EnableGroup, MODEL_after, FALSE)
        Exec(N(EVS_TexPan_Lava))
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o954, COLLIDER_FLAGS_UPPER_MASK)
    Else
        Call(EnableGroup, MODEL_before, FALSE)
        Exec(N(EVS_TexPan_Steam))
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o782, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Exec(N(EVS_EnterMap))
    Exec(N(EVS_SetupMusic))
    IfEq(GF_KPA16_ShutOffLava, FALSE)
        Thread
            Wait(2)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o782, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o929, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o930, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o776, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o952, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o954, SURFACE_TYPE_LAVA)
            Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_deiliw, SURFACE_TYPE_LAVA)
            Thread
                Call(ResetFromLava, Ref(N(SafeFloorColliders)))
            EndThread
        EndThread
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o952, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Return
    End
};
