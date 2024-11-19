#include "sbk_14.h"
#include "entity.h"

TweesterPath N(DefaultTweesterPath) = {
    GEN_PATH_1_PATH
    TWEESTER_PATH_LOOP
};

TweesterPath* N(TweesterPaths)[] = {
    &N(DefaultTweesterPath),
    PTR_LIST_END
};

EvtScript N(EVS_GotoMap_sbk_05_4) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(GotoMap, Ref("sbk_05"), sbk_05_ENTRY_4)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Tweester, GEN_TWEESTER_1_PARAMS)
    Call(AssignScript, Ref(N(EVS_GotoMap_sbk_05_4)))
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_2_FLAG)
    Return
    End
};
