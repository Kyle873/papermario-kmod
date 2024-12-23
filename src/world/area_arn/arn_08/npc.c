#include "arn_08.h"

#include "world/common/npc/TubbasHeart.inc.c"
#include "world/common/npc/Yakkey.inc.c"

EvtScript N(EVS_NpcIdle_TubbasHeart) = {
    Return
    End
};

EvtScript N(EVS_NpcInit_TubbasHeart) = {
    IfNe(GB_StoryProgress, STORY_CH3_HEART_ESCAPED_WELL)
        Call(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
    Else
        Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_TubbasHeart)))
    EndIf
    Return
    End
};

EvtScript N(EVS_NpcInteract_Yakkey) = {
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH5_WHALE_MOUTH_OPEN)
            Call(SpeakToPlayer, NPC_SELF, ANIM_Yakkey_Talk, ANIM_Yakkey_Idle, 0, MSG_CH3_00BA)
        CaseLt(STORY_CH6_FLOWER_GATE_OPEN)
            Call(SpeakToPlayer, NPC_SELF, ANIM_Yakkey_Talk, ANIM_Yakkey_Idle, 0, MSG_CH3_00BB)
        CaseLt(STORY_CH7_INVITED_TO_STARBORN_VALLEY)
            Call(SpeakToPlayer, NPC_SELF, ANIM_Yakkey_Talk, ANIM_Yakkey_Idle, 0, MSG_CH3_00BC)
        CaseLt(STORY_CH8_OPENED_PATH_TO_STAR_WAY)
            Call(SpeakToPlayer, NPC_SELF, ANIM_Yakkey_Talk, ANIM_Yakkey_Idle, 0, MSG_CH3_00BD)
        CaseGe(STORY_CH8_OPENED_PATH_TO_STAR_WAY)
            Call(SpeakToPlayer, NPC_SELF, ANIM_Yakkey_Talk, ANIM_Yakkey_Idle, 0, MSG_CH3_00BE)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_NpcInit_Yakkey) = {
    IfLt(GB_StoryProgress, STORY_CH4_FRYING_PAN_STOLEN)
        Call(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
    Else
        Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Yakkey)))
    EndIf
    Return
    End
};

NpcData N(NpcData_TubbasHeart) = {
    .id = NPC_TubbasHeart,
    .pos = { GEN_NPC_TUBBAS_HEART_VEC },
    .yaw = GEN_NPC_TUBBAS_HEART_DIR,
    .territory = GEN_NPC_TUBBAS_HEART_TERRITORY,
    .init = &N(EVS_NpcInit_TubbasHeart),
    .settings = &N(NpcSettings_TubbasHeart),
    .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_DO_NOT_KILL,
    .drops = NO_DROPS,
    .animations = TUBBAS_HEART_ANIMS,
};

NpcData N(NpcData_Yakkey) = {
    .id = NPC_Yakkey,
    .pos = { GEN_NPC_YAKKEY_VEC },
    .yaw = GEN_NPC_YAKKEY_DIR,
    .territory = GEN_NPC_YAKKEY_TERRITORY,
    .init = &N(EVS_NpcInit_Yakkey),
    .settings = &N(NpcSettings_Yakkey),
    .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_FLYING,
    .drops = NO_DROPS,
    .animations = YAKKEY_ANIMS,
    .tattle = MSG_NpcTattle_Yakkey,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_TubbasHeart)),
    NPC_GROUP(N(NpcData_Yakkey)),
    {}
};
