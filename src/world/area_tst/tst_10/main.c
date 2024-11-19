#include "tst_10.h"
#include "entity.h"

extern EvtScript N(EVS_Main);
extern EvtScript N(EVS_MakeEntities);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
};

// note: sets DisablePlayerInput, but does not use EVT_GROUP_EXIT_MAP
EvtScript N(EVS_ExitWalk_tst_10_2) = {
    Call(DisablePlayerInput, TRUE)
    Call(UseExitHeading, 60, tst_10_ENTRY_0)
    Exec(ExitWalk)
    Call(GotoMap, Ref("tst_10"), tst_10_ENTRY_2)
    Wait(100)
    Return
    End
};

// note: sets DisablePlayerInput, but does not use EVT_GROUP_EXIT_MAP
EvtScript N(EVS_ExitWalk_tst_10_3) = {
    Call(DisablePlayerInput, TRUE)
    Call(UseExitHeading, 60, tst_10_ENTRY_1)
    Exec(ExitWalk)
    Call(GotoMap, Ref("tst_10"), tst_10_ENTRY_3)
    Wait(100)
    Return
    End
};

// note: sets DisablePlayerInput, but does not use EVT_GROUP_EXIT_MAP
EvtScript N(EVS_ExitWalk_tst_10_0) = {
    Call(DisablePlayerInput, TRUE)
    Call(UseExitHeading, 60, tst_10_ENTRY_2)
    Exec(ExitWalk)
    Call(GotoMap, Ref("tst_10"), tst_10_ENTRY_0)
    Wait(100)
    Return
    End
};

// note: sets DisablePlayerInput, but does not use EVT_GROUP_EXIT_MAP
EvtScript N(EVS_ExitWalk_tst_10_1) = {
    Call(DisablePlayerInput, TRUE)
    Call(UseExitHeading, 60, tst_10_ENTRY_3)
    Exec(ExitWalk)
    Call(GotoMap, Ref("tst_10"), tst_10_ENTRY_1)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_DisableExitCameraZones) = {
    Call(SetZoneEnabled, ZONE_north, FALSE)
    Call(SetZoneEnabled, ZONE_west,  FALSE)
    Call(SetZoneEnabled, ZONE_south, FALSE)
    Call(SetZoneEnabled, ZONE_east,  FALSE)
    Set(AF_TST_00, FALSE)
    Return
    End
};

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tst_10_2)), TRIGGER_FLOOR_TOUCH, COLLIDER_deilin, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_tst_10_3)), TRIGGER_FLOOR_TOUCH, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_tst_10_0)), TRIGGER_FLOOR_TOUCH, COLLIDER_deilis, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_tst_10_1)), TRIGGER_FLOOR_TOUCH, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    IfEq(AF_TST_00, TRUE)
        Call(SetZoneEnabled, ZONE_north, FALSE)
        Call(SetZoneEnabled, ZONE_west,  FALSE)
        Call(SetZoneEnabled, ZONE_south, FALSE)
        Call(SetZoneEnabled, ZONE_east,  FALSE)
        Set(AF_TST_00, FALSE)
    Else
        Set(AF_TST_00, TRUE)
        BindTrigger(Ref(N(EVS_DisableExitCameraZones)), TRIGGER_FLOOR_TOUCH, COLLIDER_change, 1, 0)
    EndIf
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Return
    End
};
