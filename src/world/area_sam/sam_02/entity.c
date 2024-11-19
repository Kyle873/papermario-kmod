#include "sam_02.h"
#include "entity.h"

EvtScript N(EVS_MakeToadHouseGifts) = {
    IfEq(GF_SAM02_MushroomPresents, TRUE)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_4_PARAMS)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_5_PARAMS)
    EndIf
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    Exec(N(EVS_MakeToadHouseGifts))
    Return
    End
};
