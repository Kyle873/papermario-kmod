#include "kzn_17.h"
#include "entity.h"

s32 N(Unused_80243610_3610)[] = {
    0x01010101, 0x01010101, 0x01010101, 0x01010101,
    0x01010101, 0x01010101, 0x01010101, 0x01010101,
    0x01010101, 0x01010101, 0x01010101, 0x01010101,
    0x01010101, 0x01010101, 0x01010000,
};

EvtScript N(EVS_OnBreakBlockA) = {
    Set(GF_KZN17_Hammer3BlockA, TRUE)
    Return
    End
};

EvtScript N(EVS_OnBreakBlockB) = {
    Set(GF_KZN17_Hammer3BlockB, TRUE)
    Return
    End
};

EvtScript N(EVS_OnBreakBlockC) = {
    Set(GF_KZN17_Hammer3BlockC, TRUE)
    Return
    End
};

EvtScript N(EVS_OnBreakBlockD) = {
    Set(GF_KZN17_Hammer3BlockD, TRUE)
    Return
    End
};

EvtScript N(EVS_OnBreakBlockE) = {
    Set(GF_KZN17_Hammer3BlockE, TRUE)
    Return
    End
};

EvtScript N(EVS_OnBreakBlockF) = {
    Set(GF_KZN17_Hammer3BlockF, TRUE)
    Return
    End
};

EvtScript N(EVS_OnBreakBlockG) = {
    Set(GF_KZN17_Hammer3BlockG, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KZN17_Hammer3BlockA, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_1_SCRIPT))
    EndIf
    IfEq(GF_KZN17_Hammer3BlockB, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_2_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_2_SCRIPT))
    EndIf
    IfEq(GF_KZN17_Hammer3BlockC, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_3_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_3_SCRIPT))
    EndIf
    IfEq(GF_KZN17_Hammer3BlockD, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_4_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_4_SCRIPT))
    EndIf
    IfEq(GF_KZN17_Hammer3BlockE, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_5_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_5_SCRIPT))
    EndIf
    IfEq(GF_KZN17_Hammer3BlockF, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_6_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_6_SCRIPT))
    EndIf
    IfEq(GF_KZN17_Hammer3BlockG, FALSE)
        EVT_MAKE_ENTITY(Hammer3Block, GEN_HAMMER3_BLOCK_7_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_7_SCRIPT))
    EndIf
    Call(CreatePushBlockGrid, GEN_PUSH_BLOCKS_1_GRID_PARAMS)
    GEN_PUSH_BLOCKS_1_GRID_CONTENT
    Return
    End
};
