#include "dgb_10.h"
#include "entity.h"

EvtScript N(EVS_BreakFloor1) = {
    Set(GF_DGB10_BoardedFloor1, TRUE)
    Return
    End
};

EvtScript N(EVS_BreakFloor2) = {
    Set(GF_DGB10_BoardedFloor2, TRUE)
    Return
    End
};

EvtScript N(EVS_BreakFloor3) = {
    Set(GF_DGB10_BoardedFloor3, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_DGB10_BoardedFloor1, FALSE)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_1_PARAMS)
        Call(AssignScript, Ref(GEN_BOARDED_FLOOR_1_SCRIPT))
    EndIf
    IfEq(GF_DGB10_BoardedFloor2, FALSE)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_2_PARAMS)
        Call(AssignScript, Ref(GEN_BOARDED_FLOOR_2_SCRIPT))
    EndIf
    IfEq(GF_DGB10_BoardedFloor3, FALSE)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_3_PARAMS)
        Call(AssignScript, Ref(GEN_BOARDED_FLOOR_3_SCRIPT))
    EndIf
    Return
    End
};
