#include "jan_08.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_jan_00_2) = EVT_EXIT_WALK(60, jan_08_ENTRY_0, "jan_00", jan_00_ENTRY_2);
EvtScript N(EVS_ExitWalk_jan_05_1) = EVT_EXIT_WALK(60, jan_08_ENTRY_1, "jan_05", jan_05_ENTRY_1);
EvtScript N(EVS_ExitWalk_jan_09_0) = EVT_EXIT_WALK(60, jan_08_ENTRY_2, "jan_09", jan_09_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_jan_00_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilisw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_05_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_o221, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_09_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilin, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o79, SURFACE_TYPE_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o81, SURFACE_TYPE_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o79, COLLIDER_FLAG_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o81, COLLIDER_FLAG_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1, SURFACE_TYPE_WATER)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_odeilie, SURFACE_TYPE_WATER)
    Exec(N(EVS_SetupBushes))
    Exec(N(EVS_SetupTrees))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitn, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitsw, COLLIDER_FLAGS_UPPER_MASK)
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Exec(N(EVS_SetupMusic))
    Call(MakeTransformGroup, MODEL_g40)
    // water surface
    Call(SetTexPanner, MODEL_o111, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};
