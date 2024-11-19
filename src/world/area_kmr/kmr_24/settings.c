#include "kmr_24.h"

// skip loading shape/hit/tex for this map
s32 N(map_init)(void) {
    return TRUE;
}

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
};
