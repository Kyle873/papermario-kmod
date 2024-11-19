#include "trd_00.h"

extern EvtScript N(EVS_Main);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_trd_00 },
};

EvtScript N(EVS_SetupMusic) = {
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH1_ARRIVED_AT_KOOPA_FORTRESS)
            Call(SetMusicTrack, 0, SONG_KOOPA_FORTRESS, 1, 8)
            Call(PlaySound, SOUND_LOOP_TRD_WATER_EXT)
        CaseEq(STORY_CH1_BEGAN_PEACH_MISSION)
            Call(SetMusicTrack, 0, SONG_STAR_SPIRIT_THEME, 1, 8)
        CaseDefault
            Call(SetMusicTrack, 0, SONG_PLEASANT_PATH, 0, 8)
            Call(PlaySound, SOUND_LOOP_TRD_WATER_EXT)
    EndSwitch
    Call(UseDoorSounds, DOOR_SOUNDS_METAL)
    Return
    End
};
