#include "mac_00.h"
#include "entity.h"

EvtScript N(EVS_Inspect_StreetSign) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_016F, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    BindTrigger(Ref(N(EVS_Inspect_StreetSign)), TRIGGER_WALL_PRESS_A, COLLIDER_sign, 1, 0)
    Return
    End
};
