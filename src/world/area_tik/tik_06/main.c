#include "tik_06.h"

#include "world/common/entity/Pipe.inc.c"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_tik_01_0) = EVT_EXIT_WALK(60, tik_06_ENTRY_0, "tik_01", tik_01_ENTRY_0);
EvtScript N(EVS_ExitWalk_tik_18_0) = EVT_EXIT_WALK(60, tik_06_ENTRY_1, "tik_18", tik_18_ENTRY_0);

EvtScript N(EVS_GotoMap_mac_02_4) = {
    Call(GotoMap, Ref("mac_02"), mac_02_ENTRY_4)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_OnEnterPipe_Upward) = EVT_EXIT_PIPE_HORIZONTAL(tik_06_ENTRY_3,
    COLLIDER_o89, N(EVS_GotoMap_mac_02_4));

EvtScript N(EVS_GotoMap_tik_08_3) = {
    Call(GotoMap, Ref("tik_08"), tik_08_ENTRY_3)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_OnEnterPipe_Downward) = EVT_EXIT_PIPE_VERTICAL(tik_06_ENTRY_2,
    COLLIDER_o57, N(EVS_GotoMap_tik_08_3));

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tik_01_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_tik_18_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    BindTrigger(Ref(N(EVS_OnEnterPipe_Upward)), TRIGGER_WALL_PUSH, COLLIDER_o89, 1, 0)
    BindTrigger(Ref(N(EVS_OnEnterPipe_Downward)), TRIGGER_FLOOR_TOUCH, COLLIDER_o57, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(GetLoadType, LVar1)
    IfEq(LVar1, LOAD_FROM_FILE_SELECT)
        Exec(EnterSavePoint)
        Exec(N(EVS_BindExitTriggers))
        Return
    EndIf
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(tik_06_ENTRY_2)
            Set(LVarA, Ref(N(EVS_BindExitTriggers)))
            Exec(N(EVS_Pipe_EnterVertical))
        CaseEq(tik_06_ENTRY_3)
            Set(LVarA, Ref(N(EVS_BindExitTriggers)))
            Set(LVarB, COLLIDER_o89)
            Exec(N(EVS_Pipe_EnterHorizontal))
        CaseDefault
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_TIK_06)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Set(GF_MAP_ToadTownTunnels, TRUE)
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    Call(PlaySound, SOUND_LOOP_TIK06_WATER)
    Call(PlaySoundAtF, SOUND_LOOP_TIK06_FLOW2, SOUND_SPACE_WITH_DEPTH, -85, -180, 120)
    Call(PlaySoundAtF, SOUND_LOOP_TIK06_FLOW3, SOUND_SPACE_WITH_DEPTH, -25, -140, -130)
    Call(PlaySoundAtF, SOUND_LOOP_TIK06_FLOW4, SOUND_SPACE_WITH_DEPTH, -35, -180, 130)
    Exec(N(EVS_SetupDrips))
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
    // water falls
    Call(SetTexPanner, MODEL_taki, TEX_PANNER_4)
    Call(SetTexPanner, MODEL_o72, TEX_PANNER_4)
    Call(SetTexPanner, MODEL_o73, TEX_PANNER_4)
    Thread
        GEN_TEX_PANNER_4
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Set(GF_MAC01_RowfBadgesChosen, FALSE)
    Exec(N(EVS_EnterMap))
    Wait(1)
    Return
    End
};
