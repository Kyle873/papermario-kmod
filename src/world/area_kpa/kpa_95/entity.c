#include "kpa_95.h"
#include "entity.h"

#include "world/common/todo/RemovePadlock.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

s32 N(KeyList_PrisonCell)[] = {
    ITEM_PRISON_KEY,
    ITEM_NONE
};

EvtScript N(EVS_UnlockPrompt_PrisonCell) = {
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
    Call(RemoveKeyItemAt, LVar1)
    Set(GF_KPA95_UnlockedDoor, TRUE)
    Call(N(GetEntityPosition), MV_PadlockEntityID, LVar0, LVar1, LVar2)
    Call(PlaySoundAt, SOUND_USE_KEY, SOUND_SPACE_DEFAULT, LVar0, LVar1, LVar2)
    Set(LVar0, MV_PadlockEntityID)
    Call(N(RemovePadlock))
    Set(LVar1, 0)
    Wait(5)
    Call(CloseChoicePopup)
    BindTrigger(Ref(N(EVS_OpenCellDoor)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittn, 1, 0)
    Unbind
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KPA95_UnlockedDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Set(MV_PadlockEntityID, LVar0)
        BindPadlock(Ref(N(EVS_UnlockPrompt_PrisonCell)), TRIGGER_WALL_PRESS_A, EVT_ENTITY_INDEX(0), Ref(N(KeyList_PrisonCell)), 0, 1)
    Else
        BindTrigger(Ref(N(EVS_OpenCellDoor)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittn, 1, 0)
    EndIf
    IfEq(GF_KPA95_Defeated_Guard, TRUE)
        EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EndIf
    Return
    End
};
