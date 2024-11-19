#include "nok_01.h"
#include "sprite/player.h"

#include "world/common/enemy/ai/GuardAI.inc.c"

#include "world/common/npc/KoopaWithoutShell_Wander.inc.c"
#include "world/common/npc/Koopa_Wander.inc.c"

#include "world/common/npc/Koopa.inc.c"
#include "world/common/enemy/Fuzzy.inc.c"
#include "world/common/npc/Toad_Stationary.inc.c"
#include "world/common/npc/Bobomb.inc.c"

#include "world/common/complete/ToadHouseBlanketAnim.inc.c"
#include "world/common/atomic/ToadHouse.inc.c"
#include "world/common/atomic/ToadHouse.data.inc.c"

#define CHUCK_QUIZMO_NPC_ID NPC_ChuckQuizmo
#include "world/common/complete/Quizmo.inc.c"

#include "world/common/complete/KeyItemChoice.inc.c"
#include "world/common/complete/LetterDelivery.inc.c"

s32 N(LettersKoover1)[] = {
    ITEM_LETTER_CHAIN_KOOVER_1, ITEM_NONE
};

EvtScript N(EVS_LetterPrompt_Koover1) = {
    Call(N(LetterDelivery_Init),
        NPC_Koover, ANIM_Koopa_Talk, ANIM_Koopa_Idle,
        ITEM_LETTER_CHAIN_KOOVER_1, ITEM_LETTER_CHAIN_FISHMAEL,
        MSG_CH1_0009, MSG_CH1_000A, MSG_CH1_000B, MSG_CH1_000C,
        Ref(N(LettersKoover1)))
    ExecWait(N(EVS_DoLetterDelivery))
    Return
    End
};

s32 N(LettersKoover2)[] = {
    ITEM_LETTER_CHAIN_KOOVER_2, ITEM_NONE
};

EvtScript N(EVS_LetterPrompt_Koover2) = {
    Call(N(LetterDelivery_Init),
        NPC_Koover, ANIM_Koopa_Talk, ANIM_Koopa_Idle,
        ITEM_LETTER_CHAIN_KOOVER_2, ITEM_LETTER_CHAIN_MR_E,
        MSG_CH1_000D, MSG_CH1_000E, MSG_CH1_000F, MSG_CH1_0010,
        Ref(N(LettersKoover2)))
    ExecWait(N(EVS_DoLetterDelivery))
    Return
    End
};

s32 N(LettersMortT)[] = {
    ITEM_LETTER_TO_MORT_T, ITEM_NONE
};

EvtScript N(EVS_LetterPrompt_MortT) = {
    Call(N(LetterDelivery_Init),
        NPC_MortT, ANIM_Toad_Red_Talk, ANIM_Toad_Red_Idle,
        ITEM_LETTER_TO_MORT_T, ITEM_NONE,
        MSG_CH1_0039, MSG_CH1_003A, MSG_CH1_003B, MSG_CH1_003C,
        Ref(N(LettersMortT)))
    ExecWait(N(EVS_DoLetterDelivery))
    Return
    End
};

EvtScript N(EVS_LetterReward_MortT) = {
    IfEq(LVarC, DELIVERY_ACCEPTED)
        EVT_GIVE_STAR_PIECE()
    EndIf
    Return
    End
};

API_CALLABLE(N(IsNpcFacingRight)) {
    Bytecode* args = script->ptrReadPos;
    s32 npcID = evt_get_variable(script, *args++);
    s32 outVar = *args++;
    Npc* npc = get_npc_safe(npcID);
    f32 angle = clamp_angle((npc->yaw + 180.0f) - gCameras[gCurrentCameraID].curYaw);
    s32 outVal;

    outVal = FALSE;
    if (angle > 270.0f || angle < 90.0f) {
        outVal = TRUE;
    }

    evt_set_variable(script, outVar, outVal);
    return ApiStatus_DONE2;
}

#include "common/CosInterpMinMax.inc.c"

