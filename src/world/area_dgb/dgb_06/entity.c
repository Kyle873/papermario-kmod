#include "dgb_06.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_TubbaKey) = EVT_OPEN_CHEST(ITEM_TUBBA_CASTLE_KEY, GF_DGB06_Chest_CastleKey1);

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    Return
    End
};
