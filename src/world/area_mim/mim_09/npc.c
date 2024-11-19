#include "mim_09.h"

#include "world/common/npc/Oaklie.inc.c"
#include "world/common/enemy/ForestFuzzy_Wander.inc.c"

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
    NPC_GROUP(N(NpcData_Fuzzy), BTL_MIM_FORMATION_05, BTL_MIM_STAGE_00),
    {}
};
