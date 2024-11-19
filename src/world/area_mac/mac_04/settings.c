#include "mac_04.h"

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_mac_04 },
};

s32 N(map_init)(void) {
    if (gGameStatusPtr->entryID == mac_04_ENTRY_4) {
        sprintf(wMapBgName, "hos_bg");
    }
    return FALSE;
}
