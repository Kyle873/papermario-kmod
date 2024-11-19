#include "sam_10.h"
#include "entity.h"

API_CALLABLE(N(SetStarStoneItemScale)) {
    get_item_entity(script->varTable[0])->scale = 0.8f;
    return ApiStatus_DONE2;
}

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(RedBlock, GEN_RED_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_RED_BLOCK_1_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    IfLt(GB_StoryProgress, STORY_CH7_RAISED_FROZEN_STAIRS)
        Call(DropResizableItemEntity, ITEM_STAR_STONE, NPC_DISPOSE_LOCATION, ITEM_SPAWN_MODE_DECORATION, 0)
        Call(N(SetStarStoneItemScale))
        Set(MV_StarStoneItemID, LVar0)
    Else
        Call(DropResizableItemEntity, ITEM_STAR_STONE, -117, 179, -55, ITEM_SPAWN_MODE_DECORATION, 0)
        Call(N(SetStarStoneItemScale))
    EndIf
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    Return
    End
};
