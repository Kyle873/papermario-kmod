#include "arn_10.h"

#include "world/common/npc/TubbasHeart.inc.c"
#include "world/common/enemy/HyperGoomba_Wander.inc.c"

EvtScript N(EVS_NpcIdle_TubbasHeart) = {
    Call(SetNpcAnimation, NPC_SELF, ANIM_TubbasHeart_Anim13)
    Call(SetNpcJumpscale, NPC_SELF, Float(3.0))
    Call(GetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
    Sub(LVar0, 30)
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_TUBBA_HEART_JUMP, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 8)
    Call(SetNpcAnimation, NPC_SELF, ANIM_TubbasHeart_Anim14)
    Wait(1)
    Call(SetNpcAnimation, NPC_SELF, ANIM_TubbasHeart_Anim13)
    Sub(LVar0, 80)
    Call(SetNpcJumpscale, NPC_SELF, Float(2.5))
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_TUBBA_HEART_JUMP, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 12)
    Call(SetNpcAnimation, NPC_SELF, ANIM_TubbasHeart_Anim14)
    Wait(1)
    Call(SetNpcAnimation, NPC_SELF, ANIM_TubbasHeart_Anim13)
    Sub(LVar0, 80)
    Call(SetNpcJumpscale, NPC_SELF, Float(2.5))
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_TUBBA_HEART_JUMP, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 12)
    Call(EnableNpcShadow, NPC_SELF, FALSE)
    Call(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
    Set(GB_StoryProgress, STORY_CH3_HEART_FLED_SECOND_TUNNEL)
    Return
    End
};

EvtScript N(EVS_NpcDefeat_HyperGoomba) = {
    Set(GF_ARN10_Defeated_Goomba, TRUE)
    Call(DoNpcDefeat)
    Return
    End
};

EvtScript N(EVS_NpcInit_TubbasHeart) = {
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_TubbasHeart)))
    IfNe(GB_StoryProgress, STORY_UNUSED_FFFFFFEC)
        Call(RemoveNpc, NPC_SELF)
    EndIf
    Return
    End
};

EvtScript N(EVS_NpcInit_HyperGoomba) = {
    IfLt(GB_StoryProgress, STORY_CH4_FRYING_PAN_STOLEN)
        IfEq(GF_ARN10_Defeated_Goomba, TRUE)
            Call(RemoveNpc, NPC_SELF)
            Return
        EndIf
        Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_HyperGoomba)))
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

NpcData N(NpcData_HyperGoomba) = {
    .id = NPC_HyperGoomba,
    .pos = { GEN_NPC_HYPER_GOOMBA_VEC },
    .yaw = GEN_NPC_HYPER_GOOMBA_DIR,
    .territory = GEN_NPC_HYPER_GOOMBA_TERRITORY,
    .init = &N(EVS_NpcInit_HyperGoomba),
    .settings = &N(NpcSettings_HyperGoomba),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = HYPER_GOOMBA_DROPS,
    .animations = HYPER_GOOMBA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_TubbasHeart)),
    NPC_GROUP(N(NpcData_HyperGoomba), BTL_ARN_FORMATION_00, BTL_ARN_STAGE_04),
    {}
};
