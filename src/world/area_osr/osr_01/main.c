
#include "osr_01.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_mac_01_2) = EVT_EXIT_WALK(60, osr_01_ENTRY_0, "mac_01", mac_01_ENTRY_2);
EvtScript N(EVS_ExitWalk_hos_00_0) = EVT_EXIT_WALK(60, osr_01_ENTRY_1, "hos_00", hos_00_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_mac_01_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilis, 1, 0)
    BindTrigger(Ref(N(EVS_ExitWalk_hos_00_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    Return
    End
};

EvtScript N(EVS_TexPan_Fountain) = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTexPanner, MODEL_o501, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_w2, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Set(AF_OSR_01, FALSE)
    Set(GF_MAP_PeachCastleGrounds, TRUE)
    Call(MakeNpcs, FALSE, Ref(N(DefaultNPCs)))
    ExecWait(N(EVS_PlaySong_Starship))
    Exec(N(EVS_TexPan_Fountain))
    Call(PlaySoundAtF, SOUND_LOOP_OSR_FOUNTAIN_BROKEN, SOUND_SPACE_WITH_DEPTH, 300, 2, 399)
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(osr_01_ENTRY_3)
            Call(EnableModel, MODEL_o492, FALSE)
            Exec(N(EVS_Scene_Wishing))
        CaseDefault
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
    EndSwitch
    Wait(1)
    Return
    End
};
