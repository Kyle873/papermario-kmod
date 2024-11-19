#include "dgb_05.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_DGB05_BoardedFloor, FALSE)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_1_PARAMS)
    EndIf
    Return
    End
};
