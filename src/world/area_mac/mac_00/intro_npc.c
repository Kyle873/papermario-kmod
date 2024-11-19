#include "mac_00.h"

#define NAME_SUFFIX _Intro
#include "world/common/npc/Luigi.inc.c"
#include "world/common/npc/Toad_Stationary.inc.c"
#include "world/common/npc/Toad_Wander.inc.c"
#define NAME_SUFFIX

EvtScript N(EVS_NpcInit_Chan_Intro) = {
    Call(SetNpcPos, NPC_SELF, 570, 20, -150)
    Call(SetNpcYaw, NPC_SELF, 270)
    Return
    End
};

EvtScript N(EVS_NpcInit_Lee_Intro) = {
    Call(SetNpcPos, NPC_SELF, 600, 20, -145)
    Call(SetNpcYaw, NPC_SELF, 270)
    Return
    End
};

AnimID N(ExtraAnims_Chan_Intro)[] = {
    ANIM_Chan_Still,
    ANIM_Chan_Idle,
    ANIM_Chan_Run,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Lee_Intro)[] = {
    ANIM_Lee_Still,
    ANIM_Lee_Idle,
    ANIM_Lee_Talk,
    ANIM_LIST_END
};

NpcData N(NpcData_IntroNPCs)[] = {
    {
        .id = NPC_Luigi_Intro,
        .pos = { GEN_NPC_LUIGI_INTRO_VEC },
        .yaw = GEN_NPC_LUIGI_INTRO_DIR,
        .territory = GEN_NPC_LUIGI_INTRO_TERRITORY,
        .settings = &N(NpcSettings_Luigi_Intro),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = LUIGI_ANIMS,
    },
    {
        .id = NPC_Toad_01,
        .pos = { GEN_NPC_TOAD_01_1_VEC },
        .yaw = GEN_NPC_TOAD_01_1_DIR,
        .territory = GEN_NPC_TOAD_01_1_TERRITORY,
        .settings = &N(NpcSettings_Toad_Stationary_Intro),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT | ENEMY_FLAG_SKIP_BATTLE,
        .drops = NO_DROPS,
        .animations = TOAD_RED_ANIMS,
        .tattle = MSG_NpcTattle_MAC_GateGuardian,
    },
    {
        .id = NPC_Toad_02,
        .pos = { GEN_NPC_TOAD_02_VEC },
        .yaw = GEN_NPC_TOAD_02_DIR,
        .territory = GEN_NPC_TOAD_02_TERRITORY,
        .settings = &N(NpcSettings_Toad_Wander_Intro),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = TOAD_RED_ANIMS,
        .tattle = MSG_NpcTattle_MAC_ShopLoiterer,
    },
    {
        .id = NPC_Toad_03,
        .pos = { GEN_NPC_TOAD_03_VEC },
        .yaw = GEN_NPC_TOAD_03_DIR,
        .territory = GEN_NPC_TOAD_03_TERRITORY,
        .settings = &N(NpcSettings_Toad_Stationary_Intro),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT,
        .drops = NO_DROPS,
        .animations = TOAD_BLUE_ANIMS,
        .tattle = MSG_NpcTattle_MAC_DojoSpectator,
    },
    {
        .id = NPC_Chan,
        .pos = { GEN_NPC_CHAN_1_VEC },
        .yaw = GEN_NPC_CHAN_1_DIR,
        .territory = GEN_NPC_CHAN_1_TERRITORY,
        .init = &N(EVS_NpcInit_Chan_Intro),
        .settings = &N(NpcSettings_Toad_Stationary_Intro),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT | ENEMY_FLAG_SKIP_BATTLE,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_Chan_Idle,
        },
        .extraAnimations = N(ExtraAnims_Chan_Intro),
        .tattle = MSG_NpcTattle_Chan,
    },
    {
        .id = NPC_Lee,
        .pos = { GEN_NPC_LEE_1_VEC },
        .yaw = GEN_NPC_LEE_1_DIR,
        .territory = GEN_NPC_LEE_1_TERRITORY,
        .init = &N(EVS_NpcInit_Lee_Intro),
        .settings = &N(NpcSettings_Toad_Stationary_Intro),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_RAYCAST_TO_INTERACT | ENEMY_FLAG_SKIP_BATTLE,
        .drops = NO_DROPS,
        .animations = {
            .idle   = ANIM_Lee_Idle,
        },
        .extraAnimations = N(ExtraAnims_Lee_Intro),
        .tattle = MSG_NpcTattle_Lee,
    },
};

NpcGroupList N(IntroNPCs) = {
    NPC_GROUP(N(NpcData_IntroNPCs)),
    {}
};
