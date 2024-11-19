#include "sbk_23.h"
#include "entity.h"

TweesterPath N(DefaultTweesterPath) = {
    GEN_PATH_1_PATH
    TWEESTER_PATH_LOOP
};

TweesterPath* N(TweesterPaths)[] = {
    &N(DefaultTweesterPath),
    PTR_LIST_END
};

EvtScript N(EVS_GotoMap_sbk_14_4) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(GotoMap, Ref("sbk_14"), sbk_14_ENTRY_4)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Tweester, GEN_TWEESTER_1_PARAMS)
    Call(AssignScript, Ref(N(EVS_GotoMap_sbk_14_4)))
    Return
    End
};
