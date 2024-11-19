#include "kkj_14.h"

s32 N(map_init)(void) {
    if (evt_get_variable(NULL, GB_StoryProgress) == STORY_INTRO) {
        sprintf(wMapBgName, "nok_bg");
    }
    return FALSE;
}

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_kkj_14 },
};
