#include "kpa_70.h"

#include "world/common/enemy/Koopatrol_Wander.inc.c"

NpcData N(NpcData_Koopatrol_01) = {
    .id = NPC_Koopatrol_01,
    .pos = { GEN_NPC_KOOPATROL_01_VEC },
    .yaw = GEN_NPC_KOOPATROL_01_DIR,
    .territory = GEN_NPC_KOOPATROL_01_TERRITORY,
    .settings = &N(NpcSettings_Koopatrol_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = KOOPATROL_DROPS,
    .animations = KOOPATROL_ANIMS,
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
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Koopatrol_01), BTL_KPA_FORMATION_18, BTL_KPA_STAGE_02),
    NPC_GROUP(N(NpcData_Koopatrol_02), BTL_KPA_FORMATION_19, BTL_KPA_STAGE_02),
    {}
};
