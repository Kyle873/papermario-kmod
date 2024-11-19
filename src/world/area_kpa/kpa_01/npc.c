#include "kpa_01.h"

#include "world/common/enemy/SpikeTop.inc.c"

NpcData N(NpcData_BonyBeetle_01) = {
    .id = NPC_BonyBeetle_01,
    .pos = { GEN_NPC_BONY_BEETLE_01_VEC },
    .yaw = GEN_NPC_BONY_BEETLE_01_DIR,
    .territory = GEN_NPC_BONY_BEETLE_01_TERRITORY,
    .settings = &N(NpcSettings_BonyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BONY_BEETLE_DROPS,
    .animations = BONY_BEETLE_ANIMS,
};

NpcData N(NpcData_BonyBeetle_02) = {
    .id = NPC_BonyBeetle_02,
    .pos = { GEN_NPC_BONY_BEETLE_02_VEC },
    .yaw = GEN_NPC_BONY_BEETLE_02_DIR,
    .territory = GEN_NPC_BONY_BEETLE_02_TERRITORY,
    .settings = &N(NpcSettings_BonyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BONY_BEETLE_DROPS,
    .animations = BONY_BEETLE_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_BonyBeetle_01), BTL_KPA_FORMATION_00, BTL_KPA_STAGE_03),
    NPC_GROUP(N(NpcData_BonyBeetle_02), BTL_KPA_FORMATION_01, BTL_KPA_STAGE_03),
    {}
};
