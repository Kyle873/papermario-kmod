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
#define GEN_NPC_POKEY_X 310
#define GEN_NPC_POKEY_Y 0
#define GEN_NPC_POKEY_Z -100
#define GEN_NPC_POKEY_DIR 270
#define GEN_NPC_POKEY_VEC 310,0,-100
#define GEN_NPC_POKEY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 310, 0, -100 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bandit_01
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_01_X -190
#define GEN_NPC_BANDIT_01_Y 0
#define GEN_NPC_BANDIT_01_Z -318
#define GEN_NPC_BANDIT_01_DIR 90
#define GEN_NPC_BANDIT_01_VEC -190,0,-318
#define GEN_NPC_BANDIT_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -190, 0, -318 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bandit_02
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_02_X -200
#define GEN_NPC_BANDIT_02_Y 0
#define GEN_NPC_BANDIT_02_Z 115
#define GEN_NPC_BANDIT_02_DIR 300
#define GEN_NPC_BANDIT_02_VEC -200,0,115
#define GEN_NPC_BANDIT_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -200, 0, 115 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 0
#define GEN_YELLOW_BLOCK_1_Y 0
#define GEN_YELLOW_BLOCK_1_Z 0
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 0,0,0
#define GEN_YELLOW_BLOCK_1_XYZA 0, 0, 0, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_SBK46_ItemBlock_Coin

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 85
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 0,85,0
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 0, 85, 0, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_LIFE_SHROOM
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_SBK46_HiddenItem_LifeShroom

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -228
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -306
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -228,0,-306
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -178
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z 164
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -178,0,164
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X 351
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -101
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC 351,0,-101
#define GEN_BOMB_POS_3_RAD 0

