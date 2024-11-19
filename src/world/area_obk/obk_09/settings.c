#include "common.h"
#include "message_ids.h"
#include "map.h"

#include "../obk.h"
#include "obk_09.h"

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .tattle = { MSG_MapTattle_obk_09 },
};
