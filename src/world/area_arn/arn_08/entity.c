#include "arn_08.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfLt(GB_StoryProgress, STORY_CH3_WENT_DOWN_THE_WELL)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_1_PARAMS)
    EndIf
    Return
    End
};
