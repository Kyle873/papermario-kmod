#include "sbk_33.h"
#include "entity.h"

TweesterPath N(DefaultTweesterPath) = {
    GEN_PATH_1_PATH
    TWEESTER_PATH_LOOP
};

TweesterPath* N(TweesterPaths)[] = {
    &N(DefaultTweesterPath),
    PTR_LIST_END
};

EvtScript N(EVS_GotoMap_sbk_24_4) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(GotoMap, Ref("sbk_24"), sbk_24_ENTRY_4)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ENTITY(Tweester, GEN_TWEESTER_1_PARAMS)
    Call(AssignScript, Ref(N(EVS_GotoMap_sbk_24_4)))
    Return
    End
};
