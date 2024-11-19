#include "pra_37.h"

#define INCLUDE_FROST_CLUBBA_WANDER
#include "world/common/enemy/FrostClubba_Multi.inc.c"

EvtScript N(EVS_NpcInit_FrostClubba) = {
    Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_REFLECT_FLOOR, TRUE)
    Return
    End
};

NpcData N(NpcData_FrostClubba)[] = {
    {
        .id = NPC_FrostClubba,
        .pos = { GEN_NPC_FROST_CLUBBA_VEC },
        .yaw = GEN_NPC_FROST_CLUBBA_DIR,
        .territory = GEN_NPC_FROST_CLUBBA_TERRITORY,
        .init = &N(EVS_NpcInit_FrostClubba),
        .settings = &N(NpcSettings_FrostClubba_Wander),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = FROST_CLUBBA_DROPS,
        .animations = FROST_CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    FROST_CLUBBA_MACE_HITBOX(NPC_FrostClubba_Hitbox),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_FrostClubba), BTL_PRA_FORMATION_0D, BTL_PRA_STAGE_00),
    {}
};
