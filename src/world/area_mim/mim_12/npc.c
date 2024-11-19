#include "mim_12.h"

#include "world/common/npc/Boo.inc.c"

EvtScript N(EVS_NpcInit_GateBoo_01) = {
    Return
    End
};

EvtScript N(EVS_NpcInit_GateBoo_02) = {
    Return
    End
};

NpcData N(NpcData_GateBoos)[] = {
    {
        .id = NPC_GateBoo_01,
        .pos = { GEN_NPC_GATE_BOO_01_VEC },
        .yaw = GEN_NPC_GATE_BOO_01_DIR,
        .territory = GEN_NPC_GATE_BOO_01_TERRITORY,
        .init = &N(EVS_NpcInit_GateBoo_01),
        .settings = &N(NpcSettings_Boo),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = NORMAL_BOO_ANIMS,
    },
    {
        .id = NPC_GateBoo_02,
        .pos = { GEN_NPC_GATE_BOO_02_VEC },
        .yaw = GEN_NPC_GATE_BOO_02_DIR,
        .territory = GEN_NPC_GATE_BOO_02_TERRITORY,
        .init = &N(EVS_NpcInit_GateBoo_02),
        .settings = &N(NpcSettings_Boo),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = NORMAL_BOO_ANIMS,
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_GateBoos)),
    {}
};
