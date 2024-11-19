#include "isk_04.h"

#include "world/common/enemy/SpikeTop.inc.c"

NpcData N(NpcData_BuzzyBeetle_01) = {
    .id = NPC_BuzzyBeetle_01,
    .pos = { GEN_NPC_BUZZY_BEETLE_01_VEC },
    .yaw = GEN_NPC_BUZZY_BEETLE_01_DIR,
    .territory = GEN_NPC_BUZZY_BEETLE_01_TERRITORY,
    .settings = &N(NpcSettings_BuzzyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = ISK_BUZZY_BEETLE_DROPS,
    .animations = BUZZY_BEETLE_ANIMS,
};

NpcData N(NpcData_BuzzyBeetle_02) = {
    .id = NPC_BuzzyBeetle_02,
    .pos = { GEN_NPC_BUZZY_BEETLE_02_VEC },
    .yaw = GEN_NPC_BUZZY_BEETLE_02_DIR,
    .territory = GEN_NPC_BUZZY_BEETLE_02_TERRITORY,
    .settings = &N(NpcSettings_BuzzyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = ISK_BUZZY_BEETLE_DROPS,
    .animations = BUZZY_BEETLE_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_BuzzyBeetle_01), BTL_ISK_1_FORMATION_09, BTL_ISK_1_STAGE_03),
    NPC_GROUP(N(NpcData_BuzzyBeetle_02), BTL_ISK_1_FORMATION_09, BTL_ISK_1_STAGE_03),
    {}
};
