#include "kkj_02.h"

#include "world/common/npc/Toad_Wander.inc.c"
#include "world/common/npc/Toad_Stationary.inc.c"

EvtScript N(EVS_NpcInteract_Toad) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_Toad_Red_Talk, ANIM_Toad_Red_Idle, 0, MSG_Intro_0049)
    Return
    End
};

EvtScript N(EVS_NpcInteract_ToadGuard) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_ToadGuard_Red_Talk, ANIM_ToadGuard_Red_Idle, 0, MSG_Intro_004A)
    Return
    End
};

EvtScript N(EVS_NpcInit_Toad) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Toad)))
    Return
    End
};

EvtScript N(EVS_NpcInit_ToadGuard) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_ToadGuard)))
    Return
    End
};

NpcData N(NpcData_Toads)[] = {
    {
        .id = NPC_Toad,
        .pos = { GEN_NPC_TOAD_VEC },
        .yaw = GEN_NPC_TOAD_DIR,
        .territory = GEN_NPC_TOAD_TERRITORY,
        .init = &N(EVS_NpcInit_Toad),
        .settings = &N(NpcSettings_Toad_Wander),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = TOAD_RED_ANIMS,
    },
    {
        .id = NPC_ToadGuard,
        .pos = { GEN_NPC_TOAD_GUARD_VEC },
        .yaw = GEN_NPC_TOAD_GUARD_DIR,
        .territory = GEN_NPC_TOAD_GUARD_TERRITORY,
        .init = &N(EVS_NpcInit_ToadGuard),
        .settings = &N(NpcSettings_Toad_Stationary),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = TOAD_GUARD_RED_ANIMS,
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Toads)),
    {}
};