API_CALLABLE(N(SpawnExplosionEffect)) {
    Bytecode* args = script->ptrReadPos;
    f32 posY;
    f32 posX;
    f32 posZ;

    posX = evt_get_variable(script, *args++);
    posY = evt_get_variable(script, *args++);
    posZ = evt_get_variable(script, *args++);

    fx_explosion(0, posX, posY + 15.0f, posZ);
    exec_ShakeCam1(0, 0, 20);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_DoNothing) = {
    Return
    End
};

#include "../common/GetIntoShell.inc.c"

Vec2i N(FuzzyJumpPath1)[] = {
    { -255,  399 },
    { -100,  430 },
    {  -91,  475 },
    {    0,  470 },
    {   56,  470 },
    {  120,  470 },
    {  200,  473 },
    {  250,  400 },
    {  308,  362 },
    {  370,  280 },
    {  446,  236 },
    {  444,  110 },
    {  448,   53 },
    {  330,   60 },
    {  273,   74 },
    {  200,   80 },
    {  135,  108 },
    {   30,  140 },
    {  -47,  185 },
    { -100,  240 },
    { -170,  324 },
    { -210,  360 },
};

Vec2i N(FuzzyJumpPath2)[] = {
    { -170,  324 },
    { -100,  240 },
    {  -47,  185 },
    {   30,  140 },
    {  135,  108 },
    {  200,   80 },
    {  273,   74 },
    {  330,   60 },
    {  448,   53 },
    {  444,  110 },
    {  446,  236 },
    {  370,  280 },
    {  308,  362 },
    {  250,  400 },
    {  200,  473 },
    {  120,  470 },
    {   56,  470 },
    {    0,  470 },
    {  -91,  475 },
    { -100,  430 },
    { -255,  399 },
    { -210,  360 },
};

EvtScript N(EVS_NpcIdle_MiscFuzzy1) = {
    Label(100)
    IfLt(GB_StoryProgress, STORY_CH1_ARRIVED_AT_KOOPA_VILLAGE)
        Wait(8)
        Goto(100)
    EndIf
    UseBuf(Ref(N(FuzzyJumpPath1)))
    Set(LVar1, 200)
    BufRead2(LVar0, LVar2)
    Call(SetNpcPos, NPC_MiscFuzzy1, LVar0, LVar1, LVar2)
    Label(0)
    UseBuf(Ref(N(FuzzyJumpPath1)))
    Loop(22)
        Set(LVar1, 0)
        BufRead2(LVar0, LVar2)
        Call(RandInt, 10, LVar3)
        Add(LVar3, 15)
        Call(PlaySoundAtNpc, NPC_MiscFuzzy1, SOUND_FUZZY_HOP_B, SOUND_SPACE_DEFAULT)
        Call(NpcJump0, NPC_MiscFuzzy1, LVar0, LVar1, LVar2, LVar3)
    EndLoop
    Goto(0)
    Return
    End
};

EvtScript N(EVS_MiscFuzzyFlee) = {
    Call(GetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
    Thread
        Call(MakeItemEntity, ITEM_COIN, LVar0, LVar1, LVar2, ITEM_SPAWN_MODE_TOSS_SPAWN_ALWAYS, 0)
    EndThread
    Call(SetNpcAnimation, NPC_SELF, ANIM_Fuzzy_Hurt)
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_FUZZY_HOP_B, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 25)
    Add(LVar0, 40)
    Add(LVar2, -40)
    Call(SetNpcAnimation, NPC_SELF, ANIM_Fuzzy_Hurt)
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_FUZZY_HOP_B, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 15)
    Add(LVar0, 30)
    Add(LVar2, -30)
    Call(SetNpcAnimation, NPC_SELF, ANIM_Fuzzy_Anim09)
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_FUZZY_HOP_B, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 13)
    Add(LVar0, 20)
    Add(LVar2, -20)
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_FUZZY_HOP_B, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 11)
    Add(LVar0, 10)
    Add(LVar2, -10)
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_FUZZY_HOP_B, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 9)
    Add(LVar0, 80)
    Add(LVar2, -80)
    Call(SetNpcAnimation, NPC_SELF, ANIM_Fuzzy_Run)
    Call(PlaySoundAtNpc, NPC_SELF, SOUND_FUZZY_HOP_B, SOUND_SPACE_DEFAULT)
    Call(NpcJump0, NPC_SELF, LVar0, 0, LVar2, 15)
    Call(EnableNpcShadow, NPC_SELF, FALSE)
    Call(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
    Return
    End
};

