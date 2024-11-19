
#include "tst_01.h"

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

EvtScript N(EVS_GotoMap_machi_7) = {
    Call(GotoMap, Ref("machi"), machi_ENTRY_7)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_GotoMap_tst_02_0) = {
    Call(GotoMap, Ref("tst_02"), tst_02_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    BindTrigger(Ref(N(EVS_GotoMap_machi_7)), TRIGGER_WALL_PUSH, COLLIDER_deilitw, 1, 0)
    BindTrigger(Ref(N(EVS_GotoMap_tst_02_0)), TRIGGER_WALL_PUSH, COLLIDER_deilite, 1, 0)
    Return
    End
};
