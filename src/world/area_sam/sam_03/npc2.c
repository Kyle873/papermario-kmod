#include "sam_03.h"

#include "world/common/enemy/Gulpit.inc.c"

NpcData N(NpcData_Gulpit_01)[] = {
    {
        .id = NPC_Gulpit_01,
        .pos = { GEN_NPC_GULPIT_01_VEC },
        .yaw = GEN_NPC_GULPIT_01_DIR,
        .territory = GEN_NPC_GULPIT_01_TERRITORY,
        .settings = &N(NpcSettings_Gulpit),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = GULPIT_DROPS,
        .animations = GULPIT_ANIMS,
        .extraAnimations = N(ExtraAnims_Gulpit),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    GULPIT_HITBOX(NPC_Gulpit_01_Hitbox),
};

NpcData N(NpcData_Gulpit_02)[] = {
    {
        .id = NPC_Gulpit_02,
        .pos = { GEN_NPC_GULPIT_02_VEC },
        .yaw = GEN_NPC_GULPIT_02_DIR,
        .territory = GEN_NPC_GULPIT_02_TERRITORY,
        .settings = &N(NpcSettings_Gulpit),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = GULPIT_DROPS,
        .animations = GULPIT_ANIMS,
        .extraAnimations = N(ExtraAnims_Gulpit),
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    GULPIT_HITBOX(NPC_Gulpit_02_Hitbox),
};

NpcGroupList N(AfterNPCs) = {
    NPC_GROUP(N(NpcData_Gulpit_01), BTL_SAM_FORMATION_01, BTL_SAM_STAGE_00),
    NPC_GROUP(N(NpcData_Gulpit_02), BTL_SAM_FORMATION_02, BTL_SAM_STAGE_00),
    {}
};
