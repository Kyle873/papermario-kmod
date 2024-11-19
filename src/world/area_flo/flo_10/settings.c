#include "flo_10.h"

s32 N(get_tattle)(void) {
    if (evt_get_variable(NULL, GB_StoryProgress) < STORY_CH6_FILLED_SPRING_WITH_WATER) {
        return MSG_MapTattle_flo_10_before;
    } else {
        return MSG_MapTattle_flo_10_after;
    }
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
