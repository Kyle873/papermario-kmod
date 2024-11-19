#include "kzn_08.h"

#include "world/common/enemy/LavaBubble.inc.c"
#include "world/common/enemy/PutridPiranha.inc.c"

NpcData N(NpcData_PutridPiranha)[] = {
    {
        .id = NPC_PutridPiranha,
        .pos = { GEN_NPC_PUTRID_PIRANHA_VEC },
        .yaw = GEN_NPC_PUTRID_PIRANHA_DIR,
        .territory = GEN_NPC_PUTRID_PIRANHA_TERRITORY,
        .settings = &N(NpcSettings_PutridPiranha),
        .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = PUTRID_PIRANHA_DROPS,
        .animations = PUTRID_PIRANHA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    PUTRID_PIRANHA_HITBOX(NPC_Piranha_Hitbox),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_PutridPiranha), BTL_KZN_FORMATION_11, BTL_KZN_STAGE_04),
    {}
};
