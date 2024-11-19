#include "flo_13.h"
#include "entity.h"

EvtScript N(EVS_OnBlast_Rock) = {
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o85, COLLIDER_FLAGS_UPPER_MASK)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    IfEq(GF_FLO13_Item_MegaSmash, FALSE)
        EVT_MAKE_ENTITY(BombableRock, GEN_BOMBABLE_ROCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_BOMBABLE_ROCK_1_SCRIPT))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o85, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Return
    End
};
