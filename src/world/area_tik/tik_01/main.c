#include "tik_01.h"

#include "world/common/atomic/TexturePan.inc.c"

#include "world/common/entity/Pipe.inc.c"

EvtScript N(EVS_ExitWalk_tik_06_0) = EVT_EXIT_WALK(60, tik_01_ENTRY_0, "tik_06", tik_06_ENTRY_0);

EvtScript N(EVS_ExitWalk_tik_03_0) = EVT_EXIT_WALK(60, tik_01_ENTRY_1, "tik_03", tik_03_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tik_03_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_tik_06_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_TIK_01)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    Call(PlaySound, SOUND_LOOP_TIK01_WATER)
    // water streams
    Call(SetTexPanner, MODEL_nagare1, TEX_PANNER_1)
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
    Exec(N(EVS_SetupDrips))
    Call(GetEntryID, LVar0)
    IfLt(LVar0, tik_01_ENTRY_2)
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
    Else
        Set(LVarA, Ref(N(EVS_BindExitTriggers)))
        Exec(N(EVS_Pipe_EnterVertical))
    EndIf
    Wait(1)
    Return
    End
};
