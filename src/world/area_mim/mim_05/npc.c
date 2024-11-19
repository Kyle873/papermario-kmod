#include "mim_05.h"

#include "world/common/enemy/PiranhaPlant.inc.c"

NpcData N(NpcData_PiranhaPlant_01)[] = {
    {
        .id = NPC_PiranhaPlant_01,
        .pos = { GEN_NPC_PIRANHA_PLANT_01_VEC },
        .yaw = GEN_NPC_PIRANHA_PLANT_01_DIR,
        .territory = GEN_NPC_PIRANHA_PLANT_01_TERRITORY,
        .settings = &N(NpcSettings_PiranhaPlant),
        .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = PIRANHA_PLANT_DROPS,
        .animations = PIRANHA_PLANT_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    PIRANHA_PLANT_HITBOX(NPC_PiranhaPlant_01_Hitbox)
};

NpcData N(NpcData_PiranhaPlant_02)[] = {
    {
        .id = NPC_PiranhaPlant_02,
        .pos = { GEN_NPC_PIRANHA_PLANT_02_VEC },
        .yaw = GEN_NPC_PIRANHA_PLANT_02_DIR,
        .territory = GEN_NPC_PIRANHA_PLANT_02_TERRITORY,
        .settings = &N(NpcSettings_PiranhaPlant),
        .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = PIRANHA_PLANT_DROPS,
        .animations = PIRANHA_PLANT_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    PIRANHA_PLANT_HITBOX(NPC_PiranhaPlant_02_Hitbox)
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_PiranhaPlant_01), BTL_MIM_FORMATION_0B, BTL_MIM_STAGE_00),
    NPC_GROUP(N(NpcData_PiranhaPlant_02), BTL_MIM_FORMATION_0A, BTL_MIM_STAGE_00),
    {}
};
