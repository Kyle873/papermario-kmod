#include "hos_03.h"
#include "sprite/player.h"

#include "world/common/npc/StarSpirit.inc.c"
#include "world/common/npc/StarSpirit_Wander.inc.c"

#include "world/common/complete/ToadHouseBlanketAnim.inc.c"
#include "world/common/atomic/ToadHouse.inc.c"
#include "world/common/atomic/ToadHouseHos.data.inc.c"

#define CHUCK_QUIZMO_NPC_ID NPC_ChuckQuizmo
#include "world/common/complete/Quizmo.inc.c"

EvtScript N(EVS_NpcInteract_StarKid_01) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_StarMan_Talk, ANIM_StarMan_Idle, 0, MSG_HOS_005F)
    Return
    End
};

EvtScript N(EVS_NpcInit_StarKid_01) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_StarKid_01)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_StarKid_02) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_StarMan_Talk, ANIM_StarMan_Idle, 0, MSG_HOS_0060)
    Return
    End
};

EvtScript N(EVS_NpcInit_StarKid_02) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_StarKid_02)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_StarKid_03) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_StarMan_Talk, ANIM_StarMan_Idle, 0, MSG_HOS_0061)
    Return
    End
};

EvtScript N(EVS_NpcInit_StarKid_03) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_StarKid_03)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_StarKid_04) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_StarMan_Talk, ANIM_StarMan_Idle, 0, MSG_HOS_0062)
    Return
    End
};

EvtScript N(EVS_NpcInit_StarKid_04) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_StarKid_04)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_StarKid_05) = {
    Call(SpeakToPlayer, NPC_SELF, ANIM_StarMan_Talk, ANIM_StarMan_Idle, 0, MSG_HOS_0063)
    Return
    End
};

EvtScript N(EVS_NpcInit_StarKid_05) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_StarKid_05)))
    Return
    End
};

EvtScript N(EVS_ToadHouse_GetInBed) = {
    Exec(N(EVS_PlayRestingSong))
    Thread
        Wait(20)
        Call(N(ToadHouse_CamSetFOV), 0, 40)
        Call(SetCamType, CAM_DEFAULT, CAM_CONTROL_FIXED_POS_AND_ORIENTATION, FALSE)
        Call(SetCamPitch, CAM_DEFAULT, 34, -8)
        Call(SetCamDistance, CAM_DEFAULT, 220)
        Call(SetCamPosA, CAM_DEFAULT, Float(448.0), Float(180.0))
        Call(SetCamPosB, CAM_DEFAULT, Float(410.0), Float(150.0))
        Call(SetCamPosC, CAM_DEFAULT, 0, 25)
        Call(SetCamSpeed, CAM_DEFAULT, Float(90.0))
        Call(PanToTarget, CAM_DEFAULT, 0, TRUE)
    EndThread
    Call(func_802D1270, 442, 140, Float(3.0))
    Call(InterpPlayerYaw, 191, 1)
    Wait(5)
    Call(InterpPlayerYaw, 204, 1)
    Call(HidePlayerShadow, TRUE)
    Call(SetPlayerAnimation, ANIM_Mario1_Idle)
    Call(SetPlayerImgFXFlags, IMGFX_FLAG_800)
    Call(UpdatePlayerImgFX, ANIM_Mario1_Idle, IMGFX_SET_ANIM, IMGFX_ANIM_GET_IN_BED, 1, 1, 0)
    Wait(61)
    Call(SetPlayerAnimation, ANIM_MarioW2_SleepStanding)
    Thread
        Wait(70)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
        Call(PanToTarget, CAM_DEFAULT, 0, FALSE)
    EndThread
    Return
    End
};

EvtScript N(EVS_ToadHouse_ReturnFromRest) = {
    Exec(N(EVS_SetupMusic))
    Call(N(ToadHouse_CamSetFOV), 0, 25)
    Call(UpdatePlayerImgFX, ANIM_Mario1_Idle, IMGFX_CLEAR, 0, 0, 0, 0)
    Call(SetPlayerPos, 445, 25, 185)
    Call(PlayerMoveTo, 440, 215, 20)
    Return
    End
};

EvtScript N(EVS_ToadHouse_SetDialogue) = {
    Set(LVar0, MSG_HOS_0064)
    Set(LVar8, MSG_HOS_0065)
    Set(LVar1, MSG_HOS_0066)
    Set(LVar2, MSG_HOS_0067)
    Set(LVar3, MSG_HOS_0068)
    Return
    End
};

EvtScript N(EVS_NpcInit_ToadHouseKeeper) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_ToadHouseKeeper)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_ShopOwner) = {
    ExecWait(EVS_ShopOwnerDialog)
    Return
    End
};

EvtScript N(EVS_NpcInit_ShopOwner) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_ShopOwner)))
    Return
    End
};

