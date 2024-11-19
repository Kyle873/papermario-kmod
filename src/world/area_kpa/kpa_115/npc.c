#include "kpa_115.h"

#include "world/common/enemy/HammerBros_Wander.inc.c"

NpcData N(NpcData_HammerBros)[] = {
    {
        .id = NPC_HammerBros,
        .pos = { GEN_NPC_HAMMER_BROS_VEC },
        .yaw = GEN_NPC_HAMMER_BROS_DIR,
        .territory = GEN_NPC_HAMMER_BROS_TERRITORY,
        .settings = &N(NpcSettings_HammerBros_Wander),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = HAMMER_BROS_DROPS,
        .animations = HAMMER_BROS_ANIMS,
    },
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros + 1),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros + 2),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros + 3),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros + 4),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros + 5),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros + 6),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_HammerBros), BTL_KPA_FORMATION_14, BTL_KPA_STAGE_0C),
    {}
};
