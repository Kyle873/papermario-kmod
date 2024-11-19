/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_FOREVER_FOREST

// type: EntryList
#define GEN_ENTRY_LIST \
    {    0.0,    0.0, -530.0,  180.0 }, \
    { -530.0,    0.0,    0.0,   90.0 }, \
    {    0.0,    0.0,  530.0,    0.0 }, \
    {  530.0,    0.0,    0.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 0
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -530
#define GEN_ENTRY_0_DIR 180
#define GEN_ENTRY_0_VEC 0,0,-530

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -530
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -530,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 530
#define GEN_ENTRY_2_DIR 0
#define GEN_ENTRY_2_VEC 0,0,530

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 530
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 0
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 530,0,0

// type: Marker:NPC
// name: NPC_Fuzzy
// anim: ANIM_Fuzzy_Forest_Walk
#define GEN_NPC_FUZZY_X 240
#define GEN_NPC_FUZZY_Y 0
#define GEN_NPC_FUZZY_Z -240
#define GEN_NPC_FUZZY_DIR 0
#define GEN_NPC_FUZZY_VEC 240,0,-240
#define GEN_NPC_FUZZY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 240, 0, -240 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 240, 0, -240 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bubulb
// anim: ANIM_Bubulb_Green_Idle
#define GEN_NPC_BUBULB_X 0
#define GEN_NPC_BUBULB_Y 32
#define GEN_NPC_BUBULB_Z 0
#define GEN_NPC_BUBULB_DIR 270
#define GEN_NPC_BUBULB_VEC 0,32,0
#define GEN_NPC_BUBULB_TERRITORY \
{}

