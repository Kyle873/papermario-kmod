#include "tst_02.h"

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

EvtScript N(EVS_GotoMap_tst_01_1) = {
    Call(GotoMap, Ref("tst_01"), tst_01_ENTRY_1)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_GotoMap_tst_03_0) = {
    Call(GotoMap, Ref("tst_03"), tst_03_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    BindTrigger(Ref(N(EVS_GotoMap_tst_01_1)), TRIGGER_WALL_PUSH, COLLIDER_deilitw, 1, 0)
    BindTrigger(Ref(N(EVS_GotoMap_tst_03_0)), TRIGGER_WALL_PUSH, COLLIDER_deilite, 1, 0)
    Return
    End
};
