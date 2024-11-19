#include "jan_22.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    Thread
        Label(0)
            IfLt(GB_StoryProgress, STORY_CH5_ZIP_LINE_READY)
                Wait(1)
                Goto(0)
            EndIf
        EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EndThread
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ENTITY(PinkFlower, GEN_PINK_FLOWER_1_PARAMS)
    Return
    End
};
