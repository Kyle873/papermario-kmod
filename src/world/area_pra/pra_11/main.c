#include "pra_11.h"

#include "../common/Reflection.inc.c"
#include "../common/Reflection.data.inc.c"

EvtScript N(EVS_ExitWalk_pra_09_1) = EVT_EXIT_WALK(60, pra_11_ENTRY_0, "pra_09", pra_09_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_pra_09_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilisw, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Set(LVar0, Ref(N(EVS_BindExitTriggers)))
    Exec(EnterWalk)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(24, 24, 40)
    ExecWait(N(EVS_MakeEntities))
    Call(EnableModel, MODEL_g270, FALSE)
    Call(EnableModel, MODEL_g271, FALSE)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilittsw, COLLIDER_FLAGS_UPPER_MASK)
    Exec(N(EVS_SetupMusic))
    Set(LVar0, REFLECTION_FLOOR_ONLY)
    Set(LVar1, GF_PRA_BrokeIllusion)
    Exec(N(EVS_SetupReflections))
    Exec(N(EVS_EnterMap))
    Wait(1)
    Return
    End
};
