#include "osr_00.h"

#include "world/common/npc/Luigi.inc.c"

NpcData N(NpcData_Luigi) = {
    .id = NPC_Luigi,
    .pos = { GEN_NPC_LUIGI_VEC },
    .yaw = GEN_NPC_LUIGI_DIR,
    .territory = GEN_NPC_LUIGI_TERRITORY,
    .settings = &N(NpcSettings_Luigi),
    .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = NO_DROPS,
    .animations = LUIGI_ANIMS,
};

NpcGroupList N(IntroNPCs) = {
    NPC_GROUP(N(NpcData_Luigi)),
    {}
};
