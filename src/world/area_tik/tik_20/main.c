#include "tik_20.h"

#include "world/common/atomic/TexturePan.inc.c"

#include "world/common/entity/Pipe.inc.c"

EvtScript N(EVS_ExitWalk_tik_08_1) = EVT_EXIT_WALK(60, tik_20_ENTRY_0, "tik_08", tik_08_ENTRY_1);
EvtScript N(EVS_ExitWalk_tik_21_0) = EVT_EXIT_WALK(60, tik_20_ENTRY_1, "tik_21", tik_21_ENTRY_0);

EvtScript N(EVS_GotoMap_tik_23_1) = {
    Call(GotoMap, Ref("tik_23"), tik_23_ENTRY_1)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitPipe_tik_23_1) = EVT_EXIT_PIPE_VERTICAL(tik_20_ENTRY_2, COLLIDER_o109, N(EVS_GotoMap_tik_23_1));

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tik_08_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_tik_21_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    BindTrigger(Ref(N(EVS_ExitPipe_tik_23_1)), TRIGGER_FLOOR_TOUCH, COLLIDER_o109, 1, 0)
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_yuka, .pos = { GEN_LAVA_RESET_YUKA_VEC }},
    { .colliderID = COLLIDER_yuka2, .pos = { GEN_LAVA_RESET_YUKA2_VEC }},
    { .colliderID = NO_COLLIDER }
};

#define DROPLET_MODEL MODEL_sizuku
#include "../common/DripVolumes.inc.c"

DripVolumeList N(DripVolumes) = {
    .count = 2,
    .volumes = {
        {
            .minPos = { GEN_DRIP_VOLUME_1_MIN_XZ },
            .maxPos = { GEN_DRIP_VOLUME_1_MAX_XZ },
            .startY = GEN_DRIP_VOLUME_1_MAX_Y,
            .endY   = GEN_DRIP_VOLUME_1_MIN_Y,
            .duration = 60,
            .density  = 2,
        },
        {
            .minPos = { GEN_DRIP_VOLUME_2_MIN_XZ },
            .maxPos = { GEN_DRIP_VOLUME_2_MAX_XZ },
            .startY = GEN_DRIP_VOLUME_2_MAX_Y,
            .endY   = GEN_DRIP_VOLUME_2_MIN_Y,
            .duration = 60,
            .density  = 1,
        }
    }
};

EvtScript N(EVS_SetupDrips) = {
    Set(LVar0, Ref(N(DripVolumes)))
    Exec(N(EVS_CreateDripVolumes))
    Return
    End
};

#include "../common/Flotsam.inc.c"

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_TIK_20)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_toge, SURFACE_TYPE_SPIKES)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    Exec(N(EVS_SetupMusic))
    Call(PlaySound, SOUND_LOOP_TIK20_WATER)
    Exec(N(EVS_SetupDrips))
    Call(SetTexPanner, MODEL_nagare, TEX_PANNER_0)
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
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
    Wait(1)
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseOrEq(tik_20_ENTRY_0)
        CaseOrEq(tik_20_ENTRY_1)
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
        EndCaseGroup
        CaseEq(tik_20_ENTRY_2)
            EVT_ENTER_PIPE_VERTICAL(N(EVS_BindExitTriggers))
        EndCaseGroup
    EndSwitch
    Wait(1)
    Return
    End
};
