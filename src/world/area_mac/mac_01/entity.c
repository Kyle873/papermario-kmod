#include "mac_01.h"
#include "entity.h"

EvtScript N(EVS_Inspect_StreetSign) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0170, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfLt(GB_StoryProgress, STORY_EPILOGUE)
        EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    EndIf
    BindTrigger(Ref(N(EVS_Inspect_StreetSign)), TRIGGER_WALL_PRESS_A, COLLIDER_o406, 1, 0)
    Return
    End
};
