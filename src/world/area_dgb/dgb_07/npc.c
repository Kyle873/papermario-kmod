#include "dgb_07.h"

#define INCLUDE_CLUBBA_NAPPING
#include "world/common/enemy/Clubba_Multi.inc.c"

NpcData N(NpcData_Clubba_01)[] = {
    {
        .id = NPC_Clubba_01,
        .pos = { GEN_NPC_CLUBBA_01_VEC },
        .yaw = GEN_NPC_CLUBBA_01_DIR,
        .territory = GEN_NPC_CLUBBA_01_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .extraAnimations = N(ExtraAnims_Clubba),
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_01_Hitbox),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Clubba_01), BTL_DGB_FORMATION_01, BTL_DGB_STAGE_02),
    {}
};
