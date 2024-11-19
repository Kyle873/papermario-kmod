#include "sam_04.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Set(MV_LetterItemID, LVar0)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    Return
    End
};
