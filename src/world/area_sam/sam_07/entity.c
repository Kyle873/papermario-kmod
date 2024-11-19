#include "sam_07.h"
#include "entity.h"

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_SAM07_FloorRaised, FALSE)
        EVT_MAKE_ENTITY(GreenStompSwitch, GEN_GREEN_STOMP_SWITCH_1_PARAMS)
        Set(MV_SwitchEntityID, LVar0)
        Call(AssignScript, Ref(N(EVS_UseGreenSwitch)))
    Else
        EVT_MAKE_ENTITY(GreenStompSwitch, GEN_GREEN_STOMP_SWITCH_2_PARAMS)
        Set(MV_SwitchEntityID, LVar0)
        Call(AssignScript, Ref(N(EVS_UseGreenSwitch)))
    EndIf
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    EVT_MAKE_ENTITY(HiddenYellowBlock, GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS)
    Call(AssignBlockFlag, GEN_HIDDEN_YELLOW_BLOCK_1_FLAG)
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    Return
    End
};
