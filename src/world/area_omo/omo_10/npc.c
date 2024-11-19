#include "omo_10.h"

#include "world/common/npc/TrainToad.inc.c"

EvtScript N(EVS_NpcInteract_Conductor) = {
    Call(DisablePlayerInput, TRUE)
    ExecWait(N(D_802444A0_DDBE50))
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
        CaseLt(STORY_CH4_WATT_JOINED_PARTY)
            Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Red_Talk, ANIM_TrainToad_Red_Idle, 0, MSG_CH4_0031)
        CaseLt(STORY_CH4_DEFEATED_GENERAL_GUY)
            Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Red_Talk, ANIM_TrainToad_Red_Idle, 0, MSG_CH4_0032)
        CaseDefault
            Call(SpeakToPlayer, NPC_SELF, ANIM_TrainToad_Red_Talk, ANIM_TrainToad_Red_Idle, 0, MSG_CH4_0033)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_NpcInit_TrainToad) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_TrainToad)))
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
        .animations = TRAIN_TOAD_RED_ANIMS,
        .tattle = MSG_NpcTattle_OMO_TrainConductor,
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Toads)),
    {}
};
