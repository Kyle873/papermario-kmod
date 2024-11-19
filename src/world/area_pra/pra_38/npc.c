#include "pra_38.h"

#include "world/common/enemy/Swooper.inc.c"

EvtScript N(EVS_NpcInit_Swoopula) = {
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_REFLECT_FLOOR, TRUE)
    Return
    End
};

NpcData N(NpcData_Swoopula_01) = {
    .id = NPC_Swoopula_01,
    .pos = { GEN_NPC_SWOOPULA_01_VEC },
    .yaw = GEN_NPC_SWOOPULA_01_DIR,
    .territory = GEN_NPC_SWOOPULA_01_TERRITORY,
    .init = &N(EVS_NpcInit_Swoopula),
    .settings = &N(NpcSettings_Swoopula),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = SWOOPULA_DROPS,
    .animations = SWOOPULA_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Swoopula_02) = {
    .id = NPC_Swoopula_02,
    .pos = { GEN_NPC_SWOOPULA_02_VEC },
    .yaw = GEN_NPC_SWOOPULA_02_DIR,
    .territory = GEN_NPC_SWOOPULA_02_TERRITORY,
    .init = &N(EVS_NpcInit_Swoopula),
    .settings = &N(NpcSettings_Swoopula),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = SWOOPULA_DROPS,
    .animations = SWOOPULA_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Swoopula_01), BTL_PRA_FORMATION_01, BTL_PRA_STAGE_00),
    NPC_GROUP(N(NpcData_Swoopula_02), BTL_PRA_FORMATION_02, BTL_PRA_STAGE_00),
    {}
};
