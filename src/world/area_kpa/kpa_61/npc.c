#include "kpa_61.h"

#include "world/common/enemy/Koopatrol_Wander.inc.c"
#include "world/common/enemy/FlyingMagikoopa.inc.c"

NpcData N(NpcData_Koopatrol_01) = {
    .id = NPC_Koopatrol_01,
    .pos = { GEN_NPC_KOOPATROL_01_VEC },
    .yaw = GEN_NPC_KOOPATROL_01_DIR,
    .territory = GEN_NPC_KOOPATROL_01_TERRITORY,
    .settings = &N(NpcSettings_Koopatrol_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = KOOPATROL_DROPS,
    .animations = KOOPATROL_ANIMS,
};

NpcData N(NpcData_Koopatrol_02) = {
    .id = NPC_Koopatrol_02,
    .pos = { GEN_NPC_KOOPATROL_02_VEC },
    .yaw = GEN_NPC_KOOPATROL_02_DIR,
    .territory = GEN_NPC_KOOPATROL_02_TERRITORY,
    .settings = &N(NpcSettings_Koopatrol_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = KOOPATROL_DROPS,
    .animations = KOOPATROL_ANIMS,
};

NpcData N(NpcData_FlyingMagikoopa_01)[] = {
    {
        .id = NPC_FlyingMagikoopa_01,
        .pos = { GEN_NPC_FLYING_MAGIKOOPA_01_VEC },
        .yaw = GEN_NPC_FLYING_MAGIKOOPA_01_DIR,
        .territory = GEN_NPC_FLYING_MAGIKOOPA_01_TERRITORY,
        .settings = &N(NpcSettings_FlyingMagikoopa),
        .flags = ENEMY_FLAG_FLYING,
        .drops = FLYING_MAGINO_DROPS,
        .animations = FLYING_MAGIKOOPA_ANIMS,
        .extraAnimations = N(ExtraAnims_FlyingMagikoopa),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    FLYING_MAGIKOOPA_SPELL_HITBOX(NPC_FlyingMagikoopa_01_Spell),
};

NpcData N(NpcData_FlyingMagikoopa_02)[] = {
    {
        .id = NPC_FlyingMagikoopa_02,
        .pos = { GEN_NPC_FLYING_MAGIKOOPA_02_VEC },
        .yaw = GEN_NPC_FLYING_MAGIKOOPA_02_DIR,
        .territory = GEN_NPC_FLYING_MAGIKOOPA_02_TERRITORY,
        .settings = &N(NpcSettings_FlyingMagikoopa),
        .flags = ENEMY_FLAG_FLYING,
        .drops = FLYING_MAGINO_DROPS,
        .animations = FLYING_MAGIKOOPA_ANIMS,
        .extraAnimations = N(ExtraAnims_FlyingMagikoopa),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    FLYING_MAGIKOOPA_SPELL_HITBOX(NPC_FlyingMagikoopa_02_Spell),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Koopatrol_01), BTL_KPA_FORMATION_23, BTL_KPA_STAGE_08),
    NPC_GROUP(N(NpcData_Koopatrol_02), BTL_KPA_FORMATION_21, BTL_KPA_STAGE_08),
    NPC_GROUP(N(NpcData_FlyingMagikoopa_01), BTL_KPA_FORMATION_35, BTL_KPA_STAGE_08),
    NPC_GROUP(N(NpcData_FlyingMagikoopa_02), BTL_KPA_FORMATION_33, BTL_KPA_STAGE_08),
    {}
};
