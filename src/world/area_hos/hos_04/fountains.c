#include "hos_04.h"

u16 N(FountainPumpPhase) = 0;

void N(setup_gfx_fountain_water)(void) {
    f32 temp_f0 = ((sin_rad(N(FountainPumpPhase) * (1 / 32.0f)) + 1.0f) * 0.25f) + 0.75;

    guScale(&gDisplayContext->matrixStack[gMatrixListPos], (temp_f0 * 0.3) + 0.5, temp_f0, (temp_f0 * 0.3) + 0.5);
    gSPMatrix(gMainGfxPos++, &gDisplayContext->matrixStack[gMatrixListPos++],
              G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    N(FountainPumpPhase)++;
}

void N(setup_gfx_fountain_stars)(void) {
    f64 t1 = (sin_rad(N(FountainPumpPhase) * (1 / 32.0f)) * 10.0f) + 1.5;
    f64 t2 = sin_rad(N(FountainPumpPhase) * 0.25f) * 2.5;

    guTranslate(&gDisplayContext->matrixStack[gMatrixListPos], 0.0f, t1 + t2, 0.0f);
    gSPMatrix(gMainGfxPos++, &gDisplayContext->matrixStack[gMatrixListPos++],
              G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
}

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_SetupFountains) = {
    Call(SetTexPanner, MODEL_o438, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_o462, TEX_PANNER_2)
    Call(SetTexPanner, MODEL_o469, TEX_PANNER_2)
    Thread
        GEN_TEX_PANNER_2
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetModelCustomGfx, MODEL_o469, CUSTOM_GFX_0, ENV_TINT_UNCHANGED)
    Call(SetModelCustomGfx, MODEL_o462, CUSTOM_GFX_0, ENV_TINT_UNCHANGED)
    Call(SetModelCustomGfx, MODEL_o465, CUSTOM_GFX_1, ENV_TINT_UNCHANGED)
    Call(SetModelCustomGfx, MODEL_o461, CUSTOM_GFX_1, ENV_TINT_UNCHANGED)
    Call(SetCustomGfxBuilders, CUSTOM_GFX_0, Ref(N(setup_gfx_fountain_water)), NULL)
    Call(SetCustomGfxBuilders, CUSTOM_GFX_1, Ref(N(setup_gfx_fountain_stars)), NULL)
    Return
    End
};
