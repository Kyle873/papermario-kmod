/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -220.0,  -10.0,    0.0,   90.0 }, \
    {  320.0,  -10.0,    0.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(    50,   200,   110,   500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(     0,  -200,  -100,  -500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(     0,  -250,  -100,  -500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -220
#define GEN_ENTRY_0_Y -10
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -220,-10,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 320
#define GEN_ENTRY_1_Y -10
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 320,-10,0

// type: Marker:NPC
// name: NPC_Gloomba
// anim: ANIM_Goomba_Dark_Idle
#define GEN_NPC_GLOOMBA_X -60
#define GEN_NPC_GLOOMBA_Y -10
#define GEN_NPC_GLOOMBA_Z -30
#define GEN_NPC_GLOOMBA_DIR 90
#define GEN_NPC_GLOOMBA_VEC -60,-10,-30
#define GEN_NPC_GLOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -60, -10, -30 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -60, -10, -30 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikedGloomba
// anim: ANIM_SpikedGoomba_Dark_Idle
#define GEN_NPC_SPIKED_GLOOMBA_X 30
#define GEN_NPC_SPIKED_GLOOMBA_Y -10
#define GEN_NPC_SPIKED_GLOOMBA_Z -20
#define GEN_NPC_SPIKED_GLOOMBA_DIR 270
#define GEN_NPC_SPIKED_GLOOMBA_VEC 30,-10,-20
#define GEN_NPC_SPIKED_GLOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 30, -10, -20 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 30, -10, -20 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X -100
#define GEN_BRICK_BLOCK_1_Y 50
#define GEN_BRICK_BLOCK_1_Z -75
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC -100,50,-75
#define GEN_BRICK_BLOCK_1_XYZA -100, 50, -75, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X -50
#define GEN_BRICK_BLOCK_2_Y 50
#define GEN_BRICK_BLOCK_2_Z -75
#define GEN_BRICK_BLOCK_2_DIR 0
#define GEN_BRICK_BLOCK_2_VEC -50,50,-75
#define GEN_BRICK_BLOCK_2_XYZA -50, 50, -75, 0
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_3
#define GEN_BRICK_BLOCK_3_X 50
#define GEN_BRICK_BLOCK_3_Y 50
#define GEN_BRICK_BLOCK_3_Z -75
#define GEN_BRICK_BLOCK_3_DIR 0
#define GEN_BRICK_BLOCK_3_VEC 50,50,-75
#define GEN_BRICK_BLOCK_3_XYZA 50, 50, -75, 0
#define GEN_BRICK_BLOCK_3_PARAMS GEN_BRICK_BLOCK_3_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_4
#define GEN_BRICK_BLOCK_4_X 100
#define GEN_BRICK_BLOCK_4_Y 50
#define GEN_BRICK_BLOCK_4_Z -75
#define GEN_BRICK_BLOCK_4_DIR 0
#define GEN_BRICK_BLOCK_4_VEC 100,50,-75
#define GEN_BRICK_BLOCK_4_XYZA 100, 50, -75, 0
#define GEN_BRICK_BLOCK_4_PARAMS GEN_BRICK_BLOCK_4_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_5
#define GEN_BRICK_BLOCK_5_X 250
#define GEN_BRICK_BLOCK_5_Y 50
#define GEN_BRICK_BLOCK_5_Z -75
#define GEN_BRICK_BLOCK_5_DIR 0
#define GEN_BRICK_BLOCK_5_VEC 250,50,-75
#define GEN_BRICK_BLOCK_5_XYZA 250, 50, -75, 0
#define GEN_BRICK_BLOCK_5_PARAMS GEN_BRICK_BLOCK_5_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_6
#define GEN_BRICK_BLOCK_6_X 150
#define GEN_BRICK_BLOCK_6_Y 50
#define GEN_BRICK_BLOCK_6_Z -75
#define GEN_BRICK_BLOCK_6_DIR 0
#define GEN_BRICK_BLOCK_6_VEC 150,50,-75
#define GEN_BRICK_BLOCK_6_XYZA 150, 50, -75, 0
#define GEN_BRICK_BLOCK_6_PARAMS GEN_BRICK_BLOCK_6_XYZA
#define GEN_BRICK_BLOCK_6_SCRIPT N(EVS_OnBreakBlock)

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 200
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 50
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -75
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 200,50,-75
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 200, 50, -75, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_SUPER_SHROOM
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_TIK18_HiddenItem_SuperShroom

// type: Marker:Entity:MulticoinBlock
// name: MulticoinBlock_1
#define GEN_MULTICOIN_BLOCK_1_X 0
#define GEN_MULTICOIN_BLOCK_1_Y 50
#define GEN_MULTICOIN_BLOCK_1_Z -75
#define GEN_MULTICOIN_BLOCK_1_DIR 0
#define GEN_MULTICOIN_BLOCK_1_VEC 0,50,-75
#define GEN_MULTICOIN_BLOCK_1_XYZA 0, 50, -75, 0
#define GEN_MULTICOIN_BLOCK_1_PARAMS GEN_MULTICOIN_BLOCK_1_XYZA
#define GEN_MULTICOIN_BLOCK_1_FLAG GF_TIK18_MultiCoinBrick

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X 156
#define GEN_DRIP_VOLUME_1_Y 95
#define GEN_DRIP_VOLUME_1_Z 35
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC 156,95,35
#define GEN_DRIP_VOLUME_1_MIN_X -233
#define GEN_DRIP_VOLUME_1_MIN_Y -10
#define GEN_DRIP_VOLUME_1_MIN_Z -117
#define GEN_DRIP_VOLUME_1_MIN_XZ -233,-117
#define GEN_DRIP_VOLUME_1_MIN_VEC -233,-10,-117
#define GEN_DRIP_VOLUME_1_MAX_X 545
#define GEN_DRIP_VOLUME_1_MAX_Y 200
#define GEN_DRIP_VOLUME_1_MAX_Z 187
#define GEN_DRIP_VOLUME_1_MAX_XZ 545,187
#define GEN_DRIP_VOLUME_1_MAX_VEC 545,200,187

