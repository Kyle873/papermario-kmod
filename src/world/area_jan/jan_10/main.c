#include "jan_10.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_jan_09_2) = EVT_EXIT_WALK(60, jan_10_ENTRY_0, "jan_09", jan_09_ENTRY_2);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_jan_09_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_o100, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupLogs))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o20, SURFACE_TYPE_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o20, COLLIDER_FLAG_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o1, SURFACE_TYPE_WATER)
    Exec(N(EVS_SetupTrees))
    Exec(N(EVS_SetupBushes))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Exec(N(EVS_SetupMusic))
    Call(MakeTransformGroup, MODEL_g11)
    // water surface
    Call(SetTexPanner, MODEL_o28, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};
