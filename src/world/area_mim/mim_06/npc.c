#include "mim_06.h"

#include "world/common/enemy/PiranhaPlant.inc.c"
#include "world/common/enemy/ForestFuzzy_Wander.inc.c"

NpcData N(NpcData_PiranhaPlant_01)[] = {
    {
        .id = NPC_PiranhaPlant_01,
        .pos = { GEN_NPC_PIRANHA_PLANT_01_VEC },
        .yaw = GEN_NPC_PIRANHA_PLANT_01_DIR,
        .territory = GEN_NPC_PIRANHA_PLANT_01_TERRITORY,
        .settings = &N(NpcSettings_PiranhaPlant),
        .flags = 0,
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
        .flags = 0,
        .drops = PIRANHA_PLANT_DROPS,
        .animations = PIRANHA_PLANT_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    PIRANHA_PLANT_HITBOX(NPC_PiranhaPlant_02_Hitbox)
};

NpcData N(NpcData_Fuzzy) = {
    .id = NPC_Fuzzy,
    .pos = { GEN_NPC_FUZZY_VEC },
    .yaw = GEN_NPC_FUZZY_DIR,
    .territory = GEN_NPC_FUZZY_TERRITORY,
    .settings = &N(NpcSettings_ForestFuzzy_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = FOREST_FUZZY_DROPS,
    .animations = FOREST_FUZZY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_PiranhaPlant_01), BTL_MIM_FORMATION_0D, BTL_MIM_STAGE_00),
    NPC_GROUP(N(NpcData_PiranhaPlant_02), BTL_MIM_FORMATION_0E, BTL_MIM_STAGE_00),
    NPC_GROUP(N(NpcData_Fuzzy), BTL_MIM_FORMATION_07, BTL_MIM_STAGE_00),
    {}
};
