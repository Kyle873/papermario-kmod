#include "mac_00.h"

#define NAME_SUFFIX _Epilogue
#include "world/common/npc/Luigi.inc.c"
#include "world/common/npc/GoombaFamily.inc.c"
#include "world/common/npc/Toad_Stationary.inc.c"
#define NAME_SUFFIX

EvtScript N(EVS_NpcInteract_Goompapa_Epilogue) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_Goompapa_Talk, ANIM_Goompapa_Idle, 0, MSG_Outro_0024)
    Return
    End
};

EvtScript N(EVS_NpcInit_Goompapa_Epilogue) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Goompapa_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_Goomama_Epilogue) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_Goomama_Talk, ANIM_Goomama_Idle, 0, MSG_Outro_0025)
    Return
    End
};

EvtScript N(EVS_NpcInit_Goomama_Epilogue) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Goomama_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_Gooma_Epilogue) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_Gooma_Talk, ANIM_Gooma_Idle, 0, MSG_Outro_0026)
    Return
    End
};

EvtScript N(EVS_NpcInit_Gooma_Epilogue) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Gooma_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_ChuckQuizmo_Epilogue) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_ChuckQuizmo_Talk, ANIM_ChuckQuizmo_Idle, 0, MSG_Outro_0027)
    Return
    End
};

EvtScript N(EVS_NpcInit_ChuckQuizmo_Epilogue) = {
    Call(SetNpcPos, NPC_ChuckQuizmo, 460, 20, -130)
    Call(SetNpcYaw, NPC_ChuckQuizmo, 90)
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_ChuckQuizmo_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_VannaT_Epilogue) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_VannaT_Wave, ANIM_VannaT_Wave, 0, MSG_Outro_003B)
    Return
    End
};

EvtScript N(EVS_NpcInit_VannaT_Epilogue) = {
    Call(SetNpcAnimation, NPC_SELF, ANIM_VannaT_Happy)
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_VannaT_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_Chan_Epilogue) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_Chan_Run, ANIM_Chan_Idle, 0, MSG_Outro_0029)
    Return
    End
};

EvtScript N(EVS_NpcInit_Chan_Epilogue) = {
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_tt, COLLIDER_FLAGS_UPPER_MASK)
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Chan_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_Lee_Epilogue) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_Lee_Talk, ANIM_Lee_Idle, 0, MSG_Outro_002A)
    Return
    End
};

EvtScript N(EVS_NpcInit_Lee_Epilogue) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Lee_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_TheMaster_Epilogue) = {
    Call(SpeakToPlayer, NPC_TheMaster, ANIM_TheMaster_Talk, ANIM_TheMaster_Idle, 0, MSG_Outro_0028)
    Return
    End
};

EvtScript N(EVS_NpcInit_TheMaster_Epilogue) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_TheMaster_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_Toad_01_Epilogue) = {
    Call(SpeakToPlayer, NPC_Toad_01, ANIM_HarryT_Talk, ANIM_HarryT_Idle, 0, MSG_Outro_002B)
    Return
    End
};

EvtScript N(EVS_NpcInit_Toad_01_Epilogue) = {
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_mono1, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_mono2, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_mono3, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_mono4, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_mono5, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_mono6, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_CLEAR_BITS, COLLIDER_dummy, COLLIDER_FLAGS_UPPER_MASK)
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Toad_01_Epilogue)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_HarryT_Epilogue) = {
    Call(SpeakToPlayer, NPC_HarryT, ANIM_HarryT_Talk, ANIM_HarryT_Idle, 0, MSG_Outro_003A)
    Return
    End
};

EvtScript N(EVS_NpcInit_HarryT_Epilogue) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_HarryT_Epilogue)))
    Return
    End
};

AnimID N(ExtraAnims_Luigi_Epilogue)[] = {
    ANIM_Luigi_Still,
    ANIM_Luigi_Idle,
    ANIM_Luigi_Walk,
    ANIM_Luigi_Run,
    ANIM_Luigi_Talk,
    ANIM_LIST_END
};

