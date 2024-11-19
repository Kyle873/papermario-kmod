#include "kkj_16.h"
#include "entity.h"

// immediately remove the item from Peach's inventory, keeping only the flag
EvtScript N(EVS_AutoRemovePowerRush) = {
    Loop(0)
        IfEq(GF_KKJ16_Item_PowerRush, TRUE)
            BreakLoop
        EndIf
        Wait(1)
    EndLoop
    Wait(10)
    Call(RemoveItem, ITEM_POWER_RUSH)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    IfLt(GB_StoryProgress, STORY_CH8_REACHED_PEACHS_CASTLE)
        IfEq(GF_KKJ16_Item_PowerRush, FALSE)
            Exec(N(EVS_AutoRemovePowerRush))
        EndIf
    EndIf
    Return
    End
};
