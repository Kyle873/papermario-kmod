#include "tst_03.h"

extern EvtScript N(EVS_Main);
extern EvtScript N(EVS_MakeEntities);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
};

EvtScript N(EVS_GotoMap_tst_02_1) = {
    Call(GotoMap, Ref("tst_02"), tst_02_ENTRY_1)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_GotoMap_tst_04_0) = {
    Call(GotoMap, Ref("tst_04"), tst_04_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    BindTrigger(Ref(N(EVS_GotoMap_tst_02_1)), TRIGGER_WALL_PUSH, COLLIDER_deilitw, 1, 0)
    BindTrigger(Ref(N(EVS_GotoMap_tst_04_0)), TRIGGER_WALL_PUSH, COLLIDER_deilite, 1, 0)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_puku, SURFACE_TYPE_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_pukut, SURFACE_TYPE_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_puku,  COLLIDER_FLAG_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_pukut, COLLIDER_FLAG_DOCK_WALL)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o264, SURFACE_TYPE_WATER)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o265, SURFACE_TYPE_SPIKES)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o236, SURFACE_TYPE_LAVA)
    Return
    End
};
