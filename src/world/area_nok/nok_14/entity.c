#include "nok_14.h"
#include "entity.h"

EvtScript N(EVS_ReadSign_NoEntry) = {
    Call(IsStartingConversation, LVar0)
    IfEq(LVar0, TRUE)
        Return
    EndIf
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTimeFreezeMode, TIME_FREEZE_PARTIAL)
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0179, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Call(SetTimeFreezeMode, TIME_FREEZE_NONE)
    Return
    End
};

EvtScript N(EVS_BreakBlock_ThunderBolt) = {
    IfEq(GF_NOK14_Item_ThunderBolt, TRUE)
        Return
    EndIf
    Thread
        Call(DisablePlayerInput, TRUE)
        Loop(25)
            Wait(1)
            Call(GetNpcPos, NPC_KoopaTroopa_02, LVar0, LVar1, LVar2)
            Call(SetItemPos, MV_Item_ThunderBolt, LVar0, LVar1, LVar2)
        EndLoop
        Call(SetNpcPos, NPC_KoopaTroopa_02, NPC_DISPOSE_LOCATION)
        Call(DisablePlayerInput, FALSE)
    EndThread
    Call(SetNpcPos, NPC_KoopaTroopa_02, -345, 75, -117)
    Call(GetPlayerPos, LVar0, LVar1, LVar2)
    Call(SetNpcJumpscale, NPC_KoopaTroopa_02, Float(1.5))
    IfLe(LVar0, -345)
        Call(NpcJump0, NPC_KoopaTroopa_02, -280, 0, -112, 20)
    Else
        Call(NpcJump0, NPC_KoopaTroopa_02, -410, 0, -112, 20)
    EndIf
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Signpost, GEN_SIGNPOST_1_PARAMS)
    Call(AssignScript, Ref(GEN_SIGNPOST_1_SCRIPT))
    Set(LVar0, 1)
    IfLt(GB_StoryProgress, STORY_CH1_MADE_SECOND_BRIDGE)
        Set(LVar0, 0)
    EndIf
    IfEq(LVar0, 0)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
    EndIf
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_4_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_5_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    Call(AssignScript, Ref(GEN_BRICK_BLOCK_1_SCRIPT))
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_6_PARAMS)
    Set(MV_Item_ThunderBolt, LVar0)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_3_PARAMS)
    EVT_MAKE_ENTITY(HiddenPanel, GEN_HIDDEN_PANEL_1_PARAMS)
    Call(AssignPanelFlag, GEN_HIDDEN_PANEL_1_FLAG)
    Return
    End
};
