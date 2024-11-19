#include "sbk_54.h"
#include "entity.h"

TweesterPath N(TweesterPath1) = {
    GEN_PATH_1_PATH
    TWEESTER_PATH_LOOP
};

TweesterPath* N(TweesterPaths)[] = {
    &N(TweesterPath1),
    PTR_LIST_END
};

EvtScript N(EVS_GotoMap_sbk_45_4) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(GotoMap, Ref("sbk_45"), sbk_45_ENTRY_4)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Tweester, GEN_TWEESTER_1_PARAMS)
    Call(AssignScript, Ref(N(EVS_GotoMap_sbk_45_4)))
    Return
    End
};
