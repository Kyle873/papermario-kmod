#include "tik_03.h"

#include "world/common/entity/Pipe.inc.c"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_tik_01_1) = EVT_EXIT_WALK(60, tik_03_ENTRY_0, "tik_01", tik_01_ENTRY_1);

EvtScript N(EVS_GotoMap_tik_04_2) = {
    Call(GotoMap, Ref("tik_04"), tik_04_ENTRY_2)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitPipe_tik_04_2) = EVT_EXIT_PIPE_HORIZONTAL(tik_03_ENTRY_1, COLLIDER_o46, N(EVS_GotoMap_tik_04_2));

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tik_01_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    BindTrigger(Ref(N(EVS_ExitPipe_tik_04_2)), TRIGGER_WALL_PUSH, COLLIDER_o46, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(tik_03_ENTRY_1)
            EVT_ENTER_PIPE_HORIZONTAL(COLLIDER_o46, N(EVS_BindExitTriggers))
        CaseDefault
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_TIK_03)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupDrips))
    // water streams
    Call(SetTexPanner, MODEL_nagare, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // water leaking
    Call(SetTexPanner, MODEL_mizu, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_mizu2, TEX_PANNER_3)
    Thread
        GEN_TEX_PANNER_3
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // waterfalls
    Call(SetTexPanner, MODEL_taki, TEX_PANNER_4)
    Thread
        GEN_TEX_PANNER_4
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Exec(N(EVS_SetupPlatforms))
    Call(GetDemoState, LVar0)
    IfNe(LVar0, DEMO_STATE_NONE)
        BindTrigger(Ref(N(EVS_ExitPipe_tik_04_2)), TRIGGER_WALL_PUSH, COLLIDER_o46, 1, 0)
        ExecWait(N(EVS_PlayDemoScene))
        Return
    EndIf
    Exec(N(EVS_SetupMusic))
    Call(PlaySound, SOUND_LOOP_TIK03_WATER)
    Call(PlaySoundAtF, SOUND_LOOP_TIK03_FLOW1, SOUND_SPACE_WITH_DEPTH, -10, -20, 120)
    Exec(N(EVS_EnterMap))
    Wait(1)
    Return
    End
};
