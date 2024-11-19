#include "iwa_10.h"
#include "entity.h"

#define SUPER_BLOCK_MAPVAR GEN_SUPER_BLOCK_1_VAR
#define SUPER_BLOCK_GAMEFLAG GEN_SUPER_BLOCK_1_FLAG
#include "world/common/entity/SuperBlock.inc.c"

EvtScript N(EVS_OnSmashBlock) = {
    Set(GF_IWA10_Hammer1Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_IWA10_Hammer1Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2BlockWideZ, GEN_HAMMER2_BLOCK_WIDE_Z_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_WIDE_Z_1_SCRIPT))
    EndIf
    EVT_MAKE_SUPER_BLOCK(GEN_SUPER_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_1_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_2_PARAMS)
    EVT_MAKE_ENTITY(ArrowSign, GEN_ARROW_SIGN_3_PARAMS)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EVT_MAKE_ENTITY(HeartBlock, GEN_HEART_BLOCK_1_PARAMS)
    Return
    End
};
