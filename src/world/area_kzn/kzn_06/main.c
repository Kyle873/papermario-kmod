#include "kzn_06.h"

#include "world/common/atomic/TexturePan.inc.c"

EvtScript N(EVS_ExitWalk_kzn_05) = EVT_EXIT_WALK(60, kzn_06_ENTRY_0, "kzn_05", kzn_05_ENTRY_0);
EvtScript N(EVS_ExitWalk_kzn_08) = EVT_EXIT_WALK(60, kzn_06_ENTRY_2, "kzn_08", kzn_08_ENTRY_0);
EvtScript N(EVS_ExitWalk_kzn_07) = EVT_EXIT_WALK(60, kzn_06_ENTRY_1, "kzn_07", kzn_07_ENTRY_0);

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(N(EVS_ExitWalk_kzn_05), TRIGGER_FLOOR_ABOVE, COLLIDER_deili1, 1, 0)
    BindTrigger(N(EVS_ExitWalk_kzn_08), TRIGGER_FLOOR_ABOVE, COLLIDER_deili2, 1, 0)
    BindTrigger(N(EVS_ExitWalk_kzn_07), TRIGGER_FLOOR_ABOVE, COLLIDER_deili3, 1, 0)
    Return
    End
};

EvtScript N(EVS_StartTexPanners) = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTexPanner, MODEL_yo1, TEX_PANNER_0)
    Call(SetTexPanner, MODEL_o349, TEX_PANNER_0)
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Call(SetTexPanner, MODEL_yougan, TEX_PANNER_1)
    Call(SetTexPanner, MODEL_spot, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};

LavaReset N(SafeFloorColliders)[] = {
    { .colliderID = COLLIDER_o250, .pos = { GEN_LAVA_RESET_O250_VEC }},
    { .colliderID = COLLIDER_o468, .pos = { GEN_LAVA_RESET_O468_VEC }},
    { .colliderID = COLLIDER_o394, .pos = { GEN_LAVA_RESET_O394_VEC }},
    { .colliderID = COLLIDER_o440, .pos = { GEN_LAVA_RESET_O440_VEC }},
    { .colliderID = COLLIDER_o437, .pos = { GEN_LAVA_RESET_O437_VEC }},
    { .colliderID = NO_COLLIDER }
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_KZN_06)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Set(GF_KZN06_Visited, TRUE)
    ExecWait(N(EVS_MakeEntities))
    Call(SetMusicTrack, 0, SONG_MT_LAVALAVA, 0, 8)
    IfLt(GB_StoryProgress, STORY_CH5_LAVA_STREAM_BLOCKED)
        Call(PlayAmbientSounds, AMBIENT_LAVA_2)
    Else
        Call(PlayAmbientSounds, AMBIENT_LAVA_1)
    EndIf
    Set(LVar0, N(EVS_BindExitTriggers))
    Exec(EnterWalk)
    Wait(1)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_yougan, SURFACE_TYPE_LAVA)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_yougan1, SURFACE_TYPE_LAVA)
    Thread
        Call(ResetFromLava, Ref(N(SafeFloorColliders)))
    EndThread
    Exec(N(EVS_StartTexPanners))
    Exec(N(EVS_SetupLavaPuzzle))
    Return
    End
};
