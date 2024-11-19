#include "sbk_02.h"

s32 N(get_tattle)(void) {
    s32 tattle;
    if (evt_get_variable(NULL, GB_StoryProgress) > STORY_CH2_GOT_PULSE_STONE) {
        tattle = MSG_MapTattle_sbk_02_after;
    } else {
        tattle = MSG_MapTattle_sbk_02_before;
    }
    return tattle;
}

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { .get = &N(get_tattle) },
};
