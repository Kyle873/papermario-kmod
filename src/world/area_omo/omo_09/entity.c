#include "omo_09.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

EvtScript N(EVS_OpenChest_Dictionary) = {
    Set(LVarA, ITEM_DICTIONARY)
    Set(GF_OMO09_Chest_Dictionary, TRUE)
    ExecWait(N(EVS_Chest_GetItem))
    Set(GF_MAC00_DictionaryStolen, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_4_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_5_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_6_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_7_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_8_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_9_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_10_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_11_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_12_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_13_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_14_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_15_PARAMS)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    Call(UseDynamicShadow, TRUE)
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    IfEq(GF_OMO09_Defeated_MysteryNoteThief, TRUE)
        IfEq(GF_OMO09_Item_MysteryNote, FALSE)
            EVT_MAKE_ITEM_ENTITY(GEN_ITEM_16_PARAMS)
        EndIf
    EndIf
    Return
    End
};
