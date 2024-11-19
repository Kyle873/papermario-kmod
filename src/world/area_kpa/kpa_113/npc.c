#include "kpa_113.h"

#include "world/common/enemy/SpikeTop.inc.c"

NpcData N(NpcData_BonyBeetle) = {
    .id = NPC_BonyBeetle,
    .pos = { GEN_NPC_BONY_BEETLE_VEC },
    .yaw = GEN_NPC_BONY_BEETLE_DIR,
    .territory = GEN_NPC_BONY_BEETLE_TERRITORY,
    .settings = &N(NpcSettings_BonyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BONY_BEETLE_DROPS,
    .animations = BONY_BEETLE_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_BonyBeetle), BTL_KPA_FORMATION_06, BTL_KPA_STAGE_0C),
    {}
};
