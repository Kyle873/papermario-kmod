#include "tik_23.h"
#include "entity.h"

EvtScript N(EVS_OnSmashBlock) = {
    Set(GF_TIK23_Hammer2Block, TRUE)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o102, COLLIDER_FLAGS_UPPER_MASK)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_TIK23_Hammer2Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2Block, GEN_HAMMER2_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_1_SCRIPT))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o102, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_2_FLAG)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_3_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_3_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    Return
    End
};
