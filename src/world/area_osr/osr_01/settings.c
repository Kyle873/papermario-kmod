#include "osr_01.h"

s32 N(map_init)(void) {
    if (gGameStatusPtr->entryID == osr_01_ENTRY_3) {
        sprintf(wMapBgName, "hos_bg");
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
    .tattle = { MSG_MapTattle_osr_01 },
};
