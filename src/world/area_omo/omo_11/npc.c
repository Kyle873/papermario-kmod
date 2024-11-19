#include "omo_11.h"

#include "world/common/enemy/PyroGuy.inc.c"

NpcData N(NpcData_PyroGuy_01) = {
    .id = NPC_PyroGuy_01,
    .pos = { GEN_NPC_PYRO_GUY_01_VEC },
    .yaw = GEN_NPC_PYRO_GUY_01_DIR,
    .territory = GEN_NPC_PYRO_GUY_01_TERRITORY,
    .settings = &N(NpcSettings_PyroGuy),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PYRO_GUY_DROPS,
    .animations = PYRO_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_PyroGuy_02) = {
    .id = NPC_PyroGuy_02,
    .pos = { GEN_NPC_PYRO_GUY_02_VEC },
    .yaw = GEN_NPC_PYRO_GUY_02_DIR,
    .territory = GEN_NPC_PYRO_GUY_02_TERRITORY,
    .settings = &N(NpcSettings_PyroGuy),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PYRO_GUY_DROPS,
    .animations = PYRO_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_PyroGuy_01), BTL_OMO_FORMATION_22, BTL_OMO_STAGE_07),
    NPC_GROUP(N(NpcData_PyroGuy_02), BTL_OMO_FORMATION_24, BTL_OMO_STAGE_07),
    {}
};
