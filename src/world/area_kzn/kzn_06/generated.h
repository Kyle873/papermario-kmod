/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    {  385.0,  115.0,   55.0,  270.0 }, \
    { -385.0,   75.0,   68.0,   90.0 }, \
    {  400.0,    5.0,  175.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_STEP(     0,  -400,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   400,     0,   800,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 385
#define GEN_ENTRY_0_Y 115
#define GEN_ENTRY_0_Z 55
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 385,115,55

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -385
#define GEN_ENTRY_1_Y 75
#define GEN_ENTRY_1_Z 68
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -385,75,68

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 400
#define GEN_ENTRY_2_Y 5
#define GEN_ENTRY_2_Z 175
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 400,5,175

// type: Marker:Entity:Hammer3BlockWideZ
// name: Hammer3BlockWideZ_1
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_X 385
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_Y 5
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_Z 180
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_DIR 0
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_VEC 385,5,180
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_XYZA 385, 5, 180, 0
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_PARAMS GEN_HAMMER3_BLOCK_WIDE_Z_1_XYZA
#define GEN_HAMMER3_BLOCK_WIDE_Z_1_SCRIPT N(EVS_OnBreakBlock)

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 325
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 205
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -30
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 325,205,-30
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 325, 205, -30, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_LIFE_SHROOM
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_KZN06_HiddenItem_LifeShroom

// type: Marker:BlockGrid
// name: PushBlocks_1
#define GEN_PUSH_BLOCKS_1_X -330
#define GEN_PUSH_BLOCKS_1_Y 145
#define GEN_PUSH_BLOCKS_1_Z -90
#define GEN_PUSH_BLOCKS_1_DIR 0
#define GEN_PUSH_BLOCKS_1_VEC -330,145,-90
#define GEN_PUSH_BLOCKS_1_GRID_PARAMS 0, 12, 1, -330, 145, -90, NULL
#define GEN_PUSH_BLOCKS_1_GRID_CONTENT \
    Call(SetPushBlock, 0, 4, 0, PUSH_GRID_BLOCK) \
    Call(SetPushBlock, 0, 6, 0, PUSH_GRID_BLOCK) \
    Call(SetPushBlock, 0, 8, 0, PUSH_GRID_BLOCK)

// type: Marker:BlockGrid
// name: PushBlocks_2
#define GEN_PUSH_BLOCKS_2_X -330
#define GEN_PUSH_BLOCKS_2_Y 120
#define GEN_PUSH_BLOCKS_2_Z -90
#define GEN_PUSH_BLOCKS_2_DIR 0
#define GEN_PUSH_BLOCKS_2_VEC -330,120,-90
#define GEN_PUSH_BLOCKS_2_GRID_PARAMS 0, 12, 1, -330, 120, -90, NULL
#define GEN_PUSH_BLOCKS_2_GRID_CONTENT \
    Call(FillPushBlockZ, 0, 0, 9, 11, PUSH_GRID_BLOCK)

// type: Marker:Position
// name: LavaReset_o250
#define GEN_LAVA_RESET_O250_X 10
#define GEN_LAVA_RESET_O250_Y 145
#define GEN_LAVA_RESET_O250_Z -35
#define GEN_LAVA_RESET_O250_DIR 0
#define GEN_LAVA_RESET_O250_VEC 10,145,-35

// type: Marker:Position
// name: LavaReset_o468
#define GEN_LAVA_RESET_O468_X -150
#define GEN_LAVA_RESET_O468_Y 145
#define GEN_LAVA_RESET_O468_Z -35
#define GEN_LAVA_RESET_O468_DIR 0
#define GEN_LAVA_RESET_O468_VEC -150,145,-35

// type: Marker:Position
// name: LavaReset_o394
#define GEN_LAVA_RESET_O394_X -210
#define GEN_LAVA_RESET_O394_Y 75
#define GEN_LAVA_RESET_O394_Z 100
#define GEN_LAVA_RESET_O394_DIR 0
#define GEN_LAVA_RESET_O394_VEC -210,75,100

// type: Marker:Position
// name: LavaReset_o440
#define GEN_LAVA_RESET_O440_X 60
#define GEN_LAVA_RESET_O440_Y 75
#define GEN_LAVA_RESET_O440_Z 100
#define GEN_LAVA_RESET_O440_DIR 0
#define GEN_LAVA_RESET_O440_VEC 60,75,100

// type: Marker:Position
// name: LavaReset_o437
#define GEN_LAVA_RESET_O437_X 60
#define GEN_LAVA_RESET_O437_Y 75
#define GEN_LAVA_RESET_O437_Z 100
#define GEN_LAVA_RESET_O437_DIR 0
#define GEN_LAVA_RESET_O437_VEC 60,75,100

