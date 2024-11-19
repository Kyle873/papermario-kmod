/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TUBBAS_MANOR

// type: EntryList
#define GEN_ENTRY_LIST \
    { -343.0,    0.0,   80.0,   90.0 }, \
    {  343.0,    0.0,   80.0,  270.0 }, \
    { -220.0,    0.0, -170.0,  180.0 }, \
    { -343.0,  210.0,   80.0,   90.0 }, \
    {  343.0,  210.0,   80.0,  270.0 }, \
    { -220.0,  210.0, -170.0,  180.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -343
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 80
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -343,0,80

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 343
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 80
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 343,0,80

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -220
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -170
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC -220,0,-170

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -343
#define GEN_ENTRY_3_Y 210
#define GEN_ENTRY_3_Z 80
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC -343,210,80

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 343
#define GEN_ENTRY_4_Y 210
#define GEN_ENTRY_4_Z 80
#define GEN_ENTRY_4_DIR 270
#define GEN_ENTRY_4_VEC 343,210,80

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X -220
#define GEN_ENTRY_5_Y 210
#define GEN_ENTRY_5_Z -170
#define GEN_ENTRY_5_DIR 180
#define GEN_ENTRY_5_VEC -220,210,-170

// type: Marker:NPC
// name: NPC_Clubba_Wander
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_WANDER_X 180
#define GEN_NPC_CLUBBA_WANDER_Y 0
#define GEN_NPC_CLUBBA_WANDER_Z -122
#define GEN_NPC_CLUBBA_WANDER_DIR 270
#define GEN_NPC_CLUBBA_WANDER_VEC 180,0,-122
#define GEN_NPC_CLUBBA_WANDER_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 180, 0, -122 }, \
        .wanderSize  = { 40 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 0, 0, 75 }, \
        .detectSize  = { 355, 255 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Clubba_Patrol
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_PATROL_X -272
#define GEN_NPC_CLUBBA_PATROL_Y 0
#define GEN_NPC_CLUBBA_PATROL_Z -135
#define GEN_NPC_CLUBBA_PATROL_DIR 270
#define GEN_NPC_CLUBBA_PATROL_VEC -272,0,-135
#define GEN_NPC_CLUBBA_PATROL_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -272, 0, -135 }, \
            { -171, 0, -135 }, \
        }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 0, 0, 75 }, \
        .detectSize  = { 355, 255 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Clubba_Napping
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_NAPPING_X -326
#define GEN_NPC_CLUBBA_NAPPING_Y 210
#define GEN_NPC_CLUBBA_NAPPING_Z 80
#define GEN_NPC_CLUBBA_NAPPING_DIR 90
#define GEN_NPC_CLUBBA_NAPPING_VEC -326,210,80
#define GEN_NPC_CLUBBA_NAPPING_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -326, 210, 80 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 0, 0, 75 }, \
        .detectSize  = { 355, 255 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 0
#define GEN_ITEM_1_Y 75
#define GEN_ITEM_1_Z 100
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 0,75,100
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_DGB03_Item_StarPiece

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X -355
#define GEN_PADLOCK_1_Y 218
#define GEN_PADLOCK_1_Z 75
#define GEN_PADLOCK_1_DIR 80
#define GEN_PADLOCK_1_VEC -355,218,75
#define GEN_PADLOCK_1_XYZA -355, 218, 75, 80
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

