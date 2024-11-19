/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_DRY_DRY_DESERT

// type: EntryList
#define GEN_ENTRY_LIST \
    { -475.0,    0.0,    0.0,   90.0 }, \
    {  475.0,    0.0,    0.0,  270.0 }, \
    {    0.0,    0.0, -475.0,  180.0 }, \
    {    0.0,    0.0,  475.0,    0.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -475
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -475,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 475
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 475,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -475
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 0,0,-475

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 475
#define GEN_ENTRY_3_DIR 0
#define GEN_ENTRY_3_VEC 0,0,475

// type: Marker:NPC
// name: NPC_Pokey_01
// anim: ANIM_Pokey_Idle4
#define GEN_NPC_POKEY_01_X -40
#define GEN_NPC_POKEY_01_Y 0
#define GEN_NPC_POKEY_01_Z 160
#define GEN_NPC_POKEY_01_DIR 90
#define GEN_NPC_POKEY_01_VEC -40,0,160
#define GEN_NPC_POKEY_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -40, 0, 160 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Pokey_02
// anim: ANIM_Pokey_Idle4
#define GEN_NPC_POKEY_02_X 245
#define GEN_NPC_POKEY_02_Y 0
#define GEN_NPC_POKEY_02_Z 75
#define GEN_NPC_POKEY_02_DIR 270
#define GEN_NPC_POKEY_02_VEC 245,0,75
#define GEN_NPC_POKEY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 245, 0, 75 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -230
#define GEN_YELLOW_BLOCK_1_Y 0
#define GEN_YELLOW_BLOCK_1_Z 155
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -230,0,155
#define GEN_YELLOW_BLOCK_1_XYZA -230, 0, 155, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_FRIGHT_JAR
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_SBK00_ItemBlock_FrightJar

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 160
#define GEN_YELLOW_BLOCK_2_Y 0
#define GEN_YELLOW_BLOCK_2_Z 205
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 160,0,205
#define GEN_YELLOW_BLOCK_2_XYZA 160, 0, 205, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_SBK00_ItemBlock_Coin

