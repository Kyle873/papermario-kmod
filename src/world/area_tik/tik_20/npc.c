#include "tik_20.h"

#include "world/common/enemy/DarkTroopa_Wander.inc.c"

NpcData N(NpcData_DarkTroopa_01) = {
    .id = NPC_DarkTroopa_01,
    .pos = { GEN_NPC_DARK_TROOPA_01_VEC },
    .yaw = GEN_NPC_DARK_TROOPA_01_DIR,
    .territory = GEN_NPC_DARK_TROOPA_01_TERRITORY,
    .settings = &N(NpcSettings_DarkTroopa_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = DARK_TROOPA_DROPS,
    .animations = DARK_TROOPA_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_DarkTroopa_02) = {
    .id = NPC_DarkTroopa_02,
    .pos = { GEN_NPC_DARK_TROOPA_02_VEC },
    .yaw = GEN_NPC_DARK_TROOPA_02_DIR,
    .territory = GEN_NPC_DARK_TROOPA_02_TERRITORY,
    .settings = &N(NpcSettings_DarkTroopa_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = DARK_TROOPA_DROPS,
    .animations = DARK_TROOPA_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_DarkTroopa_01), BTL_TIK_FORMATION_04, BTL_TIK_STAGE_03),
    NPC_GROUP(N(NpcData_DarkTroopa_02), BTL_TIK_FORMATION_05, BTL_TIK_STAGE_03),
    {}
};
