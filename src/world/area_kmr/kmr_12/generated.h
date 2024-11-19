/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_ROAD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -126.0,    0.0,   12.0,   90.0 }, \
    {  471.0,    0.0,   12.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -126
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 12
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -126,0,12

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 471
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 12
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 471,0,12

// type: Marker:NPC
// name: NPC_Goomba_Ambush
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_AMBUSH_X -33
#define GEN_NPC_GOOMBA_AMBUSH_Y 30
#define GEN_NPC_GOOMBA_AMBUSH_Z -25
#define GEN_NPC_GOOMBA_AMBUSH_DIR 90
#define GEN_NPC_GOOMBA_AMBUSH_VEC -33,30,-25
#define GEN_NPC_GOOMBA_AMBUSH_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { -33, 0, 30 }, \
        .wanderSize  = { 40, 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 200, 0, 0 }, \
        .detectSize  = { 400, 60 }, \
    }, \
}

// type: Marker:Entity:Signpost
// name: Signpost_1
#define GEN_SIGNPOST_1_X 436
#define GEN_SIGNPOST_1_Y 0
#define GEN_SIGNPOST_1_Z -42
#define GEN_SIGNPOST_1_DIR 0
#define GEN_SIGNPOST_1_VEC 436,0,-42
#define GEN_SIGNPOST_1_XYZA 436, 0, -42, 0
#define GEN_SIGNPOST_1_PARAMS GEN_SIGNPOST_1_XYZA
#define GEN_SIGNPOST_1_SCRIPT N(EVS_ReadSign)

