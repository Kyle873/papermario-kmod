#include "kzn_18.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    Return
    End
};
