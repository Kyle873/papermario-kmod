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
// name: NPC_Bandit_01
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_01_X -80
#define GEN_NPC_BANDIT_01_Y 0
#define GEN_NPC_BANDIT_01_Z -20
#define GEN_NPC_BANDIT_01_DIR 90
#define GEN_NPC_BANDIT_01_VEC -80,0,-20
#define GEN_NPC_BANDIT_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -80, 0, -20 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bandit_02
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_02_X 120
#define GEN_NPC_BANDIT_02_Y 0
#define GEN_NPC_BANDIT_02_Z 20
#define GEN_NPC_BANDIT_02_DIR 270
#define GEN_NPC_BANDIT_02_VEC 120,0,20
#define GEN_NPC_BANDIT_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 120, 0, 20 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X -300
#define GEN_BRICK_BLOCK_1_Y 60
#define GEN_BRICK_BLOCK_1_Z -80
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC -300,60,-80
#define GEN_BRICK_BLOCK_1_XYZA -300, 60, -80, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X -240
#define GEN_BRICK_BLOCK_2_Y 60
#define GEN_BRICK_BLOCK_2_Z 230
#define GEN_BRICK_BLOCK_2_DIR 0
#define GEN_BRICK_BLOCK_2_VEC -240,60,230
#define GEN_BRICK_BLOCK_2_XYZA -240, 60, 230, 0
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_3
#define GEN_BRICK_BLOCK_3_X -75
#define GEN_BRICK_BLOCK_3_Y 60
#define GEN_BRICK_BLOCK_3_Z 295
#define GEN_BRICK_BLOCK_3_DIR 0
#define GEN_BRICK_BLOCK_3_VEC -75,60,295
#define GEN_BRICK_BLOCK_3_XYZA -75, 60, 295, 0
#define GEN_BRICK_BLOCK_3_PARAMS GEN_BRICK_BLOCK_3_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_4
#define GEN_BRICK_BLOCK_4_X -75
#define GEN_BRICK_BLOCK_4_Y 60
#define GEN_BRICK_BLOCK_4_Z -360
#define GEN_BRICK_BLOCK_4_DIR 0
#define GEN_BRICK_BLOCK_4_VEC -75,60,-360
#define GEN_BRICK_BLOCK_4_XYZA -75, 60, -360, 0
#define GEN_BRICK_BLOCK_4_PARAMS GEN_BRICK_BLOCK_4_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_5
#define GEN_BRICK_BLOCK_5_X 270
#define GEN_BRICK_BLOCK_5_Y 60
#define GEN_BRICK_BLOCK_5_Z -150
#define GEN_BRICK_BLOCK_5_DIR 0
#define GEN_BRICK_BLOCK_5_VEC 270,60,-150
#define GEN_BRICK_BLOCK_5_XYZA 270, 60, -150, 0
#define GEN_BRICK_BLOCK_5_PARAMS GEN_BRICK_BLOCK_5_XYZA

// type: Marker:Entity:MulticoinBlock
// name: MulticoinBlock_1
#define GEN_MULTICOIN_BLOCK_1_X 0
#define GEN_MULTICOIN_BLOCK_1_Y 60
#define GEN_MULTICOIN_BLOCK_1_Z -100
#define GEN_MULTICOIN_BLOCK_1_DIR 0
#define GEN_MULTICOIN_BLOCK_1_VEC 0,60,-100
#define GEN_MULTICOIN_BLOCK_1_XYZA 0, 60, -100, 0
#define GEN_MULTICOIN_BLOCK_1_PARAMS GEN_MULTICOIN_BLOCK_1_XYZA
#define GEN_MULTICOIN_BLOCK_1_FLAG GF_SBK25_MultiCoinBrickA

// type: Marker:Entity:MulticoinBlock
// name: MulticoinBlock_2
#define GEN_MULTICOIN_BLOCK_2_X 120
#define GEN_MULTICOIN_BLOCK_2_Y 60
#define GEN_MULTICOIN_BLOCK_2_Z 185
#define GEN_MULTICOIN_BLOCK_2_DIR 0
#define GEN_MULTICOIN_BLOCK_2_VEC 120,60,185
#define GEN_MULTICOIN_BLOCK_2_XYZA 120, 60, 185, 0
#define GEN_MULTICOIN_BLOCK_2_PARAMS GEN_MULTICOIN_BLOCK_2_XYZA
#define GEN_MULTICOIN_BLOCK_2_FLAG GF_SBK25_MultiCoinBrickB

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -398
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -104
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -398,0,-104
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -238
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -179
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -238,0,-179
#define GEN_BOMB_POS_2_RAD 0

