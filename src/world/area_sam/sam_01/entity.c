#include "sam_01.h"
#include "entity.h"

#define NAME_SUFFIX _Entity
#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_AttackFXE) = EVT_OPEN_CHEST(ITEM_ATTACK_FX_E, GF_SAM01_Chest_AttackFXE);
#define NAME_SUFFIX

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    Call(SetEntityCullMode, 1)
    IfLt(GB_StoryProgress, STORY_CH7_MAYOR_MURDER_SOLVED)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
        Set(MV_PresentItemID, LVar0)
    EndIf
    Call(MakeItemEntity, ITEM_SNOWMAN_BUCKET, NPC_DISPOSE_LOCATION, ITEM_SPAWN_MODE_DECORATION, 0)
    Set(MV_BucketItemID, LVar0)
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    Return
    End
};
