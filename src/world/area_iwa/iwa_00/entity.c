#include "iwa_00.h"
#include "entity.h"

EvtScript N(EVS_OnSmashBlock) = {
    Set(GF_IWA01_Hammer1Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_IWA01_Hammer1Block, FALSE)
        EVT_MAKE_ENTITY(Hammer1BlockWideZ, GEN_HAMMER1_BLOCK_WIDE_Z_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER1_BLOCK_WIDE_Z_1_SCRIPT))
    EndIf
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_1_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_2_PARAMS)
    Return
    End
};
