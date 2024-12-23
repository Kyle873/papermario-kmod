#include "tik_19.h"

#include "world/common/entity/Pipe.inc.c"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_GotoMap_mac_00_3) = {
    Call(GotoMap, Ref("mac_00"), mac_00_ENTRY_3)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitPipe_mac_00_3) = EVT_EXIT_PIPE_HORIZONTAL(tik_19_ENTRY_0, COLLIDER_ttd, N(EVS_GotoMap_mac_00_3));

EvtScript N(EVS_BindExitTriggers) = {
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_CLEAR_BITS, COLLIDER_ttd, COLLIDER_FLAGS_UPPER_MASK)
    BindTrigger(Ref(N(EVS_ExitPipe_mac_00_3)), TRIGGER_WALL_PUSH, COLLIDER_ttd, 1, 0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    Call(PlaySound, SOUND_LOOP_TIK19_WATER)
    Call(PlaySoundAtF, SOUND_LOOP_TIK19_FLOW3, SOUND_SPACE_WITH_DEPTH, 0, -20, 30)
    Call(PlaySoundAtF, SOUND_LOOP_TIK19_FLOW4, SOUND_SPACE_WITH_DEPTH, 270, -20, 30)
    // water surface
    Call(SetTexPanner, MODEL_nagare, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // falling water
    Call(SetTexPanner, MODEL_taki, TEX_PANNER_4)
    Thread
        GEN_TEX_PANNER_4
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    // spreading water
    Call(SetTexPanner, MODEL_takib, TEX_PANNER_5)
    Thread
        GEN_TEX_PANNER_5
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetRenderMode, MODEL_nagare, RENDER_MODE_SURFACE_XLU_LAYER2)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_ttd, COLLIDER_FLAGS_UPPER_MASK)
    EVT_ENTER_PIPE_HORIZONTAL(COLLIDER_ttd, N(EVS_BindExitTriggers))
    Wait(1)
    Return
    End
};
