#include "tik_09.h"

#include "world/common/entity/Pipe.inc.c"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_CloseGates) = {
    Call(DisablePlayerInput, TRUE)
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTimeFreezeMode, TIME_FREEZE_PARTIAL)
    Call(PlaySound, SOUND_CHIME_BEGIN_AMBUSH)
    Call(PlaySoundAtCollider, COLLIDER_o59, SOUND_LARGE_GATE_OPEN, SOUND_SPACE_DEFAULT)
    Call(MakeLerp, 60, 0, 25, EASING_COS_IN_OUT)
    Loop(0)
        Call(UpdateLerp)
        Call(TranslateModel, MODEL_ew_kousi, 0, LVar0, 0)
        Call(TranslateModel, MODEL_ee_kousi, 0, LVar0, 0)
        Wait(1)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(PlaySoundAtCollider, COLLIDER_o59, SOUND_LARGE_GATE_CLOSE, SOUND_SPACE_DEFAULT)
    Call(ShakeCam, CAM_DEFAULT, 0, 5, Float(1.0))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_CLEAR_BITS, COLLIDER_o58, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_CLEAR_BITS, COLLIDER_o59, COLLIDER_FLAGS_UPPER_MASK)
    Call(DisablePlayerInput, FALSE)
    Wait(1)
    Call(SetTimeFreezeMode, TIME_FREEZE_NONE)
    Return
    End
};

EvtScript N(EVS_ExitWalk_tik_10_0) = EVT_EXIT_WALK(60, tik_09_ENTRY_0, "tik_10", tik_10_ENTRY_0);
EvtScript N(EVS_ExitWalk_tik_08_0) = EVT_EXIT_WALK(60, tik_09_ENTRY_1, "tik_08", tik_08_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tik_10_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_tik_08_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(DisablePlayerInput, TRUE)
    Call(GetEntryID, LVar0)
    IfEq(LVar0, tik_09_ENTRY_2)
        EVT_ENTER_PIPE_VERTICAL(N(EVS_BindExitTriggers))
    Else
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        ExecWait(EnterWalk)
        IfEq(GF_TIK09_Defeated_Ambush, FALSE)
            ExecWait(N(EVS_CloseGates))
        EndIf
    EndIf
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

#include "../common/Flotsam.inc.c"

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_TIK_09)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    Call(PlaySound, SOUND_LOOP_TIK09_WATER)
    Call(PlaySoundAtF, SOUND_LOOP_TIK09_FLOW2, SOUND_SPACE_WITH_DEPTH, -190, -20, -120)
    Call(PlaySoundAtF, SOUND_LOOP_TIK09_FLOW4, SOUND_SPACE_WITH_DEPTH, 50, -20, -120)
    Call(PlaySoundAtF, SOUND_LOOP_TIK09_FLOW3, SOUND_SPACE_WITH_DEPTH, 290, -20, -120)
    Exec(N(EVS_SetupDrips))
    // water surface
    Call(SetTexPanner, MODEL_nagare, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o84, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o85, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o86, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // waterfalls
    Call(SetTexPanner, MODEL_taki, TEX_PANNER_4)
    Thread
        GEN_TEX_PANNER_4
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // water spreading
    Call(SetTexPanner, MODEL_takib, TEX_PANNER_5)
    Thread
        GEN_TEX_PANNER_5
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // water merging and draining
    Call(SetTexPanner, MODEL_nagare2, TEX_PANNER_6)
    Call(SetTexPanner, MODEL_o87, TEX_PANNER_6)
    Call(SetTexPanner, MODEL_o88, TEX_PANNER_6)
    Call(SetTexPanner, MODEL_o89, TEX_PANNER_6)
    Thread
        GEN_TEX_PANNER_6
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetRenderMode, MODEL_o90, RENDER_MODE_SURFACE_XLU_LAYER2)
    Call(SetRenderMode, MODEL_nagab, RENDER_MODE_SURFACE_XLU_LAYER2)
    Thread
        Set(LVar2, MODEL_bin)
        Exec(N(EVS_Flotsam_Bobbing))
        Wait(5)
        Set(LVar2, MODEL_kan1)
        Exec(N(EVS_Flotsam_Bobbing))
        Wait(5)
        Set(LVar2, MODEL_kan2)
        Exec(N(EVS_Flotsam_Bobbing))
    EndThread
    Call(TranslateModel, MODEL_ew_kousi, 0, 60, 0)
    Call(TranslateModel, MODEL_ee_kousi, 0, 60, 0)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o58, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o59, COLLIDER_FLAGS_UPPER_MASK)
    Call(ClearAmbientSounds, 250)
    Exec(N(EVS_EnterMap))
    Wait(1)
    Return
    End
};
