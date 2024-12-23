#include "omo_08.h"

#include "world/common/npc/TrainToad.inc.c"
#include "world/common/enemy/ShyGuy_Wander.inc.c"

EvtScript N(EVS_NpcInteract_Conductor) = {
    Call(DisablePlayerInput, TRUE)
    ExecWait(N(EVS_80247100))
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_NpcInit_Conductor) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Conductor)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_TrainToad) = {
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH4_SOLVED_COLOR_PUZZLE)
            Call(FindItem, ITEM_MYSTERY_NOTE, LVar0)
            IfEq(LVar0, -1)
                IfEq(GF_OMO09_SpawnedPeachChoice3, FALSE)
                    Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Green_Talk, ANIM_TrainToad_Green_Idle, 0, MSG_CH4_002B)
                Else
                    IfEq(GF_OMO09_Chest_Dictionary, FALSE)
                        Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Green_Talk, ANIM_TrainToad_Green_Idle, 0, MSG_CH4_002C)
                    Else
                        Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Green_Talk, ANIM_TrainToad_Green_Idle, 0, MSG_CH4_002F)
                    EndIf
                EndIf
            Else
                Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Green_Talk, ANIM_TrainToad_Green_Idle, 0, MSG_CH4_002D)
            EndIf
        CaseLt(STORY_CH4_WATT_JOINED_PARTY)
            Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Green_Talk, ANIM_TrainToad_Green_Idle, 0, MSG_CH4_002E)
        CaseLt(STORY_CH4_DEFEATED_GENERAL_GUY)
            Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Green_Talk, ANIM_TrainToad_Green_Idle, 0, MSG_CH4_002F)
        CaseDefault
            Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Green_Talk, ANIM_TrainToad_Green_Idle, 0, MSG_CH4_0030)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_NpcInit_TrainToad) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_TrainToad)))
    Return
    End
};

EvtScript N(EVS_NpcAI_BoxedShyGuy) = {
    Loop(0)
        Call(GetSelfVar, 0, LVar0)
        Switch(LVar0)
            CaseEq(0)
                Call(GetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
                IfEq(LVar1, 0)
                    Call(SetSelfVar, 0, 1)
                    Call(BindNpcAI, NPC_SELF, Ref(N(EVS_NpcAI_ShyGuy_Wander)))
                EndIf
            CaseEq(2)
                Call(DisablePlayerInput, TRUE)
                Wait(25)
                Call(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
                Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_INVISIBLE, FALSE)
                Call(SetNpcFlagBits, NPC_SELF, NPC_FLAG_IGNORE_WORLD_COLLISION, TRUE)
                Call(SetSelfVar, 0, 0)
                Call(DisablePlayerInput, FALSE)
        EndSwitch
        Wait(1)
    EndLoop
    Return
    End
};

EvtScript N(EVS_NpcDefeat_BoxedShyGuy) = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Call(SetSelfVar, 0, 2)
            Call(BindNpcAI, NPC_SELF, Ref(N(EVS_NpcAI_BoxedShyGuy)))
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_LOST)
        CaseEq(OUTCOME_PLAYER_FLED)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_NpcInit_BoxedShyGuy) = {
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcAI_BoxedShyGuy)))
    Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_BoxedShyGuy)))
    Return
    End
};

NpcData N(NpcData_Toads)[] = {
    {
        .id = NPC_Conductor,
        .pos = { GEN_NPC_CONDUCTOR_VEC },
        .yaw = GEN_NPC_CONDUCTOR_DIR,
        .territory = GEN_NPC_CONDUCTOR_TERRITORY,
        .init = &N(EVS_NpcInit_Conductor),
        .settings = &N(NpcSettings_TrainToad),
        .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = NO_DROPS,
        .animations = TRAIN_CONDUCTOR_ANIMS,
        .tattle = MSG_NpcTattle_OMO_TrainConductor,
    },
    {
        .id = NPC_TrainToad,
        .pos = { GEN_NPC_TRAIN_TOAD_VEC },
        .yaw = GEN_NPC_TRAIN_TOAD_DIR,
        .territory = GEN_NPC_TRAIN_TOAD_TERRITORY,
        .init = &N(EVS_NpcInit_TrainToad),
        .settings = &N(NpcSettings_TrainToad),
        .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = NO_DROPS,
        .animations = TRAIN_TOAD_GREEN_ANIMS,
        .tattle = MSG_NpcTattle_OMO_TrainConductor,
    },
};

NpcData N(NpcData_ShyGuy_01) = {
    .id = NPC_ShyGuy_01,
    .pos = { GEN_NPC_SHY_GUY_01_VEC },
    .yaw = GEN_NPC_SHY_GUY_01_DIR,
    .territory = GEN_NPC_SHY_GUY_01_TERRITORY,
    .init = &N(EVS_NpcInit_BoxedShyGuy),
    .settings = &N(NpcSettings_ShyGuy_Wander),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = NO_DROPS,
    .animations = RED_SHY_GUY_ANIMS,
};

NpcData N(NpcData_ShyGuy_02) = {
    .id = NPC_ShyGuy_02,
    .pos = { GEN_NPC_SHY_GUY_02_VEC },
    .yaw = GEN_NPC_SHY_GUY_02_DIR,
    .territory = GEN_NPC_SHY_GUY_02_TERRITORY,
    .init = &N(EVS_NpcInit_BoxedShyGuy),
    .settings = &N(NpcSettings_ShyGuy_Wander),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = NO_DROPS,
    .animations = RED_SHY_GUY_ANIMS,
};

NpcData N(NpcData_ShyGuy_03) = {
    .id = NPC_ShyGuy_03,
    .pos = { GEN_NPC_SHY_GUY_03_VEC },
    .yaw = GEN_NPC_SHY_GUY_03_DIR,
    .territory = GEN_NPC_SHY_GUY_03_TERRITORY,
    .init = &N(EVS_NpcInit_BoxedShyGuy),
    .settings = &N(NpcSettings_ShyGuy_Wander),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = NO_DROPS,
    .animations = RED_SHY_GUY_ANIMS,
};

NpcData N(NpcData_ShyGuy_04) = {
    .id = NPC_ShyGuy_04,
    .pos = { GEN_NPC_SHY_GUY_04_VEC },
    .yaw = GEN_NPC_SHY_GUY_04_DIR,
    .territory = GEN_NPC_SHY_GUY_04_TERRITORY,
    .init = &N(EVS_NpcInit_BoxedShyGuy),
    .settings = &N(NpcSettings_ShyGuy_Wander),
    .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN,
    .drops = NO_DROPS,
    .animations = RED_SHY_GUY_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Toads)),
    NPC_GROUP(N(NpcData_ShyGuy_01), BTL_OMO3_FORMATION_0A, BTL_OMO3_STAGE_06),
    NPC_GROUP(N(NpcData_ShyGuy_02), BTL_OMO3_FORMATION_0A, BTL_OMO3_STAGE_06),
    NPC_GROUP(N(NpcData_ShyGuy_03), BTL_OMO3_FORMATION_0A, BTL_OMO3_STAGE_06),
    NPC_GROUP(N(NpcData_ShyGuy_04), BTL_OMO3_FORMATION_0A, BTL_OMO3_STAGE_06),
    {}
};
