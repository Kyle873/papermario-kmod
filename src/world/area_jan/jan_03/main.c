#include "jan_03.h"
#include "effects.h"

#include "world/common/entity/Pipe.inc.c"

#include "world/common/atomic/TexturePan.inc.c"

API_CALLABLE(N(SpawnSunEffect)) {
    fx_sun(FX_SUN_FROM_LEFT, 0.0f, 0.0f, 0.0f, 0.0f, 0);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_ExitWalk_jan_02_1) = EVT_EXIT_WALK(60, jan_03_ENTRY_0, "jan_02", jan_02_ENTRY_1);
EvtScript N(EVS_ExitWalk_jan_05_0) = EVT_EXIT_WALK(60, jan_03_ENTRY_1, "jan_05", jan_05_ENTRY_0);
EvtScript N(EVS_ExitWalk_jan_22_0) = EVT_EXIT_WALK(60, jan_03_ENTRY_2, "jan_22", jan_22_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_jan_02_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_05_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilinw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_jan_22_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
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
    IfNe(LVar0, jan_03_ENTRY_3)
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
    Else
        IfEq(GF_JAN03_WarpPipe, FALSE)
            Call(DisablePlayerInput, TRUE)
            Call(DisablePlayerPhysics, TRUE)
            Call(GetPlayerPos, LVar0, LVar1, LVar2)
            Call(SetNpcPos, NPC_PARTNER, LVar0, LVar1, LVar2)
            Call(SetPlayerPos, LVar0, NPC_DISPOSE_POS_Y, LVar2)
            Wait(30)
            Call(PlaySound, SOUND_GROW)
            Set(GF_JAN03_WarpPipe, TRUE)
            Wait(30)
            Call(SetPlayerActionState, ACTION_STATE_IDLE)
            Call(SetPlayerPos, LVar0, LVar1, LVar2)
            Call(SetNpcPos, NPC_PARTNER, LVar0, LVar1, LVar2)
            Call(DisablePlayerPhysics, FALSE)
            Call(DisablePlayerInput, FALSE)
        EndIf
        Set(LVarA, Ref(N(EVS_BindExitTriggers)))
        ExecWait(N(EVS_Pipe_EnterVertical))
        Wait(1)
    EndIf
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH5_YOSHI_CHILDREN_ARE_MISSING)
            Call(MakeNpcs, FALSE, Ref(N(CrisisNPCs)))
        CaseLt(STORY_CH5_ZIP_LINE_READY)
            Call(MakeNpcs, FALSE, Ref(N(ChapterNPCs)))
        CaseEq(STORY_CH5_STAR_SPRIT_DEPARTED)
            Call(MakeNpcs, FALSE, Ref(N(ChapterNPCs)))
        CaseGt(STORY_CH5_STAR_SPRIT_DEPARTED)
            Call(MakeNpcs, FALSE, Ref(N(AfterNPCs)))
        CaseDefault
            Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    EndSwitch
    ExecWait(N(EVS_MakeEntities))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitw, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitnw, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilite, COLLIDER_FLAGS_UPPER_MASK)
    Exec(N(EVS_EnterMap))
    Wait(1)
    Exec(N(EVS_SetupMusic))
    Call(PlaySound, SOUND_LOOP_JAN_BEACH_WAVES)
    Exec(N(EVS_SetupRooms))
    Exec(N(EVS_SetupFoliage))
    // waves
    Call(SetTexPanner, MODEL_o121, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_o371, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // water surface
    Call(SetTexPanner, MODEL_o119, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetModelFlags, MODEL_o189, MODEL_FLAG_BILLBOARD, TRUE)
    Call(SetModelFlags, MODEL_o186, MODEL_FLAG_BILLBOARD, TRUE)
    Call(SetModelFlags, MODEL_o192, MODEL_FLAG_BILLBOARD, TRUE)
    Call(SetModelFlags, MODEL_o195, MODEL_FLAG_BILLBOARD, TRUE)
    Exec(N(EVS_SetupShop))
    Return
    End
};