EvtScript N(EVS_NpcHit_MiscFuzzy1) = {
    Call(BindNpcAI, NPC_SELF, Ref(N(EVS_MiscFuzzyFlee)))
    Call(SetSelfEnemyFlagBits, ENEMY_FLAG_IGNORE_TOUCH | ENEMY_FLAG_IGNORE_JUMP | ENEMY_FLAG_IGNORE_HAMMER | ENEMY_FLAG_CANT_INTERACT | ENEMY_FLAG_IGNORE_PARTNER, TRUE)
    Return
    End
};

EvtScript N(EVS_NpcIdle_MiscFuzzy2) = {
    Label(100)
    IfLt(GB_StoryProgress, STORY_CH1_ARRIVED_AT_KOOPA_VILLAGE)
        Wait(8)
        Goto(100)
    EndIf
    UseBuf(Ref(N(FuzzyJumpPath2)))
    Set(LVar1, 200)
    BufRead2(LVar0, LVar2)
    MulF(LVar0, Float(0.9))
    MulF(LVar2, Float(0.9))
    Call(SetNpcPos, NPC_MiscFuzzy2, LVar0, LVar1, LVar2)
    Label(0)
    UseBuf(Ref(N(FuzzyJumpPath2)))
    Loop(22)
        Set(LVar1, 0)
        BufRead2(LVar0, LVar2)
        Call(RandInt, 9, LVar3)
        Add(LVar3, 13)
        MulF(LVar0, Float(0.9))
        MulF(LVar2, Float(0.9))
        Call(PlaySoundAtNpc, NPC_MiscFuzzy2, SOUND_FUZZY_HOP_C, SOUND_SPACE_DEFAULT)
        Call(NpcJump0, NPC_MiscFuzzy2, LVar0, LVar1, LVar2, LVar3)
    EndLoop
    Goto(0)
    Return
    End
};

EvtScript N(EVS_NpcHit_MiscFuzzy2) = {
    Call(BindNpcAI, NPC_SELF, Ref(N(EVS_MiscFuzzyFlee)))
    Call(SetSelfEnemyFlagBits, ENEMY_FLAG_IGNORE_TOUCH | ENEMY_FLAG_IGNORE_JUMP | ENEMY_FLAG_IGNORE_HAMMER | ENEMY_FLAG_CANT_INTERACT | ENEMY_FLAG_IGNORE_PARTNER, TRUE)
    Return
    End
};

EvtScript N(EVS_NpcInteract_Koopa_ShopOwner) = {
    ExecWait(EVS_ShopOwnerDialog)
    Return
    End
};

EvtScript N(EVS_NpcInit_Koopa_ShopOwner) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_Koopa_ShopOwner)))
    Return
    End
};

EvtScript N(EVS_ToadHouse_SetDialogue) = {
    Call(GetPlayerPos, LVar0, LVar1, LVar2)
    IfGt(LVar1, 0)
        Call(SpeakToPlayer, NPC_SELF, ANIM_Toad_Red_Talk, ANIM_Toad_Red_Idle, 0, MSG_CH1_0035)
        Set(LVar0, 0)
        Return
    EndIf
    Set(LVar0, MSG_CH1_0033)
    Set(LVar8, MSG_CH1_0034)
    Set(LVar1, MSG_CH1_0036)
    Set(LVar2, MSG_CH1_0037)
    Set(LVar3, MSG_CH1_0038)
    Set(LVar4, 0)
    Return
    End
};

