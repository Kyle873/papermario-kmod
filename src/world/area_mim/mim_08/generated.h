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
// name: NPC_Bzzap
// anim: ANIM_Bzzap_Anim02
#define GEN_NPC_BZZAP_X 0
#define GEN_NPC_BZZAP_Y -1000
#define GEN_NPC_BZZAP_Z 0
#define GEN_NPC_BZZAP_DIR 270
#define GEN_NPC_BZZAP_VEC 0,-1000,0
#define GEN_NPC_BZZAP_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -300, 60, 0 }, \
        .wanderSize  = { 60 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -300, 60, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_PiranhaPlant_01
// anim: ANIM_SmallPiranha_Anim01
#define GEN_NPC_PIRANHA_PLANT_01_X -240
#define GEN_NPC_PIRANHA_PLANT_01_Y 0
#define GEN_NPC_PIRANHA_PLANT_01_Z -240
#define GEN_NPC_PIRANHA_PLANT_01_DIR 0
#define GEN_NPC_PIRANHA_PLANT_01_VEC -240,0,-240
#define GEN_NPC_PIRANHA_PLANT_01_TERRITORY \
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
// name: NPC_PiranhaPlant_02
// anim: ANIM_SmallPiranha_Anim01
#define GEN_NPC_PIRANHA_PLANT_02_X 240
#define GEN_NPC_PIRANHA_PLANT_02_Y 0
#define GEN_NPC_PIRANHA_PLANT_02_Z 240
#define GEN_NPC_PIRANHA_PLANT_02_DIR 0
#define GEN_NPC_PIRANHA_PLANT_02_VEC 240,0,240
#define GEN_NPC_PIRANHA_PLANT_02_TERRITORY \
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

// type: Marker:Entity:RedBlock
// name: RedBlock_1
#define GEN_RED_BLOCK_1_X 0
#define GEN_RED_BLOCK_1_Y 93
#define GEN_RED_BLOCK_1_Z 0
#define GEN_RED_BLOCK_1_DIR 45
#define GEN_RED_BLOCK_1_VEC 0,93,0
#define GEN_RED_BLOCK_1_XYZA 0, 93, 0, 45
#define GEN_RED_BLOCK_1_ITEM ITEM_HP_PLUS_A
#define GEN_RED_BLOCK_1_PARAMS GEN_RED_BLOCK_1_XYZA, GEN_RED_BLOCK_1_ITEM
#define GEN_RED_BLOCK_1_FLAG GF_MIM08_BadgeBlock_HPPlusA

