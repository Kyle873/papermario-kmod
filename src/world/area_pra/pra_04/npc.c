#include "pra_04.h"

#include "world/common/enemy/Swooper.inc.c"

NpcData N(NpcData_Swoopula) = {
    .id = NPC_Swoopula,
    .pos = { GEN_NPC_SWOOPULA_VEC },
    .yaw = GEN_NPC_SWOOPULA_DIR,
    .territory = GEN_NPC_SWOOPULA_TERRITORY,
    .settings = &N(NpcSettings_Swoopula),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = SWOOPULA_DROPS,
    .animations = SWOOPULA_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Swoopula), BTL_PRA3_FORMATION_00, BTL_PRA3_STAGE_00),
    {}
};
