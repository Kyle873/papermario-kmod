#include "pra_27.h"

s32 N(map_init)(void) {
    gGameStatusPtr->playerSpriteSet = PLAYER_SPRITES_MARIO_REFLECT_FLOOR;
    sprintf(wMapShapeName, "pra_05_shape");
    sprintf(wMapHitName, "pra_05_hit");
    return FALSE;
}

#include "../common/Reflection.inc.c"
#include "../common/Reflection.data.inc.c"

s32 N(DoorModelsL)[] = { MODEL_o772, MODEL_o844, -1 };
s32 N(DoorModelsR)[] = { MODEL_o768, MODEL_o846, -1 };

EvtScript N(EVS_ExitDoors_pra_36_1) = {
    SetGroup(EVT_GROUP_EXIT_MAP)
    Call(DisablePlayerInput, TRUE)
    Set(LVar0, pra_27_ENTRY_0)
    Set(LVar1, COLLIDER_deilittsw)
    Set(LVar2, Ref(N(DoorModelsL)))
    Set(LVar3, Ref(N(DoorModelsR)))
    Exec(BaseExitDoor)
    Wait(17)
    Call(GotoMap, Ref("pra_36"), pra_36_ENTRY_1)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitDoors_pra_36_1)), TRIGGER_WALL_PRESS_A, COLLIDER_deilittsw, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Set(LVar0, pra_27_ENTRY_0)
    Set(LVar2, Ref(N(DoorModelsL)))
    Set(LVar3, Ref(N(DoorModelsR)))
    ExecWait(BaseEnterDoor)
    Exec(N(EVS_BindExitTriggers))
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(24, 24, 40)
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    Set(LVar0, REFLECTION_FLOOR_ONLY)
    Set(LVar1, GF_PRA_BrokeIllusion)
    Exec(N(EVS_SetupReflections))
    Exec(N(EVS_EnterMap))
    Wait(1)
    Return
    End
};
