/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TUBBAS_MANOR

// type: EntryList
#define GEN_ENTRY_LIST \
    { -575.0,    0.0,  180.0,   90.0 }, \
    { -575.0,  210.0,  180.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -575
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 180
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -575,0,180

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -575
#define GEN_ENTRY_1_Y 210
#define GEN_ENTRY_1_Z 180
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -575,210,180

// type: Marker:NPC
// name: NPC_Tubba
// anim: ANIM_WorldTubba_Anim07
#define GEN_NPC_TUBBA_X 0
#define GEN_NPC_TUBBA_Y -1000
#define GEN_NPC_TUBBA_Z 0
#define GEN_NPC_TUBBA_DIR 270
#define GEN_NPC_TUBBA_VEC 0,-1000,0
#define GEN_NPC_TUBBA_TERRITORY \
{ \
    .patrol = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 10, \
        .points = { \
            { -400, 210, 80 }, \
            { -100, 210, 80 }, \
            { 100, 210, 80 }, \
            { 400, 210, 80 }, \
            { 820, 100, 80 }, \
            { 820, 100, 260 }, \
            { 400, 0, 260 }, \
            { 100, 0, 200 }, \
            { -100, 0, 175 }, \
            { -450, 0, 175 }, \
        }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 150, 0, 175 }, \
        .detectSize  = { 1450, 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Clubba_01
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_01_X -250
#define GEN_NPC_CLUBBA_01_Y 0
#define GEN_NPC_CLUBBA_01_Z 135
#define GEN_NPC_CLUBBA_01_DIR 90
#define GEN_NPC_CLUBBA_01_VEC -250,0,135
#define GEN_NPC_CLUBBA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -250, 0, 135 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -250, 0, 135 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Clubba_02
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_02_X 220
#define GEN_NPC_CLUBBA_02_Y 0
#define GEN_NPC_CLUBBA_02_Z 155
#define GEN_NPC_CLUBBA_02_DIR 270
#define GEN_NPC_CLUBBA_02_VEC 220,0,155
#define GEN_NPC_CLUBBA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 220, 0, 155 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 220, 0, 155 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Clubba_03
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_03_X 825
#define GEN_NPC_CLUBBA_03_Y 100
#define GEN_NPC_CLUBBA_03_Z 200
#define GEN_NPC_CLUBBA_03_DIR 270
#define GEN_NPC_CLUBBA_03_VEC 825,100,200
#define GEN_NPC_CLUBBA_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 825, 100, 200 }, \
        .wanderSize  = { 25 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 825, 100, 200 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Sentinel_01
// anim: ANIM_Sentinel_Anim01
#define GEN_NPC_SENTINEL_01_X 75
#define GEN_NPC_SENTINEL_01_Y 310
#define GEN_NPC_SENTINEL_01_Z 85
#define GEN_NPC_SENTINEL_01_DIR 90
#define GEN_NPC_SENTINEL_01_VEC 75,310,85
#define GEN_NPC_SENTINEL_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 75, 310, 85 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 75, 0, 85 }, \
        .detectSize  = { 250, 55 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Sentinel_02
// anim: ANIM_Sentinel_Anim01
#define GEN_NPC_SENTINEL_02_X -451
#define GEN_NPC_SENTINEL_02_Y 310
#define GEN_NPC_SENTINEL_02_Z 81
#define GEN_NPC_SENTINEL_02_DIR 90
#define GEN_NPC_SENTINEL_02_VEC -451,310,81
#define GEN_NPC_SENTINEL_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -451, 310, 81 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { -310, 0, 175 }, \
        .detectSize  = { 250, 145 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Clubba_Last
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_LAST_X 426
#define GEN_NPC_CLUBBA_LAST_Y 0
#define GEN_NPC_CLUBBA_LAST_Z 38
#define GEN_NPC_CLUBBA_LAST_DIR 270
#define GEN_NPC_CLUBBA_LAST_VEC 426,0,38
#define GEN_NPC_CLUBBA_LAST_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Clubba_Unused
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_UNUSED_X -250
#define GEN_NPC_CLUBBA_UNUSED_Y 0
#define GEN_NPC_CLUBBA_UNUSED_Z 135
#define GEN_NPC_CLUBBA_UNUSED_DIR 90
#define GEN_NPC_CLUBBA_UNUSED_VEC -250,0,135
#define GEN_NPC_CLUBBA_UNUSED_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -250, 0, 135 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -250, 0, 135 }, \
        .detectSize  = { 250 }, \
    }, \
}

