#include "obk_07.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_BooWeight) = {
    Set(LVarA, ITEM_BOO_WEIGHT)
    Set(GB_StoryProgress, STORY_CH3_GOT_WEIGHT)
    Set(GF_OBK07_Chest_Weight, TRUE)
    ExecWait(N(EVS_Chest_GetItem))
    ExecWait(N(EVS_Scene_PlayerGotChestItem))
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    Return
    End
};
