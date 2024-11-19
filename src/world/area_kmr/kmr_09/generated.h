/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_ROAD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -127.0,    0.0,   24.0,   90.0 }, \
    {  840.0,    0.0,   24.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -127
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 24
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -127,0,24

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 840
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 24
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 840,0,24

// type: Marker:NPC
// name: NPC_Goomba_01
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_01_X 200
#define GEN_NPC_GOOMBA_01_Y 0
#define GEN_NPC_GOOMBA_01_Z 24
#define GEN_NPC_GOOMBA_01_DIR 90
#define GEN_NPC_GOOMBA_01_VEC 200,0,24
#define GEN_NPC_GOOMBA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 200, 0, 24 }, \
        .wanderSize  = { 30, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 200, 0, 24 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goomba_02
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_02_X 250
#define GEN_NPC_GOOMBA_02_Y 0
#define GEN_NPC_GOOMBA_02_Z 35
#define GEN_NPC_GOOMBA_02_DIR 90
#define GEN_NPC_GOOMBA_02_VEC 250,0,35
#define GEN_NPC_GOOMBA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 250, 0, 35 }, \
        .wanderSize  = { 30, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 250, 0, 35 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goomba_Ambush
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_AMBUSH_X -34
#define GEN_NPC_GOOMBA_AMBUSH_Y 29
#define GEN_NPC_GOOMBA_AMBUSH_Z -32
#define GEN_NPC_GOOMBA_AMBUSH_DIR 270
#define GEN_NPC_GOOMBA_AMBUSH_VEC -34,29,-32
#define GEN_NPC_GOOMBA_AMBUSH_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { -20, 0, 10 }, \
        .wanderSize  = { 30, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -20, 0, 10 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Paragoomba
// anim: ANIM_Paragoomba_Idle
#define GEN_NPC_PARAGOOMBA_X 670
#define GEN_NPC_PARAGOOMBA_Y 60
#define GEN_NPC_PARAGOOMBA_Z 20
#define GEN_NPC_PARAGOOMBA_DIR 270
#define GEN_NPC_PARAGOOMBA_VEC 670,60,20
#define GEN_NPC_PARAGOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 670, 60, 20 }, \
        .wanderSize  = { 30, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 670, 60, 20 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 450
#define GEN_BRICK_BLOCK_1_Y 60
#define GEN_BRICK_BLOCK_1_Z -15
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC 450,60,-15
#define GEN_BRICK_BLOCK_1_XYZA 450, 60, -15, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 400
#define GEN_YELLOW_BLOCK_1_Y 60
#define GEN_YELLOW_BLOCK_1_Z -15
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 400,60,-15
#define GEN_YELLOW_BLOCK_1_XYZA 400, 60, -15, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_KMR09_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 500
#define GEN_YELLOW_BLOCK_2_Y 60
#define GEN_YELLOW_BLOCK_2_Z -15
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 500,60,-15
#define GEN_YELLOW_BLOCK_2_XYZA 500, 60, -15, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_KMR09_ItemBlock_CoinB

