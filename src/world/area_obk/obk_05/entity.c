#include "obk_05.h"
#include "entity.h"

EvtScript N(EVS_OnSmashFloor) = {
    Set(GF_OBK05_BoardedFloor, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_OBK05_BoardedFloor, FALSE)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_1_PARAMS)
        Call(AssignScript, Ref(GEN_BOARDED_FLOOR_1_SCRIPT))
    EndIf
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_1_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_2_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_3_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_4_PARAMS)
    Return
    End
};
