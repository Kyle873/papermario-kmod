#include "kzn_07.h"
#include "effects.h"
#include "entity.h"

#include "world/common/atomic/PushBlockGravity.inc.c"

API_CALLABLE(func_802407F4_C6EB24) {
    get_entity_by_index(script->varTable[0])->dataBuf.chest->gotItemDone = TRUE;
    return ApiStatus_DONE2;
}

EvtScript N(EVS_MonitorChestStatus) = {
    IfEq(GF_KZN07_GiantChest, FALSE)
        Label(10)
        IfEq(GF_KZN07_GiantChest, FALSE)
            Wait(1)
            Goto(10)
        EndIf
        Wait(60)
        Exec(N(EVS_PlayUpgradeFanfare))
        Call(ShowMessageAtScreenPos, MSG_Menus_0186, 160, 40)
        Call(func_802407F4_C6EB24)
        Set(GB_StoryProgress, STORY_CH5_GOT_ULTRA_HAMMER)
    EndIf
    Return
    End
};

EvtScript N(EVS_OnBreakBlock) = {
    Set(GF_KZN07_Hammer3Block, TRUE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(GiantChest, GEN_GIANT_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_GIANT_CHEST_1_FLAG)
    Exec(N(EVS_MonitorChestStatus))
    IfEq(GF_KZN07_Hammer3Block, FALSE)
        EVT_MAKE_ENTITY(Hammer3BlockWideZ, GEN_HAMMER3_BLOCK_WIDE_Z_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER3_BLOCK_WIDE_Z_1_SCRIPT))
    EndIf
    Call(CreatePushBlockGrid, GEN_PUSH_BLOCKS_1_GRID_PARAMS)
    GEN_PUSH_BLOCKS_1_GRID_CONTENT
    Call(SetPushBlockFallEffect, 0, Ref(N(push_block_handle_fall)))
    Return
    End
};
