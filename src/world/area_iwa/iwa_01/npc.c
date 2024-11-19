#include "iwa_01.h"

#include "world/common/enemy/MontyMole_StoneThrower.inc.c"
#include "world/common/enemy/MontyMole_GroundAmbush.inc.c"
#include "world/common/enemy/MontyMole_WallAmbush.inc.c"
#include "world/common/enemy/Cleft.inc.c"

NpcData N(NpcData_MontyMole_WallAmbush)[] = {
    {
        .id = NPC_MontyMole_01,
        .pos = { GEN_NPC_MONTY_MOLE_01_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_01_DIR,
        .territory = GEN_NPC_MONTY_MOLE_01_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_WallAmbush),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = MONTY_MOLE_DROPS,
        .animations = MONTY_MOLE_AMBUSH_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    {
        .id = NPC_MontyMole_01_Hole,
        .pos = { GEN_NPC_MONTY_MOLE_01_HOLE_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_01_HOLE_DIR,
        .territory = GEN_NPC_MONTY_MOLE_01_HOLE_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_WallAmbush_Hole),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DISABLE_AI | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_DROPS,
        .drops = NO_DROPS,
        .animations = MONTY_MOLE_AMBUSH_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
};

NpcData N(NpcData_MontyMole_StoneThrower_01)[] = {
    {
        .id = NPC_MontyMole_02,
        .pos = { GEN_NPC_MONTY_MOLE_02_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_02_DIR,
        .territory = GEN_NPC_MONTY_MOLE_02_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_StoneThrower),
        .flags = ENEMY_FLAG_FLYING,
        .drops = MONTY_MOLE_DROPS,
        .animations = MONTY_MOLE_THROWER_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    MONTY_MOLE_STONE_HITBOX(NPC_MontyMole_02_Stone)
};

NpcData N(NpcData_MontyMole_StoneThrower_02)[] = {
    {
        .id = NPC_MontyMole_03,
        .pos = { GEN_NPC_MONTY_MOLE_03_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_03_DIR,
        .territory = GEN_NPC_MONTY_MOLE_03_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_StoneThrower),
        .flags = ENEMY_FLAG_FLYING,
        .drops = MONTY_MOLE_DROPS,
        .animations = MONTY_MOLE_THROWER_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    MONTY_MOLE_STONE_HITBOX(NPC_MontyMole_03_Stone)
};

NpcData N(NpcData_MontyMole_StoneThrower_03)[] = {
    {
        .id = NPC_MontyMole_04,
        .pos = { GEN_NPC_MONTY_MOLE_04_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_04_DIR,
        .territory = GEN_NPC_MONTY_MOLE_04_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_StoneThrower),
        .flags = ENEMY_FLAG_FLYING,
        .drops = MONTY_MOLE_DROPS,
        .animations = MONTY_MOLE_THROWER_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    MONTY_MOLE_STONE_HITBOX(NPC_MontyMole_04_Stone)
};

NpcData N(NpcData_Cleft) = {
    .id = NPC_Cleft,
    .pos = { GEN_NPC_CLEFT_VEC },
    .yaw = GEN_NPC_CLEFT_DIR,
    .territory = GEN_NPC_CLEFT_TERRITORY,
    .settings = &N(NpcSettings_Cleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = CLEFT_DROPS,
    .animations = CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_MontyMole_WallAmbush), BTL_IWA_FORMATION_06, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_MontyMole_StoneThrower_01), BTL_IWA_FORMATION_07, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_MontyMole_StoneThrower_02), BTL_IWA_FORMATION_06, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_MontyMole_StoneThrower_03), BTL_IWA_FORMATION_07, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_Cleft), BTL_IWA_FORMATION_04, BTL_IWA_STAGE_01),
    {}
};
