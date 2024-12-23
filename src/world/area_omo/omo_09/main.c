#include "omo_09.h"

EvtScript N(EVS_ExitWalk_omo_08_0) = EVT_EXIT_WALK(60, omo_09_ENTRY_0, "omo_08", omo_08_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_omo_08_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deili1, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    IfGe(GB_StoryProgress, STORY_CH4_DEFEATED_GENERAL_GUY)
        Set(GF_OMO09_SpawnedPeachChoice3, TRUE)
    EndIf
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
#if VERSION_PAL
    Call(GetLanguage, LVar0)
    IfEq(LVar0, LANGUAGE_ES)
        Set(LVar0, LANGUAGE_FR)
    EndIf
    Call(SetModelTexVariant, MODEL_s1, LVar0)
    Call(SetModelTexVariant, MODEL_s2, LVar0)
#endif
    IfEq(GF_OMO09_SpawnedPeachChoice3, FALSE)
        Call(MakeNpcs, TRUE, Ref(N(KammySceneNPCs)))
    Else
        IfEq(GF_OMO09_Item_SuperSoda, FALSE)
            Switch(GB_OMO_PeachChoice3)
                CaseEq(0)
                    Call(MakeNpcs, TRUE, Ref(N(PokeyAmbushNPCs)))
                CaseEq(1)
                    Call(MakeNpcs, TRUE, Ref(N(KoopatrolAmbushNPCs)))
                CaseEq(2)
                    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
                    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_17_PARAMS)
            EndSwitch
        Else
            Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
        EndIf
    EndIf
    ExecWait(N(EVS_MakeEntities))
    ExecWait(N(EVS_SetupGizmos))
    ExecWait(N(EVS_SetupMusic))
    ExecWait(N(EVS_SetupConveyors))
    ExecWait(N(EVS_SetupSlotMachine))
    IfEq(GF_OMO09_SpawnedPeachChoice3, FALSE)
        Exec(N(EVS_Scene_KammySetAmbush))
        Wait(2)
    Else
        Set(LVar0, Ref(N(EVS_BindExitTriggers)))
        Exec(EnterWalk)
        Wait(1)
    EndIf
    Return
    End
};