EvtScript N(EVS_ToadHouse_GetInBed) = {
    Exec(N(EVS_PlayRestingSong))
    Call(func_802D1270, -311, 85, Float(3.0))
    Thread
        Wait(5)
        Call(N(ToadHouse_CamSetFOV), 0, 40)
        Call(SetCamType, CAM_DEFAULT, CAM_CONTROL_FIXED_POS_AND_ORIENTATION, FALSE)
        Call(SetCamPitch, CAM_DEFAULT, 34, -8)
        Call(SetCamDistance, CAM_DEFAULT, 220)
        Call(SetCamPosA, CAM_DEFAULT, -200, 53)
        Call(SetCamPosB, CAM_DEFAULT, -401, 50)
        Call(SetCamPosC, CAM_DEFAULT, 0, -2)
        Call(SetCamSpeed, CAM_DEFAULT, Float(90.0))
        Call(PanToTarget, CAM_DEFAULT, 0, TRUE)
    EndThread
    Call(func_802D1270, -334, 70, Float(3.0))
    Call(func_802D1270, -385, -6, Float(3.0))
    Wait(1)
    Call(InterpPlayerYaw, 160, 1)
    Call(HidePlayerShadow, TRUE)
    Call(SetPlayerAnimation, ANIM_Mario1_Still)
    Call(SetPlayerImgFXFlags, IMGFX_FLAG_800)
    Call(UpdatePlayerImgFX, ANIM_Mario1_Idle, IMGFX_SET_ANIM, IMGFX_ANIM_GET_IN_BED, 1, 1, 0)
    Thread
        Wait(60)
        Call(SetPlayerAnimation, ANIM_MarioW2_SleepStanding)
    EndThread
    Wait(20)
    Thread
        Wait(63)
        Call(N(ToadHouse_CamSetFOV), 0, 25)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Call(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
        Wait(1)
        Call(PanToTarget, CAM_DEFAULT, 0, FALSE)
    EndThread
    Return
    End
};

EvtScript N(EVS_ToadHouse_ReturnFromRest) = {
    Call(HidePlayerShadow, FALSE)
    Call(UpdatePlayerImgFX, ANIM_Mario1_Idle, IMGFX_CLEAR, 0, 0, 0, 0)
    Call(SetPlayerPos, -380, 0, 5)
    Call(SetPlayerSpeed, Float(3.0))
    Call(PlayerMoveTo, -325, 79, 0)
    Exec(N(EVS_SetupMusic))
    Return
    End
};

EvtScript N(EVS_NpcInteract_MortT) = {
    ExecWait(N(EVS_LetterPrompt_MortT))
    ExecWait(N(EVS_LetterReward_MortT))
    IfNe(LVarC, DELIVERY_NOT_POSSIBLE)
        Return
    EndIf
    ExecWait(N(EVS_NpcInteract_ToadHouseKeeper))
    Return
    End
};

EvtScript N(EVS_NpcInit_MortT) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_MortT)))
    Return
    End
};

EvtScript N(EVS_NpcInteract_RelaxedKoopa) = {
    IfLt(GB_StoryProgress, STORY_CH1_KOOPER_JOINED_PARTY)
        IfEq(AF_NOK01_Dialogue_RelaxedKoopa, FALSE)
            Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0021)
            Set(AF_NOK01_Dialogue_RelaxedKoopa, TRUE)
        Else
            Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0022)
            Set(AF_NOK01_Dialogue_RelaxedKoopa, FALSE)
        EndIf
        Return
    EndIf
    IfLt(GB_StoryProgress, STORY_CH1_STAR_SPRIT_DEPARTED)
        Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0023)
        Return
    EndIf
    Switch(AB_NOK_0)
        CaseEq(0)
            Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0024)
        CaseEq(1)
            Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0025)
        CaseEq(2)
            Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0026)
        CaseEq(3)
            Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0027)
#if VERSION_JP
        CaseEq(4)
            Call(SpeakToPlayer, NPC_RelaxedKoopa, ANIM_Koopa_LeanBackTalk, ANIM_Koopa_LeanBack, 5, MSG_CH1_0137)
#endif
    EndSwitch
    Return
    End
};

#include "npcs_crisis.inc.c"

EvtScript N(EVS_NpcInit_RelaxedKoopa) = {
    Call(BindNpcInteract, NPC_SELF, Ref(N(EVS_NpcInteract_RelaxedKoopa)))
    Call(SetNpcPos, NPC_RelaxedKoopa, 333, 17, -162)
    Call(InterpNpcYaw, NPC_RelaxedKoopa, 180, 0)
    Call(SetNpcAnimation, NPC_RelaxedKoopa, ANIM_Koopa_LeanBack)
    Return
    End
};

#include "npcs_normal.inc.c"

