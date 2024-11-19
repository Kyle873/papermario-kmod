/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    { -410.0,  870.0,  -65.0,   90.0 }, \
    {  435.0,  670.0,  -10.0,  270.0 }, \
    {  450.0,  470.0,  220.0,  270.0 }, \
    { -425.0,   60.0,  325.0,   90.0 }, \
    {  440.0,   20.0,  280.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   400,     0,   800,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(  -200,     0,   600,  -400) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(   500,     0,     0,  -400) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     0,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_5 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_5) \
    TEX_PAN_PARAMS_STEP(   300,  -500,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_D \
    TEX_PAN_PARAMS_ID(TEX_PANNER_D) \
    TEX_PAN_PARAMS_MAX(0x40000) \
    TEX_PAN_PARAMS_STEP( 32768,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     6,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -410
#define GEN_ENTRY_0_Y 870
#define GEN_ENTRY_0_Z -65
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -410,870,-65

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 435
#define GEN_ENTRY_1_Y 670
#define GEN_ENTRY_1_Z -10
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 435,670,-10

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 450
#define GEN_ENTRY_2_Y 470
#define GEN_ENTRY_2_Z 220
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 450,470,220

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -425
#define GEN_ENTRY_3_Y 60
#define GEN_ENTRY_3_Z 325
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC -425,60,325

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 440
#define GEN_ENTRY_4_Y 20
#define GEN_ENTRY_4_Z 280
#define GEN_ENTRY_4_DIR 270
#define GEN_ENTRY_4_VEC 440,20,280

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X 392
#define GEN_NPC_KOLORADO_Y 470
#define GEN_NPC_KOLORADO_Z 218
#define GEN_NPC_KOLORADO_DIR 90
#define GEN_NPC_KOLORADO_VEC 392,470,218
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ZiplineDummy1
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_ZIPLINE_DUMMY1_X 392
#define GEN_NPC_ZIPLINE_DUMMY1_Y 470
#define GEN_NPC_ZIPLINE_DUMMY1_Z 218
#define GEN_NPC_ZIPLINE_DUMMY1_DIR 90
#define GEN_NPC_ZIPLINE_DUMMY1_VEC 392,470,218
#define GEN_NPC_ZIPLINE_DUMMY1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ZiplineDummy2
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_ZIPLINE_DUMMY2_X 392
#define GEN_NPC_ZIPLINE_DUMMY2_Y 470
#define GEN_NPC_ZIPLINE_DUMMY2_Z 218
#define GEN_NPC_ZIPLINE_DUMMY2_DIR 90
#define GEN_NPC_ZIPLINE_DUMMY2_VEC 392,470,218
#define GEN_NPC_ZIPLINE_DUMMY2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_SpikeTop_01
// anim: ANIM_SpikeTop_Anim03
#define GEN_NPC_SPIKE_TOP_01_X 140
#define GEN_NPC_SPIKE_TOP_01_Y 670
#define GEN_NPC_SPIKE_TOP_01_Z -20
#define GEN_NPC_SPIKE_TOP_01_DIR 90
#define GEN_NPC_SPIKE_TOP_01_VEC 140,670,-20
#define GEN_NPC_SPIKE_TOP_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 140, 670, -20 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { -50, 670, -25 }, \
        .detectSize  = { 240, 115 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikeTop_02
// anim: ANIM_SpikeTop_Anim03
#define GEN_NPC_SPIKE_TOP_02_X -200
#define GEN_NPC_SPIKE_TOP_02_Y 670
#define GEN_NPC_SPIKE_TOP_02_Z -35
#define GEN_NPC_SPIKE_TOP_02_DIR 270
#define GEN_NPC_SPIKE_TOP_02_VEC -200,670,-35
#define GEN_NPC_SPIKE_TOP_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -200, 670, -35 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { -50, 670, -25 }, \
        .detectSize  = { 240, 115 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikeTop_03
// anim: ANIM_SpikeTop_Anim03
#define GEN_NPC_SPIKE_TOP_03_X 30
#define GEN_NPC_SPIKE_TOP_03_Y 20
#define GEN_NPC_SPIKE_TOP_03_Z 320
#define GEN_NPC_SPIKE_TOP_03_DIR 270
#define GEN_NPC_SPIKE_TOP_03_VEC 30,20,320
#define GEN_NPC_SPIKE_TOP_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 30, 20, 320 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 140, 20, 275 }, \
        .detectSize  = { 180, 95 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Piranha
// anim: ANIM_LargePiranha_Putrid_Anim01
#define GEN_NPC_PIRANHA_X 260
#define GEN_NPC_PIRANHA_Y 20
#define GEN_NPC_PIRANHA_Z 255
#define GEN_NPC_PIRANHA_DIR 270
#define GEN_NPC_PIRANHA_VEC 260,20,255
#define GEN_NPC_PIRANHA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 260, 20, 255 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 260, 20, 255 }, \
        .detectSize  = { 100, 50 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 75
#define GEN_ITEM_1_Y 290
#define GEN_ITEM_1_Z 235
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 75,290,235
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_FIRE_SHIELD
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_KZN03_Item_FireShield

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 85
#define GEN_ITEM_2_Y 795
#define GEN_ITEM_2_Z -105
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 85,795,-105
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_POW_BLOCK
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FALL_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_KZN03_Item_POWBlock

// type: Marker:Entity:SavePoint
// name: SavePoint_1
#define GEN_SAVE_POINT_1_X 365
#define GEN_SAVE_POINT_1_Y 530
#define GEN_SAVE_POINT_1_Z 135
#define GEN_SAVE_POINT_1_DIR 0
#define GEN_SAVE_POINT_1_VEC 365,530,135
#define GEN_SAVE_POINT_1_XYZA 365, 530, 135, 0
#define GEN_SAVE_POINT_1_PARAMS GEN_SAVE_POINT_1_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 215
#define GEN_BRICK_BLOCK_1_Y 745
#define GEN_BRICK_BLOCK_1_Z -105
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC 215,745,-105
#define GEN_BRICK_BLOCK_1_XYZA 215, 745, -105, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X 85
#define GEN_BRICK_BLOCK_2_Y 770
#define GEN_BRICK_BLOCK_2_Z -105
#define GEN_BRICK_BLOCK_2_DIR 0
#define GEN_BRICK_BLOCK_2_VEC 85,770,-105
#define GEN_BRICK_BLOCK_2_XYZA 85, 770, -105, 0
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_1
#define GEN_HAMMER3_BLOCK_1_X 490
#define GEN_HAMMER3_BLOCK_1_Y 470
#define GEN_HAMMER3_BLOCK_1_Z 210
#define GEN_HAMMER3_BLOCK_1_DIR 0
#define GEN_HAMMER3_BLOCK_1_VEC 490,470,210
#define GEN_HAMMER3_BLOCK_1_XYZA 490, 470, 210, 0
#define GEN_HAMMER3_BLOCK_1_PARAMS GEN_HAMMER3_BLOCK_1_XYZA
#define GEN_HAMMER3_BLOCK_1_SCRIPT N(EVS_OnBreakBlock)

// type: Marker:Entity:ScriptSpring
// name: ScriptSpring_1
#define GEN_SCRIPT_SPRING_1_X 160
#define GEN_SCRIPT_SPRING_1_Y 30
#define GEN_SCRIPT_SPRING_1_Z 350
#define GEN_SCRIPT_SPRING_1_DIR 0
#define GEN_SCRIPT_SPRING_1_VEC 160,30,350
#define GEN_SCRIPT_SPRING_1_XYZA 160, 30, 350, 0
#define GEN_SCRIPT_SPRING_1_PARAMS GEN_SCRIPT_SPRING_1_XYZA
#define GEN_SCRIPT_SPRING_1_SCRIPT N(EVS_UseSpringA)

// type: Marker:Entity:ScriptSpring
// name: ScriptSpring_2
#define GEN_SCRIPT_SPRING_2_X 335
#define GEN_SCRIPT_SPRING_2_Y 265
#define GEN_SCRIPT_SPRING_2_Z 360
#define GEN_SCRIPT_SPRING_2_DIR 0
#define GEN_SCRIPT_SPRING_2_VEC 335,265,360
#define GEN_SCRIPT_SPRING_2_XYZA 335, 265, 360, 0
#define GEN_SCRIPT_SPRING_2_PARAMS GEN_SCRIPT_SPRING_2_XYZA
#define GEN_SCRIPT_SPRING_2_SCRIPT N(EVS_UseSpringB)

// type: Marker:Entity:ScriptSpring
// name: ScriptSpring_3
#define GEN_SCRIPT_SPRING_3_X -410
#define GEN_SCRIPT_SPRING_3_Y 645
#define GEN_SCRIPT_SPRING_3_Z 120
#define GEN_SCRIPT_SPRING_3_DIR 0
#define GEN_SCRIPT_SPRING_3_VEC -410,645,120
#define GEN_SCRIPT_SPRING_3_XYZA -410, 645, 120, 0
#define GEN_SCRIPT_SPRING_3_PARAMS GEN_SCRIPT_SPRING_3_XYZA
#define GEN_SCRIPT_SPRING_3_SCRIPT N(EVS_UseSpringC)

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 35
#define GEN_YELLOW_BLOCK_1_Y 730
#define GEN_YELLOW_BLOCK_1_Z -105
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 35,730,-105
#define GEN_YELLOW_BLOCK_1_XYZA 35, 730, -105, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_KZN03_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X -15
#define GEN_YELLOW_BLOCK_2_Y 730
#define GEN_YELLOW_BLOCK_2_Z -105
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC -15,730,-105
#define GEN_YELLOW_BLOCK_2_XYZA -15, 730, -105, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_KZN03_ItemBlock_CoinB

// type: Marker:Entity:YellowBlock
// name: YellowBlock_3
#define GEN_YELLOW_BLOCK_3_X -65
#define GEN_YELLOW_BLOCK_3_Y 730
#define GEN_YELLOW_BLOCK_3_Z -105
#define GEN_YELLOW_BLOCK_3_DIR 0
#define GEN_YELLOW_BLOCK_3_VEC -65,730,-105
#define GEN_YELLOW_BLOCK_3_XYZA -65, 730, -105, 0
#define GEN_YELLOW_BLOCK_3_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_3_PARAMS GEN_YELLOW_BLOCK_3_XYZA, GEN_YELLOW_BLOCK_3_ITEM
#define GEN_YELLOW_BLOCK_3_FLAG GF_KZN03_ItemBlock_CoinC

// type: Marker:Entity:YellowBlock
// name: YellowBlock_4
#define GEN_YELLOW_BLOCK_4_X -115
#define GEN_YELLOW_BLOCK_4_Y 730
#define GEN_YELLOW_BLOCK_4_Z -105
#define GEN_YELLOW_BLOCK_4_DIR 0
#define GEN_YELLOW_BLOCK_4_VEC -115,730,-105
#define GEN_YELLOW_BLOCK_4_XYZA -115, 730, -105, 0
#define GEN_YELLOW_BLOCK_4_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_4_PARAMS GEN_YELLOW_BLOCK_4_XYZA, GEN_YELLOW_BLOCK_4_ITEM
#define GEN_YELLOW_BLOCK_4_FLAG GF_KZN03_ItemBlock_CoinD

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X 234
#define GEN_PATH_1_Y 914
#define GEN_PATH_1_Z -55
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC 234,914,-55
#define GEN_PATH_1_PATH \
    { -327, 1009,  -55 }, \
    {  234,  914,  -55 },

// type: Marker:Path
// name: Path_2
#define GEN_PATH_2_X -362
#define GEN_PATH_2_Y 267
#define GEN_PATH_2_Z 255
#define GEN_PATH_2_DIR 0
#define GEN_PATH_2_VEC -362,267,255
#define GEN_PATH_2_PATH \
    {  297,  608,  255 }, \
    { -362,  267,  255 },

