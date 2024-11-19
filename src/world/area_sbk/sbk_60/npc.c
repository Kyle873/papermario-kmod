#include "sbk_60.h"

#include "world/common/enemy/Pokey.inc.c"

NpcData N(NpcData_Pokey) = {
    .id = NPC_Pokey,
    .pos = { GEN_NPC_POKEY_VEC },
    .yaw = GEN_NPC_POKEY_DIR,
    .territory = GEN_NPC_POKEY_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Pokey), BTL_SBK_FORMATION_03, BTL_SBK_STAGE_00),
    {}
};
