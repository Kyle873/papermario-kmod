/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_FLOWER_FIELDS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -720.0,    0.0,    0.0,   90.0 }, \
    {  710.0,  100.0,    0.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   140,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -200,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -720
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -720,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 710
#define GEN_ENTRY_1_Y 100
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 710,100,0

// type: Marker:NPC
// name: NPC_RuffPuff_01
// anim: ANIM_RuffPuff_Still
#define GEN_NPC_RUFF_PUFF_01_X 440
#define GEN_NPC_RUFF_PUFF_01_Y 145
#define GEN_NPC_RUFF_PUFF_01_Z 15
#define GEN_NPC_RUFF_PUFF_01_DIR 90
#define GEN_NPC_RUFF_PUFF_01_VEC 440,145,15
#define GEN_NPC_RUFF_PUFF_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 440, 145, 15 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 485, 145, 55 }, \
        .detectSize  = { 225, 95 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_RuffPuff_02
// anim: ANIM_RuffPuff_Still
#define GEN_NPC_RUFF_PUFF_02_X 600
#define GEN_NPC_RUFF_PUFF_02_Y 145
#define GEN_NPC_RUFF_PUFF_02_Z 15
#define GEN_NPC_RUFF_PUFF_02_DIR 270
#define GEN_NPC_RUFF_PUFF_02_VEC 600,145,15
#define GEN_NPC_RUFF_PUFF_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 600, 145, 15 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 485, 145, 55 }, \
        .detectSize  = { 225, 95 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 640
#define GEN_ITEM_1_Y 145
#define GEN_ITEM_1_Z -100
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 640,145,-100
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FALL_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_FLO16_Item_StarPiece

// type: Marker:Entity:ScriptSpring
// name: ScriptSpring_1
#define GEN_SCRIPT_SPRING_1_X 472
#define GEN_SCRIPT_SPRING_1_Y 100
#define GEN_SCRIPT_SPRING_1_Z -100
#define GEN_SCRIPT_SPRING_1_DIR 0
#define GEN_SCRIPT_SPRING_1_VEC 472,100,-100
#define GEN_SCRIPT_SPRING_1_XYZA 472, 100, -100, 0
#define GEN_SCRIPT_SPRING_1_PARAMS GEN_SCRIPT_SPRING_1_XYZA
#define GEN_SCRIPT_SPRING_1_SCRIPT N(EVS_UseSpring)

// type: Marker:Entity:SuperBlock
// name: SuperBlock_1
#define GEN_SUPER_BLOCK_1_X 350
#define GEN_SUPER_BLOCK_1_Y 240
#define GEN_SUPER_BLOCK_1_Z -100
#define GEN_SUPER_BLOCK_1_DIR 0
#define GEN_SUPER_BLOCK_1_VEC 350,240,-100
#define GEN_SUPER_BLOCK_1_XYZA 350, 240, -100, 0
#define GEN_SUPER_BLOCK_1_PARAMS GEN_SUPER_BLOCK_1_XYZA
#define GEN_SUPER_BLOCK_1_VAR MV_SuperBlock
#define GEN_SUPER_BLOCK_1_FLAG GF_FLO16_SuperBlock

// type: Marker:Volume
// name: FlowerVolume_1
#define GEN_FLOWER_VOLUME_1_X -500
#define GEN_FLOWER_VOLUME_1_Y 125
#define GEN_FLOWER_VOLUME_1_Z -97
#define GEN_FLOWER_VOLUME_1_DIR 0
#define GEN_FLOWER_VOLUME_1_VEC -500,125,-97
#define GEN_FLOWER_VOLUME_1_MIN_X -740
#define GEN_FLOWER_VOLUME_1_MIN_Y 100
#define GEN_FLOWER_VOLUME_1_MIN_Z -140
#define GEN_FLOWER_VOLUME_1_MIN_XZ -740,-140
#define GEN_FLOWER_VOLUME_1_MIN_VEC -740,100,-140
#define GEN_FLOWER_VOLUME_1_MAX_X -260
#define GEN_FLOWER_VOLUME_1_MAX_Y 150
#define GEN_FLOWER_VOLUME_1_MAX_Z -55
#define GEN_FLOWER_VOLUME_1_MAX_XZ -260,-55
#define GEN_FLOWER_VOLUME_1_MAX_VEC -260,150,-55

// type: Marker:Volume
// name: FlowerVolume_2
#define GEN_FLOWER_VOLUME_2_X 487
#define GEN_FLOWER_VOLUME_2_Y 205
#define GEN_FLOWER_VOLUME_2_Z -97
#define GEN_FLOWER_VOLUME_2_DIR 0
#define GEN_FLOWER_VOLUME_2_VEC 487,205,-97
#define GEN_FLOWER_VOLUME_2_MIN_X 250
#define GEN_FLOWER_VOLUME_2_MIN_Y 180
#define GEN_FLOWER_VOLUME_2_MIN_Z -140
#define GEN_FLOWER_VOLUME_2_MIN_XZ 250,-140
#define GEN_FLOWER_VOLUME_2_MIN_VEC 250,180,-140
#define GEN_FLOWER_VOLUME_2_MAX_X 725
#define GEN_FLOWER_VOLUME_2_MAX_Y 230
#define GEN_FLOWER_VOLUME_2_MAX_Z -55
#define GEN_FLOWER_VOLUME_2_MAX_XZ 725,-55
#define GEN_FLOWER_VOLUME_2_MAX_VEC 725,230,-55

// type: Marker:Position
// name: LavaReset_o190
#define GEN_LAVA_RESET_O190_X -310
#define GEN_LAVA_RESET_O190_Y 0
#define GEN_LAVA_RESET_O190_Z 0
#define GEN_LAVA_RESET_O190_DIR 0
#define GEN_LAVA_RESET_O190_VEC -310,0,0

// type: Marker:Position
// name: LavaReset_o191
#define GEN_LAVA_RESET_O191_X 305
#define GEN_LAVA_RESET_O191_Y 100
#define GEN_LAVA_RESET_O191_Z 0
#define GEN_LAVA_RESET_O191_DIR 0
#define GEN_LAVA_RESET_O191_VEC 305,100,0

