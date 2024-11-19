#include "trd_09.h"

extern EvtScript N(EVS_Main);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_trd_09 },
};

EvtScript N(EVS_SetupMusic) = {
    IfEq(GB_StoryProgress, STORY_CH1_KOOPA_BROS_FIRING_BLASTERS)
        IfEq(GF_TRD09_Defeated_BillBlasters, FALSE)
            Call(SetMusicTrack, 0, SONG_BULLET_BILL_ASSAULT, 0, 8)
        Else
            Call(SetMusicTrack, 0, SONG_KOOPA_FORTRESS, 0, 8)
        EndIf
    Else
        Call(SetMusicTrack, 0, SONG_KOOPA_FORTRESS, 0, 8)
    EndIf
    Call(UseDoorSounds, DOOR_SOUNDS_METAL)
    Return
    End
};
