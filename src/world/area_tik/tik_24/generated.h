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
// name: NPC_DarkTroopa_01
// anim: ANIM_KoopaTroopa_Dark_Scramble
#define GEN_NPC_DARK_TROOPA_01_X -75
#define GEN_NPC_DARK_TROOPA_01_Y -10
#define GEN_NPC_DARK_TROOPA_01_Z 50
#define GEN_NPC_DARK_TROOPA_01_DIR 90
#define GEN_NPC_DARK_TROOPA_01_VEC -75,-10,50
#define GEN_NPC_DARK_TROOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -75, -10, 50 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -75, -10, 50 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_DarkTroopa_02
// anim: ANIM_KoopaTroopa_Dark_Scramble
#define GEN_NPC_DARK_TROOPA_02_X 175
#define GEN_NPC_DARK_TROOPA_02_Y -10
#define GEN_NPC_DARK_TROOPA_02_Z -50
#define GEN_NPC_DARK_TROOPA_02_DIR 270
#define GEN_NPC_DARK_TROOPA_02_VEC 175,-10,-50
#define GEN_NPC_DARK_TROOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 175, -10, -50 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 175, -10, -50 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_1
#define GEN_HAMMER3_BLOCK_1_X -240
#define GEN_HAMMER3_BLOCK_1_Y -10
#define GEN_HAMMER3_BLOCK_1_Z 0
#define GEN_HAMMER3_BLOCK_1_DIR 0
#define GEN_HAMMER3_BLOCK_1_VEC -240,-10,0
#define GEN_HAMMER3_BLOCK_1_XYZA -240, -10, 0, 0
#define GEN_HAMMER3_BLOCK_1_PARAMS GEN_HAMMER3_BLOCK_1_XYZA
#define GEN_HAMMER3_BLOCK_1_SCRIPT N(EVS_OnSmashBlock)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X -100
#define GEN_BRICK_BLOCK_1_Y 80
#define GEN_BRICK_BLOCK_1_Z -75
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC -100,80,-75
#define GEN_BRICK_BLOCK_1_XYZA -100, 80, -75, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X 0
#define GEN_BRICK_BLOCK_2_Y 80
#define GEN_BRICK_BLOCK_2_Z -75
#define GEN_BRICK_BLOCK_2_DIR 0
#define GEN_BRICK_BLOCK_2_VEC 0,80,-75
#define GEN_BRICK_BLOCK_2_XYZA 0, 80, -75, 0
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_3
#define GEN_BRICK_BLOCK_3_X 100
#define GEN_BRICK_BLOCK_3_Y 80
#define GEN_BRICK_BLOCK_3_Z -75
#define GEN_BRICK_BLOCK_3_DIR 0
#define GEN_BRICK_BLOCK_3_VEC 100,80,-75
#define GEN_BRICK_BLOCK_3_XYZA 100, 80, -75, 0
#define GEN_BRICK_BLOCK_3_PARAMS GEN_BRICK_BLOCK_3_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_4
#define GEN_BRICK_BLOCK_4_X 200
#define GEN_BRICK_BLOCK_4_Y 80
#define GEN_BRICK_BLOCK_4_Z -75
#define GEN_BRICK_BLOCK_4_DIR 0
#define GEN_BRICK_BLOCK_4_VEC 200,80,-75
#define GEN_BRICK_BLOCK_4_XYZA 200, 80, -75, 0
#define GEN_BRICK_BLOCK_4_PARAMS GEN_BRICK_BLOCK_4_XYZA

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 50
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 80
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -75
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 50,80,-75
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 50, 80, -75, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_LIFE_SHROOM
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_TIK24_HiddenItem_LifeShroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -50
#define GEN_YELLOW_BLOCK_1_Y 80
#define GEN_YELLOW_BLOCK_1_Z -75
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -50,80,-75
#define GEN_YELLOW_BLOCK_1_XYZA -50, 80, -75, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_TIK24_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 150
#define GEN_YELLOW_BLOCK_2_Y 80
#define GEN_YELLOW_BLOCK_2_Z -75
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 150,80,-75
#define GEN_YELLOW_BLOCK_2_XYZA 150, 80, -75, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_TIK24_ItemBlock_CoinB

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

