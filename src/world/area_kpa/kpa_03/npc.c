#include "kpa_03.h"

#include "world/common/enemy/Koopatrol_Wander.inc.c"
#include "world/common/enemy/SpikeTop.inc.c"
#include "world/common/enemy/Magikoopa.inc.c"

AnimID N(ExtraAnims_Koopatrol)[] = {
    ANIM_WorldKoopatrol_Anim01,
    ANIM_WorldKoopatrol_Anim04,
    ANIM_WorldKoopatrol_Anim06,
    ANIM_WorldKoopatrol_Anim10,
    ANIM_WorldKoopatrol_Anim0B,
    ANIM_LIST_END
};

NpcData N(NpcData_Koopatrol_01) = {
    .id = NPC_Koopatrol_01,
    .pos = { GEN_NPC_KOOPATROL_01_VEC },
    .yaw = GEN_NPC_KOOPATROL_01_DIR,
    .territory = GEN_NPC_KOOPATROL_01_TERRITORY,
    .settings = &N(NpcSettings_Koopatrol_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = KOOPATROL_DROPS,
    .animations = KOOPATROL_ANIMS,
    .extraAnimations = N(ExtraAnims_Koopatrol),
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Koopatrol_02) = {
    .id = NPC_Koopatrol_02,
    .pos = { GEN_NPC_KOOPATROL_02_VEC },
    .yaw = GEN_NPC_KOOPATROL_02_DIR,
    .territory = GEN_NPC_KOOPATROL_02_TERRITORY,
    .settings = &N(NpcSettings_Koopatrol_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = KOOPATROL_DROPS,
    .animations = KOOPATROL_ANIMS,
    .extraAnimations = N(ExtraAnims_Koopatrol),
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_BonyBeetle_01) = {
    .id = NPC_BonyBeetle_01,
    .pos = { GEN_NPC_BONY_BEETLE_01_VEC },
    .yaw = GEN_NPC_BONY_BEETLE_01_DIR,
    .territory = GEN_NPC_BONY_BEETLE_01_TERRITORY,
    .settings = &N(NpcSettings_BonyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BONY_BEETLE_DROPS_ALT,
    .animations = BONY_BEETLE_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_BonyBeetle_02) = {
    .id = NPC_BonyBeetle_02,
    .pos = { GEN_NPC_BONY_BEETLE_02_VEC },
    .yaw = GEN_NPC_BONY_BEETLE_02_DIR,
    .territory = GEN_NPC_BONY_BEETLE_02_TERRITORY,
    .settings = &N(NpcSettings_BonyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = BONY_BEETLE_DROPS,
    .animations = BONY_BEETLE_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Magikoopa_01)[] = {
    {
        .id = NPC_Magikoopa_01,
        .pos = { GEN_NPC_MAGIKOOPA_01_VEC },
        .yaw = GEN_NPC_MAGIKOOPA_01_DIR,
        .territory = GEN_NPC_MAGIKOOPA_01_TERRITORY,
        .settings = &N(NpcSettings_Magikoopa),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = MAGINO_DROPS,
        .animations = MAGIKOOPA_ANIMS,
        .extraAnimations = N(ExtraAnims_Magikoopa),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    MAGIKOOPA_SPELL_HITBOX(NPC_Magikoopa_01_Spell),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Koopatrol_01), BTL_KPA_FORMATION_20, BTL_KPA_STAGE_03),
    NPC_GROUP(N(NpcData_Koopatrol_02), BTL_KPA_FORMATION_1F, BTL_KPA_STAGE_03),
    NPC_GROUP(N(NpcData_BonyBeetle_01), BTL_KPA_FORMATION_01, BTL_KPA_STAGE_03),
    NPC_GROUP(N(NpcData_BonyBeetle_02), BTL_KPA_FORMATION_04, BTL_KPA_STAGE_03),
    NPC_GROUP(N(NpcData_Magikoopa_01), BTL_KPA_FORMATION_2F, BTL_KPA_STAGE_03),
    {}
};
