#include "kpa_15.h"

#if VERSION_JP
s32 N(get_tattle)(void) {
    if (!evt_get_variable(NULL, GF_KPA16_ShutOffLava)) {
        return MSG_MapTattle_kpa_15_before;
    } else {
        return MSG_MapTattle_kpa_15_after;
    }
}
#endif

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
#if VERSION_JP
    .tattle = { .get = &N(get_tattle) },
#else
    .tattle = { MSG_MapTattle_kpa_15 },
#endif
};
