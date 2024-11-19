#include "jan_00.h"
#include "entity.h"

EvtScript N(D_80245860_B25DA0) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    Call(GetEntryID, LVar0)
    IfNe(LVar0, jan_00_ENTRY_0)
        Exec(N(D_80245860_B25DA0))
    EndIf
    EVT_MAKE_ENTITY(SpinningFlower, GEN_SPINNING_FLOWER_1_PARAMS)
    Return
    End
};
