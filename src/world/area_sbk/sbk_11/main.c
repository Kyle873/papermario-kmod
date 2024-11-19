#include "sbk_11.h"

extern EvtScript N(EVS_Main);
extern NpcGroupList N(DefaultNPCs);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_sbk_11 },
};

#include "world/common/todo/SpawnSunEffect.inc.c"

EvtScript N(EVS_ExitWalk_sbk_10_1) = EVT_EXIT_WALK(60, sbk_11_ENTRY_0, "sbk_10", sbk_10_ENTRY_1);
EvtScript N(EVS_ExitWalk_sbk_12_0) = EVT_EXIT_WALK(60, sbk_11_ENTRY_1, "sbk_12", sbk_12_ENTRY_0);
EvtScript N(EVS_ExitWalk_sbk_01_3) = EVT_EXIT_WALK(60, sbk_11_ENTRY_2, "sbk_01", sbk_01_ENTRY_3);
EvtScript N(EVS_ExitWalk_sbk_21_2) = EVT_EXIT_WALK(60, sbk_11_ENTRY_3, "sbk_21", sbk_21_ENTRY_2);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_10_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_12_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_01_3)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilin, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_21_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilis, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    IfEq(GB_StoryProgress, STORY_CH2_GOT_PULSE_STONE)
        Call(DisablePulseStone, FALSE)
    EndIf
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    Call(N(SpawnSunEffect))
    Call(SetMusicTrack, 0, SONG_DRY_DRY_DESERT, 0, 8)
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Return
    End
};
