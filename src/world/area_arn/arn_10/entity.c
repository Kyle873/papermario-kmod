#include "arn_10.h"
#include "entity.h"

EvtScript N(EVS_ReadSign) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0182, 160, 40)
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
