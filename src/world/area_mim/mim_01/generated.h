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
// name: NPC_PiranhaPlant
// anim: ANIM_SmallPiranha_Anim01
#define GEN_NPC_PIRANHA_PLANT_X 135
#define GEN_NPC_PIRANHA_PLANT_Y 0
#define GEN_NPC_PIRANHA_PLANT_Z -300
#define GEN_NPC_PIRANHA_PLANT_DIR 0
#define GEN_NPC_PIRANHA_PLANT_VEC 135,0,-300
#define GEN_NPC_PIRANHA_PLANT_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 135, 0, -300 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 400 }, \
    }, \
}

// type: Marker:Entity:Signpost
// name: Signpost_1
#define GEN_SIGNPOST_1_X -300
#define GEN_SIGNPOST_1_Y 0
#define GEN_SIGNPOST_1_Z 0
#define GEN_SIGNPOST_1_DIR 270
#define GEN_SIGNPOST_1_VEC -300,0,0
#define GEN_SIGNPOST_1_XYZA -300, 0, 0, 270
#define GEN_SIGNPOST_1_PARAMS GEN_SIGNPOST_1_XYZA
#define GEN_SIGNPOST_1_SCRIPT N(EVS_ReadSign)

