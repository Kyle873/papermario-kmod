#include "sbk_30.h"

s32 N(get_tattle)(void) {
    s32 tattle;
    if (evt_get_variable(NULL, GB_StoryProgress) > STORY_CH2_STAR_SPRIT_DEPARTED) {
        tattle = MSG_MapTattle_sbk_30_after;
    } else {
        tattle = MSG_MapTattle_sbk_30_before;
    }
    return  tattle;
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
