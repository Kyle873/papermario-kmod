#include "tik_23.h"

#include "world/common/enemy/Spiny.inc.c"

NpcData N(NpcData_Spiny_01) = {
    .id = NPC_Spiny_01,
    .pos = { GEN_NPC_SPINY_01_VEC },
    .yaw = GEN_NPC_SPINY_01_DIR,
    .territory = GEN_NPC_SPINY_01_TERRITORY,
    .settings = &N(NpcSettings_Spiny),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SPINY_DROPS,
    .animations = SPINY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Spiny_02) = {
    .id = NPC_Spiny_02,
    .pos = { GEN_NPC_SPINY_02_VEC },
    .yaw = GEN_NPC_SPINY_02_DIR,
    .territory = GEN_NPC_SPINY_02_TERRITORY,
    .settings = &N(NpcSettings_Spiny),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SPINY_DROPS,
    .animations = SPINY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Spiny_03) = {
    .id = NPC_Spiny_03,
    .pos = { GEN_NPC_SPINY_03_VEC },
    .yaw = GEN_NPC_SPINY_03_DIR,
    .territory = GEN_NPC_SPINY_03_TERRITORY,
    .settings = &N(NpcSettings_Spiny),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SPINY_DROPS,
    .animations = SPINY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Spiny_01), BTL_TIK_FORMATION_16, BTL_TIK_STAGE_03),
    NPC_GROUP(N(NpcData_Spiny_02), BTL_TIK_FORMATION_17, BTL_TIK_STAGE_03),
    NPC_GROUP(N(NpcData_Spiny_03), BTL_TIK_FORMATION_16, BTL_TIK_STAGE_03),
    {}
};
