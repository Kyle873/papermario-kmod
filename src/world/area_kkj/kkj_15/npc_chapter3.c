#include "kkj_15.h"

#define NAME_SUFFIX _Ch3

#include "world/common/npc/Bowser.inc.c"
#include "world/common/enemy/Kammy.inc.c"
#include "world/common/enemy/Koopatrol_Stationary.inc.c"

AnimID N(ExtraAnims_Bowser)[] = {
    ANIM_WorldBowser_Still,
    ANIM_WorldBowser_Idle,
    ANIM_WorldBowser_Talk,
    ANIM_WorldBowser_TalkEyesClosed,
    ANIM_WorldBowser_AngryTalk,
    ANIM_WorldBowser_Tantrum,
    ANIM_WorldBowser_ArmsCrossed,
    ANIM_WorldBowser_Shock,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Kammy)[] = {
    ANIM_WorldKammy_Anim01,
    ANIM_WorldKammy_Anim02,
    ANIM_WorldKammy_Anim04,
    ANIM_WorldKammy_Anim05,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Koopatrol)[] = {
    ANIM_WorldKoopatrol_Anim01,
    ANIM_WorldKoopatrol_Anim06,
    ANIM_WorldKoopatrol_Anim08,
    ANIM_WorldKoopatrol_Anim12,
    ANIM_WorldKoopatrol_Anim14,
    ANIM_LIST_END
};

NpcData N(NpcData_Characters)[] = {
    {
        .id = NPC_Bowser,
        .pos = { GEN_NPC_BOWSER_1_VEC },
        .yaw = GEN_NPC_BOWSER_1_DIR,
        .territory = GEN_NPC_BOWSER_1_TERRITORY,
        .settings = &N(NpcSettings_Bowser),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = BOWSER_ANIMS,
        .extraAnimations = N(ExtraAnims_Bowser),
    },
    {
        .id = NPC_Kammy,
        .pos = { GEN_NPC_KAMMY_1_VEC },
        .yaw = GEN_NPC_KAMMY_1_DIR,
        .territory = GEN_NPC_KAMMY_1_TERRITORY,
        .settings = &N(NpcSettings_Kammy),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = KAMMY_ANIMS,
        .extraAnimations = N(ExtraAnims_Kammy),
    },
    {
        .id = NPC_Koopatrol_03,
        .pos = { GEN_NPC_KOOPATROL_03_VEC },
        .yaw = GEN_NPC_KOOPATROL_03_DIR,
        .territory = GEN_NPC_KOOPATROL_03_TERRITORY,
        .settings = &N(NpcSettings_Koopatrol_Stationary),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = KOOPATROL_ANIMS,
        .extraAnimations = N(ExtraAnims_Koopatrol),
    },
    {
        .id = NPC_Koopatrol_04,
        .pos = { GEN_NPC_KOOPATROL_04_VEC },
        .yaw = GEN_NPC_KOOPATROL_04_DIR,
        .territory = GEN_NPC_KOOPATROL_04_TERRITORY,
        .settings = &N(NpcSettings_Koopatrol_Stationary),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = KOOPATROL_ANIMS,
        .extraAnimations = N(ExtraAnims_Koopatrol),
    },
};

#define NAME_SUFFIX

NpcGroupList N(Chapter3NPCs) = {
    NPC_GROUP(N(NpcData_Characters_Ch3)),
    {}
};
