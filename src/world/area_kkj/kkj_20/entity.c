#include "kkj_20.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_LastStand) = {
    Set(LVarA, ITEM_LAST_STAND)
    Call(DisablePlayerInput, TRUE)
    Set(LVar0, LVarA)
    ExecWait(N(EVS_Chest_ShowGotItem))
    IfGe(GB_StoryProgress, STORY_CH8_REACHED_PEACHS_CASTLE)
        Call(AddItem, LVarA, LVar0)
    EndIf
    Set(GF_KKJ20_Chest_LastStand, TRUE)
    Wait(15)
    Call(DisablePlayerInput, FALSE)
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
