#include "kpa_15.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_CastleKey) = EVT_OPEN_CHEST(ITEM_BOWSER_CASTLE_KEY, GF_KPA15_Chest_CastleKey2);

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    Return
    End
};

