#include "obk_02.h"
#include "entity.h"
#include "sprite/player.h"

EvtScript N(EVS_ChestTrap) = {
    Wait(15)
    Thread
        Call(PlaySoundAt, SOUND_OBK_CHANDELIER_RELEASE, SOUND_SPACE_DEFAULT, 4, 26, -12)
        Call(MakeLerp, 0, -80, 10 * DT, EASING_QUADRATIC_IN)
        Loop(0)
            Call(UpdateLerp)
            Call(TranslateGroup, MODEL_shiyan, 0, LVar0, 0)
            Wait(1)
            IfEq(LVar1, 0)
                BreakLoop
            EndIf
        EndLoop
        Call(PlaySoundAt, SOUND_OBK_CHANDELIER_STOP, SOUND_SPACE_DEFAULT, 4, 26, -12)
        Call(ShakeCam, CAM_DEFAULT, 0, 10, Float(1.5))
        Wait(40 * DT)
        Call(PlaySoundAt, SOUND_OBK_CHANDELIER_RETRACT, SOUND_SPACE_DEFAULT, 4, 26, -12)
        Call(MakeLerp, -80, 0, 20 * DT, EASING_LINEAR)
        Loop(0)
            Call(UpdateLerp)
            Call(TranslateGroup, MODEL_shiyan, 0, LVar0, 0)
            Wait(1)
            IfEq(LVar1, 0)
                BreakLoop
            EndIf
        EndLoop
    EndThread
    Wait(2)
    Call(SetPlayerAnimation, ANIM_MarioW2_FlailArms)
    Wait(48 * DT)
    Call(SetPlayerAnimation, ANIM_Mario1_Idle)
    Wait(20 * DT)
    Call(SetPlayerAnimation, ANIM_Mario1_Idle)
    Set(GF_OBK02_TriggeredChestTrap, TRUE)
    Wait(5 * DT)
    Return
    End
};

EvtScript N(EVS_OpenChest) = {
    Call(DisablePlayerInput, TRUE)
    ExecWait(N(EVS_ChestTrap))
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    Return
    End
};
