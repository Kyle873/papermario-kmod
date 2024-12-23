#include "kkj_28.h"

EvtScript N(EVS_ExitDoor_kkj_10_2) = EVT_EXIT_SINGLE_DOOR(kkj_28_ENTRY_0, "kkj_10", kkj_10_ENTRY_2,
    COLLIDER_tte, MODEL_o162, DOOR_SWING_IN);

EvtScript N(EVS_EnterMap) = {
    Set(LVar2, MODEL_o162)
    Set(LVar3, DOOR_SWING_IN)
    ExecWait(EnterSingleDoor)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(EnableGroup, MODEL_g40, FALSE)
    Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
    BindTrigger(Ref(N(EVS_ExitDoor_kkj_10_2)), TRIGGER_WALL_PRESS_A, COLLIDER_tte, 1, 0)
    Exec(N(EVS_EnterMap))
    Return
    End
};
