#include "kkj_17.h"

// immediately remove the item from Peach's inventory, keeping only the flag
EvtScript N(EVS_AutoRemoveDeepFocus) = {
    Loop(0)
        IfEq(GF_KKJ17_Item_DeepFocus, TRUE)
            BreakLoop
        EndIf
        Wait(1)
    EndLoop
    Wait(10)
    Call(RemoveItem, ITEM_DEEP_FOCUS_A)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    IfLt(GB_StoryProgress, STORY_CH8_REACHED_PEACHS_CASTLE)
        IfEq(GF_KKJ17_Item_DeepFocus, FALSE)
            Exec(N(EVS_AutoRemoveDeepFocus))
        EndIf
    EndIf
    Return
    End
};
