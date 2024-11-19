/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_CRYSTAL_PALACE

// type: EntryList
#define GEN_ENTRY_LIST \
    {   13.0,    0.0,   80.0,   90.0 }, \
    {  487.0,    0.0,   80.0,  270.0 }, \
    {   13.0,    0.0,  -80.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 13
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 80
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC 13,0,80

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 487
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 80
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 487,0,80

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 13
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -80
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC 13,0,-80

// type: Marker:NPC
// name: NPC_Clubba
// anim: ANIM_WorldClubba_Frost_Anim02
#define GEN_NPC_CLUBBA_X 200
#define GEN_NPC_CLUBBA_Y 0
#define GEN_NPC_CLUBBA_Z 75
#define GEN_NPC_CLUBBA_DIR 90
#define GEN_NPC_CLUBBA_VEC 200,0,75
#define GEN_NPC_CLUBBA_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 200, 0, 75 }, \
            { 300, 0, 75 }, \
        }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 250, 0, 75 }, \
        .detectSize  = { 200, 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Duplighost
// anim: ANIM_Duplighost_Anim02
#define GEN_NPC_DUPLIGHOST_X 200
#define GEN_NPC_DUPLIGHOST_Y 0
#define GEN_NPC_DUPLIGHOST_Z -75
#define GEN_NPC_DUPLIGHOST_DIR 90
#define GEN_NPC_DUPLIGHOST_VEC 200,0,-75
#define GEN_NPC_DUPLIGHOST_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 200, 0, -75 }, \
            { 300, 0, -75 }, \
        }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 250, 0, 75 }, \
        .detectSize  = { 200, 100 }, \
    }, \
}

// type: Marker:Entity:Chest
// name: Chest_1
#define GEN_CHEST_1_X 435
#define GEN_CHEST_1_Y 0
#define GEN_CHEST_1_Z -70
#define GEN_CHEST_1_DIR 0
#define GEN_CHEST_1_VEC 435,0,-70
#define GEN_CHEST_1_XYZA 435, 0, -70, 0
#define GEN_CHEST_1_PARAMS GEN_CHEST_1_XYZA
#define GEN_CHEST_1_FLAG GF_PRA35_Chest_TripleDip
#define GEN_CHEST_1_SCRIPT N(EVS_OpenChest_TripleDip)

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 13
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -80
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 13,0,-80
#define GEN_BOMB_POS_1_RAD 0

