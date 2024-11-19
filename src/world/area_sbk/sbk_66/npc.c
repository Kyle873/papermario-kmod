#include "sbk_66.h"

#include "world/common/enemy/Bandit.inc.c"

NpcData N(NpcData_Bandit_01) = {
    .id = NPC_Bandit_01,
    .pos = { GEN_NPC_BANDIT_01_VEC },
    .yaw = GEN_NPC_BANDIT_01_DIR,
    .territory = GEN_NPC_BANDIT_01_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Bandit_02) = {
    .id = NPC_Bandit_02,
    .pos = { GEN_NPC_BANDIT_02_VEC },
    .yaw = GEN_NPC_BANDIT_02_DIR,
    .territory = GEN_NPC_BANDIT_02_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Bandit_03) = {
    .id = NPC_Bandit_03,
    .pos = { GEN_NPC_BANDIT_03_VEC },
    .yaw = GEN_NPC_BANDIT_03_DIR,
    .territory = GEN_NPC_BANDIT_03_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Bandit_04) = {
    .id = NPC_Bandit_04,
    .pos = { GEN_NPC_BANDIT_04_VEC },
    .yaw = GEN_NPC_BANDIT_04_DIR,
    .territory = GEN_NPC_BANDIT_04_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Bandit_05) = {
    .id = NPC_Bandit_05,
    .pos = { GEN_NPC_BANDIT_05_VEC },
    .yaw = GEN_NPC_BANDIT_05_DIR,
    .territory = GEN_NPC_BANDIT_05_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Bandit_06) = {
    .id = NPC_Bandit_06,
    .pos = { GEN_NPC_BANDIT_06_VEC },
    .yaw = GEN_NPC_BANDIT_06_DIR,
    .territory = GEN_NPC_BANDIT_06_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Bandit_01), BTL_SBK_FORMATION_09, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Bandit_02), BTL_SBK_FORMATION_0B, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Bandit_03), BTL_SBK_FORMATION_0C, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Bandit_04), BTL_SBK_FORMATION_0A, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Bandit_05), BTL_SBK_FORMATION_0A, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Bandit_06), BTL_SBK_FORMATION_0A, BTL_SBK_STAGE_00),
    {}
};
