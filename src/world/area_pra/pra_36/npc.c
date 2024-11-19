#include "pra_36.h"

#include "world/common/enemy/Duplighost_Wander.inc.c"

EvtScript N(EVS_NpcInit_Duplighost) = {
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_REFLECT_FLOOR, TRUE)
    Return
    End
};

NpcData N(NpcData_Duplighost) = {
    .id = NPC_Duplighost,
    .pos = { GEN_NPC_DUPLIGHOST_VEC },
    .yaw = GEN_NPC_DUPLIGHOST_DIR,
    .territory = GEN_NPC_DUPLIGHOST_TERRITORY,
    .init = &N(EVS_NpcInit_Duplighost),
    .settings = &N(NpcSettings_Duplighost_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = DUPLIGHOST_DROPS,
    .animations = DUPLIGHOST_ANIMS,
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Duplighost), BTL_PRA3_FORMATION_0A, BTL_PRA3_STAGE_00),
    {}
};
