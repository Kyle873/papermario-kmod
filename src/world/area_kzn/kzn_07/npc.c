#include "kzn_07.h"
#include "effects.h"

#include "world/common/enemy/LavaBubble.inc.c"

NpcData N(NpcData_LavaBubble_01) = {
    .id = NPC_Bubble_01,
    .pos = { GEN_NPC_BUBBLE_01_VEC },
    .yaw = GEN_NPC_BUBBLE_01_DIR,
    .territory = GEN_NPC_BUBBLE_01_TERRITORY,
    .settings = &N(NpcSettings_LavaBubble),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = LAVA_BUBBLE_DROPS,
    .animations = LAVA_BUBBLE_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_LavaBubble_02) = {
    .id = NPC_Bubble_02,
    .pos = { GEN_NPC_BUBBLE_02_VEC },
    .yaw = GEN_NPC_BUBBLE_02_DIR,
    .territory = GEN_NPC_BUBBLE_02_TERRITORY,
    .settings = &N(NpcSettings_LavaBubble),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = LAVA_BUBBLE_DROPS,
    .animations = LAVA_BUBBLE_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_LavaBubble_01), BTL_KZN_FORMATION_05, BTL_KZN_STAGE_01),
    NPC_GROUP(N(NpcData_LavaBubble_02), BTL_KZN_FORMATION_06, BTL_KZN_STAGE_01),
    {}
};
