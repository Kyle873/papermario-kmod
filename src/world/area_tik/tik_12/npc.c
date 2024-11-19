#include "tik_12.h"

#include "world/common/enemy/SpikeTop.inc.c"

NpcData N(NpcData_BuzzyBeetle) = {
    .id = NPC_BuzzyBeetle,
    .pos = { GEN_NPC_BUZZY_BEETLE_VEC },
    .yaw = GEN_NPC_BUZZY_BEETLE_DIR,
    .territory = GEN_NPC_BUZZY_BEETLE_TERRITORY,
    .settings = &N(NpcSettings_BuzzyBeetle),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = TIK_BUZZY_BEETLE_DROPS,
    .animations = BUZZY_BEETLE_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_BuzzyBeetle), BTL_TIK_FORMATION_15, BTL_TIK_STAGE_01),
    {}
};
