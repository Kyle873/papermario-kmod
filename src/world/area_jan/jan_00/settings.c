
#include "jan_00.h"

extern EvtScript N(EVS_Main);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_jan_00 },
};

EvtScript N(EVS_80241C10) = {
    Call(SetMusicTrack, 0, SONG_YOSHIS_VILLAGE, 0, 8)
    Call(ClearAmbientSounds, 250)
    Return
    End
};
