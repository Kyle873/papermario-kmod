#include "jan_11.h"

#include "world/common/atomic/CreateDarkness.inc.c"

#include "world/common/entity/Pipe.inc.c"

#define DROPLET_MODEL MODEL_o140
#include "world/area_tik/common/DripVolumes.inc.c"

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
            .density  = 2,
        }
    }
};

EvtScript N(EVS_SetupDrips) = {
    Set(LVar0, Ref(N(DripVolumes)))
    Exec(N(EVS_CreateDripVolumes))
    Return
    End
};

EvtScript N(EVS_GotoMap_jan_09_3) = {
    Call(GotoMap, Ref("jan_09"), jan_09_ENTRY_3)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitPipe_jan_09_3) = EVT_EXIT_PIPE_HORIZONTAL(jan_11_ENTRY_0, COLLIDER_o10, N(EVS_GotoMap_jan_09_3));

EvtScript N(D_80241F38_B72798) = {
    BindTrigger(Ref(N(EVS_ExitPipe_jan_09_3)), TRIGGER_WALL_PUSH, COLLIDER_o10, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    Exec(N(EVS_CreateDarkness))
    Set(LVar0, Ref(N(D_80241F38_B72798)))
    Exec(EnterWalk)
    Exec(N(EVS_SetupMusic))
    ExecWait(N(EVS_SetupDrips))
    Return
    End
};
