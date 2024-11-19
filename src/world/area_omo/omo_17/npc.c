#include "omo_17.h"

#include "world/common/enemy/ShyGuy_Wander.inc.c"
#include "world/common/enemy/PyroGuy.inc.c"
#include "world/common/enemy/GrooveGuy.inc.c"
#include "world/common/enemy/SkyGuy.inc.c"
#include "world/common/enemy/SpyGuy.inc.c"

EvtScript N(EVS_NpcAuxAI_Conductor) = {
    Return
    End
};

EvtScript N(EVS_NpcInteract_Conductor) = {
    Return
    End
};

EvtScript N(EVS_NpcAI_Conductor) = {
    Return
    End
};

NpcSettings N(NpcSettings_Conductor) = {
    .defaultAnim = ANIM_TrainToad_Blue_Idle,
    .height = 24,
    .radius = 24,
    .otherAI = &N(EVS_NpcAuxAI_Conductor),
    .onInteract = &N(EVS_NpcInteract_Conductor),
    .ai = &N(EVS_NpcAI_Conductor),
    .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
};

NpcData N(NpcData_Conductor) = {
    .id = NPC_Conductor,
    .pos = { NPC_DISPOSE_LOCATION },
    .yaw = 0,
    .initVarCount = 1,
    .initVar = { .value = 0 },
    .settings = &N(NpcSettings_Conductor),
    .flags = ENEMY_FLAG_PASSIVE,
};

NpcData N(NpcData_SpyGuy)[] = {
    {
        .id = NPC_SpyGuy,
        .pos = { GEN_NPC_SPY_GUY_VEC },
        .yaw = GEN_NPC_SPY_GUY_DIR,
        .territory = GEN_NPC_SPY_GUY_TERRITORY,
        .settings = &N(NpcSettings_SpyGuy),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = SPY_GUY_DROPS,
        .animations = SPY_GUY_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    SPY_GUY_ROCK_HITBOX(NPC_SpyGuy_Rock1),
    SPY_GUY_ROCK_HITBOX(NPC_SpyGuy_Rock2),
    SPY_GUY_ROCK_HITBOX(NPC_SpyGuy_Rock3),
};

NpcData N(NpcData_PyroGuy) = {
    .id = NPC_PyroGuy,
    .pos = { GEN_NPC_PYRO_GUY_VEC },
    .yaw = GEN_NPC_PYRO_GUY_DIR,
    .territory = GEN_NPC_PYRO_GUY_TERRITORY,
    .settings = &N(NpcSettings_PyroGuy),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = PYRO_GUY_DROPS,
    .animations = PYRO_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_GrooveGuy) = {
    .id = NPC_GrooveGuy,
    .pos = { GEN_NPC_GROOVE_GUY_VEC },
    .yaw = GEN_NPC_GROOVE_GUY_DIR,
    .territory = GEN_NPC_GROOVE_GUY_TERRITORY,
    .settings = &N(NpcSettings_GrooveGuy),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = GROOVE_GUY_DROPS_B,
    .animations = GROOVE_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_SpyGuy), BTL_OMO_FORMATION_17, BTL_OMO_STAGE_06),
    NPC_GROUP(N(NpcData_PyroGuy), BTL_OMO_FORMATION_1D, BTL_OMO_STAGE_06),
    NPC_GROUP(N(NpcData_GrooveGuy), BTL_OMO_FORMATION_2B, BTL_OMO_STAGE_06),
    NPC_GROUP(N(NpcData_Conductor)),
    {}
};
