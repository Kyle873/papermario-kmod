#include "mac_04.h"

#define NAME_SUFFIX _Wish
#include "world/common/npc/Toad_Wander.inc.c"
#include "world/common/npc/Toad_Stationary.inc.c"
#include "world/common/npc/GoombaFamily.inc.c"
#include "world/common/npc/StarSpirit.inc.c"
#define NAME_SUFFIX

EvtScript N(EVS_Scene_WishingToadKid) = {
    Call(DisablePlayerInput, TRUE)
    Call(DisablePlayerPhysics, TRUE)
    Call(SetPlayerActionState, ACTION_STATE_LAND)
    Call(SetNpcFlagBits, NPC_PARTNER, NPC_FLAG_GRAVITY, FALSE)
    Call(UseSettingsFrom, CAM_DEFAULT, -100, 0, 200)
    Call(SetPanTarget, CAM_DEFAULT, -100, 0, 200)
    Call(SetCamDistance, CAM_DEFAULT, Float(-400.0))
    Call(SetCamPitch, CAM_DEFAULT, Float(6.0), Float(-8.0))
    Call(SetCamSpeed, CAM_DEFAULT, Float(90.0))
    Call(PanToTarget, CAM_DEFAULT, 0, TRUE)
    Call(WaitForCam, CAM_DEFAULT, Float(1.0))
    Wait(20)
    Call(SpeakToPlayer, NPC_WishingToadKid, ANIM_ToadKid_Red_Talk, ANIM_ToadKid_Red_Disappointed, 0, MSG_HOS_0070)
    Wait(10)
    Call(GotoMap, Ref("hos_20"), hos_20_ENTRY_1)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_NpcInit_WishingToadKid) = {
    Call(SetNpcPos, NPC_SELF, -100, 0, 200)
    Call(SetNpcYaw, NPC_SELF, 90)
    Return
    End
};

NpcData N(NpcData_WishSceneToads)[] = {
    {
        .id = NPC_WishingToadKid,
        .pos = { GEN_NPC_WISHING_TOAD_KID_VEC },
        .yaw = GEN_NPC_WISHING_TOAD_KID_DIR,
        .territory = GEN_NPC_WISHING_TOAD_KID_TERRITORY,
        .init = &N(EVS_NpcInit_WishingToadKid),
        .settings = &N(NpcSettings_Toad_Stationary_Wish),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = NO_DROPS,
        .animations = TOAD_KID_RED_ANIMS,
    },
    {
        .id = NPC_GossipTrio1,
        .pos = { GEN_NPC_GOSSIP_TRIO1_VEC },
        .yaw = GEN_NPC_GOSSIP_TRIO1_DIR,
        .territory = GEN_NPC_GOSSIP_TRIO1_TERRITORY,
        .settings = &N(NpcSettings_Toad_Stationary_Wish),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT,
        .drops = NO_DROPS,
        .animations = TOAD_GREEN_ANIMS,
        .tattle = MSG_NpcTattle_GreatGossipTrioA,
    },
    {
        .id = NPC_GossipTrio2,
        .pos = { GEN_NPC_GOSSIP_TRIO2_VEC },
        .yaw = GEN_NPC_GOSSIP_TRIO2_DIR,
        .territory = GEN_NPC_GOSSIP_TRIO2_TERRITORY,
        .settings = &N(NpcSettings_Toad_Stationary_Wish),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT,
        .drops = NO_DROPS,
        .animations = TOAD_RED_ANIMS,
        .tattle = MSG_NpcTattle_GreatGossipTrioB,
    },
    {
        .id = NPC_GossipTrio3,
        .pos = { GEN_NPC_GOSSIP_TRIO3_VEC },
        .yaw = GEN_NPC_GOSSIP_TRIO3_DIR,
        .territory = GEN_NPC_GOSSIP_TRIO3_TERRITORY,
        .settings = &N(NpcSettings_Toad_Stationary_Wish),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT,
        .drops = NO_DROPS,
        .animations = TOAD_YELLOW_ANIMS,
        .tattle = MSG_NpcTattle_GreatGossipTrioC,
    },
};

NpcGroupList N(WishSceneNPCs) = {
    NPC_GROUP(N(NpcData_WishSceneToads)),
    {}
};
