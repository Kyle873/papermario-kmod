#include "isk_08.h"

#include "world/common/enemy/SpikeTop.inc.c"

NpcData N(NpcData_BuzzyBeetle) = {
    .id = NPC_BuzzyBeetle,
    .pos = { GEN_NPC_BUZZY_BEETLE_VEC },
    .yaw = GEN_NPC_BUZZY_BEETLE_DIR,
    .territory = GEN_NPC_BUZZY_BEETLE_TERRITORY,
    .settings = &N(NpcSettings_BuzzyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = ISK_BUZZY_BEETLE_DROPS,
    .animations = BUZZY_BEETLE_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_BuzzyBeetle), BTL_ISK_1_FORMATION_0A, BTL_ISK_1_STAGE_03),
    {}
};
