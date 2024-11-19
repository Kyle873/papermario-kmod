#include "isk_01.h"

#include "world/common/atomic/TexturePan.inc.c"

Gfx N(HazePreGfx)[] = {
    gsDPSetAlphaDither(G_AD_NOISE),
    gsSPEndDisplayList(),
};

EvtScript N(EVS_SetupHaze) = {
    Call(SetCustomGfx, CUSTOM_GFX_0, Ref(N(HazePreGfx)), NULL)
    Call(SetModelFlags, MODEL_o99, MODEL_FLAG_USES_CUSTOM_GFX, TRUE)
    Call(SetTexPanner, MODEL_o99, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};