NpcData N(NpcData_Crisis)[] = {
    {
        .id = NPC_Koover,
        .pos = { GEN_NPC_KOOVER_VEC },
        .yaw = GEN_NPC_KOOVER_DIR,
        .territory = GEN_NPC_KOOVER_TERRITORY,
        .init = &N(EVS_NpcInit_Koover_Crisis),
        .settings = &N(NpcSettings_Koopa_Wander),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
        .tattle = MSG_NpcTattle_NOK_Greeter,
    },
    {
        .id = NPC_FuzzyWithShell,
        .pos = { GEN_NPC_FUZZY_WITH_SHELL_VEC },
        .yaw = GEN_NPC_FUZZY_WITH_SHELL_DIR,
        .territory = GEN_NPC_FUZZY_WITH_SHELL_TERRITORY,
        .init = &N(EVS_NpcInit_FuzzyWithShell),
        .settings = &N(NpcSettings_Fuzzy),
        .flags = ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_SKIP_BATTLE | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER | ENEMY_FLAG_IGNORE_TOUCH | ENEMY_FLAG_CANT_INTERACT | ENEMY_FLAG_IGNORE_PARTNER,
        .drops = NO_DROPS,
        .animations = FUZZY_ANIMS,
    },
    {
        .id = NPC_KooversShell,
        .pos = { GEN_NPC_KOOVERS_SHELL_VEC },
        .yaw = GEN_NPC_KOOVERS_SHELL_DIR,
        .territory = GEN_NPC_KOOVERS_SHELL_TERRITORY,
        .init = &N(EVS_NpcInit_KooversShell),
        .settings = &N(NpcSettings_Koopa),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_FLYING,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
    },
    {
        .id = NPC_Koopa_02,
        .pos = { GEN_NPC_KOOPA_02_VEC },
        .yaw = GEN_NPC_KOOPA_02_DIR,
        .territory = GEN_NPC_KOOPA_02_TERRITORY,
        .init = &N(EVS_NpcInit_Koopa_02_Crisis),
        .settings = &N(NpcSettings_KoopaWithoutShell_Wander),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = KOOPA_WITHOUT_SHELL_ANIMS,
        .tattle = MSG_NpcTattle_NOK_GenericKoopaA,
    },
    {
        .id = NPC_KoopaShell_02,
        .pos = { GEN_NPC_KOOPA_SHELL_02_VEC },
        .yaw = GEN_NPC_KOOPA_SHELL_02_DIR,
        .territory = GEN_NPC_KOOPA_SHELL_02_TERRITORY,
        .init = &N(EVS_NpcInit_KoopaShell_02),
        .settings = &N(NpcSettings_Koopa),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
    },
    {
        .id = NPC_Koopa_03,
        .pos = { GEN_NPC_KOOPA_03_VEC },
        .yaw = GEN_NPC_KOOPA_03_DIR,
        .territory = GEN_NPC_KOOPA_03_TERRITORY,
        .init = &N(EVS_NpcInit_Koopa_03_Crisis),
        .settings = &N(NpcSettings_KoopaWithoutShell_Wander),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = KOOPA_WITHOUT_SHELL_ANIMS,
        .tattle = MSG_NpcTattle_NOK_GenericKoopaB,
    },
    {
        .id = NPC_KoopaShell_03,
        .pos = { GEN_NPC_KOOPA_SHELL_03_VEC },
        .yaw = GEN_NPC_KOOPA_SHELL_03_DIR,
        .territory = GEN_NPC_KOOPA_SHELL_03_TERRITORY,
        .init = &N(EVS_NpcInit_KoopaShell_03),
        .settings = &N(NpcSettings_Koopa),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
    },
    {
        .id = NPC_Bobomb_01,
        .pos = { GEN_NPC_BOBOMB_01_VEC },
        .yaw = GEN_NPC_BOBOMB_01_DIR,
        .territory = GEN_NPC_BOBOMB_01_TERRITORY,
        .init = &N(EVS_NpcInit_Bobomb_01_Crisis),
        .settings = &N(NpcSettings_Bobomb),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = BOBOMB_RED_ANIMS,
        .tattle = MSG_NpcTattle_NOK_BobombA,
    },
    {
        .id = NPC_Bobomb_02,
        .pos = { GEN_NPC_BOBOMB_02_VEC },
        .yaw = GEN_NPC_BOBOMB_02_DIR,
        .territory = GEN_NPC_BOBOMB_02_TERRITORY,
        .init = &N(EVS_NpcInit_Bobomb_02_Crisis),
        .settings = &N(NpcSettings_Bobomb),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = BOBOMB_RED_ANIMS,
        .tattle = MSG_NpcTattle_NOK_BobombB,
    },
};

