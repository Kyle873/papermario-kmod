#include "kgr_02.h"

extern EvtScript N(EVS_Main);
extern EvtScript N(EVS_Dummy);
extern EvtScript N(EVS_StartTongueWiggle);
extern EvtScript N(EVS_MonitorFriendlyFire);
extern NpcGroupList N(DefaultNPCs);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .tattle = { MSG_MapTattle_kgr_02 },
};

#include "world/common/atomic/CreateDarkness.inc.c"

EvtScript N(EVS_ExitWalk_kgr_01_1) = EVT_EXIT_WALK(60, kgr_02_ENTRY_0, "kgr_01", kgr_01_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(N(EVS_ExitWalk_kgr_01_1), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    Set(LVar0, N(EVS_BindExitTriggers))
    Exec(EnterWalk)
    Exec(N(EVS_Dummy))
    Exec(N(EVS_CreateDarkness))
    Exec(N(EVS_MonitorFriendlyFire))
    Return
    End
};
