#include "isk_02.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_ISK02_UnlockedDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Set(MV_EntityID_Padlock, LVar0)
    EndIf
    Return
    End
};
