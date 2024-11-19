#include "mgm_02.h"

#if VERSION_PAL
s32 N(get_tattle)(void) {
    s32 msgID = MSG_MapTattle_mgm_02;
    if (N(pal_variable) != 0) {
        msgID = MSG_NONE;
    }
    return msgID;
}
#endif

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
#if VERSION_PAL
    .tattle = { .get = &N(get_tattle) },
#else
    .tattle = { MSG_MapTattle_mgm_02 },
#endif
};
