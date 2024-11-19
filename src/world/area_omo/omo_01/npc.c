#include "omo_01.h"

#include "world/common/enemy/ShyGuy_AvoidPlayer.inc.c"

EvtScript N(EVS_ShyGuy_CarryItem) = {
    Set(LVarA, LVar0) // npcID
    Set(LVarB, LVar1) // itemID
    Set(LVarD, LVar2) // item type
    Set(LVarE, LVar3) // pickup flag
    Call(SetNpcVar, LVarA, 10, 0)
    Call(GetNpcPos, LVarA, LVar2, LVar3, LVar4)
    Add(LVar3, 26)
    Call(MakeItemEntity, LVarB, LVar2, LVar3, LVar4, ITEM_SPAWN_MODE_DECORATION, 0)
    Set(LVar9, LVar0)
    Wait(1)
    Label(10)
        Call(GetNpcPos, LVarA, LVar2, LVar3, LVar4)
        Add(LVar3, 26)
        Sub(LVar4, 1)
        Call(SetItemPos, LVar9, LVar2, LVar3, LVar4)
        Wait(1)
        Call(GetNpcVar, LVarA, 10, LVar0)
        IfEq(LVar0, 0)
            Goto(10)
        EndIf
    Call(RemoveItemEntity, LVar9)
    Switch(LVarD)
        CaseEq(ITEM_TYPE_CONSUMABLE)
            Call(MakeItemEntity, LVarB, LVar2, LVar3, LVar4, ITEM_SPAWN_MODE_FALL_SPAWN_ALWAYS, LVarE)
        CaseEq(ITEM_TYPE_KEY)
            Call(DropItemEntity, LVarB, LVar2, LVar3, LVar4, ITEM_SPAWN_MODE_FALL_NEVER_VANISH, LVarE)
        CaseEq(ITEM_TYPE_BADGE)
            Call(DropItemEntity, LVarB, LVar2, LVar3, LVar4, ITEM_SPAWN_MODE_FALL, LVarE)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_NpcDefeat_ShyGuy) = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Set(GF_OMO09_Defeated_CalculatorThief, TRUE)
            Call(SetSelfVar, 10, 1)
            Wait(2)
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_FLED)
            Call(OnPlayerFled, 0)
        CaseEq(OUTCOME_ENEMY_FLED)
            Call(SetEnemyFlagBits, NPC_SELF, ENEMY_FLAG_FLED, TRUE)
            Call(RemoveNpc, NPC_SELF)
            Call(SetSelfVar, 10, 1)
    EndSwitch
    Return
    End
};

EvtScript N(EVS_NpcInit_ShyGuy) = {
    IfEq(GF_OMO09_Defeated_CalculatorThief, TRUE)
        IfEq(GF_OMO01_Item_Calculator, FALSE)
            Call(RemoveNpc, NPC_SELF)
        EndIf
    EndIf
    Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_ShyGuy)))
    Set(LVar0, NPC_ShyGuy_01)
    IfEq(GF_OMO01_Item_Calculator, FALSE)
        Set(LVar1, ITEM_CALCULATOR)
        Set(LVar2, ITEM_TYPE_KEY)
        SetConst(LVar3, GF_OMO01_Item_Calculator)
    Else
        Set(LVar1, ITEM_MAPLE_SYRUP)
        Set(LVar2, ITEM_TYPE_CONSUMABLE)
        Set(LVar3, 0)
    EndIf
    Exec(N(EVS_ShyGuy_CarryItem))
    Return
    End
};

NpcData N(NpcData_ShyGuy_01) = {
    .id = NPC_ShyGuy_01,
    .pos = { GEN_NPC_SHY_GUY_01_VEC },
    .yaw = GEN_NPC_SHY_GUY_01_DIR,
    .territory = GEN_NPC_SHY_GUY_01_TERRITORY,
    .init = &N(EVS_NpcInit_ShyGuy),
    .settings = &N(NpcSettings_ShyGuy_AvoidPlayer),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SHY_GUY_DROPS,
    .animations = RED_AVOID_SHY_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

EvtScript N(EVS_NpcInit_ShyGuy_02) = {
    Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_ShyGuy)))
    Set(LVar0, NPC_ShyGuy_02)
    Set(LVar1, ITEM_CAKE_MIX)
    Set(LVar2, ITEM_TYPE_CONSUMABLE)
    Set(LVar3, 0)
    Exec(N(EVS_ShyGuy_CarryItem))
    Return
    End
};

