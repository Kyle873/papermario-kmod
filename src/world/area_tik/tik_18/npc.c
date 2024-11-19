#include "tik_18.h"

#include "world/common/enemy/Gloomba_Wander.inc.c"
#include "world/common/enemy/SpikedGloomba_Wander.inc.c"

EvtScript N(EVS_NpcIdle_SpikedGloomba) = {
    // wait for activation from block breaking
    Label(0)
        Call(GetSelfVar, 0, LVar0)
        IfFalse(LVar0)
            Wait(1)
            Goto(0)
        EndIf
    Call(SetNpcAnimation, NPC_SELF, ANIM_SpikedGoomba_Dark_Sleep)
    Thread
        Call(PlaySoundAtNpc, NPC_SELF, SOUND_AI_FOUND_PLAYER_JUMP, SOUND_SPACE_DEFAULT)
        Call(MakeLerp, -90, 0, 10, EASING_LINEAR)
        Label(1)
            Call(UpdateLerp)
            Call(SetNpcRotation, NPC_SELF, LVar0, 0, 0)
            Wait(1)
            IfEq(LVar1, 1)
                Goto(1)
            EndIf
        Call(GetNpcPos, NPC_SELF, LVarA, LVarB, LVarC)
        Call(MakeLerp, 0, 360, 15, EASING_LINEAR)
        Label(2)
            Call(UpdateLerp)
            Call(SetNpcRotation, NPC_SELF, 0, LVar0, 0)
            Wait(1)
            IfEq(LVar1, 1)
                Goto(2)
            EndIf
        Call(SetNpcRotation, NPC_SELF, 0, 0, 0)
    EndThread
    Call(SetNpcJumpscale, NPC_SELF, Float(0.7))
    Call(NpcJump0, NPC_SELF, 190, -10, -10, 25)
    Call(SetNpcAnimation, NPC_SELF, ANIM_SpikedGoomba_Dark_Laugh)
    Wait(20)
    Call(SetNpcAnimation, NPC_SELF, ANIM_SpikedGoomba_Dark_Idle)
    Call(BindNpcAI, NPC_SELF, Ref(N(EVS_NpcAI_SpikedGloomba_Wander)))
    Return
    End
};

EvtScript N(EVS_NpcInit_SpikedGloomba) = {
    Call(SetNpcPos, NPC_SELF, 150, 76, -63)
    Call(SetNpcRotation, NPC_SELF, -85, 0, 0)
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_SpikedGloomba)))
    Return
    End
};

NpcData N(NpcData_Gloomba) = {
    .id = NPC_Gloomba,
    .pos = { GEN_NPC_GLOOMBA_VEC },
    .yaw = GEN_NPC_GLOOMBA_DIR,
    .territory = GEN_NPC_GLOOMBA_TERRITORY,
    .settings = &N(NpcSettings_Gloomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = GLOOMBA_DROPS,
    .animations = GLOOMBA_ANIMS,
};

NpcData N(NpcData_SpikedGloomba) = {
    .id = NPC_SpikedGloomba,
    .pos = { GEN_NPC_SPIKED_GLOOMBA_VEC },
    .yaw = GEN_NPC_SPIKED_GLOOMBA_DIR,
    .territory = GEN_NPC_SPIKED_GLOOMBA_TERRITORY,
    .init = &N(EVS_NpcInit_SpikedGloomba),
    .settings = &N(NpcSettings_SpikedGloomba_Wander),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING | ENEMY_FLAG_NO_SHADOW_RAYCAST,
    .drops = SPIKED_GLOOMBA_DROPS,
    .animations = SPIKED_GLOOMBA_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Gloomba), BTL_TIK_FORMATION_0A, BTL_TIK_STAGE_00),
    NPC_GROUP(N(NpcData_SpikedGloomba), BTL_TIK_FORMATION_0E, BTL_TIK_STAGE_00),
    {}
};
