#include "isk_18.h"

#include "world/common/enemy/SpikeTop.inc.c"

NpcData N(NpcData_BuzzyBeetle_01) = {
    .id = NPC_BuzzyBeetle_01,
    .pos = { GEN_NPC_BUZZY_BEETLE_01_VEC },
    .yaw = GEN_NPC_BUZZY_BEETLE_01_DIR,
    .territory = GEN_NPC_BUZZY_BEETLE_01_TERRITORY,
    .initVarCount = 1,
    .initVar = { .value = BTL_ISK_1_FORMATION_0E },
    .settings = &N(NpcSettings_BuzzyBeetle_Ceiling),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = ISK_BUZZY_BEETLE_DROPS,
    .animations = BUZZY_BEETLE_ANIMS,
};

NpcData N(NpcData_BuzzyBeetle_02) = {
    .id = NPC_BuzzyBeetle_02,
    .pos = { GEN_NPC_BUZZY_BEETLE_02_VEC },
    .yaw = GEN_NPC_BUZZY_BEETLE_02_DIR,
    .territory = GEN_NPC_BUZZY_BEETLE_02_TERRITORY,
    .initVarCount = 1,
    .initVar = { .value = BTL_ISK_1_FORMATION_0B },
    .settings = &N(NpcSettings_BuzzyBeetle_Ceiling),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = ISK_BUZZY_BEETLE_DROPS,
    .animations = BUZZY_BEETLE_ANIMS,
};

NpcData N(NpcData_BuzzyBeetle_03) = {
    .id = NPC_BuzzyBeetle_03,
    .pos = { GEN_NPC_BUZZY_BEETLE_03_VEC },
    .yaw = GEN_NPC_BUZZY_BEETLE_03_DIR,
    .territory = GEN_NPC_BUZZY_BEETLE_03_TERRITORY,
    .settings = &N(NpcSettings_BuzzyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = ISK_BUZZY_BEETLE_DROPS,
    .animations = BUZZY_BEETLE_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_BuzzyBeetle_01), BTL_ISK_1_FORMATION_0F, BTL_ISK_1_STAGE_08),
    NPC_GROUP(N(NpcData_BuzzyBeetle_02), BTL_ISK_1_FORMATION_13, BTL_ISK_1_STAGE_08),
    NPC_GROUP(N(NpcData_BuzzyBeetle_03), BTL_ISK_1_FORMATION_0C, BTL_ISK_1_STAGE_08),
    {}
};
