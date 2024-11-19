#include "tik_18.h"
#include "entity.h"

API_CALLABLE(N(WakeSpikedGoomba)) {
    Enemy* enemy = get_enemy_safe(NPC_SpikedGloomba);

    if (enemy != NULL) {
        enemy->varTable[0] = TRUE;
    }
    return ApiStatus_DONE2;
}

EvtScript N(EVS_OnBreakBlock) = {
    Call(N(WakeSpikedGoomba))
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_3_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_4_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_5_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_6_PARAMS)
    Call(AssignScript, Ref(GEN_BRICK_BLOCK_6_SCRIPT))
    Return
    End
};
