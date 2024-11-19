#include "sbk_05.h"

#include "world/common/enemy/Pokey.inc.c"

NpcData N(NpcData_Pokey_01) = {
    .id = NPC_Pokey_01,
    .pos = { GEN_NPC_POKEY_01_VEC },
    .yaw = GEN_NPC_POKEY_01_DIR,
    .territory = GEN_NPC_POKEY_01_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_02) = {
    .id = NPC_Pokey_02,
    .pos = { GEN_NPC_POKEY_02_VEC },
    .yaw = GEN_NPC_POKEY_02_DIR,
    .territory = GEN_NPC_POKEY_02_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_03) = {
    .id = NPC_Pokey_03,
    .pos = { GEN_NPC_POKEY_03_VEC },
    .yaw = GEN_NPC_POKEY_03_DIR,
    .territory = GEN_NPC_POKEY_03_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_04) = {
    .id = NPC_Pokey_04,
    .pos = { GEN_NPC_POKEY_04_VEC },
    .yaw = GEN_NPC_POKEY_04_DIR,
    .territory = GEN_NPC_POKEY_04_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_05) = {
    .id = NPC_Pokey_05,
    .pos = { GEN_NPC_POKEY_05_VEC },
    .yaw = GEN_NPC_POKEY_05_DIR,
    .territory = GEN_NPC_POKEY_05_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_06) = {
    .id = NPC_Pokey_06,
    .pos = { GEN_NPC_POKEY_06_VEC },
    .yaw = GEN_NPC_POKEY_06_DIR,
    .territory = GEN_NPC_POKEY_06_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_07) = {
    .id = NPC_Pokey_07,
    .pos = { GEN_NPC_POKEY_07_VEC },
    .yaw = GEN_NPC_POKEY_07_DIR,
    .territory = GEN_NPC_POKEY_07_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_08) = {
    .id = NPC_Pokey_08,
    .pos = { GEN_NPC_POKEY_08_VEC },
    .yaw = GEN_NPC_POKEY_08_DIR,
    .territory = GEN_NPC_POKEY_08_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_09) = {
    .id = NPC_Pokey_09,
    .pos = { GEN_NPC_POKEY_09_VEC },
    .yaw = GEN_NPC_POKEY_09_DIR,
    .territory = GEN_NPC_POKEY_09_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Pokey_10) = {
    .id = NPC_Pokey_10,
    .pos = { GEN_NPC_POKEY_10_VEC },
    .yaw = GEN_NPC_POKEY_10_DIR,
    .territory = GEN_NPC_POKEY_10_TERRITORY,
    .settings = &N(NpcSettings_Pokey),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = POKEY_DROPS,
    .animations = POKEY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Pokey_01), BTL_SBK_FORMATION_00, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_02), BTL_SBK_FORMATION_00, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_03), BTL_SBK_FORMATION_00, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_04), BTL_SBK_FORMATION_02, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_05), BTL_SBK_FORMATION_02, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_06), BTL_SBK_FORMATION_03, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_07), BTL_SBK_FORMATION_01, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_08), BTL_SBK_FORMATION_01, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_09), BTL_SBK_FORMATION_01, BTL_SBK_STAGE_00),
    NPC_GROUP(N(NpcData_Pokey_10), BTL_SBK_FORMATION_01, BTL_SBK_STAGE_00),
    {}
};
