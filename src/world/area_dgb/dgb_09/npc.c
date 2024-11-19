#include "dgb_09.h"

#define INCLUDE_CLUBBA_WANDER
#define INCLUDE_CLUBBA_NAPPING
#include "world/common/enemy/Clubba_Multi.inc.c"

#define AI_SENTINEL_FIRST_NPC NPC_Sentinel
#define AI_SENTINEL_LAST_NPC  NPC_Sentinel
#include "world/common/enemy/Sentinel.inc.c"

NpcData N(NpcData_Clubba_Wander)[] = {
    {
        .id = NPC_Clubba_Wander,
        .pos = { GEN_NPC_CLUBBA_WANDER_VEC },
        .yaw = GEN_NPC_CLUBBA_WANDER_DIR,
        .territory = GEN_NPC_CLUBBA_WANDER_TERRITORY,
        .settings = &N(NpcSettings_Clubba_Wander),
        .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .extraAnimations = N(ExtraAnims_Clubba),
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_Wander_Hitbox),
};

EvtScript N(EVS_NpcInit_Clubba_Napping) = {
    Call(GetEntryID, LVar0)
    IfEq(LVar0, dgb_09_ENTRY_3)
        Call(SetNpcPos, NPC_SELF, 240, 0, 88)
        Call(InterpNpcYaw, NPC_SELF, 270, 0)
    EndIf
    Return
    End
};

NpcData N(NpcData_Clubba_Napping)[] = {
    {
        .id = NPC_Clubba_Napping,
        .pos = { GEN_NPC_CLUBBA_NAPPING_VEC },
        .yaw = GEN_NPC_CLUBBA_NAPPING_DIR,
        .territory = GEN_NPC_CLUBBA_NAPPING_TERRITORY,
        .init = &N(EVS_NpcInit_Clubba_Napping),
        .settings = &N(NpcSettings_Clubba_Napping),
        .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = CLUBBA_DROPS,
        .animations = CLUBBA_ANIMS,
        .extraAnimations = N(ExtraAnims_Clubba),
        .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
    },
    CLUBBA_MACE_HITBOX(NPC_Clubba_Napping_Hitbox),
};

NpcData N(NpcData_Sentinel) = {
    .id = NPC_Sentinel,
    .pos = { GEN_NPC_SENTINEL_VEC },
    .yaw = GEN_NPC_SENTINEL_DIR,
    .territory = GEN_NPC_SENTINEL_TERRITORY,
    .settings = &N(NpcSettings_Sentinel),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
    .drops = NO_DROPS,
    .animations = SENTINEL_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Clubba_Wander), BTL_DGB_FORMATION_03, BTL_DGB_STAGE_00),
    NPC_GROUP(N(NpcData_Clubba_Napping), BTL_DGB_FORMATION_01, BTL_DGB_STAGE_00),
    NPC_GROUP(N(NpcData_Sentinel)),
    {}
};
