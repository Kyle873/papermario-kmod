#include "flo_17.h"

#include "world/common/npc/Dummy.inc.c"

#define AI_LAKITU_FIRST_SPINY_ID    NPC_Spiny_01
#define AI_LAKITU_LAST_SPINY_ID     NPC_Spiny_04
#include "world/common/enemy/Lakitu_SpinySpawner.inc.c"

NpcData N(NpcData_Lakitu_01) = {
    .id = NPC_Lakitu_01,
    .pos = { GEN_NPC_LAKITU_01_VEC },
    .yaw = GEN_NPC_LAKITU_01_DIR,
    .territory = GEN_NPC_LAKITU_01_TERRITORY,
    .settings = &N(NpcSettings_Lakitu_SpinySpawner),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = LAKITU_DROPS,
    .animations = LAKITU_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Lakitu_02) = {
    .id = NPC_Lakitu_02,
    .pos = { GEN_NPC_LAKITU_02_VEC },
    .yaw = GEN_NPC_LAKITU_02_DIR,
    .territory = GEN_NPC_LAKITU_02_TERRITORY,
    .settings = &N(NpcSettings_Lakitu_SpinySpawner),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = LAKITU_DROPS,
    .animations = LAKITU_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Spiny_01) = {
    .id = NPC_Spiny_01,
    .pos = { GEN_NPC_SPINY_01_VEC },
    .yaw = GEN_NPC_SPINY_01_DIR,
    .territory = GEN_NPC_SPINY_01_TERRITORY,
    .settings = &N(NpcSettings_SpawnedSpiny),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SPINY_DROPS,
    .animations = SPINY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Spiny_02) = {
    .id = NPC_Spiny_02,
    .pos = { GEN_NPC_SPINY_02_VEC },
    .yaw = GEN_NPC_SPINY_02_DIR,
    .territory = GEN_NPC_SPINY_02_TERRITORY,
    .settings = &N(NpcSettings_SpawnedSpiny),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SPINY_DROPS,
    .animations = SPINY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Spiny_03) = {
    .id = NPC_Spiny_03,
    .pos = { GEN_NPC_SPINY_03_VEC },
    .yaw = GEN_NPC_SPINY_03_DIR,
    .territory = GEN_NPC_SPINY_03_TERRITORY,
    .settings = &N(NpcSettings_SpawnedSpiny),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SPINY_DROPS,
    .animations = SPINY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcData N(NpcData_Spiny_04) = {
    .id = NPC_Spiny_04,
    .pos = { GEN_NPC_SPINY_04_VEC },
    .yaw = GEN_NPC_SPINY_04_DIR,
    .territory = GEN_NPC_SPINY_04_TERRITORY,
    .settings = &N(NpcSettings_SpawnedSpiny),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SPINY_DROPS,
    .animations = SPINY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Lakitu_01), BTL_FLO_FORMATION_09, BTL_FLO_STAGE_02),
    NPC_GROUP(N(NpcData_Lakitu_02), BTL_FLO_FORMATION_0A, BTL_FLO_STAGE_02),
    NPC_GROUP(N(NpcData_Spiny_01), BTL_FLO_FORMATION_0C, BTL_FLO_STAGE_02),
    NPC_GROUP(N(NpcData_Spiny_02), BTL_FLO_FORMATION_0C, BTL_FLO_STAGE_02),
    NPC_GROUP(N(NpcData_Spiny_03), BTL_FLO_FORMATION_0C, BTL_FLO_STAGE_02),
    NPC_GROUP(N(NpcData_Spiny_04), BTL_FLO_FORMATION_0C, BTL_FLO_STAGE_02),
    {}
};
