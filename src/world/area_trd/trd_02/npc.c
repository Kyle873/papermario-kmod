#include "trd_02.h"

#include "world/common/enemy/Bobomb_Wander.inc.c"
#include "world/common/enemy/KoopaTroopa_Wander.inc.c"
#include "world/common/enemy/KoopaTroopa_Patrol.inc.c"

NpcData N(NpcData_Bobomb_01) = {
    .id = NPC_Bobomb_01,
    .pos = { GEN_NPC_BOBOMB_01_VEC },
    .yaw = GEN_NPC_BOBOMB_01_DIR,
    .territory = GEN_NPC_BOBOMB_01_TERRITORY,
    .settings = &N(NpcSettings_Bobomb_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = BOBOMB_DROPS,
    .animations = BOBOMB_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Bobomb_02) = {
    .id = NPC_Bobomb_02,
    .pos = { GEN_NPC_BOBOMB_02_VEC },
    .yaw = GEN_NPC_BOBOMB_02_DIR,
    .territory = GEN_NPC_BOBOMB_02_TERRITORY,
    .settings = &N(NpcSettings_Bobomb_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = BOBOMB_DROPS,
    .animations = BOBOMB_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_KoopaTroopa) = {
    .id = NPC_KoopaTroopa,
    .pos = { GEN_NPC_KOOPA_TROOPA_VEC },
    .yaw = GEN_NPC_KOOPA_TROOPA_DIR,
    .territory = GEN_NPC_KOOPA_TROOPA_TERRITORY,
    .settings = &N(NpcSettings_KoopaTroopa_Patrol),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = KOOPA_TROOPA_TRD_DROPS,
    .animations = KOOPA_TROOPA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Bobomb_01), BTL_TRD_1_FORMATION_10, BTL_TRD_1_STAGE_09),
    NPC_GROUP(N(NpcData_Bobomb_02), BTL_TRD_1_FORMATION_10, BTL_TRD_1_STAGE_09),
    NPC_GROUP(N(NpcData_KoopaTroopa), BTL_TRD_1_FORMATION_07, BTL_TRD_1_STAGE_0C),
    {}
};
