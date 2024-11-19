/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TUBBAS_MANOR

// type: EntryList
#define GEN_ENTRY_LIST \
    { -120.0,    0.0,  180.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -120
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 180
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -120,0,180

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
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 5, \
        .points = { \
            { 0, 0, 240 }, \
            { 175, 0, 240 }, \
            { 350, 0, 240 }, \
            { 525, 0, 240 }, \
            { 700, 0, 240 }, \
        }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 300, 0, 240 }, \
        .detectSize  = { 1000, 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Yakkey
// anim: ANIM_Yakkey_Idle
#define GEN_NPC_YAKKEY_X 0
#define GEN_NPC_YAKKEY_Y -1000
#define GEN_NPC_YAKKEY_Z 0
#define GEN_NPC_YAKKEY_DIR 270
#define GEN_NPC_YAKKEY_VEC 0,-1000,0
#define GEN_NPC_YAKKEY_TERRITORY \
{}

// type: Marker:Entity:Chest
// name: Chest_1
#define GEN_CHEST_1_X 845
#define GEN_CHEST_1_Y 0
#define GEN_CHEST_1_Z 145
#define GEN_CHEST_1_DIR -35
#define GEN_CHEST_1_VEC 845,0,145
#define GEN_CHEST_1_XYZA 845, 0, 145, -35
#define GEN_CHEST_1_PARAMS GEN_CHEST_1_XYZA
#define GEN_CHEST_1_FLAG GF_DGB18_Chest_MysticalKey
#define GEN_CHEST_1_SCRIPT N(EVS_OpenChest_MysticalKey)

