#include "sbk_22.h"

#include "world/common/enemy/Bandit.inc.c"
#include "world/common/enemy/Pokey.inc.c"

NpcData N(NpcData_Pokey) = {
    .id = NPC_Pokey,
    .pos = { GEN_NPC_POKEY_VEC },
    .yaw = GEN_NPC_POKEY_DIR,
    .territory = GEN_NPC_POKEY_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Bandit) = {
    .id = NPC_Bandit,
    .pos = { GEN_NPC_BANDIT_VEC },
    .yaw = GEN_NPC_BANDIT_DIR,
    .territory = GEN_NPC_BANDIT_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Pokey), BTL_SBK_FORMATION_08, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Bandit), BTL_SBK_FORMATION_0E, BTL_SBK_STAGE_00),
    {}
};
