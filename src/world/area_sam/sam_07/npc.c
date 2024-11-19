#include "sam_07.h"

#include "world/common/enemy/Gulpit.inc.c"
#include "world/common/enemy/FrostPiranha.inc.c"

NpcData N(NpcData_Gulpit)[] = {
    {
        .id = NPC_Gulpit,
        .pos = { GEN_NPC_GULPIT_VEC },
        .yaw = GEN_NPC_GULPIT_DIR,
        .territory = GEN_NPC_GULPIT_TERRITORY,
        .settings = &N(NpcSettings_Gulpit),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = GULPIT_DROPS,
        .animations = GULPIT_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    GULPIT_HITBOX(NPC_Gulpit_Hitbox),
};

NpcData N(NpcData_FrostPiranha_01)[] = {
    {
        .id = NPC_FrostPiranha_01,
        .pos = { GEN_NPC_FROST_PIRANHA_01_VEC },
        .yaw = GEN_NPC_FROST_PIRANHA_01_DIR,
        .territory = GEN_NPC_FROST_PIRANHA_01_TERRITORY,
        .settings = &N(NpcSettings_FrostPiranha),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = FROST_PIRANHA_DROPS,
        .animations = FROST_PIRANHA_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    FROST_PIRANHA_HITBOX(NPC_FrostPiranha_01_Hitbox),
};

NpcData N(NpcData_FrostPiranha_02)[] = {
    {
        .id = NPC_FrostPiranha_02,
        .pos = { GEN_NPC_FROST_PIRANHA_02_VEC },
        .yaw = GEN_NPC_FROST_PIRANHA_02_DIR,
        .territory = GEN_NPC_FROST_PIRANHA_02_TERRITORY,
        .settings = &N(NpcSettings_FrostPiranha),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = FROST_PIRANHA_DROPS,
        .animations = FROST_PIRANHA_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    FROST_PIRANHA_HITBOX(NPC_FrostPiranha_02_Hitbox),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Gulpit), BTL_SAM_FORMATION_03, BTL_SAM_STAGE_02),
    NPC_GROUP(N(NpcData_FrostPiranha_01), BTL_SAM_FORMATION_09, BTL_SAM_STAGE_02),
    NPC_GROUP(N(NpcData_FrostPiranha_02), BTL_SAM_FORMATION_07, BTL_SAM_STAGE_02),
    {}
};
