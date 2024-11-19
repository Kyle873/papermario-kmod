/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_ROAD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -152.0,    0.0, -218.0,   90.0 }, \
    {  -25.0,   30.0, -168.0,   90.0 }, \
    {   95.0,   30.0, -168.0,   90.0 }, \
    {  237.0,    0.0,  -53.0,  270.0 }, \
    {   20.0,    0.0,  -80.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -152
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -218
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -152,0,-218

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -25
#define GEN_ENTRY_1_Y 30
#define GEN_ENTRY_1_Z -168
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -25,30,-168

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 95
#define GEN_ENTRY_2_Y 30
#define GEN_ENTRY_2_Z -168
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC 95,30,-168

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 237
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z -53
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 237,0,-53

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 20
#define GEN_ENTRY_4_Y 0
#define GEN_ENTRY_4_Z -80
#define GEN_ENTRY_4_DIR 270
#define GEN_ENTRY_4_VEC 20,0,-80

// type: Marker:NPC
// name: NPC_RedToad
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_RED_TOAD_X -213
#define GEN_NPC_RED_TOAD_Y 12
#define GEN_NPC_RED_TOAD_Z -180
#define GEN_NPC_RED_TOAD_DIR 90
#define GEN_NPC_RED_TOAD_VEC -213,12,-180
#define GEN_NPC_RED_TOAD_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_GreenToad
// anim: ANIM_Toad_Green_Idle
#define GEN_NPC_GREEN_TOAD_X -88
#define GEN_NPC_GREEN_TOAD_Y 0
#define GEN_NPC_GREEN_TOAD_Z -95
#define GEN_NPC_GREEN_TOAD_DIR 270
#define GEN_NPC_GREEN_TOAD_VEC -88,0,-95
#define GEN_NPC_GREEN_TOAD_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -100, 0, -95 }, \
            { -70, 0, -95 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_BlueToad
// anim: ANIM_Toad_Blue_Idle
#define GEN_NPC_BLUE_TOAD_X 46
#define GEN_NPC_BLUE_TOAD_Y 0
#define GEN_NPC_BLUE_TOAD_Z -205
#define GEN_NPC_BLUE_TOAD_DIR 90
#define GEN_NPC_BLUE_TOAD_VEC 46,0,-205
#define GEN_NPC_BLUE_TOAD_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 25, 0, -205 }, \
            { 75, 0, -205 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

