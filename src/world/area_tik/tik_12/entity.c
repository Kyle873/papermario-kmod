#include "tik_12.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

EvtScript N(EVS_SmashBlockA) = {
    Set(GF_TIK12_Hammer3BlockA, TRUE)
    Return
    End
};

EvtScript N(EVS_SmashBlockB) = {
    Set(GF_TIK12_Hammer3BlockB, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    IfEq(GF_TIK12_Hammer3BlockA, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_1_SCRIPT))
    EndIf
    IfEq(GF_TIK12_Hammer3BlockB, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_2_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_2_SCRIPT))
    EndIf
    Return
    End
};
