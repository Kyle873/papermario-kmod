#include "kpa_08.h"

#include "world/common/enemy/Magikoopa.inc.c"

NpcData N(NpcData_Magikoopa)[] = {
    {
        .id = NPC_Magikoopa,
        .pos = { GEN_NPC_MAGIKOOPA_VEC },
        .yaw = GEN_NPC_MAGIKOOPA_DIR,
        .territory = GEN_NPC_MAGIKOOPA_TERRITORY,
        .settings = &N(NpcSettings_Magikoopa),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = MAGINO_DROPS,
        .animations = MAGIKOOPA_ANIMS,
        .extraAnimations = N(ExtraAnims_Magikoopa),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    MAGIKOOPA_SPELL_HITBOX(NPC_Magikoopa_Spell)
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Magikoopa), BTL_KPA_FORMATION_2B, BTL_KPA_STAGE_01),
    {}
};