// just jumps around the map; can be hit for a coin
NpcData N(NpcData_MiscFuzzy1) = {
    .id = NPC_MiscFuzzy1,
    .pos = { GEN_NPC_MISC_FUZZY1_VEC },
    .yaw = GEN_NPC_MISC_FUZZY1_DIR,
    .territory = GEN_NPC_MISC_FUZZY1_TERRITORY,
    .init = &N(EVS_NpcInit_MiscFuzzy1),
    .settings = &N(NpcSettings_Fuzzy),
    .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_SKIP_BATTLE | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER | ENEMY_FLAG_IGNORE_TOUCH | ENEMY_FLAG_CANT_INTERACT | ENEMY_FLAG_IGNORE_PARTNER,
    .drops = NO_DROPS,
    .animations = FUZZY_ANIMS,
};

// just jumps around the map; can be hit for a coin
NpcData N(NpcData_MiscFuzzy2) = {
    .id = NPC_MiscFuzzy2,
    .pos = { GEN_NPC_MISC_FUZZY2_VEC },
    .yaw = GEN_NPC_MISC_FUZZY2_DIR,
    .territory = GEN_NPC_MISC_FUZZY2_TERRITORY,
    .init = &N(EVS_NpcInit_MiscFuzzy2),
    .settings = &N(NpcSettings_Fuzzy),
    .flags = ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_SKIP_BATTLE | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER | ENEMY_FLAG_IGNORE_TOUCH | ENEMY_FLAG_CANT_INTERACT | ENEMY_FLAG_IGNORE_PARTNER,
    .drops = NO_DROPS,
    .animations = FUZZY_ANIMS,
};

NpcData N(NpcData_Normal)[] = {
    {
        .id = NPC_Koover,
        .pos = { GEN_NPC_KOOVER_1_VEC },
        .yaw = GEN_NPC_KOOVER_1_DIR,
        .territory = GEN_NPC_KOOVER_1_TERRITORY,
        .init = &N(EVS_NpcInit_Koover_Normal),
        .settings = &N(NpcSettings_Koopa_Wander),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
        .tattle = MSG_NpcTattle_NOK_Greeter,
    },
    {
        .id = NPC_Koopa_02,
        .pos = { GEN_NPC_KOOPA_02_1_VEC },
        .yaw = GEN_NPC_KOOPA_02_1_DIR,
        .territory = GEN_NPC_KOOPA_02_1_TERRITORY,
        .init = &N(EVS_NpcInit_Koopa_02_Normal),
        .settings = &N(NpcSettings_Koopa_Wander),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
        .tattle = MSG_NpcTattle_NOK_GenericKoopaA,
    },
    {
        .id = NPC_Koopa_03,
        .pos = { GEN_NPC_KOOPA_03_1_VEC },
        .yaw = GEN_NPC_KOOPA_03_1_DIR,
        .territory = GEN_NPC_KOOPA_03_1_TERRITORY,
        .init = &N(EVS_NpcInit_Koopa_03_Normal),
        .settings = &N(NpcSettings_Koopa_Wander),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
        .tattle = MSG_NpcTattle_NOK_GenericKoopaB,
    },
    {
        .id = NPC_Bobomb_01,
        .pos = { GEN_NPC_BOBOMB_01_1_VEC },
        .yaw = GEN_NPC_BOBOMB_01_1_DIR,
        .territory = GEN_NPC_BOBOMB_01_1_TERRITORY,
        .init = &N(EVS_NpcInit_Bobomb_01_Normal),
        .settings = &N(NpcSettings_Bobomb),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = BOBOMB_RED_ANIMS,
        .tattle = MSG_NpcTattle_NOK_BobombA,
    },
    {
        .id = NPC_Bobomb_02,
        .pos = { GEN_NPC_BOBOMB_02_1_VEC },
        .yaw = GEN_NPC_BOBOMB_02_1_DIR,
        .territory = GEN_NPC_BOBOMB_02_1_TERRITORY,
        .init = &N(EVS_NpcInit_Bobomb_02_Normal),
        .settings = &N(NpcSettings_Bobomb),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = BOBOMB_RED_ANIMS,
        .tattle = MSG_NpcTattle_NOK_BobombB,
    },
    {
        .id = NPC_Bobomb_03,
        .pos = { GEN_NPC_BOBOMB_03_VEC },
        .yaw = GEN_NPC_BOBOMB_03_DIR,
        .territory = GEN_NPC_BOBOMB_03_TERRITORY,
        .init = &N(EVS_NpcInit_Bobomb_03_Normal),
        .settings = &N(NpcSettings_Bobomb),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = BOBOMB_RED_ANIMS,
        .tattle = MSG_NpcTattle_NOK_BobombC,
    },
};

