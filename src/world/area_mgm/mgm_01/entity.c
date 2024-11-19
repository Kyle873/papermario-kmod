#include "mgm_01.h"
#include "entity.h"

EvtScript N(EVS_ReadSign_HowToPlay) = {
    Call(DisablePlayerInput, TRUE)
    Call(N(SetMsgImgs_Panels))
    Call(ShowMessageAtScreenPos, MSG_MGM_003B, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Signpost, GEN_SIGNPOST_1_PARAMS)
    Call(AssignScript, Ref(GEN_SIGNPOST_1_SCRIPT))
    Return
    End
};
