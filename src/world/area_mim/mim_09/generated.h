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
#define GEN_NPC_FUZZY_X 270
#define GEN_NPC_FUZZY_Y 0
#define GEN_NPC_FUZZY_Z 200
#define GEN_NPC_FUZZY_DIR 0
#define GEN_NPC_FUZZY_VEC 270,0,200
#define GEN_NPC_FUZZY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 270, 0, 200 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 400 }, \
    }, \
}

// type: Marker:Entity:RedBlock
// name: RedBlock_1
#define GEN_RED_BLOCK_1_X 0
#define GEN_RED_BLOCK_1_Y 92
#define GEN_RED_BLOCK_1_Z 0
#define GEN_RED_BLOCK_1_DIR 45
#define GEN_RED_BLOCK_1_VEC 0,92,0
#define GEN_RED_BLOCK_1_XYZA 0, 92, 0, 45
#define GEN_RED_BLOCK_1_ITEM ITEM_FP_PLUS_A
#define GEN_RED_BLOCK_1_PARAMS GEN_RED_BLOCK_1_XYZA, GEN_RED_BLOCK_1_ITEM
#define GEN_RED_BLOCK_1_FLAG GF_MIM09_BadgeBlock_FPPlusA

