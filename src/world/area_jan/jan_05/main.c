#include "jan_05.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_jan_03_1) = EVT_EXIT_WALK(60, jan_05_ENTRY_0, "jan_03", jan_03_ENTRY_1);
EvtScript N(EVS_ExitWalk_jan_08_1) = EVT_EXIT_WALK(60, jan_05_ENTRY_1, "jan_08", jan_08_ENTRY_1);
EvtScript N(EVS_ExitWalk_jan_04_0) = EVT_EXIT_WALK(60, jan_05_ENTRY_2, "jan_04", jan_04_ENTRY_0);
EvtScript N(EVS_ExitWalk_jan_06_0) = EVT_EXIT_WALK(60, jan_05_ENTRY_3, "jan_06", jan_06_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_jan_08_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_o227, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_03_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilise, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_04_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_06_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilin, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupLogs))
    Exec(N(EVS_SetupTrees))
    Exec(N(EVS_SetupBushes))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o75, SURFACE_TYPE_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o77, SURFACE_TYPE_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o75, COLLIDER_FLAG_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o77, COLLIDER_FLAG_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1, SURFACE_TYPE_WATER)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_deiliw, SURFACE_TYPE_WATER)
    Exec(N(EVS_SetupTrees))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitn, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitse, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitw, COLLIDER_FLAGS_UPPER_MASK)
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Exec(N(EVS_SetupMusic))
    Call(MakeTransformGroup, MODEL_g25)
    // water surface
    Call(SetTexPanner, MODEL_o101, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};
