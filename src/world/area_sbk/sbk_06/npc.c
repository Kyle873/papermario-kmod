#include "sbk_06.h"

#include "world/common/enemy/Bandit.inc.c"

NpcData N(NpcData_Bandit) = {
    .id = NPC_Bandit,
    .pos = { GEN_NPC_BANDIT_VEC },
    .yaw = GEN_NPC_BANDIT_DIR,
    .territory = GEN_NPC_BANDIT_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Bandit), BTL_SBK_FORMATION_0C, BTL_SBK_STAGE_00),
    {}
};
