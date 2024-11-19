#include "sbk_24.h"
#include "entity.h"

extern EvtScript N(EVS_Main);
extern EvtScript N(EVS_SetupFoliage);
extern EvtScript N(EVS_MakeEntities);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_sbk_24 },
};

#include "world/common/todo/SpawnSunEffect.inc.c"

EvtScript N(EVS_ExitWalk_sbk_23_1) = EVT_EXIT_WALK(60, sbk_24_ENTRY_0, "sbk_23", sbk_23_ENTRY_1);
EvtScript N(EVS_ExitWalk_sbk_25_0) = EVT_EXIT_WALK(60, sbk_24_ENTRY_1, "sbk_25", sbk_25_ENTRY_0);
EvtScript N(EVS_ExitWalk_sbk_14_3) = EVT_EXIT_WALK(60, sbk_24_ENTRY_2, "sbk_14", sbk_14_ENTRY_3);
EvtScript N(EVS_ExitWalk_sbk_34_2) = EVT_EXIT_WALK(60, sbk_24_ENTRY_3, "sbk_34", sbk_34_ENTRY_2);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_23_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_25_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_14_3)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilin, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_sbk_34_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilis, 1, 0)
    Return
    End
};

EvtScript N(D_80240600_93B230) = {
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(sbk_24_ENTRY_4)
            Exec(N(EVS_BindExitTriggers))
        CaseDefault
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
    EndSwitch
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
    ExecWait(N(EVS_MakeEntities))
    Call(N(SpawnSunEffect))
    Call(SetMusicTrack, 0, SONG_DRY_DRY_DESERT, 0, 8)
    Exec(N(D_80240600_93B230))
    Wait(1)
    Exec(N(EVS_SetupFoliage))
    Return
    End
};
