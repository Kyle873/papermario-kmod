#include "kkj_00.h"

s32 N(map_init)(void) {
    if (evt_get_variable(NULL, GB_StoryProgress) >= STORY_EPILOGUE) {
        gGameStatusPtr->playerSpriteSet = PLAYER_SPRITES_COMBINED_EPILOGUE;
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
};
