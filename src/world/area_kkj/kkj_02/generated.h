/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PEACH_CASTLE_GROUNDS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  -75.0,    0.0,    0.0,   90.0 }, \
    { 1175.0,  110.0,    0.0,  270.0 }, \
    {  354.0,    0.0,  294.0,  117.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -75
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -75,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 1175
#define GEN_ENTRY_1_Y 110
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 1175,110,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 354
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 294
#define GEN_ENTRY_2_DIR 117
#define GEN_ENTRY_2_VEC 354,0,294

// type: Marker:NPC
// name: NPC_Toad
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_X 0
#define GEN_NPC_TOAD_Y 0
#define GEN_NPC_TOAD_Z -100
#define GEN_NPC_TOAD_DIR 270
#define GEN_NPC_TOAD_VEC 0,0,-100
#define GEN_NPC_TOAD_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, -100 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, -100 }, \
        .detectSize  = { 50 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ToadGuard
// anim: ANIM_ToadGuard_Red_Idle
#define GEN_NPC_TOAD_GUARD_X 1175
#define GEN_NPC_TOAD_GUARD_Y 110
#define GEN_NPC_TOAD_GUARD_Z 60
#define GEN_NPC_TOAD_GUARD_DIR 270
#define GEN_NPC_TOAD_GUARD_VEC 1175,110,60
#define GEN_NPC_TOAD_GUARD_TERRITORY \
{}

