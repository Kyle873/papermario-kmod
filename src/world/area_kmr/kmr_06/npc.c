#include "kmr_06.h"

#include "world/common/enemy/SpikedGoomba_Wander.inc.c"
#include "world/common/enemy/Paragoomba_Wander.inc.c"

NpcData N(NpcData_SpikedGoomba) = {
    .id = NPC_SpikedGoomba,
    .pos = { GEN_NPC_SPIKED_GOOMBA_VEC },
    .yaw = GEN_NPC_SPIKED_GOOMBA_DIR,
    .territory = GEN_NPC_SPIKED_GOOMBA_TERRITORY,
    .settings = &N(NpcSettings_SpikedGoomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = SPIKED_GOOMBA_DROPS,
    .animations = SPIKED_GOOMBA_ANIMS,
};

NpcData N(NpcData_Paragoomba) = {
    .id = NPC_Paragoomba,
    .pos = { GEN_NPC_PARAGOOMBA_VEC },
    .yaw = GEN_NPC_PARAGOOMBA_DIR,
    .territory = GEN_NPC_PARAGOOMBA_TERRITORY,
    .settings = &N(NpcSettings_Paragoomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PARAGOOMBA_DROPS,
    .animations = PARAGOOMBA_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_SpikedGoomba), BTL_KMR_1_FORMATION_0B, BTL_KMR_1_STAGE_02),
    NPC_GROUP(N(NpcData_Paragoomba), BTL_KMR_1_FORMATION_09, BTL_KMR_1_STAGE_02),
    {}
};
