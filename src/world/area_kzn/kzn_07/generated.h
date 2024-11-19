/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    {  290.0,    0.0,   70.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_STEP(  -400,     0,  -800,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0,  -400,     0,  -800) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 290
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 70
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 290,0,70

// type: Marker:NPC
// name: NPC_Bubble_01
// anim: ANIM_LavaBubble_Anim01
#define GEN_NPC_BUBBLE_01_X -200
#define GEN_NPC_BUBBLE_01_Y 50
#define GEN_NPC_BUBBLE_01_Z 150
#define GEN_NPC_BUBBLE_01_DIR 90
#define GEN_NPC_BUBBLE_01_VEC -200,50,150
#define GEN_NPC_BUBBLE_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -200, 50, 150 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -200, 50, 150 }, \
        .detectSize  = { 300 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bubble_02
// anim: ANIM_LavaBubble_Anim01
#define GEN_NPC_BUBBLE_02_X -250
#define GEN_NPC_BUBBLE_02_Y 80
#define GEN_NPC_BUBBLE_02_Z 50
#define GEN_NPC_BUBBLE_02_DIR 90
#define GEN_NPC_BUBBLE_02_VEC -250,80,50
#define GEN_NPC_BUBBLE_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -250, 80, 50 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -250, 80, 50 }, \
        .detectSize  = { 300 }, \
    }, \
}

// type: Marker:Entity:Hammer3BlockWideZ
// name: Hammer3BlockWideZ_1
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_X 175
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_Y 35
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_Z -185
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_DIR 0
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_VEC 175,35,-185
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_XYZA 175, 35, -185, 0
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_PARAMS GEN_HAMMER3_BLOCK_WIDE_Z_1_XYZA
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_SCRIPT N(EVS_OnBreakBlock)

// type: Marker:Entity:GiantChest
// name: GiantChest_1
#define GEN_GIANT_CHEST_1_X 0
#define GEN_GIANT_CHEST_1_Y 45
#define GEN_GIANT_CHEST_1_Z -290
#define GEN_GIANT_CHEST_1_DIR 0
#define GEN_GIANT_CHEST_1_VEC 0,45,-290
#define GEN_GIANT_CHEST_1_XYZA 0, 45, -290, 0
#define GEN_GIANT_CHEST_1_PARAMS GEN_GIANT_CHEST_1_XYZA
#define GEN_GIANT_CHEST_1_FLAG GF_KZN07_GiantChest

// type: Marker:BlockGrid
// name: PushBlocks_1
#define GEN_PUSH_BLOCKS_1_X -62
#define GEN_PUSH_BLOCKS_1_Y 0
#define GEN_PUSH_BLOCKS_1_Z 35
#define GEN_PUSH_BLOCKS_1_DIR 0
#define GEN_PUSH_BLOCKS_1_VEC -62,0,35
#define GEN_PUSH_BLOCKS_1_GRID_PARAMS 0, 15, 5, -62, 0, 35, NULL
#define GEN_PUSH_BLOCKS_1_GRID_CONTENT \
    Call(SetPushBlock, 0, 8, 1, PUSH_GRID_BLOCK) \
    Call(SetPushBlock, 0, 11, 4, PUSH_GRID_BLOCK)

// type: Marker:Position
// name: LavaReset_o365
#define GEN_LAVA_RESET_O365_X 120
#define GEN_LAVA_RESET_O365_Y 0
#define GEN_LAVA_RESET_O365_Z 100
#define GEN_LAVA_RESET_O365_DIR 0
#define GEN_LAVA_RESET_O365_VEC 120,0,100

// type: Marker:Position
// name: LavaReset_o411
#define GEN_LAVA_RESET_O411_X -120
#define GEN_LAVA_RESET_O411_Y 0
#define GEN_LAVA_RESET_O411_Z 100
#define GEN_LAVA_RESET_O411_DIR 0
#define GEN_LAVA_RESET_O411_VEC -120,0,100

