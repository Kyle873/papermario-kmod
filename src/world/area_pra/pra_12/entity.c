#include "pra_12.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_PDownDUp) = EVT_OPEN_CHEST(ITEM_P_DOWN_D_UP, GF_PRA12_Chest_PDownDUp);

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    Return
    End
};
