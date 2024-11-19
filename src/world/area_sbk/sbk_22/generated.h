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
// name: NPC_Pokey
// anim: ANIM_Pokey_Idle4
#define GEN_NPC_POKEY_X -140
#define GEN_NPC_POKEY_Y 0
#define GEN_NPC_POKEY_Z -230
#define GEN_NPC_POKEY_DIR 90
#define GEN_NPC_POKEY_VEC -140,0,-230
#define GEN_NPC_POKEY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -140, 0, -230 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bandit
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_X 40
#define GEN_NPC_BANDIT_Y 0
#define GEN_NPC_BANDIT_Z 90
#define GEN_NPC_BANDIT_DIR 270
#define GEN_NPC_BANDIT_VEC 40,0,90
#define GEN_NPC_BANDIT_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 40, 0, 90 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -225
#define GEN_YELLOW_BLOCK_1_Y 0
#define GEN_YELLOW_BLOCK_1_Z -225
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -225,0,-225
#define GEN_YELLOW_BLOCK_1_XYZA -225, 0, -225, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_SBK22_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X -225
#define GEN_YELLOW_BLOCK_2_Y 0
#define GEN_YELLOW_BLOCK_2_Z 225
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC -225,0,225
#define GEN_YELLOW_BLOCK_2_XYZA -225, 0, 225, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_SBK22_ItemBlock_CoinB

// type: Marker:Entity:YellowBlock
// name: YellowBlock_3
#define GEN_YELLOW_BLOCK_3_X 225
#define GEN_YELLOW_BLOCK_3_Y 0
#define GEN_YELLOW_BLOCK_3_Z -225
#define GEN_YELLOW_BLOCK_3_DIR 0
#define GEN_YELLOW_BLOCK_3_VEC 225,0,-225
#define GEN_YELLOW_BLOCK_3_XYZA 225, 0, -225, 0
#define GEN_YELLOW_BLOCK_3_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_3_PARAMS GEN_YELLOW_BLOCK_3_XYZA, GEN_YELLOW_BLOCK_3_ITEM
#define GEN_YELLOW_BLOCK_3_FLAG GF_SBK22_ItemBlock_CoinC

// type: Marker:Entity:YellowBlock
// name: YellowBlock_4
#define GEN_YELLOW_BLOCK_4_X 225
#define GEN_YELLOW_BLOCK_4_Y 0
#define GEN_YELLOW_BLOCK_4_Z 225
#define GEN_YELLOW_BLOCK_4_DIR 0
#define GEN_YELLOW_BLOCK_4_VEC 225,0,225
#define GEN_YELLOW_BLOCK_4_XYZA 225, 0, 225, 0
#define GEN_YELLOW_BLOCK_4_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_4_PARAMS GEN_YELLOW_BLOCK_4_XYZA, GEN_YELLOW_BLOCK_4_ITEM
#define GEN_YELLOW_BLOCK_4_FLAG GF_SBK22_ItemBlock_CoinD

// type: Marker:Entity:YellowBlock
// name: YellowBlock_5
#define GEN_YELLOW_BLOCK_5_X 0
#define GEN_YELLOW_BLOCK_5_Y 0
#define GEN_YELLOW_BLOCK_5_Z 0
#define GEN_YELLOW_BLOCK_5_DIR 0
#define GEN_YELLOW_BLOCK_5_VEC 0,0,0
#define GEN_YELLOW_BLOCK_5_XYZA 0, 0, 0, 0
#define GEN_YELLOW_BLOCK_5_ITEM ITEM_FIRE_FLOWER
#define GEN_YELLOW_BLOCK_5_PARAMS GEN_YELLOW_BLOCK_5_XYZA, GEN_YELLOW_BLOCK_5_ITEM
#define GEN_YELLOW_BLOCK_5_FLAG GF_SBK22_ItemBlock_FireFlower

