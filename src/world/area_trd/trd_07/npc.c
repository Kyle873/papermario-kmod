#include "trd_07.h"

extern EvtScript N(EVS_RestoreMagicDoors);

#include "world/common/enemy/KoopaTroopa_Wander.inc.c"
#include "world/common/enemy/Paratroopa.inc.c"

#include "world/common/util/GetDefeatedEnemyCount.inc.c"

EvtScript N(EVS_NpcDefeat_KoopaTroopa) = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Call(N(GetDefeatedEnemyCount), LVar0)
            IfEq(LVar0, 1) // ???
                Set(GF_TRD07_Defeated_DungeonAmbush, TRUE)
                Exec(N(EVS_RestoreMagicDoors))
            EndIf
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_FLED)
            Call(OnPlayerFled, 0)
        CaseEq(OUTCOME_ENEMY_FLED)
            Call(SetEnemyFlagBits, NPC_SELF, ENEMY_FLAG_FLED, TRUE)
            Call(RemoveNpc, NPC_SELF)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_NpcInit_KoopaTroopa) = {
    Call(SetSelfEnemyFlags, ENEMY_FLAG_NO_DROPS)
    Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_KoopaTroopa)))
    IfEq(GF_TRD07_Defeated_DungeonAmbush, TRUE)
        Call(RemoveNpc, NPC_SELF)
    EndIf
    Return
    End
};

NpcData N(NpcData_KoopaTroopa) = {
    .id = NPC_KoopaTroopa,
    .pos = { GEN_NPC_KOOPA_TROOPA_VEC },
    .yaw = GEN_NPC_KOOPA_TROOPA_DIR,
    .territory = GEN_NPC_KOOPA_TROOPA_TERRITORY,
    .init = &N(EVS_NpcInit_KoopaTroopa),
    .settings = &N(NpcSettings_KoopaTroopa_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_DELAY_AFTER_FLEE,
    .drops = KOOPA_TROOPA_TRD_DROPS,
    .animations = KOOPA_TROOPA_ANIMS,
};

NpcData N(NpcData_ParaTroopa_01) = {
    .id = NPC_ParaTroopa_01,
    .pos = { GEN_NPC_PARA_TROOPA_01_VEC },
    .yaw = GEN_NPC_PARA_TROOPA_01_DIR,
    .territory = GEN_NPC_PARA_TROOPA_01_TERRITORY,
    .init = &N(EVS_NpcInit_KoopaTroopa),
    .settings = &N(NpcSettings_ParaTroopa),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_DELAY_AFTER_FLEE,
    .drops = PARATROOPA_DROPS,
    .animations = PARATROOPA_ANIMS,
};

NpcData N(NpcData_ParaTroopa_02) = {
    .id = NPC_ParaTroopa_02,
    .pos = { GEN_NPC_PARA_TROOPA_02_VEC },
    .yaw = GEN_NPC_PARA_TROOPA_02_DIR,
    .territory = GEN_NPC_PARA_TROOPA_02_TERRITORY,
    .init = &N(EVS_NpcInit_KoopaTroopa),
    .settings = &N(NpcSettings_ParaTroopa),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_DELAY_AFTER_FLEE,
    .drops = PARATROOPA_DROPS,
    .animations = PARATROOPA_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_KoopaTroopa), BTL_TRD_1_FORMATION_01, BTL_TRD_1_STAGE_03),
    NPC_GROUP(N(NpcData_ParaTroopa_01), BTL_TRD_1_FORMATION_08, BTL_TRD_1_STAGE_03),
    NPC_GROUP(N(NpcData_ParaTroopa_02), BTL_TRD_1_FORMATION_0A, BTL_TRD_1_STAGE_03),
    {}
};