NpcData N(NpcData_Townsfolk)[] = {
    {
        .id = NPC_StarMan_01,
        .pos = { GEN_NPC_STAR_MAN_01_VEC },
        .yaw = GEN_NPC_STAR_MAN_01_DIR,
        .territory = GEN_NPC_STAR_MAN_01_TERRITORY,
        .init = &N(EVS_NpcInit_StarKid_01),
        .settings = &N(NpcSettings_StarMan),
        .flags = COMMON_PASSIVE_FLAGS,
        .drops = NO_DROPS,
        .animations = STAR_MAN_ANIMS,
        .tattle = MSG_NpcTattle_HOS_StarKidA,
    },
    {
        .id = NPC_StarMan_02,
        .pos = { GEN_NPC_STAR_MAN_02_VEC },
        .yaw = GEN_NPC_STAR_MAN_02_DIR,
        .territory = GEN_NPC_STAR_MAN_02_TERRITORY,
        .init = &N(EVS_NpcInit_StarKid_02),
        .settings = &N(NpcSettings_StarMan),
        .flags = COMMON_PASSIVE_FLAGS,
        .drops = NO_DROPS,
        .animations = STAR_MAN_ANIMS,
        .tattle = MSG_NpcTattle_HOS_StarKidB,
    },
    {
        .id = NPC_StarMan_03,
        .pos = { GEN_NPC_STAR_MAN_03_VEC },
        .yaw = GEN_NPC_STAR_MAN_03_DIR,
        .territory = GEN_NPC_STAR_MAN_03_TERRITORY,
        .init = &N(EVS_NpcInit_StarKid_03),
        .settings = &N(NpcSettings_StarMan_Wander),
        .flags = COMMON_PASSIVE_FLAGS,
        .drops = NO_DROPS,
        .animations = STAR_MAN_ANIMS,
        .tattle = MSG_NpcTattle_HOS_StarKidC,
    },
    {
        .id = NPC_StarMan_04,
        .pos = { GEN_NPC_STAR_MAN_04_VEC },
        .yaw = GEN_NPC_STAR_MAN_04_DIR,
        .territory = GEN_NPC_STAR_MAN_04_TERRITORY,
        .init = &N(EVS_NpcInit_StarKid_04),
        .settings = &N(NpcSettings_StarMan_Wander),
        .flags = COMMON_PASSIVE_FLAGS,
        .drops = NO_DROPS,
        .animations = STAR_MAN_ANIMS,
        .tattle = MSG_NpcTattle_HOS_StarKidD,
    },
    {
        .id = NPC_StarMan_05,
        .pos = { GEN_NPC_STAR_MAN_05_VEC },
        .yaw = GEN_NPC_STAR_MAN_05_DIR,
        .territory = GEN_NPC_STAR_MAN_05_TERRITORY,
        .init = &N(EVS_NpcInit_StarKid_05),
        .settings = &N(NpcSettings_StarMan),
        .flags = COMMON_PASSIVE_FLAGS,
        .drops = NO_DROPS,
        .animations = STAR_MAN_ANIMS,
        .tattle = MSG_NpcTattle_HOS_StarKidE,
    },
    {
        .id = NPC_StarMan_ToadHouse,
        .pos = { GEN_NPC_STAR_MAN_TOAD_HOUSE_VEC },
        .yaw = GEN_NPC_STAR_MAN_TOAD_HOUSE_DIR,
        .territory = GEN_NPC_STAR_MAN_TOAD_HOUSE_TERRITORY,
        .init = &N(EVS_NpcInit_ToadHouseKeeper),
        .settings = &N(NpcSettings_StarMan),
        .flags = COMMON_PASSIVE_FLAGS,
        .drops = NO_DROPS,
        .animations = STAR_MAN_ANIMS,
        .tattle = MSG_NpcTattle_HOS_ToadHouseStarKid,
    },
    {
        .id = NPC_StarMan_ShopOwner,
        .pos = { GEN_NPC_STAR_MAN_SHOP_OWNER_VEC },
        .yaw = GEN_NPC_STAR_MAN_SHOP_OWNER_DIR,
        .territory = GEN_NPC_STAR_MAN_SHOP_OWNER_TERRITORY,
        .init = &N(EVS_NpcInit_ShopOwner),
        .settings = &N(NpcSettings_StarMan),
        .flags = COMMON_PASSIVE_FLAGS,
        .drops = NO_DROPS,
        .animations = STAR_MAN_ANIMS,
        .tattle = MSG_NpcTattle_HOS_ShopOwner,
    },
    {
        .id = NPC_ChuckQuizmo,
        .pos = { GEN_NPC_CHUCK_QUIZMO_VEC },
        .yaw = GEN_NPC_CHUCK_QUIZMO_DIR,
        .territory = GEN_NPC_CHUCK_QUIZMO_TERRITORY,
        .initVarCount = 1,
        .initVar = { .bytes = { 0, QUIZ_AREA_HOS, QUIZ_COUNT_HOS, QUIZ_MAP_HOS_03 }},
        .settings = &N(NpcSettings_ChuckQuizmo),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = QUIZMO_ANIMS,
        .tattle = MSG_NpcTattle_ChuckQuizmo,
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Townsfolk)),
    {}
};
