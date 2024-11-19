/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PLEASANT_PATH

// type: EntryList
#define GEN_ENTRY_LIST \
    { -855.0,   75.0,  -35.0,   90.0 }, \
    {  436.0,    0.0,  -49.0,  270.0 },

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

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(     0, -1000,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -855
#define GEN_ENTRY_0_Y 75
#define GEN_ENTRY_0_Z -35
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -855,75,-35

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 436
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -49
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 436,0,-49

// type: Marker:NPC
// name: NPC_KoopaTroopa_01
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_01_X -667
#define GEN_NPC_KOOPA_TROOPA_01_Y 75
#define GEN_NPC_KOOPA_TROOPA_01_Z -50
#define GEN_NPC_KOOPA_TROOPA_01_DIR 270
#define GEN_NPC_KOOPA_TROOPA_01_VEC -667,75,-50
#define GEN_NPC_KOOPA_TROOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -690, 75, -50 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -670, 75, -112 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ParaTroopa
// anim: ANIM_ParaTroopa_Idle
#define GEN_NPC_PARA_TROOPA_X 184
#define GEN_NPC_PARA_TROOPA_Y 50
#define GEN_NPC_PARA_TROOPA_Z -100
#define GEN_NPC_PARA_TROOPA_DIR 270
#define GEN_NPC_PARA_TROOPA_VEC 184,50,-100
#define GEN_NPC_PARA_TROOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 184, 50, -100 }, \
        .wanderSize  = { 65, 40 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 238, 50, -100 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikedGoomba
// anim: ANIM_SpikedGoomba_Idle
#define GEN_NPC_SPIKED_GOOMBA_X -257
#define GEN_NPC_SPIKED_GOOMBA_Y 0
#define GEN_NPC_SPIKED_GOOMBA_Z -47
#define GEN_NPC_SPIKED_GOOMBA_DIR 90
#define GEN_NPC_SPIKED_GOOMBA_VEC -257,0,-47
#define GEN_NPC_SPIKED_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -257, 0, -47 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -257, 0, -47 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_02
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_02_X 0
#define GEN_NPC_KOOPA_TROOPA_02_Y -1000
#define GEN_NPC_KOOPA_TROOPA_02_Z 0
#define GEN_NPC_KOOPA_TROOPA_02_DIR 0
#define GEN_NPC_KOOPA_TROOPA_02_VEC 0,-1000,0
#define GEN_NPC_KOOPA_TROOPA_02_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -655
#define GEN_ITEM_1_Y 75
#define GEN_ITEM_1_Z -35
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -655,75,-35
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_COIN
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_NOK14_Item_CoinA

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X -640
#define GEN_ITEM_2_Y 75
#define GEN_ITEM_2_Z -20
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC -640,75,-20
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_COIN
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_NOK14_Item_CoinB

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X -640
#define GEN_ITEM_3_Y 75
#define GEN_ITEM_3_Z -50
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC -640,75,-50
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_COIN
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_3_FLAG GF_NOK14_Item_CoinC

// type: Marker:Entity:Item
// name: Item_4
#define GEN_ITEM_4_X -670
#define GEN_ITEM_4_Y 75
#define GEN_ITEM_4_Z -20
#define GEN_ITEM_4_DIR 0
#define GEN_ITEM_4_VEC -670,75,-20
#define GEN_ITEM_4_PARAMS GEN_ITEM_4_ITEM, GEN_ITEM_4_VEC, GEN_ITEM_4_SPAWN, GEN_ITEM_4_FLAG
#define GEN_ITEM_4_ITEM ITEM_COIN
#define GEN_ITEM_4_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_4_FLAG GF_NOK14_Item_CoinD

// type: Marker:Entity:Item
// name: Item_5
#define GEN_ITEM_5_X -670
#define GEN_ITEM_5_Y 75
#define GEN_ITEM_5_Z -50
#define GEN_ITEM_5_DIR 0
#define GEN_ITEM_5_VEC -670,75,-50
#define GEN_ITEM_5_PARAMS GEN_ITEM_5_ITEM, GEN_ITEM_5_VEC, GEN_ITEM_5_SPAWN, GEN_ITEM_5_FLAG
#define GEN_ITEM_5_ITEM ITEM_COIN
#define GEN_ITEM_5_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_5_FLAG GF_NOK14_Item_CoinE

// type: Marker:Entity:Item
// name: Item_6
#define GEN_ITEM_6_X -345
#define GEN_ITEM_6_Y 102
#define GEN_ITEM_6_Z -117
#define GEN_ITEM_6_DIR 0
#define GEN_ITEM_6_VEC -345,102,-117
#define GEN_ITEM_6_PARAMS GEN_ITEM_6_ITEM, GEN_ITEM_6_VEC, GEN_ITEM_6_SPAWN, GEN_ITEM_6_FLAG
#define GEN_ITEM_6_ITEM ITEM_THUNDER_BOLT
#define GEN_ITEM_6_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_6_FLAG GF_NOK14_Item_ThunderBolt

// type: Marker:Entity:Signpost
// name: Signpost_1
#define GEN_SIGNPOST_1_X -150
#define GEN_SIGNPOST_1_Y 0
#define GEN_SIGNPOST_1_Z -175
#define GEN_SIGNPOST_1_DIR 0
#define GEN_SIGNPOST_1_VEC -150,0,-175
#define GEN_SIGNPOST_1_XYZA -150, 0, -175, 0
#define GEN_SIGNPOST_1_PARAMS GEN_SIGNPOST_1_XYZA
#define GEN_SIGNPOST_1_SCRIPT N(EVS_ReadSign_NoEntry)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X -345
#define GEN_BRICK_BLOCK_1_Y 77
#define GEN_BRICK_BLOCK_1_Z -117
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC -345,77,-117
#define GEN_BRICK_BLOCK_1_XYZA -345, 77, -117, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA
#define GEN_BRICK_BLOCK_1_SCRIPT N(EVS_BreakBlock_ThunderBolt)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X 200
#define GEN_BRICK_BLOCK_2_Y 60
#define GEN_BRICK_BLOCK_2_Z -160
#define GEN_BRICK_BLOCK_2_DIR 0
#define GEN_BRICK_BLOCK_2_VEC 200,60,-160
#define GEN_BRICK_BLOCK_2_XYZA 200, 60, -160, 0
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_3
#define GEN_BRICK_BLOCK_3_X 300
#define GEN_BRICK_BLOCK_3_Y 60
#define GEN_BRICK_BLOCK_3_Z -160
#define GEN_BRICK_BLOCK_3_DIR 0
#define GEN_BRICK_BLOCK_3_VEC 300,60,-160
#define GEN_BRICK_BLOCK_3_XYZA 300, 60, -160, 0
#define GEN_BRICK_BLOCK_3_PARAMS GEN_BRICK_BLOCK_3_XYZA

// type: Marker:Entity:BlueSwitch
// name: BlueSwitch_1
#define GEN_BLUE_SWITCH_1_X 100
#define GEN_BLUE_SWITCH_1_Y 0
#define GEN_BLUE_SWITCH_1_Z -185
#define GEN_BLUE_SWITCH_1_DIR 0
#define GEN_BLUE_SWITCH_1_VEC 100,0,-185
#define GEN_BLUE_SWITCH_1_XYZA 100, 0, -185, 0
#define GEN_BLUE_SWITCH_1_PARAMS GEN_BLUE_SWITCH_1_XYZA
#define GEN_BLUE_SWITCH_1_FLAG AF_NOK14_HitSwitch

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 250
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 60
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -160
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 250,60,-160
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 250, 60, -160, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_FIRE_FLOWER
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_NOK14_HiddenItem_FireFlower

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X -650
#define GEN_HIDDEN_PANEL_1_Y 75
#define GEN_HIDDEN_PANEL_1_Z -50
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC -650,75,-50
#define GEN_HIDDEN_PANEL_1_XYZA -650, 75, -50, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o251
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_NOK14_HiddenPanel