NpcData N(NpcData_Luigi_Epilogue) = {
    .id = NPC_Luigi_Epilogue,
    .pos = { GEN_NPC_LUIGI_EPILOGUE_VEC },
    .yaw = GEN_NPC_LUIGI_EPILOGUE_DIR,
    .territory = GEN_NPC_LUIGI_EPILOGUE_TERRITORY,
    .settings = &N(NpcSettings_Luigi_Epilogue),
    .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = NO_DROPS,
    .animations = LUIGI_ANIMS,
    .extraAnimations = N(ExtraAnims_Luigi_Epilogue),
};

AnimID N(ExtraAnims_Goompapa_Epilogue)[] = {
    ANIM_Goompapa_Still,
    ANIM_Goompapa_Idle,
    ANIM_Goompapa_Talk,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Goomama_Epilogue)[] = {
    ANIM_Goomama_Still,
    ANIM_Goomama_Idle,
    ANIM_Goomama_Talk,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Gooma_Epilogue)[] = {
    ANIM_Gooma_Still,
    ANIM_Gooma_Idle,
    ANIM_Gooma_Talk,
    ANIM_LIST_END
};

NpcData N(NpcData_GoombaFamilypa_Epilogue)[] = {
    {
        .id = NPC_Goompapa_Epilogue,
        .pos = { GEN_NPC_GOOMPAPA_EPILOGUE_VEC },
        .yaw = GEN_NPC_GOOMPAPA_EPILOGUE_DIR,
        .territory = GEN_NPC_GOOMPAPA_EPILOGUE_TERRITORY,
        .init = &N(EVS_NpcInit_Goompapa_Epilogue),
        .settings = &N(NpcSettings_GoombaFamily_Epilogue),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = GOOMPAPA_ANIMS,
        .extraAnimations = N(ExtraAnims_Goompapa_Epilogue),
        .tattle = MSG_NpcTattle_Goompapa,
    },
    {
        .id = NPC_Goomama_Epilogue,
        .pos = { GEN_NPC_GOOMAMA_EPILOGUE_VEC },
        .yaw = GEN_NPC_GOOMAMA_EPILOGUE_DIR,
        .territory = GEN_NPC_GOOMAMA_EPILOGUE_TERRITORY,
        .init = &N(EVS_NpcInit_Goomama_Epilogue),
        .settings = &N(NpcSettings_GoombaFamily_Epilogue),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = GOOMAMA_ANIMS,
        .extraAnimations = N(ExtraAnims_Goomama_Epilogue),
        .tattle = MSG_NpcTattle_Goomama,
    },
    {
        .id = NPC_Gooma_Epilogue,
        .pos = { GEN_NPC_GOOMA_EPILOGUE_VEC },
        .yaw = GEN_NPC_GOOMA_EPILOGUE_DIR,
        .territory = GEN_NPC_GOOMA_EPILOGUE_TERRITORY,
        .init = &N(EVS_NpcInit_Gooma_Epilogue),
        .settings = &N(NpcSettings_GoombaFamily_Epilogue),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = GOOMA_ANIMS,
        .extraAnimations = N(ExtraAnims_Gooma_Epilogue),
        .tattle = MSG_NpcTattle_Gooma,
    },
};

AnimID N(ExtraAnims_Quizmo_Epilogue)[] = {
    ANIM_ChuckQuizmo_Still,
    ANIM_ChuckQuizmo_Idle,
    ANIM_ChuckQuizmo_Talk,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_VannaT_Epilogue)[] = {
    ANIM_VannaT_Still,
    ANIM_VannaT_Happy,
    ANIM_VannaT_Wave,
    ANIM_LIST_END
};

