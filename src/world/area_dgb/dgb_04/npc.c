#include "dgb_04.h"

#define AI_SENTINEL_FIRST_NPC NPC_Sentinel
#define AI_SENTINEL_LAST_NPC  NPC_Sentinel
#include "world/common/enemy/Sentinel.inc.c"

NpcData N(NpcData_Sentinel) = {
    .id = NPC_Sentinel,
    .pos = { GEN_NPC_SENTINEL_VEC },
    .yaw = GEN_NPC_SENTINEL_DIR,
    .territory = GEN_NPC_SENTINEL_TERRITORY,
    .settings = &N(NpcSettings_Sentinel),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = NO_DROPS,
    .animations = SENTINEL_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Sentinel)),
    {}
};
