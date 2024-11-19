#include "kmr_04.h"
#include "entity.h"

EvtScript N(EVS_OnSmashBlock) = {
    Set(GF_KMR04_Hammer1Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KMR04_Hammer1Block, FALSE)
        EVT_MAKE_ENTITY(Hammer1Block, GEN_HAMMER1_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER1_BLOCK_1_SCRIPT))
    EndIf
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_3_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_4_PARAMS)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    Return
    End
};
