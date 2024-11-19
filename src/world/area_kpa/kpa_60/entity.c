#include "kpa_60.h"
#include "entity.h"

#include "world/common/todo/RemovePadlock.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

s32 N(KeyList_FrontDoor)[] = {
    ITEM_BOWSER_CASTLE_KEY,
    ITEM_NONE
};

EvtScript N(EVS_UnlockPrompt_FrontDoor) = {
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
    Set(GF_KPA62_UnlockedFrontDoor, TRUE)
    Call(N(GetEntityPosition), MV_PadLockEntityID, LVar0, LVar1, LVar2)
    Call(PlaySoundAt, SOUND_USE_KEY, SOUND_SPACE_DEFAULT, LVar0, LVar1, LVar2)
    Set(LVar0, MV_PadLockEntityID)
    Call(N(RemovePadlock))
    Set(LVar1, 0)
    Wait(5)
    Call(CloseChoicePopup)
    Unbind
    BindTrigger(Ref(N(EVS_ExitDoor_kpa_70_0)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittn, 1, 0)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KPA62_UnlockedFrontDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Set(MV_PadLockEntityID, LVar0)
        BindPadlock(Ref(N(EVS_UnlockPrompt_FrontDoor)), TRIGGER_WALL_PRESS_A, EVT_ENTITY_INDEX(0), Ref(N(KeyList_FrontDoor)), 0, 1)
    Else
        BindTrigger(Ref(N(EVS_ExitDoor_kpa_70_0)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittn, 1, 0)
    EndIf
    EVT_MAKE_ENTITY(RedBlock, GEN_RED_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_RED_BLOCK_1_FLAG)
    Return
    End
};
