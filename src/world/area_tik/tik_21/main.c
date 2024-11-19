#include "tik_21.h"

#include "world/common/atomic/TexturePan.inc.c"

#include "world/common/entity/Pipe.inc.c"

EvtScript N(EVS_ExitWalk_tik_20_1) = EVT_EXIT_WALK(60, tik_21_ENTRY_0, "tik_20", tik_20_ENTRY_1);

EvtScript N(EVS_ExitDoors_tik_22_0) = EVT_EXIT_DOUBLE_DOOR(tik_21_ENTRY_1, "tik_22", tik_22_ENTRY_0,
    COLLIDER_tte, MODEL_o46, MODEL_o47);

EvtScript N(EVS_GotoMap_tik_14_0) = {
    Call(GotoMap, Ref("tik_14"), tik_14_ENTRY_0)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_ExitPipe_tik_14_0) = EVT_EXIT_PIPE_VERTICAL(tik_21_ENTRY_2, COLLIDER_o49, N(EVS_GotoMap_tik_14_0));

EvtScript N(EVS_ShowMessage_DoorLocked) = {
    Call(DisablePlayerInput, TRUE)
    Call(ShowMessageAtScreenPos, MSG_Menus_0177, 160, 40)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_BindExitTriggers) = {
    BindTrigger(Ref(N(EVS_ExitWalk_tik_20_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    IfGe(GB_StoryProgress, STORY_CH7_INVITED_TO_STARBORN_VALLEY)
        BindTrigger(Ref(N(EVS_ExitDoors_tik_22_0)), TRIGGER_WALL_PRESS_A, COLLIDER_tte, 1, 0)
    Else
        BindTrigger(Ref(N(EVS_ShowMessage_DoorLocked)), TRIGGER_WALL_PRESS_A, COLLIDER_tte, 1, 0)
    EndIf
    BindTrigger(Ref(N(EVS_ExitPipe_tik_14_0)), TRIGGER_FLOOR_TOUCH, COLLIDER_o49, 1, 0)
    Return
    End
};

EvtScript N(EVS_EnterMap) = {
    Call(GetEntryID, LVar0)
    Switch(LVar0)
        CaseEq(tik_21_ENTRY_0)
            Set(LVar0, Ref(N(EVS_BindExitTriggers)))
            Exec(EnterWalk)
        CaseEq(tik_21_ENTRY_1)
            Set(LVar2, MODEL_o46)
            Set(LVar3, MODEL_o47)
            ExecWait(EnterDoubleDoor)
            Exec(N(EVS_BindExitTriggers))
        CaseEq(tik_21_ENTRY_2)
            EVT_ENTER_PIPE_VERTICAL(N(EVS_BindExitTriggers))
    EndSwitch
    Wait(1)
    Return
    End
};

#define DROPLET_MODEL MODEL_sizuku
#include "../common/DripVolumes.inc.c"

DripVolumeList N(DripVolumes) = {
    .count = 2,
    .volumes = {
        {
            .minPos = { GEN_DRIP_VOLUME_1_MIN_XZ },
            .maxPos = { GEN_DRIP_VOLUME_1_MAX_XZ },
            .startY = GEN_DRIP_VOLUME_1_MAX_Y,
            .endY   = GEN_DRIP_VOLUME_1_MIN_Y,
            .duration = 60,
            .density  = 2,
        },
        {
            .minPos = { GEN_DRIP_VOLUME_2_MIN_XZ },
            .maxPos = { GEN_DRIP_VOLUME_2_MAX_XZ },
            .startY = GEN_DRIP_VOLUME_2_MAX_Y,
            .endY   = GEN_DRIP_VOLUME_2_MIN_Y,
            .duration = 60,
            .density  = 1,
        }
    }
};

EvtScript N(EVS_SetupDrips) = {
    Set(LVar0, Ref(N(DripVolumes)))
    Exec(N(EVS_CreateDripVolumes))
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_TIK_21)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    ExecWait(N(EVS_MakeEntities))
    Exec(N(EVS_SetupMusic))
    Call(UseDoorSounds, DOOR_SOUNDS_BASIC)
    Exec(N(EVS_SetupDrips))
    Call(SetTexPanner, MODEL_mizu, TEX_PANNER_0)
    Thread
        GEN_TEX_PANNER_0
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Wait(1)
    Exec(N(EVS_EnterMap))
    Return
    End
};
