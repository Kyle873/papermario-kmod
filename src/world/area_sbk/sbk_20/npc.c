#include "sbk_20.h"

#include "world/common/enemy/Bandit.inc.c"

NpcData N(NpcData_Bandit_01) = {
    .id = NPC_Bandit_01,
    .pos = { GEN_NPC_BANDIT_01_VEC },
    .yaw = GEN_NPC_BANDIT_01_DIR,
    .territory = GEN_NPC_BANDIT_01_TERRITORY,
    .settings = &N(NpcSettings_Bandit),
    .flags = ENEMY_FLAG_FLYING,
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
    .flags = ENEMY_FLAG_FLYING,
    .drops = BANDIT_DROPS,
    .animations = BANDIT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Bandit_01), BTL_SBK_FORMATION_0C, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Bandit_02), BTL_SBK_FORMATION_0A, BTL_SBK_STAGE_00),
    {}
};
