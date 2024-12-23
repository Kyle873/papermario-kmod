#include "omo_04.h"

EvtScript N(EVS_ExitWalk_omo_03_1) = EVT_EXIT_WALK(60, omo_04_ENTRY_0, "omo_03", omo_03_ENTRY_1);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_omo_03_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deili1, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    IfEq(GF_OMO04_SpawnedPeachChoice1, FALSE)
        Call(MakeNpcs, TRUE, Ref(N(KammySceneNPCs)))
    Else
        IfEq(GF_OMO04_Item_Mushroom, FALSE)
            Switch(GB_OMO_PeachChoice1)
                CaseEq(0)
                    Call(MakeNpcs, TRUE, Ref(N(GoombaAmbushNPCs)))
                CaseEq(1)
                    Call(MakeNpcs, TRUE, Ref(N(ClubbaAmbushNPCs)))
                CaseEq(2)
                    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
                    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_11_PARAMS)
            EndSwitch
        Else
            Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
        EndIf
    EndIf
    ExecWait(N(EVS_MakeEntities))
    ExecWait(N(EVS_SetupGizmos))
    ExecWait(N(EVS_SetupMusic))
    IfEq(GF_OMO04_SpawnedPeachChoice1, FALSE)
        Exec(N(EVS_Scene_KammySetAmbush))
    Else
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
        Wait(1)
    EndIf
    Return
    End
};
