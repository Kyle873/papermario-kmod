#include "nok_02.h"
#include "entity.h"

#include "common/ItemEntityJumpToPos.inc.c"

EvtScript N(EVS_BreakBlock_DropStarPiece) = {
    Call(N(ItemEntityJumpToPos), MV_StarPieceItem, Float(227.0), Float(0.0), Float(247.0), 20, Float(1.0))
    Return
    End
};

EvtScript N(EVS_GotoMap_tik_01_3) = {
    Call(GotoMap, Ref("tik_01"), tik_01_ENTRY_3)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    Switch(GB_StoryProgress)
        CaseLt(STORY_CH1_KOOPER_JOINED_PARTY)
            IfEq(GF_NOK02_RecoveredShellB, FALSE)
                Call(AssignScript, Ref(N(EVS_BreakBlock_DropShell)))
            EndIf
        CaseGe(STORY_CH1_KOOPER_JOINED_PARTY)
            IfEq(GF_NOK02_Item_StarPiece, FALSE)
                Call(AssignScript, Ref(N(EVS_BreakBlock_DropStarPiece)))
                EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
                Set(MV_StarPieceItem, LVar0)
            EndIf
    EndSwitch
    Call(CreatePushBlockGrid, GEN_PUSH_BLOCKS_1_GRID_PARAMS)
    GEN_PUSH_BLOCKS_1_GRID_CONTENT
    IfEq(GF_NOK02_WarpPipe, FALSE)
        IfEq(GF_TIK01_WarpPipes, TRUE)
            Call(GetEntryID, LVar0)
            IfNe(LVar0, nok_02_ENTRY_2)
                Set(GF_NOK02_WarpPipe, TRUE)
            EndIf
        EndIf
    EndIf
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_1_PARAMS)
    Return
    End
};
