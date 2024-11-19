#include "obk_06.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_OBK06_Item_BoosPortrait, FALSE)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
        Thread
            Loop(0)
                IfNe(GF_OBK06_Item_BoosPortrait, FALSE)
                    Set(GB_StoryProgress, STORY_CH3_GOT_BOO_PORTRAIT)
                    BreakLoop
                EndIf
                Wait(1)
            EndLoop
        EndThread
    EndIf
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_1_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_2_PARAMS)
    Call(AssignCrateFlag, GEN_WOODEN_CRATE_2_FLAG)
    Return
    End
};
