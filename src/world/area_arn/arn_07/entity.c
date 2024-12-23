#include "arn_07.h"
#include "entity.h"

#include "world/common/todo/RemovePadlock.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

EvtScript N(EVS_UnlockDoor) = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTimeFreezeMode, TIME_FREEZE_PARTIAL)
    Call(ShowKeyChoicePopup)
    IfEq(LVar0, 0)
        Call(ShowMessageAtScreenPos, MSG_Menus_00D8, 160, 40)
        Call(CloseChoicePopup)
        Call(SetTimeFreezeMode, TIME_FREEZE_NONE)
        Return
    EndIf
    IfEq(LVar0, -1)
        Call(CloseChoicePopup)
        Call(SetTimeFreezeMode, TIME_FREEZE_NONE)
        Return
    EndIf
    Call(RemoveItem, ITEM_MYSTICAL_KEY)
    Call(CloseChoicePopup)
    Set(GB_StoryProgress, STORY_CH3_UNLOCKED_WINDY_MILL)
    Call(N(GetEntityPosition), MV_Unk_00, LVar0, LVar1, LVar2)
    Call(PlaySoundAt, SOUND_USE_KEY, SOUND_SPACE_DEFAULT, LVar0, LVar1, LVar2)
    Set(LVar0, MV_Unk_00)
    Call(N(RemovePadlock))
    Call(SetTimeFreezeMode, TIME_FREEZE_NONE)
    Unbind
    Return
    End
};

EvtScript N(EVS_BindLockTrigger) = {
    BindTrigger(Ref(N(EVS_ExitDoor_arn_08_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tt3, 1, 0)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfLt(GB_StoryProgress, STORY_CH3_UNLOCKED_WINDY_MILL)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Call(AssignScript, Ref(N(EVS_BindLockTrigger)))
        Set(MV_Unk_00, LVar0)
    EndIf
    Return
    End
};
