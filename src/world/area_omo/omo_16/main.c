#include "omo_16.h"

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(N(DefaultNPCs)))
    Call(SetMusicTrack, 0, SONG_TOYBOX_TRAIN, 0, 8)
    ExecWait(N(EVS_802429C4))
    Wait(3)
    Return
    End
};
