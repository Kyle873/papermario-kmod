#include "kkj_29.h"

#include "world/common/npc/Bowser.inc.c"
#include "world/common/enemy/Koopatrol_Stationary.inc.c"
#include "world/common/enemy/HammerBros.inc.c"

EvtScript N(EVS_NpcInit_HammerBros) = {
    Call(SetNpcPos, NPC_SELF, 0, 0, -25)
    Call(SetNpcYaw, NPC_SELF, 90)
    Return
    End
};

EvtScript N(EVS_NpcInit_Koopatrol_01) = {
    Call(SetNpcPos, NPC_SELF, 175, 0, -25)
    Call(SetNpcYaw, NPC_SELF, 270)
    Return
    End
};

EvtScript N(EVS_NpcInit_Koopatrol_02) = {
    Call(SetNpcAnimation, NPC_SELF, ANIM_WorldKoopatrol_Anim03)
    Call(SetNpcPos, NPC_SELF, -140, 30, -140)
    Return
    End
};

AnimID N(ExtraAnims_Bowser)[] = {
    ANIM_WorldBowser_Still,
    ANIM_WorldBowser_Idle,
    ANIM_WorldBowser_Walk,
    ANIM_WorldBowser_Talk,
    ANIM_WorldBowser_TalkEyesClosed,
    ANIM_WorldBowser_AngryTalk,
    ANIM_WorldBowser_Shock,
    ANIM_WorldBowser_RearUpMock,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_HammerBros)[] = {
    ANIM_HammerBros_Anim01,
    ANIM_HammerBros_Anim03,
    ANIM_HammerBros_Anim06,
    ANIM_HammerBros_Anim08,
    ANIM_HammerBros_Anim09,
    ANIM_HammerBros_Anim0B,
    ANIM_HammerBros_Anim13,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Koopatrol)[] = {
    ANIM_WorldKoopatrol_Anim00,
    ANIM_WorldKoopatrol_Anim01,
    ANIM_WorldKoopatrol_Anim03,
    ANIM_WorldKoopatrol_Anim04,
    ANIM_WorldKoopatrol_Anim08,
    ANIM_WorldKoopatrol_Anim17,
    ANIM_WorldKoopatrol_Anim19,
    ANIM_WorldKoopatrol_Anim1A,
    ANIM_WorldKoopatrol_Anim12,
    ANIM_WorldKoopatrol_Anim14,
    ANIM_LIST_END
};

NpcData N(NpcData_Characters)[] = {
    {
        .id = NPC_Bowser,
        .pos = { GEN_NPC_BOWSER_VEC },
        .yaw = GEN_NPC_BOWSER_DIR,
        .territory = GEN_NPC_BOWSER_TERRITORY,
        .settings = &N(NpcSettings_Bowser),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = BOWSER_ANIMS,
        .extraAnimations = N(ExtraAnims_Bowser),
    },
    {
        .id = NPC_Koopatrol_01,
        .pos = { GEN_NPC_KOOPATROL_01_VEC },
        .yaw = GEN_NPC_KOOPATROL_01_DIR,
        .territory = GEN_NPC_KOOPATROL_01_TERRITORY,
        .init = &N(EVS_NpcInit_Koopatrol_01),
        .settings = &N(NpcSettings_Koopatrol_Stationary),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = NO_DROPS,
        .animations = KOOPATROL_ANIMS,
        .extraAnimations = N(ExtraAnims_Koopatrol),
    },
    {
        .id = NPC_Koopatrol_02,
        .pos = { GEN_NPC_KOOPATROL_02_VEC },
        .yaw = GEN_NPC_KOOPATROL_02_DIR,
        .territory = GEN_NPC_KOOPATROL_02_TERRITORY,
        .init = &N(EVS_NpcInit_Koopatrol_02),
        .settings = &N(NpcSettings_Koopatrol_Stationary),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = NO_DROPS,
        .animations = KOOPATROL_ANIMS,
        .extraAnimations = N(ExtraAnims_Koopatrol),
    },
    {
        .id = NPC_HammerBros,
        .pos = { GEN_NPC_HAMMER_BROS_VEC },
        .yaw = GEN_NPC_HAMMER_BROS_DIR,
        .territory = GEN_NPC_HAMMER_BROS_TERRITORY,
        .init = &N(EVS_NpcInit_HammerBros),
        .settings = &N(NpcSettings_HammerBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION,
        .drops = NO_DROPS,
        .animations = HAMMER_BROS_ANIMS,
        .extraAnimations = N(ExtraAnims_HammerBros),
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Characters)),
    {}
};
