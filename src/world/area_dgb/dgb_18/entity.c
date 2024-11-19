#include "dgb_18.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_MysticalKey) = {
    Set(GF_DGB18_Chest_MysticalKey, TRUE)
    Call(AddItem, ITEM_MYSTICAL_KEY, EVT_IGNORE_ARG)
    Call(SetNpcVar, NPC_Yakkey, 0, 1)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    Return
    End
};
