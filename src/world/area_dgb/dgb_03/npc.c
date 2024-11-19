#include "dgb_03.h"

#define INCLUDE_CLUBBA_WANDER
#define INCLUDE_CLUBBA_PATROL
#define INCLUDE_CLUBBA_NAPPING
#include "world/common/enemy/Clubba_Multi.inc.c"

EvtScript N(EVS_NpcInit_Clubba_Napping) = {
    Call(GetEntryID, LVar0)
    IfEq(LVar0, dgb_03_ENTRY_3)
        Call(SetNpcPos, NPC_SELF, -330, 210, -20)
    EndIf
    Return
    End
};

NpcData N(NpcData_Clubba_Wander)[] = {
    {
        .id = NPC_Clubba_Wander,
        .pos = { GEN_NPC_CLUBBA_WANDER_VEC },
        .yaw = GEN_NPC_CLUBBA_WANDER_DIR,
        .territory = GEN_NPC_CLUBBA_WANDER_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Wander),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_Wander_Hitbox),
};

NpcData N(NpcData_Clubba_Patrol)[] = {
    {
        .id = NPC_Clubba_Patrol,
        .pos = { GEN_NPC_CLUBBA_PATROL_VEC },
        .yaw = GEN_NPC_CLUBBA_PATROL_DIR,
        .territory = GEN_NPC_CLUBBA_PATROL_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Patrol),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_Patrol_Hitbox),
};

NpcData N(NpcData_Clubba_Napping)[] = {
    {
        .id = NPC_Clubba_Napping,
        .pos = { GEN_NPC_CLUBBA_NAPPING_VEC },
        .yaw = GEN_NPC_CLUBBA_NAPPING_DIR,
        .territory = GEN_NPC_CLUBBA_NAPPING_TERRITORY,
        .init = &N(EVS_NpcInit_Clubba_Napping),
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT | AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_Napping_Hitbox),
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Clubba_Wander), BTL_DGB_FORMATION_01, BTL_DGB_STAGE_01),
    NPC_GROUP(N(NpcData_Clubba_Patrol), BTL_DGB_FORMATION_01, BTL_DGB_STAGE_01),
    NPC_GROUP(N(NpcData_Clubba_Napping), BTL_DGB_FORMATION_03, BTL_DGB_STAGE_00),
    {}
};
