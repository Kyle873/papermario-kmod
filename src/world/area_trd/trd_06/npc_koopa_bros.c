#include "trd_06.h"

#include "world/common/npc/KoopaBros.h"

MobileAISettings N(AISettings_KoopaBros) = {
    .moveSpeed = 1.5f,
    .moveTime = 60,
    .waitTime = 30,
    .playerSearchInterval = -1,
    .unk_AI_2C = 1,
};

EvtScript N(EVS_NpcAI_KoopaBros) = {
    Call(BasicAI_Main, Ref(N(AISettings_KoopaBros)))
    Return
    End
};

NpcSettings N(NpcSettings_KoopaBros) = {
    .height = 35,
    .radius = 24,
    .level = ACTOR_LEVEL_NONE,
    .ai = &N(EVS_NpcAI_KoopaBros),
    .actionFlags = AI_ACTION_LOOK_AROUND_DURING_LOITER,
};

EvtScript N(EVS_Scene_ImprisonedKoopaBros) = {
    Wait(60)
    Call(EnableNpcAI, NPC_KoopaBros_Red, FALSE)
    Call(SpeakToPlayer, NPC_KoopaBros_Red, ANIM_KoopaBros_Red_Dizzy, ANIM_KoopaBros_Red_Dizzy, 0, MSG_CH1_010C)
    Call(EnableNpcAI, NPC_KoopaBros_Red, TRUE)
    Wait(30)
    Call(FadeOutMusic, 0, 2000)
    Wait(30)
    Call(GetEntryID, LVar0)
    Call(GotoMap, Ref("trd_10"), trd_10_ENTRY_1)
    Wait(100)
    Return
    End
};

NpcData N(NpcData_KoopaBros)[] = {
    {
        .id = NPC_KoopaBros_Red,
        .pos = { GEN_NPC_KOOPA_BROS_RED_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_RED_DIR,
        .territory = GEN_NPC_KOOPA_BROS_RED_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = RED_KOOPA_BROS_ANIMS,
    },
    {
        .id = NPC_KoopaBros_Black,
        .pos = { GEN_NPC_KOOPA_BROS_BLACK_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_BLACK_DIR,
        .territory = GEN_NPC_KOOPA_BROS_BLACK_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = BLACK_KOOPA_BROS_ANIMS,
    },
    {
        .id = NPC_KoopaBros_Yellow,
        .pos = { GEN_NPC_KOOPA_BROS_YELLOW_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_YELLOW_DIR,
        .territory = GEN_NPC_KOOPA_BROS_YELLOW_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = YELLOW_KOOPA_BROS_ANIMS,
    },
    {
        .id = NPC_KoopaBros_Green,
        .pos = { GEN_NPC_KOOPA_BROS_GREEN_VEC },
        .yaw = GEN_NPC_KOOPA_BROS_GREEN_DIR,
        .territory = GEN_NPC_KOOPA_BROS_GREEN_TERRITORY,
        .settings = &N(NpcSettings_KoopaBros),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = GREEN_KOOPA_BROS_ANIMS,
    },
};

NpcGroupList N(NpcGroup_KoopaBros) = {
    NPC_GROUP(N(NpcData_KoopaBros)),
    {}
};

#define PARTY_IMAGE "party_pinki"
#include "world/common/todo/LoadPartyImage.inc.c"
