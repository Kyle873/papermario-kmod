#include "obk_04.h"
#include "entity.h"

API_CALLABLE(N(SetItemAlpha)) {
    ItemEntity* item = get_item_entity(script->varTable[0]);

    set_item_entity_flags(script->varTable[0], ITEM_ENTITY_FLAG_TRANSPARENT);
    item->alpha = 255;
    return ApiStatus_DONE2;
}

EvtScript N(EVS_OnSmash_Floor) = {
    Set(GF_OBK04_BoardedFloor, TRUE)
    Return
    End
};

EvtScript N(EVS_OnSmash_Unused) = {
    Set(GF_OBK04_UnusedBoardedFloor, TRUE)
    Return
    End
};

EvtScript N(EVS_OpenGiantChest) = {
    Call(DisablePlayerInput, TRUE)
    Set(GF_OBK04_GiantChest, TRUE)
    Exec(N(EVS_Scene_BoosUnleashed))
    Call(DisablePlayerInput, FALSE)
EndIf
Return
End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(GiantChest, GEN_GIANT_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_GIANT_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_GIANT_CHEST_1_SCRIPT))
    Call(MakeItemEntity, ITEM_MENU_BOOTS2, NPC_DISPOSE_LOCATION, ITEM_SPAWN_MODE_DECORATION, 0)
    Call(N(SetItemAlpha))
    Set(MV_KeepAwayItem, LVar0)
    IfEq(GF_OBK04_BoardedFloor, FALSE)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_1_PARAMS)
        Call(AssignScript, Ref(GEN_BOARDED_FLOOR_1_SCRIPT))
    EndIf
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_1_PARAMS)
    Call(AssignCrateFlag, GEN_WOODEN_CRATE_1_FLAG)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_2_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_3_PARAMS)
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    Return
    End
};
