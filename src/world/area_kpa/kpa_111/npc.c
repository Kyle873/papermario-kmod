#include "kpa_111.h"

#include "world/common/enemy/DryBones.inc.c"

NpcData N(NpcData_DryBones)[] = {
    {
        .id = NPC_DryBones_01,
        .pos = { GEN_NPC_DRY_BONES_01_VEC },
        .yaw = GEN_NPC_DRY_BONES_01_DIR,
        .territory = GEN_NPC_DRY_BONES_01_TERRITORY,
        .settings = &N(NpcSettings_DryBones),
        .flags = ENEMY_FLAG_FLYING,
        .drops = DRY_BONES_DROPS,
        .animations = DRY_BONES_ANIMS,
    },
    DRY_BONES_BONE_HITBOX(NPC_DryBones_01 + 1),
    DRY_BONES_BONE_HITBOX(NPC_DryBones_01 + 2),
    DRY_BONES_BONE_HITBOX(NPC_DryBones_01 + 3),
};

NpcData N(NpcData_DryBones_02)[] = {
    {
        .id = NPC_DryBones_02,
        .pos = { GEN_NPC_DRY_BONES_02_VEC },
        .yaw = GEN_NPC_DRY_BONES_02_DIR,
        .territory = GEN_NPC_DRY_BONES_02_TERRITORY,
        .settings = &N(NpcSettings_DryBones),
        .flags = ENEMY_FLAG_FLYING,
        .drops = DRY_BONES_DROPS,
        .animations = DRY_BONES_ANIMS,
    },
    DRY_BONES_BONE_HITBOX(NPC_DryBones_02 + 1),
    DRY_BONES_BONE_HITBOX(NPC_DryBones_02 + 2),
    DRY_BONES_BONE_HITBOX(NPC_DryBones_02 + 3),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_DryBones), BTL_KPA_FORMATION_07, BTL_KPA_STAGE_0C),
    NPC_GROUP(N(NpcData_DryBones_02), BTL_KPA_FORMATION_0C, BTL_KPA_STAGE_0C),
    {}
};
