#include "kkj_15.h"

#define NAME_SUFFIX _Ch0

#include "world/common/npc/Bowser.inc.c"
#include "world/common/enemy/Kammy.inc.c"

#include "world/common/npc/KoopaBros.h"

NpcSettings N(NpcSettings_KoopaBros) = {
    .height = 34,
    .radius = 24,
    .level = ACTOR_LEVEL_NONE,
    .onHit = &EnemyNpcHit,
    .onDefeat = &EnemyNpcDefeat,
};

AnimID N(ExtraAnims_Bowser)[] = {
    ANIM_WorldBowser_Still,
    ANIM_WorldBowser_Idle,
    ANIM_WorldBowser_BrandishIdle,
    ANIM_WorldBowser_Talk,
    ANIM_WorldBowser_BrandishTalk,
    ANIM_WorldBowser_Brandish,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_Kammy)[] = {
    ANIM_WorldKammy_Anim01,
    ANIM_WorldKammy_Anim02,
    ANIM_WorldKammy_Anim04,
    ANIM_LIST_END
};

AnimID N(ExtraAnims_KoopaBros)[] = {
    ANIM_KoopaBros_Black_Walk,
    ANIM_KoopaBros_Black_Run,
    ANIM_KoopaBros_Black_Idle,
    ANIM_KoopaBros_Black_IdleCrouch,
    ANIM_KoopaBros_Black_HurtStill,
    ANIM_KoopaBros_Black_Midair,
    ANIM_KoopaBros_Black_Land,
    ANIM_KoopaBros_Black_Talk,
    ANIM_KoopaBros_Black_ThumbsUp,
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
        .id = NPC_Kammy,
        .pos = { GEN_NPC_KAMMY_VEC },
        .yaw = GEN_NPC_KAMMY_DIR,
        .territory = GEN_NPC_KAMMY_TERRITORY,
        .settings = &N(NpcSettings_Kammy),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = KAMMY_ANIMS,
        .extraAnimations = N(ExtraAnims_Kammy),
    },
    {
        .id = NPC_KoopaBros_01,
        .pos = { GEN_NPC_KOOPA_BROS_01_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_01_DIR,
        .territory = GEN_NPC_KOOPA_BROS_01_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = BLACK_KOOPA_BROS_ANIMS,
        .extraAnimations = N(ExtraAnims_KoopaBros),
    },
    {
        .id = NPC_KoopaBros_02,
        .pos = { GEN_NPC_KOOPA_BROS_02_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_02_DIR,
        .territory = GEN_NPC_KOOPA_BROS_02_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = RED_KOOPA_BROS_ANIMS,
        .extraAnimations = N(ExtraAnims_KoopaBros),
    },
    {
        .id = NPC_KoopaBros_03,
        .pos = { GEN_NPC_KOOPA_BROS_03_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_03_DIR,
        .territory = GEN_NPC_KOOPA_BROS_03_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = YELLOW_KOOPA_BROS_ANIMS,
        .extraAnimations = N(ExtraAnims_KoopaBros),
    },
    {
        .id = NPC_KoopaBros_04,
        .pos = { GEN_NPC_KOOPA_BROS_04_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_04_DIR,
        .territory = GEN_NPC_KOOPA_BROS_04_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = GREEN_KOOPA_BROS_ANIMS,
        .extraAnimations = N(ExtraAnims_KoopaBros),
    },
};

#define NAME_SUFFIX

NpcGroupList N(Chapter0NPCs) = {
    NPC_GROUP(N(NpcData_Characters_Ch0)),
    {}
};