NpcData N(NpcData_ChuckQuizmo_Epilogue)[] = {
    {
        .id = NPC_ChuckQuizmo,
        .pos = { GEN_NPC_CHUCK_QUIZMO_VEC },
        .yaw = GEN_NPC_CHUCK_QUIZMO_DIR,
        .territory = GEN_NPC_CHUCK_QUIZMO_TERRITORY,
        .init = &N(EVS_NpcInit_ChuckQuizmo_Epilogue),
        .settings = &N(NpcSettings_Luigi_Epilogue),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_ChuckQuizmo_Idle,
            .walk   = ANIM_ChuckQuizmo_Walk,
            .run    = ANIM_ChuckQuizmo_Run,
            .chase  = ANIM_ChuckQuizmo_Run,
            .anim_4 = ANIM_ChuckQuizmo_Idle,
            .anim_5 = ANIM_ChuckQuizmo_Idle,
            .death  = ANIM_ChuckQuizmo_Still,
            .hit    = ANIM_ChuckQuizmo_Still,
            .anim_8 = ANIM_ChuckQuizmo_Run,
            .anim_9 = ANIM_ChuckQuizmo_Run,
            .anim_A = ANIM_ChuckQuizmo_Run,
            .anim_B = ANIM_ChuckQuizmo_Run,
            .anim_C = ANIM_ChuckQuizmo_Run,
            .anim_D = ANIM_ChuckQuizmo_Run,
            .anim_E = ANIM_ChuckQuizmo_Run,
            .anim_F = ANIM_ChuckQuizmo_Run,
        },
        .extraAnimations = N(ExtraAnims_Quizmo_Epilogue),
        .tattle = MSG_NpcTattle_ChuckQuizmo,
    },
    {
        .id = NPC_VannaT_Epilogue,
        .pos = { GEN_NPC_VANNA_T_EPILOGUE_VEC },
        .yaw = GEN_NPC_VANNA_T_EPILOGUE_DIR,
        .territory = GEN_NPC_VANNA_T_EPILOGUE_TERRITORY,
        .init = &N(EVS_NpcInit_VannaT_Epilogue),
        .settings = &N(NpcSettings_Toad_Stationary_Epilogue),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_VannaT_Still,
            .walk   = ANIM_VannaT_Walk,
            .run    = ANIM_VannaT_Still,
            .chase  = ANIM_VannaT_Still,
            .anim_4 = ANIM_VannaT_Still,
            .anim_5 = ANIM_VannaT_Still,
            .death  = ANIM_VannaT_Still,
            .hit    = ANIM_VannaT_Still,
            .anim_8 = ANIM_VannaT_Still,
            .anim_9 = ANIM_VannaT_Still,
            .anim_A = ANIM_VannaT_Still,
            .anim_B = ANIM_VannaT_Still,
            .anim_C = ANIM_VannaT_Still,
            .anim_D = ANIM_VannaT_Still,
            .anim_E = ANIM_VannaT_Still,
            .anim_F = ANIM_VannaT_Still,
        },
        .extraAnimations = N(ExtraAnims_VannaT_Epilogue),
        .tattle = MSG_NpcTattle_MAC00_ShopOwner,
    },
};

AnimID N(ExtraAnims_TheMaster_Epilogue)[] = {
    ANIM_TheMaster_Still,
    ANIM_TheMaster_Idle,
    ANIM_TheMaster_Talk,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Chan_Epilogue)[] = {
    ANIM_Chan_Still,
    ANIM_Chan_Idle,
    ANIM_Chan_Run,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Lee_Epilogue)[] = {
    ANIM_Lee_Still,
    ANIM_Lee_Idle,
    ANIM_Lee_Talk,
    ANIM_LIST_END
};

