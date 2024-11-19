#include "trd_05.h"
#include "entity.h"

extern EvtScript N(EVS_OnHitTrapTrigger);

EvtScript N(EVS_MakeEntities) = {
    IfLt(GB_StoryProgress, STORY_CH1_MARIO_ACTIVATED_TRAP)
        EVT_MAKE_ENTITY(TriggerBlock, GEN_TRIGGER_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_TRIGGER_BLOCK_1_SCRIPT))
    EndIf
    Return
    End
};
