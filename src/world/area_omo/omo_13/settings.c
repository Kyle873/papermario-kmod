#include "omo_13.h"

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_omo_13 },
};
