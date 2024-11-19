
#include "kpa_52.h"

#include "world/common/enemy/HammerBros_Wander.inc.c"

NpcData N(NpcData_HammerBros_01)[] = {
    {
        .id = NPC_HammerBros_01,
        .pos = { GEN_NPC_HAMMER_BROS_01_VEC },
        .yaw = GEN_NPC_HAMMER_BROS_01_DIR,
        .territory = GEN_NPC_HAMMER_BROS_01_TERRITORY,
        .settings = &N(NpcSettings_HammerBros_Wander),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = HAMMER_BROS_DROPS,
        .animations = HAMMER_BROS_ANIMS,
    },
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_01 + 1),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_01 + 2),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_01 + 3),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_01 + 4),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_01 + 5),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_01 + 6),
};

NpcData N(NpcData_HammerBros_02)[] = {
    {
        .id = NPC_HammerBros_02,
        .pos = { GEN_NPC_HAMMER_BROS_02_VEC },
        .yaw = GEN_NPC_HAMMER_BROS_02_DIR,
        .territory = GEN_NPC_HAMMER_BROS_02_TERRITORY,
        .settings = &N(NpcSettings_HammerBros_Wander),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = HAMMER_BROS_DROPS,
        .animations = HAMMER_BROS_ANIMS,
    },
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_02 + 1),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_02 + 2),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_02 + 3),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_02 + 4),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_02 + 5),
    HAMMER_BROS_HAMMER_HITBOX(NPC_HammerBros_02 + 6),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_HammerBros_01), BTL_KPA_FORMATION_15, BTL_KPA_STAGE_00),
    NPC_GROUP(N(NpcData_HammerBros_02), BTL_KPA_FORMATION_13, BTL_KPA_STAGE_00),
    {}
};
