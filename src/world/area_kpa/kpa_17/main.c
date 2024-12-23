#include "kpa_17.h"

EvtScript N(EVS_ExitWalk_kpa_1X_2) = {
    SetGroup(EVT_GROUP_EXIT_MAP)
    Call(UseExitHeading, 60, kpa_17_ENTRY_1)
    Exec(ExitWalk)
    IfEq(GF_KPA16_ShutOffLava, FALSE)
        Call(GotoMap, Ref("kpa_11"), kpa_11_ENTRY_2)
    Else
        Call(GotoMap, Ref("kpa_10"), kpa_10_ENTRY_2)
    EndIf
    Wait(100)
    Return
    End
};

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_kpa_1X_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(GetEntryID, LVar0)
    IfEq(LVar0, kpa_17_ENTRY_0)
        Exec(N(EVS_BindExitTriggers))
        Exec(N(EVS_Scene_FallIntoCell))
    Else
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
    EndIf
    Return
    End
};

BombTrigger N(BombPos_Wall) = {
    .pos = { GEN_BOMB_POS_1_VEC },
    .diameter = 2.0f * GEN_BOMB_POS_1_RAD,
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Set(AB_KPA17_Toad1_Dialogue, 0)
    Set(AB_KPA17_Toad2_Dialogue, 0)
    Set(AB_KPA17_Toad3_Dialogue, 0)
    Set(AB_KPA17_Toad4_Dialogue, 0)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_MakeEntities))
    IfEq(GF_KPA17_BombedWall, FALSE)
        BindTrigger(Ref(N(EVS_BlastWall)), TRIGGER_POINT_BOMB, Ref(N(BombPos_Wall)), 1, 0)
    Else
        Call(SetGroupVisibility, MODEL_g296, MODEL_GROUP_HIDDEN)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_deilitte, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Exec(N(EVS_SetupMusic))
    Exec(N(EVS_EnterMap))
    Return
    End
};
