#include "mim_11.h"
#include "entity.h"

EvtScript N(EVS_UseBluePipe) = {
    Call(GotoMap, Ref("tik_09"), tik_09_ENTRY_2)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_MIM11_WarpPipe, FALSE)
        IfEq(GF_TIK09_WarpPipe, TRUE)
            Call(GetEntryID, LVar0)
            IfNe(LVar0, mim_11_ENTRY_3)
                Set(GF_KMR02_WarpPipe, TRUE)
            EndIf
        EndIf
    EndIf
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_1_PARAMS)
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_1_FLAG)
    Return
    End
};
