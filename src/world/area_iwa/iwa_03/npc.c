#include "iwa_03.h"

#include "world/common/enemy/MontyMole_GroundAmbush.inc.c"
#include "world/common/enemy/Cleft.inc.c"

NpcData N(NpcData_Cleft_01) = {
    .id = NPC_Cleft_01,
    .pos = { GEN_NPC_CLEFT_01_VEC },
    .yaw = GEN_NPC_CLEFT_01_DIR,
    .territory = GEN_NPC_CLEFT_01_TERRITORY,
    .settings = &N(NpcSettings_Cleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = CLEFT_DROPS,
    .animations = CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Cleft_02) = {
    .id = NPC_Cleft_02,
    .pos = { GEN_NPC_CLEFT_02_VEC },
    .yaw = GEN_NPC_CLEFT_02_DIR,
    .territory = GEN_NPC_CLEFT_02_TERRITORY,
    .settings = &N(NpcSettings_Cleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = CLEFT_DROPS,
    .animations = CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Cleft_03) = {
    .id = NPC_Cleft_03,
    .pos = { GEN_NPC_CLEFT_03_VEC },
    .yaw = GEN_NPC_CLEFT_03_DIR,
    .territory = GEN_NPC_CLEFT_03_TERRITORY,
    .settings = &N(NpcSettings_Cleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = CLEFT_DROPS,
    .animations = CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_MontyMole)[] = {
    {
        .id = NPC_MontyMole,
        .pos = { GEN_NPC_MONTY_MOLE_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_DIR,
        .territory = GEN_NPC_MONTY_MOLE_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_GroundAmbush),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = MONTY_MOLE_DROPS,
        .animations = MONTY_MOLE_AMBUSH_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    {
        .id = NPC_MontyMole_Hole,
        .pos = { GEN_NPC_MONTY_MOLE_HOLE_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_HOLE_DIR,
        .territory = GEN_NPC_MONTY_MOLE_HOLE_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_GroundAmbush_Hole),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DISABLE_AI | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = MONTY_MOLE_AMBUSH_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Cleft_01), BTL_IWA_FORMATION_03, BTL_IWA_STAGE_00),
    NPC_GROUP(N(NpcData_Cleft_02), BTL_IWA_FORMATION_00, BTL_IWA_STAGE_00),
    NPC_GROUP(N(NpcData_Cleft_03), BTL_IWA_FORMATION_01, BTL_IWA_STAGE_00),
    NPC_GROUP(N(NpcData_MontyMole), BTL_IWA_FORMATION_09, BTL_IWA_STAGE_00),
    {}
};
