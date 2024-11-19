#include "jan_12.h"

#include "world/common/enemy/SpearGuy_Wander.inc.c"

NpcData N(NpcData_SpearGuy)[] = {
    {
        .id = NPC_SpearGuy,
        .pos = { GEN_NPC_SPEAR_GUY_VEC },
        .yaw = GEN_NPC_SPEAR_GUY_DIR,
        .territory = GEN_NPC_SPEAR_GUY_TERRITORY,
        .settings = &N(NpcSettings_SpearGuy_Wander),
        .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = SPEAR_GUY_DROPS,
        .animations = SPEAR_GUY_ANIMS,
    },
    SPEAR_GUY_HITBOX(NPC_SpearGuy_Hitbox)
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_SpearGuy), BTL_JAN_FORMATION_06, BTL_JAN_STAGE_06),
    {}
};
