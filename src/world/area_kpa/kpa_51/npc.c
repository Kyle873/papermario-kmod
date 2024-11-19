
#include "kpa_51.h"

#include "world/common/enemy/Magikoopa.inc.c"
#include "world/common/enemy/Koopatrol_Wander.inc.c"

NpcData N(NpcData_Magikoopa_01)[] = {
    {
        .id = NPC_Magikoopa_01,
        .pos = { GEN_NPC_MAGIKOOPA_01_VEC },
        .yaw = GEN_NPC_MAGIKOOPA_01_DIR,
        .territory = GEN_NPC_MAGIKOOPA_01_TERRITORY,
        .settings = &N(NpcSettings_Magikoopa),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = MAGINO_DROPS,
        .animations = MAGIKOOPA_ANIMS,
        .extraAnimations = N(ExtraAnims_Magikoopa),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    MAGIKOOPA_SPELL_HITBOX(NPC_Magikoopa_01 + 1)
};

NpcData N(NpcData_Magikoopa_02)[] = {
    {
        .id = NPC_Magikoopa_02,
        .pos = { GEN_NPC_MAGIKOOPA_02_VEC },
        .yaw = GEN_NPC_MAGIKOOPA_02_DIR,
        .territory = GEN_NPC_MAGIKOOPA_02_TERRITORY,
        .settings = &N(NpcSettings_Magikoopa),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = MAGINO_DROPS,
        .animations = MAGIKOOPA_ANIMS,
        .extraAnimations = N(ExtraAnims_Magikoopa),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    MAGIKOOPA_SPELL_HITBOX(NPC_Magikoopa_02 + 1)
};

NpcData N(NpcData_Koopatrol) = {
    .id = NPC_Koopatrol,
    .pos = { GEN_NPC_KOOPATROL_VEC },
    .yaw = GEN_NPC_KOOPATROL_DIR,
    .territory = GEN_NPC_KOOPATROL_TERRITORY,
    .settings = &N(NpcSettings_Koopatrol_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = KOOPATROL_DROPS,
    .animations = KOOPATROL_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Magikoopa_01), BTL_KPA_FORMATION_2C, BTL_KPA_STAGE_00),
    NPC_GROUP(N(NpcData_Magikoopa_02), BTL_KPA_FORMATION_29, BTL_KPA_STAGE_00),
    NPC_GROUP(N(NpcData_Koopatrol), BTL_KPA_FORMATION_24, BTL_KPA_STAGE_00),
    {}
};
