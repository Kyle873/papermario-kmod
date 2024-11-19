#include "flo_00.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfLt(GB_StoryProgress, STORY_EPILOGUE)
        EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EndIf
    Return
    End
};
