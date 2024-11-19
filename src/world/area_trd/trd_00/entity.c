#include "trd_00.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_Refund) = EVT_OPEN_CHEST(ITEM_REFUND, GF_TRD00_Chest_Refund);
EvtScript N(EVS_OpenChest_FPPlus) = EVT_OPEN_CHEST(ITEM_FP_PLUS_B, GF_TRD00_Chest_FPPlusB);

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_2_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_2_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_2_SCRIPT))
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_2_PARAMS)
    Return
    End
};
