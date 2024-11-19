#include "nok_15.h"

#include "world/common/enemy/KoopaTroopa_Wander.inc.c"
#include "world/common/enemy/Paratroopa.inc.c"
#include "world/common/enemy/SpikedGoomba_Wander.inc.c"

NpcData N(NpcData_KoopaTroopa) = {
    .id = NPC_KoopaTroopa,
    .pos = { GEN_NPC_KOOPA_TROOPA_VEC },
    .yaw = GEN_NPC_KOOPA_TROOPA_DIR,
    .territory = GEN_NPC_KOOPA_TROOPA_TERRITORY,
    .settings = &N(NpcSettings_KoopaTroopa_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = KOOPA_TROOPA_NOK_DROPS,
    .animations = KOOPA_TROOPA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_ParaTroopa) = {
    .id = NPC_ParaTroopa,
    .pos = { GEN_NPC_PARA_TROOPA_VEC },
    .yaw = GEN_NPC_PARA_TROOPA_DIR,
    .territory = GEN_NPC_PARA_TROOPA_TERRITORY,
    .settings = &N(NpcSettings_ParaTroopa),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PARATROOPA_DROPS,
    .animations = PARATROOPA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_KoopaTroopa), BTL_NOK_FORMATION_0D, BTL_NOK_STAGE_00),
    NPC_GROUP(N(NpcData_ParaTroopa), BTL_NOK_FORMATION_14, BTL_NOK_STAGE_00),
    {}
};
