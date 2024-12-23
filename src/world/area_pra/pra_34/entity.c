#include "pra_34.h"
#include "entity.h"

EvtScript N(EVS_Interact_Padlock) = {
    Set(GF_PRA34_UnlockedDoor, TRUE)
    BindTrigger(Ref(N(EVS_ExitDoors_pra_31_0)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittse, 1, 0)
    BindTrigger(Ref(N(EVS_ExitDoors_pra_31_2)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittne, 1, 0)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_PRA34_UnlockedDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Call(AssignScript, Ref(N(EVS_Interact_Padlock)))
        Set(MV_FarPadlockEntityID, LVar0)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_2_PARAMS)
        Call(AssignScript, Ref(N(EVS_Interact_Padlock)))
        Set(MV_NearPadlockEntityID, LVar0)
    EndIf
    Return
    End
};