NpcData N(NpcData_Shared)[] = {
    {
        .id = NPC_MortT,
        .pos = { GEN_NPC_MORT_T_VEC },
        .yaw = GEN_NPC_MORT_T_DIR,
        .territory = GEN_NPC_MORT_T_TERRITORY,
        .init = &N(EVS_NpcInit_MortT),
        .settings = &N(NpcSettings_Toad_Stationary),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = TOAD_RED_ANIMS,
        .tattle = MSG_NpcTattle_NOK_ToadHouseToad,
    },
    {
        .id = NPC_Koopa_ShopOwner,
        .pos = { GEN_NPC_KOOPA_SHOP_OWNER_VEC },
        .yaw = GEN_NPC_KOOPA_SHOP_OWNER_DIR,
        .territory = GEN_NPC_KOOPA_SHOP_OWNER_TERRITORY,
        .init = &N(EVS_NpcInit_Koopa_ShopOwner),
        .settings = &N(NpcSettings_Koopa),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
        .tattle = MSG_NpcTattle_NOK_ShopOwner,
    },
    {
        .id = NPC_RelaxedKoopa,
        .pos = { GEN_NPC_RELAXED_KOOPA_VEC },
        .yaw = GEN_NPC_RELAXED_KOOPA_DIR,
        .territory = GEN_NPC_RELAXED_KOOPA_TERRITORY,
        .init = &N(EVS_NpcInit_RelaxedKoopa),
        .settings = &N(NpcSettings_Koopa),
        .flags = ENEMY_FLAG_PASSIVE | ENEMY_FLAG_ENABLE_HIT_SCRIPT | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
        .drops = NO_DROPS,
        .animations = KOOPA_ANIMS,
        .tattle = MSG_NpcTattle_NOK_RadioLover,
    },
    {
        .id = NPC_ChuckQuizmo,
        .pos = { GEN_NPC_CHUCK_QUIZMO_VEC },
        .yaw = GEN_NPC_CHUCK_QUIZMO_DIR,
        .territory = GEN_NPC_CHUCK_QUIZMO_TERRITORY,
        .initVarCount = 1,
        .initVar = { .bytes = { 0, QUIZ_AREA_NOK, QUIZ_COUNT_NOK, QUIZ_MAP_NOK_01 }},
        .settings = &N(NpcSettings_ChuckQuizmo),
        .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST,
        .drops = NO_DROPS,
        .animations = QUIZMO_ANIMS,
        .tattle = MSG_NpcTattle_ChuckQuizmo,
    },
};

NpcGroupList N(CrisisNPCs) = {
    NPC_GROUP(N(NpcData_Crisis)),
    NPC_GROUP(N(NpcData_Shared)),
    NPC_GROUP(N(NpcData_MiscFuzzy1)),
    NPC_GROUP(N(NpcData_MiscFuzzy2)),
    {}
};

NpcGroupList N(NormalNPCs) = {
    NPC_GROUP(N(NpcData_Normal)),
    NPC_GROUP(N(NpcData_Shared)),
    {}
};
