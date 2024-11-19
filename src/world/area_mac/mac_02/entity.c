#include "mac_02.h"
#include "entity.h"

#include "world/common/todo/RemovePadlock.inc.c"

s32 N(ItemList_OddKey)[] = {
    ITEM_ODD_KEY,
    ITEM_NONE
};

EvtScript N(EVS_ChooseItem_OddKey) = {
    Call(ShowKeyChoicePopup)
    IfEq(LVar0, 0)
        Call(ShowMessageAtScreenPos, MSG_Menus_00D8, 160, 40)
        Call(CloseChoicePopup)
        Return
    EndIf
    IfEq(LVar0, -1)
        Call(CloseChoicePopup)
        Return
    EndIf
    Call(PlaySoundAt, SOUND_USE_KEY, SOUND_SPACE_DEFAULT, -470, 30, -155)
    Set(LVar0, MV_BlueHouseLockEntityID)
    Call(N(RemovePadlock))
    Wait(5)
    Call(RemoveKeyItemAt, LVar1)
    Set(GF_MAC02_UnlockedHouse, TRUE)
    Call(CloseChoicePopup)
    Unbind
    Return
    End
};

EvtScript N(EVS_ReadSign) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_016B, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_OnInspect_StreetSign) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0171, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    Call(GetEntryID, LVar0)
    IfEq(LVar0, mac_02_ENTRY_5)
        IfEq(GF_MAC02_UnlockedHouse, FALSE)
            EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
            Set(MV_BlueHouseLockEntityID, LVar0)
            BindPadlock(Ref(N(EVS_ChooseItem_OddKey)), TRIGGER_WALL_PRESS_A, EVT_ENTITY_INDEX(0), Ref(N(ItemList_OddKey)), 0, 1)
        EndIf
    EndIf
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    EVT_MAKE_ENTITY(Signpost, GEN_SIGNPOST_1_PARAMS)
    Call(AssignScript, Ref(GEN_SIGNPOST_1_SCRIPT))
    BindTrigger(Ref(N(EVS_OnInspect_StreetSign)), TRIGGER_WALL_PRESS_A, COLLIDER_sign, 1, 0)
    Return
    End
};
