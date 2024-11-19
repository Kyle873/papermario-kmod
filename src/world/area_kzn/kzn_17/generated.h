/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    { -670.0,    0.0,  160.0,   90.0 }, \
    {  620.0,    0.0,   30.0,  270.0 },

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

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -670
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 160
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -670,0,160

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 620
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 30
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 620,0,30

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X 0
#define GEN_NPC_KOLORADO_Y -1000
#define GEN_NPC_KOLORADO_Z 0
#define GEN_NPC_KOLORADO_DIR 90
#define GEN_NPC_KOLORADO_VEC 0,-1000,0
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Piranha
// anim: ANIM_LargePiranha_Putrid_Anim01
#define GEN_NPC_PIRANHA_X -325
#define GEN_NPC_PIRANHA_Y 0
#define GEN_NPC_PIRANHA_Z 150
#define GEN_NPC_PIRANHA_DIR 270
#define GEN_NPC_PIRANHA_VEC -325,0,150
#define GEN_NPC_PIRANHA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -325, 0, 150 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { -390, 0, 130 }, \
        .detectSize  = { 270, 130 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikeTop
// anim: ANIM_SpikeTop_Anim03
#define GEN_NPC_SPIKE_TOP_X -450
#define GEN_NPC_SPIKE_TOP_Y 0
#define GEN_NPC_SPIKE_TOP_Z 100
#define GEN_NPC_SPIKE_TOP_DIR 270
#define GEN_NPC_SPIKE_TOP_VEC -450,0,100
#define GEN_NPC_SPIKE_TOP_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -450, 0, 100 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { -450, 0, 100 }, \
        .detectSize  = { 270, 130 }, \
    }, \
}

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_1
#define GEN_HAMMER3_BLOCK_1_X -195
#define GEN_HAMMER3_BLOCK_1_Y 50
#define GEN_HAMMER3_BLOCK_1_Z 27
#define GEN_HAMMER3_BLOCK_1_DIR 0
#define GEN_HAMMER3_BLOCK_1_VEC -195,50,27
#define GEN_HAMMER3_BLOCK_1_XYZA -195, 50, 27, 0
#define GEN_HAMMER3_BLOCK_1_PARAMS GEN_HAMMER3_BLOCK_1_XYZA
#define GEN_HAMMER3_BLOCK_1_SCRIPT N(EVS_OnBreakBlockA)

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_2
#define GEN_HAMMER3_BLOCK_2_X -245
#define GEN_HAMMER3_BLOCK_2_Y 60
#define GEN_HAMMER3_BLOCK_2_Z 27
#define GEN_HAMMER3_BLOCK_2_DIR 0
#define GEN_HAMMER3_BLOCK_2_VEC -245,60,27
#define GEN_HAMMER3_BLOCK_2_XYZA -245, 60, 27, 0
#define GEN_HAMMER3_BLOCK_2_PARAMS GEN_HAMMER3_BLOCK_2_XYZA
#define GEN_HAMMER3_BLOCK_2_SCRIPT N(EVS_OnBreakBlockB)

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_3
#define GEN_HAMMER3_BLOCK_3_X -295
#define GEN_HAMMER3_BLOCK_3_Y 70
#define GEN_HAMMER3_BLOCK_3_Z 27
#define GEN_HAMMER3_BLOCK_3_DIR 0
#define GEN_HAMMER3_BLOCK_3_VEC -295,70,27
#define GEN_HAMMER3_BLOCK_3_XYZA -295, 70, 27, 0
#define GEN_HAMMER3_BLOCK_3_PARAMS GEN_HAMMER3_BLOCK_3_XYZA
#define GEN_HAMMER3_BLOCK_3_SCRIPT N(EVS_OnBreakBlockC)

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_4
#define GEN_HAMMER3_BLOCK_4_X -345
#define GEN_HAMMER3_BLOCK_4_Y 80
#define GEN_HAMMER3_BLOCK_4_Z 27
#define GEN_HAMMER3_BLOCK_4_DIR 0
#define GEN_HAMMER3_BLOCK_4_VEC -345,80,27
#define GEN_HAMMER3_BLOCK_4_XYZA -345, 80, 27, 0
#define GEN_HAMMER3_BLOCK_4_PARAMS GEN_HAMMER3_BLOCK_4_XYZA
#define GEN_HAMMER3_BLOCK_4_SCRIPT N(EVS_OnBreakBlockD)

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_5
#define GEN_HAMMER3_BLOCK_5_X -395
#define GEN_HAMMER3_BLOCK_5_Y 90
#define GEN_HAMMER3_BLOCK_5_Z 27
#define GEN_HAMMER3_BLOCK_5_DIR 0
#define GEN_HAMMER3_BLOCK_5_VEC -395,90,27
#define GEN_HAMMER3_BLOCK_5_XYZA -395, 90, 27, 0
#define GEN_HAMMER3_BLOCK_5_PARAMS GEN_HAMMER3_BLOCK_5_XYZA
#define GEN_HAMMER3_BLOCK_5_SCRIPT N(EVS_OnBreakBlockE)

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_6
#define GEN_HAMMER3_BLOCK_6_X -445
#define GEN_HAMMER3_BLOCK_6_Y 100
#define GEN_HAMMER3_BLOCK_6_Z 27
#define GEN_HAMMER3_BLOCK_6_DIR 0
#define GEN_HAMMER3_BLOCK_6_VEC -445,100,27
#define GEN_HAMMER3_BLOCK_6_XYZA -445, 100, 27, 0
#define GEN_HAMMER3_BLOCK_6_PARAMS GEN_HAMMER3_BLOCK_6_XYZA
#define GEN_HAMMER3_BLOCK_6_SCRIPT N(EVS_OnBreakBlockF)

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_7
#define GEN_HAMMER3_BLOCK_7_X -495
#define GEN_HAMMER3_BLOCK_7_Y 110
#define GEN_HAMMER3_BLOCK_7_Z 27
#define GEN_HAMMER3_BLOCK_7_DIR 0
#define GEN_HAMMER3_BLOCK_7_VEC -495,110,27
#define GEN_HAMMER3_BLOCK_7_XYZA -495, 110, 27, 0
#define GEN_HAMMER3_BLOCK_7_PARAMS GEN_HAMMER3_BLOCK_7_XYZA
#define GEN_HAMMER3_BLOCK_7_SCRIPT N(EVS_OnBreakBlockG)

// type: Marker:BlockGrid
// name: PushBlocks_1
#define GEN_PUSH_BLOCKS_1_X -119
#define GEN_PUSH_BLOCKS_1_Y -3
#define GEN_PUSH_BLOCKS_1_Z 5
#define GEN_PUSH_BLOCKS_1_DIR 0
#define GEN_PUSH_BLOCKS_1_VEC -119,-3,5
#define GEN_PUSH_BLOCKS_1_GRID_PARAMS 0, 29, 2, -119, -3, 5, NULL
#define GEN_PUSH_BLOCKS_1_GRID_CONTENT \
    Call(SetPushBlock, 0, 28, 1, PUSH_GRID_BLOCK)

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X 447
#define GEN_PATH_1_Y 0
#define GEN_PATH_1_Z 70
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC 447,0,70
#define GEN_PATH_1_PATH \
    {  447,    0,   39 }, \
    {  432,    5,   47 }, \
    {  427,   20,   55 }, \
    {  432,    5,   62 }, \
    {  447,    0,   70 },

