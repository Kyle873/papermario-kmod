#include "iwa_02.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_1_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_2_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_3_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};
