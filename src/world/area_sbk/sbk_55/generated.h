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
#define GEN_NPC_POKEY_01_X 43
#define GEN_NPC_POKEY_01_Y 0
#define GEN_NPC_POKEY_01_Z -120
#define GEN_NPC_POKEY_01_DIR 270
#define GEN_NPC_POKEY_01_VEC 43,0,-120
#define GEN_NPC_POKEY_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 43, 0, -120 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Pokey_02
// anim: ANIM_Pokey_Idle4
#define GEN_NPC_POKEY_02_X -100
#define GEN_NPC_POKEY_02_Y 0
#define GEN_NPC_POKEY_02_Z -120
#define GEN_NPC_POKEY_02_DIR 270
#define GEN_NPC_POKEY_02_VEC -100,0,-120
#define GEN_NPC_POKEY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -100, 0, -120 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 420
#define GEN_ITEM_1_Y 0
#define GEN_ITEM_1_Z 168
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 420,0,168
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_TASTY_TONIC
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_SBK55_Item_TastyTonic

// type: Marker:Entity:MulticoinBlock
// name: MulticoinBlock_1
#define GEN_MULTICOIN_BLOCK_1_X 0
#define GEN_MULTICOIN_BLOCK_1_Y 60
#define GEN_MULTICOIN_BLOCK_1_Z -100
#define GEN_MULTICOIN_BLOCK_1_DIR 0
#define GEN_MULTICOIN_BLOCK_1_VEC 0,60,-100
#define GEN_MULTICOIN_BLOCK_1_XYZA 0, 60, -100, 0
#define GEN_MULTICOIN_BLOCK_1_PARAMS GEN_MULTICOIN_BLOCK_1_XYZA
#define GEN_MULTICOIN_BLOCK_1_FLAG GF_SBK55_MultiCoinBrick

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 77
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -126
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 77,0,-126
#define GEN_BOMB_POS_1_RAD 0

