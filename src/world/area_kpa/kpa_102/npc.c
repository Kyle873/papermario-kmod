#include "kpa_102.h"

#include "world/common/enemy/HammerBros_Wander.inc.c"
#include "world/common/enemy/Koopatrol_Wander.inc.c"
#include "world/common/enemy/FlyingMagikoopa.inc.c"

NpcData N(NpcData_Koopatrol) = {
    .id = NPC_Koopatrol,
    .pos = { GEN_NPC_KOOPATROL_VEC },
    .yaw = GEN_NPC_KOOPATROL_DIR,
    .territory = GEN_NPC_KOOPATROL_TERRITORY,
    .settings = &N(NpcSettings_Koopatrol_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = KOOPATROL_DROPS,
    .animations = KOOPATROL_ANIMS,
};

NpcData N(NpcData_FlyingMagikoopa)[] = {
    {
        .id = NPC_FlyingMagikoopa,
        .pos = { GEN_NPC_FLYING_MAGIKOOPA_VEC },
        .yaw = GEN_NPC_FLYING_MAGIKOOPA_DIR,
        .territory = GEN_NPC_FLYING_MAGIKOOPA_TERRITORY,
        .settings = &N(NpcSettings_FlyingMagikoopa),
        .flags = ENEMY_FLAG_FLYING,
        .drops = FLYING_MAGINO_DROPS,
        .animations = FLYING_MAGIKOOPA_ANIMS,
        .extraAnimations = N(ExtraAnims_FlyingMagikoopa),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    FLYING_MAGIKOOPA_SPELL_HITBOX(NPC_FlyingMagikoopa + 1),
};

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
    NPC_GROUP(N(NpcData_Koopatrol), BTL_KPA_FORMATION_24, BTL_KPA_STAGE_0A),
    NPC_GROUP(N(NpcData_FlyingMagikoopa), BTL_KPA_FORMATION_32, BTL_KPA_STAGE_0A),
    NPC_GROUP(N(NpcData_HammerBros), BTL_KPA_FORMATION_16, BTL_KPA_STAGE_0A),
    {}
};
