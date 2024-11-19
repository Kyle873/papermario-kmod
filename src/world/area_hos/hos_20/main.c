#include "hos_20.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_TexPan_MotionLines) = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(GetEntryID, LVar0)
    IfEq(LVar0, hos_20_ENTRY_2)
        Call(RotateModel, MODEL_h1, 180, 0, 0, 1)
        Call(RotateModel, MODEL_h2, 180, 0, 0, 1)
        Call(RotateModel, MODEL_h3, 180, 0, 0, 1)
        Call(RotateModel, MODEL_h4, 180, 0, 0, 1)
    EndIf
    Call(SetTexPanner, MODEL_h1, TEX_PANNER_C)
    Thread
        GEN_TEX_PANNER_C
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_h2, TEX_PANNER_B)
    Thread
        GEN_TEX_PANNER_B
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_h3, TEX_PANNER_D)
    Thread
        GEN_TEX_PANNER_D
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_h4, TEX_PANNER_A)
    Thread
        GEN_TEX_PANNER_A
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};

EvtScript N(EVS_Main) = {
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Exec(N(EVS_TexPan_MotionLines))
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(hos_20_ENTRY_0)
            Exec(N(EVS_Starship_Flight1))
        CaseEq(hos_20_ENTRY_1)
            Exec(N(EVS_Starship_Flight2))
        CaseEq(hos_20_ENTRY_2)
            Exec(N(EVS_Starship_Return))
    EndSwitch
    Return
    End
};
