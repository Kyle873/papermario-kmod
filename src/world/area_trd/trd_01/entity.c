#include "trd_01.h"
#include "entity.h"

extern EvtScript N(EVS_ExitDoors_trd_02_0);

EvtScript N(EVS_FocusCamOnLock) = {
    Label(0)
        IfEq(GF_TRD01_Item_FortressKey, TRUE)
            Call(AwaitPlayerApproach, 320, 0, 40)
            Call(UseSettingsFrom, CAM_DEFAULT, 220, 0, 0)
            Call(SetPanTarget, CAM_DEFAULT, 300, 0, 0)
            Call(SetCamDistance, CAM_DEFAULT, Float(350.0))
            Call(GetCamPosA, CAM_DEFAULT, LVar0, LVar1)
            Call(SetCamPosA, CAM_DEFAULT, Float(-64.0), LVar1)
            Call(SetCamSpeed, CAM_DEFAULT, Float(3.0))
            Call(PanToTarget, CAM_DEFAULT, 0, TRUE)
            Call(AwaitPlayerLeave, 320, 0, 60)
            Call(PanToTarget, CAM_DEFAULT, 0, FALSE)
        EndIf
        Wait(1)
        Goto(0)
    Return
    End
};

#include "world/common/todo/RemovePadlock.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

EvtScript N(EVS_UnlockDoors) = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    SuspendGroup(EVT_GROUP_FLAG_INTERACT)
    Call(ShowKeyChoicePopup)
    IfEq(LVar0, 0)
        Call(ShowMessageAtScreenPos, MSG_Menus_00D8, 160, 40)
        Call(CloseChoicePopup)
        ResumeGroup(EVT_GROUP_FLAG_INTERACT)
        Return
    EndIf
    IfEq(LVar0, -1)
        Call(CloseChoicePopup)
        ResumeGroup(EVT_GROUP_FLAG_INTERACT)
        Return
    EndIf
    Call(RemoveItem, ITEM_KOOPA_FORTRESS_KEY)
    Call(CloseChoicePopup)
    Set(GF_TRD01_UnlockedDoor, TRUE)
    Call(N(GetEntityPosition), MV_Padlock_EntityIndex, LVar0, LVar1, LVar2)
    Call(PlaySoundAt, SOUND_USE_KEY, SOUND_SPACE_DEFAULT, LVar0, LVar1, LVar2)
    Set(LVar0, MV_Padlock_EntityIndex)
    Call(N(RemovePadlock))
    Call(PanToTarget, CAM_DEFAULT, 0, FALSE)
    ResumeGroup(EVT_GROUP_FLAG_INTERACT)
    Unbind
    Return
    End
};

EvtScript N(EVS_BindLockTrigger) = {
    BindTrigger(Ref(N(EVS_ExitDoors_trd_02_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tte, 1, 0)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_TRD01_UnlockedDoor, FALSE)
        EVT_MAKE_ENTITY(Padlock, GEN_PADLOCK_1_PARAMS)
        Call(AssignScript, Ref(N(EVS_BindLockTrigger)))
        Set(MV_Padlock_EntityIndex, LVar0)
    EndIf
    IfLt(GB_StoryProgress, STORY_CH1_RAISED_SUBMERGED_STAIRS)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
    EndIf
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    IfEq(GF_TRD01_Defeated_KoopaGuard, TRUE)
        IfEq(GF_TRD01_Item_FortressKey, FALSE)
            EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
        EndIf
    EndIf
    Return
    End
};
