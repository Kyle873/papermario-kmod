/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  320.0,  -10.0,    0.0,  270.0 }, \
    {  100.0,   25.0,  -82.0,  180.0 }, \
    {  185.0,   25.0,  -82.0,  180.0 }, \
    {  270.0,   25.0,  -82.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(    50,   200,   110,   500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(   -50,  -900,   -70, -1200) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 320
#define GEN_ENTRY_0_Y -10
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 320,-10,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 100
#define GEN_ENTRY_1_Y 25
#define GEN_ENTRY_1_Z -82
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC 100,25,-82

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 185
#define GEN_ENTRY_2_Y 25
#define GEN_ENTRY_2_Z -82
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 185,25,-82

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 270
#define GEN_ENTRY_3_Y 25
#define GEN_ENTRY_3_Z -82
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC 270,25,-82

// type: Marker:NPC
// name: NPC_SpikedGoomba_01
// anim: ANIM_SpikedGoomba_Dark_Idle
#define GEN_NPC_SPIKED_GOOMBA_01_X 220
#define GEN_NPC_SPIKED_GOOMBA_01_Y -10
#define GEN_NPC_SPIKED_GOOMBA_01_Z -80
#define GEN_NPC_SPIKED_GOOMBA_01_DIR 270
#define GEN_NPC_SPIKED_GOOMBA_01_VEC 220,-10,-80
#define GEN_NPC_SPIKED_GOOMBA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 220, -10, -80 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 160, 0, -20 }, \
        .detectSize  = { 180, 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikedGoomba_02
// anim: ANIM_SpikedGoomba_Dark_Idle
#define GEN_NPC_SPIKED_GOOMBA_02_X 130
#define GEN_NPC_SPIKED_GOOMBA_02_Y -10
#define GEN_NPC_SPIKED_GOOMBA_02_Z 45
#define GEN_NPC_SPIKED_GOOMBA_02_DIR 90
#define GEN_NPC_SPIKED_GOOMBA_02_VEC 130,-10,45
#define GEN_NPC_SPIKED_GOOMBA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 130, -10, 45 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 160, 0, -20 }, \
        .detectSize  = { 180, 100 }, \
    }, \
}

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 25
#define GEN_BRICK_BLOCK_1_Y 50
#define GEN_BRICK_BLOCK_1_Z 0
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC 25,50,0
#define GEN_BRICK_BLOCK_1_XYZA 25, 50, 0, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA
#define GEN_BRICK_BLOCK_1_SCRIPT N(EVS_BreakBlock_DropSpring)

// type: Marker:Entity:Chest
// name: Chest_1
#define GEN_CHEST_1_X -185
#define GEN_CHEST_1_Y 60
#define GEN_CHEST_1_Z -25
#define GEN_CHEST_1_DIR 0
#define GEN_CHEST_1_VEC -185,60,-25
#define GEN_CHEST_1_XYZA -185, 60, -25, 0
#define GEN_CHEST_1_PARAMS GEN_CHEST_1_XYZA
#define GEN_CHEST_1_FLAG GF_TIK05_Chest_PowerSmash
#define GEN_CHEST_1_SCRIPT N(EVS_OpenChest)

// type: Marker:Entity:SimpleSpring
// name: SimpleSpring_1
#define GEN_SIMPLE_SPRING_1_X 25
#define GEN_SIMPLE_SPRING_1_Y 75
#define GEN_SIMPLE_SPRING_1_Z 0
#define GEN_SIMPLE_SPRING_1_DIR 0
#define GEN_SIMPLE_SPRING_1_VEC 25,75,0
#define GEN_SIMPLE_SPRING_1_XYZA 25, 75, 0, 0
#define GEN_SIMPLE_SPRING_1_HEIGHT 100
#define GEN_SIMPLE_SPRING_1_PARAMS GEN_SIMPLE_SPRING_1_XYZA, GEN_SIMPLE_SPRING_1_HEIGHT

// type: Marker:Entity:SimpleSpring
// name: SimpleSpring_2
#define GEN_SIMPLE_SPRING_2_X -35
#define GEN_SIMPLE_SPRING_2_Y -10
#define GEN_SIMPLE_SPRING_2_Z 0
#define GEN_SIMPLE_SPRING_2_DIR 0
#define GEN_SIMPLE_SPRING_2_VEC -35,-10,0
#define GEN_SIMPLE_SPRING_2_XYZA -35, -10, 0, 0
#define GEN_SIMPLE_SPRING_2_HEIGHT 100
#define GEN_SIMPLE_SPRING_2_PARAMS GEN_SIMPLE_SPRING_2_XYZA, GEN_SIMPLE_SPRING_2_HEIGHT

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X 32
#define GEN_DRIP_VOLUME_1_Y 145
#define GEN_DRIP_VOLUME_1_Z 33
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC 32,145,33
#define GEN_DRIP_VOLUME_1_MIN_X -21
#define GEN_DRIP_VOLUME_1_MIN_Y -10
#define GEN_DRIP_VOLUME_1_MIN_Z -90
#define GEN_DRIP_VOLUME_1_MIN_XZ -21,-90
#define GEN_DRIP_VOLUME_1_MIN_VEC -21,-10,-90
#define GEN_DRIP_VOLUME_1_MAX_X 86
#define GEN_DRIP_VOLUME_1_MAX_Y 300
#define GEN_DRIP_VOLUME_1_MAX_Z 156
#define GEN_DRIP_VOLUME_1_MAX_XZ 86,156
#define GEN_DRIP_VOLUME_1_MAX_VEC 86,300,156

