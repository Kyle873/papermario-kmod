#include "flo_16.h"
#include "entity.h"

#include "world/common/enemy/RuffPuff.inc.c"

NpcData N(NpcData_RuffPuff_01) = {
    .id = NPC_RuffPuff_01,
    .pos = { GEN_NPC_RUFF_PUFF_01_VEC },
    .yaw = GEN_NPC_RUFF_PUFF_01_DIR,
    .territory = GEN_NPC_RUFF_PUFF_01_TERRITORY,
    .settings = &N(NpcSettings_RuffPuff),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = RUFF_PUFF_DROPS,
    .animations = RUFF_PUFF_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_RuffPuff_02) = {
    .id = NPC_RuffPuff_02,
    .pos = { GEN_NPC_RUFF_PUFF_02_VEC },
    .yaw = GEN_NPC_RUFF_PUFF_02_DIR,
    .territory = GEN_NPC_RUFF_PUFF_02_TERRITORY,
    .settings = &N(NpcSettings_RuffPuff),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = RUFF_PUFF_DROPS,
    .animations = RUFF_PUFF_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_RuffPuff_01), BTL_FLO_FORMATION_24, BTL_FLO_STAGE_05),
    NPC_GROUP(N(NpcData_RuffPuff_02), BTL_FLO_FORMATION_20, BTL_FLO_STAGE_05),
    {}
};
