#include "hos_00.h"

s32 N(map_init)(void) {
    if (gGameStatusPtr->entryID == hos_00_ENTRY_3) {
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
    .tattle = { MSG_MapTattle_hos_00 },
};
