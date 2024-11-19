#include "tik_03.h"

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
