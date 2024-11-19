#include "mim_01.h"

#include "world/common/enemy/PiranhaPlant.inc.c"

NpcData N(NpcData_PiranhaPlant)[] = {
    {
        .id = NPC_PiranhaPlant,
        .pos = { GEN_NPC_PIRANHA_PLANT_VEC },
        .yaw = GEN_NPC_PIRANHA_PLANT_DIR,
        .territory = GEN_NPC_PIRANHA_PLANT_TERRITORY,
        .settings = &N(NpcSettings_PiranhaPlant),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = PIRANHA_PLANT_DROPS,
        .animations = PIRANHA_PLANT_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    PIRANHA_PLANT_HITBOX(NPC_PiranhaPlant_Hitbox)
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_PiranhaPlant), BTL_MIM_FORMATION_09, BTL_MIM_STAGE_00),
    {}
};
