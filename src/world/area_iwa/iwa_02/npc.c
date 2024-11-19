#include "iwa_02.h"

#include "world/common/enemy/MontyMole_GroundAmbush.inc.c"
#include "world/common/enemy/MontyMole_WallAmbush.inc.c"
#include "world/common/enemy/Cleft.inc.c"
#include "world/common/npc/Bubulb.inc.c"

#include "world/common/complete/GiveReward.inc.c"
#if VERSION_JP
#include "world/common/todo/SomeItemEntityFunc.inc.c"
#include "world/common/todo/IsItemBadge.inc.c"
#include "world/area_iwa/common/UnkScriptJP00.inc.c"
#endif

NpcData N(NpcData_Cleft_01) = {
    .id = NPC_Cleft_01,
    .pos = { GEN_NPC_CLEFT_01_VEC },
    .yaw = GEN_NPC_CLEFT_01_DIR,
    .territory = GEN_NPC_CLEFT_01_TERRITORY,
    .settings = &N(NpcSettings_Cleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = CLEFT_DROPS,
    .animations = CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Cleft_02) = {
    .id = NPC_Cleft_02,
    .pos = { GEN_NPC_CLEFT_02_VEC },
    .yaw = GEN_NPC_CLEFT_02_DIR,
    .territory = GEN_NPC_CLEFT_02_TERRITORY,
    .settings = &N(NpcSettings_Cleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = CLEFT_DROPS,
    .animations = CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_Cleft_03) = {
    .id = NPC_Cleft_03,
    .pos = { GEN_NPC_CLEFT_03_VEC },
    .yaw = GEN_NPC_CLEFT_03_DIR,
    .territory = GEN_NPC_CLEFT_03_TERRITORY,
    .settings = &N(NpcSettings_Cleft),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = CLEFT_DROPS,
    .animations = CLEFT_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcData N(NpcData_MontyMole_01)[] = {
    {
        .id = NPC_MontyMole,
        .pos = { GEN_NPC_MONTY_MOLE_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_DIR,
        .territory = GEN_NPC_MONTY_MOLE_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_WallAmbush),
        .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = MONTY_MOLE_DROPS,
        .animations = MONTY_MOLE_AMBUSH_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
    {
        .id = NPC_MontyMole_Hole,
        .pos = { GEN_NPC_MONTY_MOLE_HOLE_VEC },
        .yaw = GEN_NPC_MONTY_MOLE_HOLE_DIR,
        .territory = GEN_NPC_MONTY_MOLE_HOLE_TERRITORY,
        .settings = &N(NpcSettings_MontyMole_WallAmbush_Hole),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_DISABLE_AI | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = MONTY_MOLE_AMBUSH_ANIMS,
        .aiDetectFlags = AI_DETECT_SIGHT,
    },
};

EvtScript N(EVS_Bubulb_Conversation) = {
    IfEq(AF_IWA_SpokeWithBubulb, FALSE)
        Set(LVar2, LVar0)
        Set(AF_IWA_SpokeWithBubulb, TRUE)
    Else
        Set(LVar2, LVar1)
        Set(AF_IWA_SpokeWithBubulb, FALSE)
    EndIf
    Call(SpeakToPlayer, NPC_Bubulb, ANIM_Bubulb_Purple_Talk, ANIM_Bubulb_Purple_Idle, 0, LVar2)
    Return
    End
};

EvtScript N(EVS_NpcInteract_Bubulb) = {
    IfEq(GF_IWA02_Gift_MagicalSeed2, FALSE)
        Call(PlaySoundAtNpc, NPC_SELF, SOUND_BURROW_SURFACE, SOUND_SPACE_DEFAULT)
        Call(PlaySoundAtNpc, NPC_SELF, SOUND_MOLE_POP, SOUND_SPACE_DEFAULT)
        Call(SetNpcAnimation, NPC_SELF, ANIM_Bubulb_Purple_PopUp)
        Wait(45)
        Call(SetNpcAnimation, NPC_SELF, ANIM_Bubulb_Purple_Idle)
        Call(SetNpcCollisionSize, NPC_SELF, 45, 26)
        Call(AdjustCam, CAM_DEFAULT, Float(10.0), 0, 350, Float(15.0), Float(-6.5))
        Call(SpeakToPlayer, NPC_SELF, ANIM_Bubulb_Purple_Talk, ANIM_Bubulb_Purple_Idle, 0, MSG_CH2_001F)
        EVT_GIVE_REWARD(ITEM_MAGICAL_SEED2)
        Call(SpeakToPlayer, NPC_SELF, ANIM_Bubulb_Purple_Talk, ANIM_Bubulb_Purple_Idle, 0, MSG_CH2_0020)
        Call(ResetCam, CAM_DEFAULT, Float(10.0))
        Set(GF_IWA02_Gift_MagicalSeed2, TRUE)
        Call(SetTattleMessage, NPC_Bubulb, MSG_NpcTattle_IWA_Bubulb_Revealed)
    Else
        Switch(GB_StoryProgress)
            CaseLt(STORY_CH3_STAR_SPIRIT_RESCUED)
                Set(LVar0, MSG_CH2_0021)
                Set(LVar1, MSG_CH2_0022)
            CaseLt(STORY_CH5_HIDDEN_PASSAGE_OPEN)
                Set(LVar0, MSG_CH2_0023)
                Set(LVar1, MSG_CH2_0024)
            CaseDefault
                Set(LVar0, MSG_CH2_0025)
                Set(LVar1, MSG_CH2_0026)
        EndSwitch
        ExecWait(N(EVS_Bubulb_Conversation))
    EndIf
    Return
    End
};

EvtScript N(EVS_NpcInit_Bubulb) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Bubulb)))
    IfEq(GF_IWA02_Gift_MagicalSeed2, FALSE)
        Call(SetNpcCollisionSize, NPC_SELF, 25, 25)
        Call(SetNpcAnimation, NPC_SELF, ANIM_Bubulb_Purple_BuriedIdle)
        Call(SetTattleMessage, NPC_Bubulb, MSG_NpcTattle_IWA_Bubulb_Hidden)
    EndIf
    Return
    End
};

NpcData N(NpcData_Bubulb) = {
    .id = NPC_Bubulb,
    .pos = { GEN_NPC_BUBULB_VEC },
    .yaw = GEN_NPC_BUBULB_DIR,
    .territory = GEN_NPC_BUBULB_TERRITORY,
    .init = &N(EVS_NpcInit_Bubulb),
    .settings = &N(NpcSettings_Bubulb),
    .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_FLYING,
    .drops = NO_DROPS,
    .animations = BUBULB_PURPLE_ANIMS,
    .tattle = MSG_NpcTattle_IWA_Bubulb_Revealed,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Cleft_01), BTL_IWA_FORMATION_03, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_Cleft_02), BTL_IWA_FORMATION_01, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_Cleft_03), BTL_IWA_FORMATION_00, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_MontyMole_01), BTL_IWA_FORMATION_05, BTL_IWA_STAGE_01),
    NPC_GROUP(N(NpcData_Bubulb)),
    {}
};
