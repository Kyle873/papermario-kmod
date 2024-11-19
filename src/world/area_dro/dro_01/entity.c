#include "dro_01.h"
#include "entity.h"

#define NAMESPACE dro_01_Entity
#include "world/common/entity/Pipe.inc.c"
#define NAMESPACE dro_01

EvtScript N(EVS_WarpPipeExit) = {
    Set(GF_DRO01_HeardHintAboutSpinningRoof, FALSE)
    Call(GotoMap, Ref("tik_01"), tik_01_ENTRY_4)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    IfEq(GF_DRO01_WarpPipe, FALSE)
        IfEq(GF_TIK01_WarpPipes, TRUE)
            Call(GetEntryID, LVar0)
            IfNe(LVar0, dro_01_ENTRY_2)
                Set(GF_DRO01_WarpPipe, TRUE)
            EndIf
        EndIf
    EndIf
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_1_PARAMS)
    Return
    End
};
