#include "hos_02.h"

#include "world/common/enemy/Ember.inc.c"

NpcData N(NpcData_Ember) = {
    .id = NPC_Ember_01,
    .pos = { GEN_NPC_EMBER_01_VEC },
    .yaw = GEN_NPC_EMBER_01_DIR,
    .territory = GEN_NPC_EMBER_01_TERRITORY,
    .settings = &N(NpcSettings_Ember),
    .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = EMBER_DROPS,
    .animations = EMBER_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Ember_02) = {
    .id = NPC_Ember_02,
    .pos = { GEN_NPC_EMBER_02_VEC },
    .yaw = GEN_NPC_EMBER_02_DIR,
    .territory = GEN_NPC_EMBER_02_TERRITORY,
    .settings = &N(NpcSettings_Ember),
    .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = EMBER_DROPS,
    .animations = EMBER_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Ember_03) = {
    .id = NPC_Ember_03,
    .pos = { GEN_NPC_EMBER_03_VEC },
    .yaw = GEN_NPC_EMBER_03_DIR,
    .territory = GEN_NPC_EMBER_03_TERRITORY,
    .settings = &N(NpcSettings_Ember),
    .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = EMBER_DROPS,
    .animations = EMBER_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Ember), BTL_HOS_FORMATION_01, BTL_HOS_STAGE_01),
    NPC_GROUP(N(NpcData_Ember_02), BTL_HOS_FORMATION_01, BTL_HOS_STAGE_01),
    NPC_GROUP(N(NpcData_Ember_03), BTL_HOS_FORMATION_01, BTL_HOS_STAGE_01),
    {}
};
