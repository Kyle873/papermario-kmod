#include "mac_03.h"
#include "entity.h"

EvtScript N(EVS_OnBlast_RailRock) = {
    Set(GF_MAC03_BombedRock, TRUE)
    Return
    End
};

EvtScript N(EVS_ReadSign_LilOInks) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0175, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_OnInspect_StreetSign) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0172, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    Call(GetDemoState, LVar0)
    IfEq(LVar0, DEMO_STATE_NONE)
        IfEq(GF_MAC03_BombedRock, FALSE)
            EVT_MAKE_ENTITY(BombableRock, GEN_BOMBABLE_ROCK_1_PARAMS)
            Call(AssignScript, Ref(GEN_BOMBABLE_ROCK_1_SCRIPT))
        EndIf
    EndIf
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ENTITY(Signpost, GEN_SIGNPOST_1_PARAMS)
    Call(AssignScript, Ref(GEN_SIGNPOST_1_SCRIPT))
    BindTrigger(Ref(N(EVS_OnInspect_StreetSign)), TRIGGER_WALL_PRESS_A, COLLIDER_sign, 1, 0)
    Return
    End
};
