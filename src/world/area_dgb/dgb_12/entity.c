#include "dgb_12.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_Chest_Interact) = EVT_OPEN_CHEST(ITEM_TUBBA_CASTLE_KEY, GF_DGB12_Chest_CastleKey1);

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    Return
    End
};
