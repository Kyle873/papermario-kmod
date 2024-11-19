#include "tik_25.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_tik_24_0) = EVT_EXIT_WALK(60, tik_25_ENTRY_0, "tik_24", tik_24_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tik_24_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    Return
    End
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

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_TIK_25)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    Exec(N(EVS_SetupDrips))
    Call(SetTexPanner, MODEL_mizu, TEX_PANNER_0)
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Wait(1)
    Return
    End
};
