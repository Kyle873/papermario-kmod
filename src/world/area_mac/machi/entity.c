#include "machi.h"
#include "entity.h"

API_CALLABLE(N(DoNothing1)) {
    return ApiStatus_DONE2;
}

API_CALLABLE(N(DoNothing2)) {
    return ApiStatus_DONE2;
}

API_CALLABLE(N(DoNothing3)) {
    return ApiStatus_BLOCK;
}

API_CALLABLE(N(func_80240048_7E73E8)) {
    if (isInitialCall) {
        script->functionTemp[0] = 0;
        script->functionTemp[1] = 0;
        gOverrideFlags |= GLOBAL_OVERRIDES_MESSAGES_OVER_FRONTUI;
    }

    set_screen_overlay_params_front(OVERLAY_SCREEN_COLOR, script->functionTemp[1]);

    if (script->functionTemp[1] == 255) {
        return ApiStatus_DONE2;
    }

    script->functionTemp[1] += 10;
    if (script->functionTemp[1] > 255) {
        script->functionTemp[1] = 255;
    }

    return ApiStatus_BLOCK;
}

API_CALLABLE(N(func_802400C8_7E7468)) {
    gPlayerData.partners[script->varTable[0] + 1].level++;
    script->varTable[0] = PARTNER_NONE;
    if (gPlayerData.partners[PARTNER_GOOMBARIO].level > PARTNER_RANK_ULTRA) {
        gPlayerData.partners[PARTNER_GOOMBARIO].level = PARTNER_RANK_ULTRA;
        script->varTable[0] = PARTNER_GOOMBARIO;
    }

    return ApiStatus_DONE2;
}

API_CALLABLE(N(func_80240114_7E74B4)) {
    if (isInitialCall) {
        script->functionTemp[0] = 0;
        script->functionTemp[1] = 255;
        gOverrideFlags |= GLOBAL_OVERRIDES_MESSAGES_OVER_FRONTUI;
    }

    set_screen_overlay_params_front(OVERLAY_SCREEN_COLOR, script->functionTemp[1]);

    if (script->functionTemp[1] == 0) {
        gOverrideFlags &= ~GLOBAL_OVERRIDES_MESSAGES_OVER_FRONTUI;
        return ApiStatus_DONE2;
    }

    script->functionTemp[1] -= 10;
    if (script->functionTemp[1] < 0) {
        script->functionTemp[1] = 0;
    }

    return ApiStatus_BLOCK;
}

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(HugeBlueSwitch, GEN_HUGE_BLUE_SWITCH_1_PARAMS)
    EVT_MAKE_ENTITY(GreenStompSwitch, GEN_GREEN_STOMP_SWITCH_1_PARAMS)
    EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
    EVT_MAKE_ENTITY(RedSwitch, GEN_RED_SWITCH_1_PARAMS)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(MulticoinBlock, GEN_MULTICOIN_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_3_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(YellowBlock, GEN_YELLOW_BLOCK_2_PARAMS)
    EVT_MAKE_ENTITY(GiantChest, GEN_GIANT_CHEST_1_PARAMS)
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_2_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_3_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_4_PARAMS)
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_5_PARAMS)
    Return
    End
};
