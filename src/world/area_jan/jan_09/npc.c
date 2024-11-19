#include "jan_09.h"

#include "world/common/enemy/MBush.inc.c"
#include "world/common/enemy/SpearGuy_Wander.inc.c"

NpcData N(NpcData_SpearGuy)[] = {
    {
        .id = NPC_SpearGuy,
        .pos = { GEN_NPC_SPEAR_GUY_VEC },
        .yaw = GEN_NPC_SPEAR_GUY_DIR,
        .territory = GEN_NPC_SPEAR_GUY_TERRITORY,
        .settings = &N(NpcSettings_SpearGuy_Wander),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = SPEAR_GUY_DROPS,
        .animations = SPEAR_GUY_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    SPEAR_GUY_HITBOX(NPC_SpearGuy_Hitbox)
};

NpcData N(NpcData_MBush_01) = {
    .id = NPC_MBush_01,
    .pos = { GEN_NPC_M_BUSH_01_VEC },
    .yaw = GEN_NPC_M_BUSH_01_DIR,
    .territory = GEN_NPC_M_BUSH_01_TERRITORY,
    .settings = &N(NpcSettings_MBush),
    .flags = MBUSH_FLAGS,
    .drops = MBUSH_DROPS,
    .animations = MBUSH_ANIMS,
    .tattle = MSG_NpcTattle_MBush,
};

NpcData N(NpcData_MBush_02) = {
    .id = NPC_MBush_02,
    .pos = { GEN_NPC_M_BUSH_02_VEC },
    .yaw = GEN_NPC_M_BUSH_02_DIR,
    .territory = GEN_NPC_M_BUSH_02_TERRITORY,
    .settings = &N(NpcSettings_MBush),
    .flags = MBUSH_FLAGS,
    .drops = MBUSH_DROPS,
    .animations = MBUSH_ANIMS,
    .tattle = MSG_NpcTattle_MBush,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_SpearGuy), BTL_JAN_FORMATION_03, BTL_JAN_STAGE_02),
    NPC_GROUP(N(NpcData_MBush_01), BTL_JAN_FORMATION_0E, BTL_JAN_STAGE_02),
    NPC_GROUP(N(NpcData_MBush_02), BTL_JAN_FORMATION_0E, BTL_JAN_STAGE_02),
    {}
};
