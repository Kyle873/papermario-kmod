#include "obk_03.h"
#include "entity.h"
#include "sprite/player.h"

extern EvtScript N(EVS_HitSwitch_Second);
extern EvtScript N(EVS_HitSwitch_Third);

#include "world/common/todo/SetEntityPosition.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

EvtScript N(EVS_SecondSwitch_Drop) = {
    Call(DisablePlayerInput, TRUE)
    Thread
        Wait(10)
        Call(N(GetEntityPosition), LVar7, LVarA, LVarB, LVarC)
        Call(PlaySoundAt, SOUND_FALL_QUICK, SOUND_SPACE_DEFAULT, LVarA, LVarB, LVarC)
    EndThread
    Call(MakeLerp, LVar3, LVar5, LVar6, EASING_QUADRATIC_IN)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), LVar7, LVar2, LVar0, LVar4)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
        Wait(1)
    EndLoop
    Call(N(GetEntityPosition), LVar7, LVarA, LVarB, LVarC)
    Call(PlaySoundAt, SOUND_OBJECT_LAND, SOUND_SPACE_DEFAULT, LVarA, LVarB, LVarC)
    Call(ShakeCam, CAM_DEFAULT, 0, LVar8, Float(1.0))
    Wait(10)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_ThirdSwitch_Drop) = {
    Call(DisablePlayerInput, TRUE)
    Thread
        Wait(10)
        Call(N(GetEntityPosition), LVar7, LVarA, LVarB, LVarC)
        Call(PlaySoundAt, SOUND_LARGE_FALL_QUICK, SOUND_SPACE_DEFAULT, LVarA, LVarB, LVarC)
    EndThread
    Call(MakeLerp, LVar3, LVar5, LVar6, EASING_QUADRATIC_IN)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), LVar7, LVar2, LVar0, LVar4)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
        Wait(1)
    EndLoop
    Call(N(GetEntityPosition), LVar7, LVarA, LVarB, LVarC)
    Call(PlaySoundAt, SOUND_HEAVY_OBJECT_DROP, SOUND_SPACE_DEFAULT, LVarA, LVarB, LVarC)
    Call(ShakeCam, CAM_DEFAULT, 0, LVar8, Float(1.0))
    Wait(10)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

// if the player is under the switch as it falls, jump out of the way
EvtScript N(EVS_SecondSwitch_JumpToSafety) = {
    Call(GetPlayerPos, LVar0, LVar1, LVar2)
    IfLe(LVar0, 340)
        Return
    EndIf
    IfGe(LVar0, 372)
        Return
    EndIf
    IfLe(LVar2, -115)
        Return
    EndIf
    IfGe(LVar2, -85)
        Return
    EndIf
    Call(SetPlayerAnimation, ANIM_MarioW2_FlailArms)
    Wait(8 * DT)
    Call(InterpPlayerYaw, 90, 0)
    Wait(2)
    Call(SetPlayerJumpscale, Float(2.0))
    Call(SetPlayerAnimation, ANIM_Mario1_Flail)
    Call(PlayerJump1, 330, -210, -49, 10 * DT)
    Call(SetPlayerAnimation, ANIM_Mario1_Idle)
    Wait(5 * DT)
    Return
    End
};

// if the player is under the switch as it falls, jump out of the way
EvtScript N(EVS_ThirdSwitch_JumpToSafety) = {
    Call(GetPlayerPos, LVar0, LVar1, LVar2)
    IfLe(LVar0, 394)
        Return
    EndIf
    IfGe(LVar0, 470)
        Return
    EndIf
    IfLe(LVar2, -135)
        Return
    EndIf
    IfGe(LVar2, -62)
        Return
    EndIf
    Call(SetPlayerAnimation, ANIM_MarioW2_FlailArms)
    Wait(8 * DT)
    Call(InterpPlayerYaw, 90, 0)
    Wait(2)
    Call(SetPlayerJumpscale, Float(2.0))
    Call(SetPlayerAnimation, ANIM_Mario1_Flail)
    Call(PlayerJump1, 352, -210, -5, 10 * DT)
    Call(SetPlayerAnimation, ANIM_Mario1_Idle)
    Wait(5 * DT)
    Return
    End
};

EvtScript N(EVS_HitSwitch_First) = {
    EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
    Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
    Call(AssignScript, Ref(N(EVS_HitSwitch_Second)))
    Exec(N(EVS_SecondSwitch_JumpToSafety))
    Set(LVar2, 360)
    Set(LVar3, 0)
    Set(LVar4, -100)
    Set(LVar5, -210)
    Set(LVar6, 20 * DT)
    Set(LVar7, LVar0)
    Set(LVar8, 5)
    ExecWait(N(EVS_SecondSwitch_Drop))
    Return
    End
};

EvtScript N(EVS_HitSwitch_Second) = {
    EVT_MAKE_ENTITY(HugeBlueSwitch, GEN_HUGE_BLUE_SWITCH_1_PARAMS)
    Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_HUGE_BLUE_SWITCH_1_FLAG))
    Call(AssignScript, Ref(N(EVS_HitSwitch_Third)))
    Exec(N(EVS_ThirdSwitch_JumpToSafety))
    Set(LVar2, 440)
    Set(LVar3, 0)
    Set(LVar4, -100)
    Set(LVar5, -210)
    Set(LVar6, 20 * DT)
    Set(LVar7, LVar0)
    Set(LVar8, 30)
    ExecWait(N(EVS_ThirdSwitch_Drop))
    Return
    End
};

EvtScript N(EVS_HitSwitch_Third) = {
    IfLt(GB_StoryProgress, STORY_CH3_HIT_HUGE_BLUE_SWITCH)
        Exec(N(EVS_Scene_DropSteps))
        Set(GB_StoryProgress, STORY_CH3_HIT_HUGE_BLUE_SWITCH)
    EndIf
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfLt(GB_StoryProgress, STORY_CH3_HIT_HUGE_BLUE_SWITCH)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_2_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_2_FLAG))
        Call(AssignScript, Ref(N(EVS_HitSwitch_First)))
    EndIf
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_1_PARAMS)
    Call(AssignCrateFlag, GEN_WOODEN_CRATE_1_FLAG)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_2_PARAMS)
    EVT_MAKE_ENTITY(WoodenCrate, GEN_WOODEN_CRATE_3_PARAMS)
    Return
    End
};
