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
// name: NPC_Fuzzy_01
// anim: ANIM_Fuzzy_Forest_Walk
#define GEN_NPC_FUZZY_01_X -240
#define GEN_NPC_FUZZY_01_Y 0
#define GEN_NPC_FUZZY_01_Z -240
#define GEN_NPC_FUZZY_01_DIR 0
#define GEN_NPC_FUZZY_01_VEC -240,0,-240
#define GEN_NPC_FUZZY_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 400 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 400 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Fuzzy_02
// anim: ANIM_Fuzzy_Forest_Walk
#define GEN_NPC_FUZZY_02_X 270
#define GEN_NPC_FUZZY_02_Y 0
#define GEN_NPC_FUZZY_02_Z 200
#define GEN_NPC_FUZZY_02_DIR 0
#define GEN_NPC_FUZZY_02_VEC 270,0,200
#define GEN_NPC_FUZZY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 400 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 400 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_JrTroopa
// anim: ANIM_JrTroopa_Idle
#define GEN_NPC_JR_TROOPA_X -338
#define GEN_NPC_JR_TROOPA_Y 0
#define GEN_NPC_JR_TROOPA_Z 0
#define GEN_NPC_JR_TROOPA_DIR 0
#define GEN_NPC_JR_TROOPA_VEC -338,0,0
#define GEN_NPC_JR_TROOPA_TERRITORY \
{}

// type: Marker:Entity:Signpost
// name: Signpost_1
#define GEN_SIGNPOST_1_X 280
#define GEN_SIGNPOST_1_Y 0
#define GEN_SIGNPOST_1_Z 0
#define GEN_SIGNPOST_1_DIR 90
#define GEN_SIGNPOST_1_VEC 280,0,0
#define GEN_SIGNPOST_1_XYZA 280, 0, 0, 90
#define GEN_SIGNPOST_1_PARAMS GEN_SIGNPOST_1_XYZA
#define GEN_SIGNPOST_1_SCRIPT N(EVS_ReadSign)

