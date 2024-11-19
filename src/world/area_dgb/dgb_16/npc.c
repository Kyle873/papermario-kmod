#include "dgb_16.h"

#define INCLUDE_CLUBBA_NAPPING
#include "world/common/enemy/Clubba_Multi.inc.c"

NpcData N(NpcData_Clubba_01)[] = {
    {
        .id = NPC_Clubba_01,
        .pos = { GEN_NPC_CLUBBA_01_VEC },
        .yaw = GEN_NPC_CLUBBA_01_DIR,
        .territory = GEN_NPC_CLUBBA_01_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .extraAnimations = N(ExtraAnims_Clubba),
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_01_Hitbox),
};

NpcData N(NpcData_Clubba_02)[] = {
    {
        .id = NPC_Clubba_02,
        .pos = { GEN_NPC_CLUBBA_02_VEC },
        .yaw = GEN_NPC_CLUBBA_02_DIR,
        .territory = GEN_NPC_CLUBBA_02_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_02_Hitbox),
};

NpcData N(NpcData_Clubba_03)[] = {
    {
        .id = NPC_Clubba_03,
        .pos = { GEN_NPC_CLUBBA_03_VEC },
        .yaw = GEN_NPC_CLUBBA_03_DIR,
        .territory = GEN_NPC_CLUBBA_03_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_03_Hitbox),
};

NpcData N(NpcData_Clubba_04)[] = {
    {
        .id = NPC_Clubba_04,
        .pos = { GEN_NPC_CLUBBA_04_VEC },
        .yaw = GEN_NPC_CLUBBA_04_DIR,
        .territory = GEN_NPC_CLUBBA_04_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_04_Hitbox),
};

NpcData N(NpcData_Clubba_05)[] = {
    {
        .id = NPC_Clubba_05,
        .pos = { GEN_NPC_CLUBBA_05_VEC },
        .yaw = GEN_NPC_CLUBBA_05_DIR,
        .territory = GEN_NPC_CLUBBA_05_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_05_Hitbox),
};

NpcData N(NpcData_Clubba_06)[] = {
    {
        .id = NPC_Clubba_06,
        .pos = { GEN_NPC_CLUBBA_06_VEC },
        .yaw = GEN_NPC_CLUBBA_06_DIR,
        .territory = GEN_NPC_CLUBBA_06_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_06_Hitbox),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Clubba_01), BTL_DGB_FORMATION_03, BTL_DGB_STAGE_02),
    NPC_GROUP(N(NpcData_Clubba_02), BTL_DGB_FORMATION_00, BTL_DGB_STAGE_02),
    NPC_GROUP(N(NpcData_Clubba_03), BTL_DGB_FORMATION_00, BTL_DGB_STAGE_02),
    NPC_GROUP(N(NpcData_Clubba_04), BTL_DGB_FORMATION_00, BTL_DGB_STAGE_02),
    NPC_GROUP(N(NpcData_Clubba_05), BTL_DGB_FORMATION_01, BTL_DGB_STAGE_02),
    NPC_GROUP(N(NpcData_Clubba_06), BTL_DGB_FORMATION_01, BTL_DGB_STAGE_02),
    {}
};
