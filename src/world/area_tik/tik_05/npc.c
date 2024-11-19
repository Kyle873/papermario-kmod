#include "tik_05.h"

#include "world/common/enemy/SpikedGloomba_Wander.inc.c"

NpcData N(NpcData_SpikedGloomba_01) = {
    .id = NPC_SpikedGoomba_01,
    .pos = { GEN_NPC_SPIKED_GOOMBA_01_VEC },
    .yaw = GEN_NPC_SPIKED_GOOMBA_01_DIR,
    .territory = GEN_NPC_SPIKED_GOOMBA_01_TERRITORY,
    .settings = &N(NpcSettings_SpikedGloomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = SPIKED_GLOOMBA_DROPS,
    .animations = SPIKED_GLOOMBA_ANIMS,
};

NpcData N(NpcData_SpikedGloomba_02) = {
    .id = NPC_SpikedGoomba_02,
    .pos = { GEN_NPC_SPIKED_GOOMBA_02_VEC },
    .yaw = GEN_NPC_SPIKED_GOOMBA_02_DIR,
    .territory = GEN_NPC_SPIKED_GOOMBA_02_TERRITORY,
    .settings = &N(NpcSettings_SpikedGloomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = SPIKED_GLOOMBA_DROPS,
    .animations = SPIKED_GLOOMBA_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_SpikedGloomba_01), BTL_TIK_FORMATION_10, BTL_TIK_STAGE_00),
    NPC_GROUP(N(NpcData_SpikedGloomba_02), BTL_TIK_FORMATION_12, BTL_TIK_STAGE_00),
    {}
};