NpcData N(NpcData_DojoMembers_Epilogue)[] = {
    {
        .id = NPC_TheMaster,
        .pos = { GEN_NPC_THE_MASTER_VEC },
        .yaw = GEN_NPC_THE_MASTER_DIR,
        .territory = GEN_NPC_THE_MASTER_TERRITORY,
        .init = &N(EVS_NpcInit_TheMaster_Epilogue),
        .settings = &N(NpcSettings_Luigi_Epilogue),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_TheMaster_Idle,
            .walk   = ANIM_TheMaster_Still,
            .run    = ANIM_TheMaster_Still,
            .chase  = ANIM_TheMaster_Still,
            .anim_4 = ANIM_TheMaster_Still,
            .anim_5 = ANIM_TheMaster_Still,
            .death  = ANIM_TheMaster_Still,
            .hit    = ANIM_TheMaster_Still,
            .anim_8 = ANIM_TheMaster_Still,
            .anim_9 = ANIM_TheMaster_Still,
            .anim_A = ANIM_TheMaster_Still,
            .anim_B = ANIM_TheMaster_Still,
            .anim_C = ANIM_TheMaster_Still,
            .anim_D = ANIM_TheMaster_Still,
            .anim_E = ANIM_TheMaster_Still,
            .anim_F = ANIM_TheMaster_Still,
        },
        .extraAnimations = N(ExtraAnims_TheMaster_Epilogue),
        .tattle = MSG_NpcTattle_TheMaster,
    },
    {
        .id = NPC_Chan,
        .pos = { GEN_NPC_CHAN_VEC },
        .yaw = GEN_NPC_CHAN_DIR,
        .territory = GEN_NPC_CHAN_TERRITORY,
        .init = &N(EVS_NpcInit_Chan_Epilogue),
        .settings = &N(NpcSettings_Luigi_Epilogue),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_Chan_Idle,
        },
        .extraAnimations = N(ExtraAnims_Chan_Epilogue),
        .tattle = MSG_NpcTattle_Chan,
    },
    {
        .id = NPC_Lee,
        .pos = { GEN_NPC_LEE_VEC },
        .yaw = GEN_NPC_LEE_DIR,
        .territory = GEN_NPC_LEE_TERRITORY,
        .init = &N(EVS_NpcInit_Lee_Epilogue),
        .settings = &N(NpcSettings_Luigi_Epilogue),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_Lee_Idle,
        },
        .extraAnimations = N(ExtraAnims_Lee_Epilogue),
        .tattle = MSG_NpcTattle_Lee,
    },
};

AnimID N(ExtraAnims_HarryT_Epilogue)[] = {
    ANIM_HarryT_Still,
    ANIM_HarryT_Idle,
    ANIM_HarryT_Talk,
    ANIM_LIST_END
};

NpcData N(NpcData_Toad_01_Epilogue)[] = {
    {
        .id = NPC_Toad_01,
        .pos = { GEN_NPC_TOAD_01_VEC },
        .yaw = GEN_NPC_TOAD_01_DIR,
        .territory = GEN_NPC_TOAD_01_TERRITORY,
        .init = &N(EVS_NpcInit_Toad_01_Epilogue),
        .settings = &N(NpcSettings_Toad_Stationary_Epilogue),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT | ENEMY_FLAG_SKIP_BATTLE,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_HarryT_Idle,
            .walk   = ANIM_HarryT_Walk,
            .run    = ANIM_HarryT_Run,
            .chase  = ANIM_HarryT_Run,
            .anim_4 = ANIM_HarryT_Idle,
        },
        .extraAnimations = N(ExtraAnims_HarryT_Epilogue),
        .tattle = MSG_NpcTattle_MAC00_ShopOwner,
    },
    {
        .id = NPC_HarryT,
        .pos = { GEN_NPC_HARRY_T_VEC },
        .yaw = GEN_NPC_HARRY_T_DIR,
        .territory = GEN_NPC_HARRY_T_TERRITORY,
        .init = &N(EVS_NpcInit_HarryT_Epilogue),
        .settings = &N(NpcSettings_Toad_Stationary_Epilogue),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT | ENEMY_FLAG_SKIP_BATTLE,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_HarryT_Idle,
            .walk   = ANIM_HarryT_Walk,
            .run    = ANIM_HarryT_Run,
            .chase  = ANIM_HarryT_Run,
            .anim_4 = ANIM_HarryT_Idle,
        },
        .extraAnimations = N(ExtraAnims_HarryT_Epilogue),
        .tattle = MSG_NpcTattle_MAC00_ShopOwner,
    },
};

extern NpcData N(NpcData_SharedTownsfolk)[9]; //@bug this NPC list actually has 10 NPCs in it...
extern NpcData N(NpcData_Waterfront_Family)[4];

NpcGroupList N(EpilogueNPCs) = {
    NPC_GROUP(N(NpcData_Luigi_Epilogue)),
    NPC_GROUP(N(NpcData_DojoMembers_Epilogue)),
    NPC_GROUP(N(NpcData_GoombaFamilypa_Epilogue)),
    NPC_GROUP(N(NpcData_ChuckQuizmo_Epilogue)),
    NPC_GROUP(N(NpcData_Toad_01_Epilogue)),
    NPC_GROUP(N(NpcData_SharedTownsfolk)),
    NPC_GROUP(N(NpcData_Waterfront_Family)),
    {}
};
