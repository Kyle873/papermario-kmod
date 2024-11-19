#include "tik_07.h"

#include "world/common/enemy/Paragloomba_Wander.inc.c"

NpcData N(NpcData_Paragloomba_01) = {
    .id = NPC_Paragoomba_01,
    .pos = { GEN_NPC_PARAGOOMBA_01_VEC },
    .yaw = GEN_NPC_PARAGOOMBA_01_DIR,
    .territory = GEN_NPC_PARAGOOMBA_01_TERRITORY,
    .settings = &N(NpcSettings_Paragloomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PARAGLOOMBA_DROPS,
    .animations = PARAGLOOMBA_ANIMS,
};

NpcData N(NpcData_Paragloomba_02) = {
    .id = NPC_Paragoomba_02,
    .pos = { GEN_NPC_PARAGOOMBA_02_VEC },
    .yaw = GEN_NPC_PARAGOOMBA_02_DIR,
    .territory = GEN_NPC_PARAGOOMBA_02_TERRITORY,
    .settings = &N(NpcSettings_Paragloomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PARAGLOOMBA_DROPS,
    .animations = PARAGLOOMBA_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Paragloomba_01), BTL_TIK_FORMATION_0C, BTL_TIK_STAGE_01),
    NPC_GROUP(N(NpcData_Paragloomba_02), BTL_TIK_FORMATION_0D, BTL_TIK_STAGE_01),
    {}
};
