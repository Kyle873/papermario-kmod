/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOWSERS_CASTLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -470.0,    0.0,  -28.0,   90.0 }, \
    {  745.0,    0.0,  -28.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -470
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -28
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -470,0,-28

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 745
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -28
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 745,0,-28

// type: Marker:NPC
// name: NPC_Magikoopa_01
// anim: ANIM_Magikoopa_Anim01
#define GEN_NPC_MAGIKOOPA_01_X -130
#define GEN_NPC_MAGIKOOPA_01_Y 0
#define GEN_NPC_MAGIKOOPA_01_Z -30
#define GEN_NPC_MAGIKOOPA_01_DIR 90
#define GEN_NPC_MAGIKOOPA_01_VEC -130,0,-30
#define GEN_NPC_MAGIKOOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { -130, 0, -30 }, \
        .wanderSize  = { 100, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -130, 0, -30 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Magikoopa_02
// anim: ANIM_Magikoopa_Anim01
#define GEN_NPC_MAGIKOOPA_02_X 150
#define GEN_NPC_MAGIKOOPA_02_Y 0
#define GEN_NPC_MAGIKOOPA_02_Z -30
#define GEN_NPC_MAGIKOOPA_02_DIR 270
#define GEN_NPC_MAGIKOOPA_02_VEC 150,0,-30
#define GEN_NPC_MAGIKOOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 150, 0, -30 }, \
        .wanderSize  = { 100, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 150, 0, -30 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Koopatrol
// anim: ANIM_WorldKoopatrol_Anim01
#define GEN_NPC_KOOPATROL_X 0
#define GEN_NPC_KOOPATROL_Y 0
#define GEN_NPC_KOOPATROL_Z -30
#define GEN_NPC_KOOPATROL_DIR 270
#define GEN_NPC_KOOPATROL_VEC 0,0,-30
#define GEN_NPC_KOOPATROL_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, -30 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, -30 }, \
        .detectSize  = { 300 }, \
    }, \
}

