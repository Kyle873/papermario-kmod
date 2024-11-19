#include "sam_06.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    Call(MakeItemEntity, ITEM_SNOWMAN_SCARF, NPC_DISPOSE_LOCATION, ITEM_SPAWN_MODE_DECORATION, 0)
    Set(MV_ScarfItemID, LVar0)
    Return
    End
};