NpcData N(NpcData_ShyGuy_02) = {
    .id = NPC_ShyGuy_02,
    .pos = { GEN_NPC_SHY_GUY_02_VEC },
    .yaw = GEN_NPC_SHY_GUY_02_DIR,
    .territory = GEN_NPC_SHY_GUY_02_TERRITORY,
    .init = &N(EVS_NpcInit_ShyGuy_02),
    .settings = &N(NpcSettings_ShyGuy_AvoidPlayer),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SHY_GUY_DROPS,
    .animations = YELLOW_AVOID_SHY_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

EvtScript N(EVS_NpcInit_ShyGuy_03) = {
    Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_ShyGuy)))
    Set(LVar0, NPC_ShyGuy_03)
    Set(LVar1, ITEM_CAKE_MIX)
    Set(LVar2, ITEM_TYPE_CONSUMABLE)
    Set(LVar3, 0)
    Exec(N(EVS_ShyGuy_CarryItem))
    Return
    End
};

NpcData N(NpcData_ShyGuy_03) = {
    .id = NPC_ShyGuy_03,
    .pos = { GEN_NPC_SHY_GUY_03_VEC },
    .yaw = GEN_NPC_SHY_GUY_03_DIR,
    .territory = GEN_NPC_SHY_GUY_03_TERRITORY,
    .init = &N(EVS_NpcInit_ShyGuy_03),
    .settings = &N(NpcSettings_ShyGuy_AvoidPlayer),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SHY_GUY_DROPS,
    .animations = YELLOW_AVOID_SHY_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

EvtScript N(EVS_NpcInit_ShyGuy_04) = {
    Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_ShyGuy)))
    Set(LVar0, NPC_ShyGuy_04)
    Set(LVar1, ITEM_MUSHROOM)
    Set(LVar2, ITEM_TYPE_CONSUMABLE)
    Set(LVar3, 0)
    Exec(N(EVS_ShyGuy_CarryItem))
    Return
    End
};

NpcData N(NpcData_ShyGuy_04) = {
    .id = NPC_ShyGuy_04,
    .pos = { GEN_NPC_SHY_GUY_04_VEC },
    .yaw = GEN_NPC_SHY_GUY_04_DIR,
    .territory = GEN_NPC_SHY_GUY_04_TERRITORY,
    .init = &N(EVS_NpcInit_ShyGuy_04),
    .settings = &N(NpcSettings_ShyGuy_AvoidPlayer),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SHY_GUY_DROPS,
    .animations = BLUE_AVOID_SHY_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

EvtScript N(EVS_NpcInit_ShyGuy_05) = {
    Call(BindNpcDefeat, NPC_SELF, Ref(N(EVS_NpcDefeat_ShyGuy)))
    Set(LVar0, NPC_ShyGuy_05)
    Set(LVar1, ITEM_FIRE_FLOWER)
    Set(LVar2, ITEM_TYPE_CONSUMABLE)
    Set(LVar3, 0)
    Exec(N(EVS_ShyGuy_CarryItem))
    Return
    End
};

NpcData N(NpcData_ShyGuy_05) = {
    .id = NPC_ShyGuy_05,
    .pos = { GEN_NPC_SHY_GUY_05_VEC },
    .yaw = GEN_NPC_SHY_GUY_05_DIR,
    .territory = GEN_NPC_SHY_GUY_05_TERRITORY,
    .init = &N(EVS_NpcInit_ShyGuy_05),
    .settings = &N(NpcSettings_ShyGuy_AvoidPlayer),
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .drops = SHY_GUY_DROPS,
    .animations = GREEN_AVOID_SHY_GUY_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_ShyGuy_01), BTL_OMO_FORMATION_00, BTL_OMO_STAGE_00),
    NPC_GROUP(N(NpcData_ShyGuy_02), BTL_OMO_FORMATION_02, BTL_OMO_STAGE_00),
    NPC_GROUP(N(NpcData_ShyGuy_03), BTL_OMO_FORMATION_02, BTL_OMO_STAGE_00),
    NPC_GROUP(N(NpcData_ShyGuy_04), BTL_OMO_FORMATION_01, BTL_OMO_STAGE_00),
    NPC_GROUP(N(NpcData_ShyGuy_05), BTL_OMO_FORMATION_05, BTL_OMO_STAGE_00),
    {}
};
