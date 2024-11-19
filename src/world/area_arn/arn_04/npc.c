#include "arn_04.h"

#include "world/common/enemy/HyperGoomba_Patrol.inc.c"
#include "world/common/enemy/HyperParagoomba.inc.c"
#include "world/common/enemy/HyperCleft.inc.c"

NpcData N(NpcData_HyperParagoomba) = {
    .id = NPC_HyperParagoomba,
    .pos = { GEN_NPC_HYPER_PARAGOOMBA_VEC },
    .yaw = GEN_NPC_HYPER_PARAGOOMBA_DIR,
    .territory = GEN_NPC_HYPER_PARAGOOMBA_TERRITORY,
    .settings = &N(NpcSettings_HyperParagoomba),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = HYPER_PARAGOOMBA_DROPS,
    .animations = HYPER_PARAGOOMBA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_HyperGoomba) = {
    .id = NPC_HyperGoomba,
    .pos = { GEN_NPC_HYPER_GOOMBA_VEC },
    .yaw = GEN_NPC_HYPER_GOOMBA_DIR,
    .territory = GEN_NPC_HYPER_GOOMBA_TERRITORY,
    .settings = &N(NpcSettings_HyperGoomba_Patrol),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = HYPER_GOOMBA_DROPS,
    .animations = HYPER_GOOMBA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_HyperCleft_01) = {
    .id = NPC_HyperCleft_01,
    .pos = { GEN_NPC_HYPER_CLEFT_01_VEC },
    .yaw = GEN_NPC_HYPER_CLEFT_01_DIR,
    .territory = GEN_NPC_HYPER_CLEFT_01_TERRITORY,
    .settings = &N(NpcSettings_HyperCleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = HYPER_CLEFT_DROPS,
    .animations = HYPER_CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_HyperCleft_02) = {
    .id = NPC_HyperCleft_02,
    .pos = { GEN_NPC_HYPER_CLEFT_02_VEC },
    .yaw = GEN_NPC_HYPER_CLEFT_02_DIR,
    .territory = GEN_NPC_HYPER_CLEFT_02_TERRITORY,
    .settings = &N(NpcSettings_HyperCleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = HYPER_CLEFT_DROPS,
    .animations = HYPER_CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_HyperParagoomba), BTL_ARN_FORMATION_09, BTL_ARN_STAGE_00),
    NPC_GROUP(N(NpcData_HyperGoomba), BTL_ARN_FORMATION_03, BTL_ARN_STAGE_00),
    NPC_GROUP(N(NpcData_HyperCleft_01), BTL_ARN_FORMATION_0C, BTL_ARN_STAGE_00),
    NPC_GROUP(N(NpcData_HyperCleft_02), BTL_ARN_FORMATION_0E, BTL_ARN_STAGE_00),
    {}
};
