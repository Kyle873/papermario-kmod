#include "tik_12.h"

#define DROPLET_MODEL MODEL_sizuku
#include "../common/DripVolumes.inc.c"

DripVolumeList N(DripVolumes) = {
    .count = 1,
    .volumes = {
        {
            .minPos = { GEN_DRIP_VOLUME_1_MIN_XZ },
            .maxPos = { GEN_DRIP_VOLUME_1_MAX_XZ },
            .startY = GEN_DRIP_VOLUME_1_MAX_Y,
            .endY   = GEN_DRIP_VOLUME_1_MIN_Y,
            .duration = 100,
            .density  = 3,
        }
    }
};

EvtScript N(EVS_SetupDrips) = {
    Set(LVar0, Ref(N(DripVolumes)))
    Exec(N(EVS_CreateDripVolumes))
    Return
    End
};
