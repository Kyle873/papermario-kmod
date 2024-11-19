/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PLEASANT_PATH

// type: EntryList
#define GEN_ENTRY_LIST \
    { -786.0,    0.0,  -49.0,   90.0 }, \
    {  886.0,   75.0,  -49.0,  270.0 }, \
    {  180.0,    0.0,  -50.0,   90.0 }, \
    { -500.0,    0.0, -145.0,   90.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_MAX(0x8000) \
    TEX_PAN_PARAMS_STEP( 16384,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(    12,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(  -100,     0,   600,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -100,     0,   400,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -786
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -49
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -786,0,-49

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 886
#define GEN_ENTRY_1_Y 75
#define GEN_ENTRY_1_Z -49
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 886,75,-49

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 180
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -50
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC 180,0,-50

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -500
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z -145
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC -500,0,-145

// type: Marker:NPC
// name: NPC_KoopaTroopa_01
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_01_X -370
#define GEN_NPC_KOOPA_TROOPA_01_Y 0
#define GEN_NPC_KOOPA_TROOPA_01_Z -25
#define GEN_NPC_KOOPA_TROOPA_01_DIR 270
#define GEN_NPC_KOOPA_TROOPA_01_VEC -370,0,-25
#define GEN_NPC_KOOPA_TROOPA_01_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -370, 0, -25 }, \
            { -455, 0, -25 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -436, 0, -104 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_02
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_02_X 563
#define GEN_NPC_KOOPA_TROOPA_02_Y 50
#define GEN_NPC_KOOPA_TROOPA_02_Z -43
#define GEN_NPC_KOOPA_TROOPA_02_DIR 270
#define GEN_NPC_KOOPA_TROOPA_02_VEC 563,50,-43
#define GEN_NPC_KOOPA_TROOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 563, 50, -43 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 563, 50, -43 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_02_1
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_02_1_X 600
#define GEN_NPC_KOOPA_TROOPA_02_1_Y 50
#define GEN_NPC_KOOPA_TROOPA_02_1_Z -75
#define GEN_NPC_KOOPA_TROOPA_02_1_DIR 270
#define GEN_NPC_KOOPA_TROOPA_02_1_VEC 600,50,-75
#define GEN_NPC_KOOPA_TROOPA_02_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 563, 50, -43 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 563, 50, -43 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goomba
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_X 50
#define GEN_NPC_GOOMBA_Y 0
#define GEN_NPC_GOOMBA_Z -72
#define GEN_NPC_GOOMBA_DIR 270
#define GEN_NPC_GOOMBA_VEC 50,0,-72
#define GEN_NPC_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 50, 0, -72 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 50, 0, -72 }, \
        .detectSize  = { 150, 80 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikedGoomba
// anim: ANIM_SpikedGoomba_Idle
#define GEN_NPC_SPIKED_GOOMBA_X -160
#define GEN_NPC_SPIKED_GOOMBA_Y 0
#define GEN_NPC_SPIKED_GOOMBA_Z -120
#define GEN_NPC_SPIKED_GOOMBA_DIR 270
#define GEN_NPC_SPIKED_GOOMBA_VEC -160,0,-120
#define GEN_NPC_SPIKED_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -84, 0, -72 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { -84, 0, -72 }, \
        .detectSize  = { 150, 80 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -220
#define GEN_ITEM_1_Y -50
#define GEN_ITEM_1_Z 155
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -220,-50,155
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_NOK12_Item_StarPiece

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 392
#define GEN_ITEM_2_Y 25
#define GEN_ITEM_2_Z -145
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 392,25,-145
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_SLEEPY_SHEEP
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_NOK12_Item_SleepySheep

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X -165
#define GEN_BRICK_BLOCK_1_Y 60
#define GEN_BRICK_BLOCK_1_Z -130
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC -165,60,-130
#define GEN_BRICK_BLOCK_1_XYZA -165, 60, -130, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA
#define GEN_BRICK_BLOCK_1_SCRIPT N(EVS_BreakBlock_Ambush)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X 520
#define GEN_BRICK_BLOCK_2_Y 110
#define GEN_BRICK_BLOCK_2_Z -180
#define GEN_BRICK_BLOCK_2_DIR 0
#define GEN_BRICK_BLOCK_2_VEC 520,110,-180
#define GEN_BRICK_BLOCK_2_XYZA 520, 110, -180, 0
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_3
#define GEN_BRICK_BLOCK_3_X 595
#define GEN_BRICK_BLOCK_3_Y 110
#define GEN_BRICK_BLOCK_3_Z -180
#define GEN_BRICK_BLOCK_3_DIR 0
#define GEN_BRICK_BLOCK_3_VEC 595,110,-180
#define GEN_BRICK_BLOCK_3_XYZA 595, 110, -180, 0
#define GEN_BRICK_BLOCK_3_PARAMS GEN_BRICK_BLOCK_3_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_4
#define GEN_BRICK_BLOCK_4_X 720
#define GEN_BRICK_BLOCK_4_Y 135
#define GEN_BRICK_BLOCK_4_Z -180
#define GEN_BRICK_BLOCK_4_DIR 0
#define GEN_BRICK_BLOCK_4_VEC 720,135,-180
#define GEN_BRICK_BLOCK_4_XYZA 720, 135, -180, 0
#define GEN_BRICK_BLOCK_4_PARAMS GEN_BRICK_BLOCK_4_XYZA

// type: Marker:Entity:BlueSwitch
// name: BlueSwitch_1
#define GEN_BLUE_SWITCH_1_X -470
#define GEN_BLUE_SWITCH_1_Y 0
#define GEN_BLUE_SWITCH_1_Z -150
#define GEN_BLUE_SWITCH_1_DIR 0
#define GEN_BLUE_SWITCH_1_VEC -470,0,-150
#define GEN_BLUE_SWITCH_1_XYZA -470, 0, -150, 0
#define GEN_BLUE_SWITCH_1_PARAMS GEN_BLUE_SWITCH_1_XYZA
#define GEN_BLUE_SWITCH_1_FLAG AF_NOK12_HitSwitch

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -560
#define GEN_YELLOW_BLOCK_1_Y 60
#define GEN_YELLOW_BLOCK_1_Z -120
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -560,60,-120
#define GEN_YELLOW_BLOCK_1_XYZA -560, 60, -120, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_POW_BLOCK
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_NOK12_ItemBlock_POWBlock

// type: Marker:Entity:MulticoinBlock
// name: MulticoinBlock_1
#define GEN_MULTICOIN_BLOCK_1_X 820
#define GEN_MULTICOIN_BLOCK_1_Y 135
#define GEN_MULTICOIN_BLOCK_1_Z -180
#define GEN_MULTICOIN_BLOCK_1_DIR 0
#define GEN_MULTICOIN_BLOCK_1_VEC 820,135,-180
#define GEN_MULTICOIN_BLOCK_1_XYZA 820, 135, -180, 0
#define GEN_MULTICOIN_BLOCK_1_PARAMS GEN_MULTICOIN_BLOCK_1_XYZA
#define GEN_MULTICOIN_BLOCK_1_FLAG GF_NOK12_MultiCoinBrick

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -422
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -120
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -422,0,-120
#define GEN_BOMB_POS_1_RAD 0

