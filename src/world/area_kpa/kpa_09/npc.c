#include "kpa_09.h"

#include "world/common/enemy/DryBones.inc.c"

NpcData N(NpcData_DryBones)[] = {
    {
        .id = NPC_DryBones,
        .pos = { GEN_NPC_DRY_BONES_VEC },
        .yaw = GEN_NPC_DRY_BONES_DIR,
        .territory = GEN_NPC_DRY_BONES_TERRITORY,
        .settings = &N(NpcSettings_DryBones),
        .flags = ENEMY_FLAG_FLYING,
        .drops = DRY_BONES_DROPS,
        .animations = DRY_BONES_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    DRY_BONES_BONE_HITBOX(NPC_DryBones_Bone1),
    DRY_BONES_BONE_HITBOX(NPC_DryBones_Bone2),
    DRY_BONES_BONE_HITBOX(NPC_DryBones_Bone3),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_DryBones), BTL_KPA_FORMATION_0B, BTL_KPA_STAGE_01),
    {}
};
