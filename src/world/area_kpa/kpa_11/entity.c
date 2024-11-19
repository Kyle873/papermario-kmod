#include "kpa_11.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    IfEq(GF_KPA11_Defeated_Guard, TRUE)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EndIf
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    Return
    End
};
