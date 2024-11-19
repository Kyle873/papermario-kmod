#include "omo_01.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_OMO09_Defeated_CalculatorThief, TRUE)
        IfEq(GF_OMO01_Item_Calculator, FALSE)
            EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
        EndIf
    EndIf
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_2_FLAG)
    Return
    End
};
