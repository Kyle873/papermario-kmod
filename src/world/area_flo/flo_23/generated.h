/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_FLOWER_FIELDS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  470.0,    0.0,    0.0,  270.0 }, \
    { -470.0,    0.0,    0.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 470
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 470,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -470
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -470,0,0

// type: Marker:NPC
// name: NPC_GateFlower
// anim: ANIM_GateFlower_Blue_Idle
#define GEN_NPC_GATE_FLOWER_X 385
#define GEN_NPC_GATE_FLOWER_Y 0
#define GEN_NPC_GATE_FLOWER_Z -35
#define GEN_NPC_GATE_FLOWER_DIR 90
#define GEN_NPC_GATE_FLOWER_VEC 385,0,-35
#define GEN_NPC_GATE_FLOWER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Spiny_01
// anim: ANIM_Spiny_Anim01
#define GEN_NPC_SPINY_01_X 80
#define GEN_NPC_SPINY_01_Y 0
#define GEN_NPC_SPINY_01_Z 0
#define GEN_NPC_SPINY_01_DIR 90
#define GEN_NPC_SPINY_01_VEC 80,0,0
#define GEN_NPC_SPINY_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 80, 0, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 80, 0, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Spiny_02
// anim: ANIM_Spiny_Anim01
#define GEN_NPC_SPINY_02_X -320
#define GEN_NPC_SPINY_02_Y 0
#define GEN_NPC_SPINY_02_Z 0
#define GEN_NPC_SPINY_02_DIR 270
#define GEN_NPC_SPINY_02_VEC -320,0,0
#define GEN_NPC_SPINY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -320, 0, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -320, 0, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 100
#define GEN_BRICK_BLOCK_1_Y 60
#define GEN_BRICK_BLOCK_1_Z 5
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC 100,60,5
#define GEN_BRICK_BLOCK_1_XYZA 100, 60, 5, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 100
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 145
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 100,145,0
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 100, 145, 0, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_SHOOTING_STAR
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_FLO23_HiddenItem_ShootingStar

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_2
#define GEN_HIDDEN_YELLOW_BLOCK_2_X 25
#define GEN_HIDDEN_YELLOW_BLOCK_2_Y 60
#define GEN_HIDDEN_YELLOW_BLOCK_2_Z 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_VEC 25,60,0
#define GEN_HIDDEN_YELLOW_BLOCK_2_XYZA 25, 60, 0, 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS GEN_HIDDEN_YELLOW_BLOCK_2_XYZA, GEN_HIDDEN_YELLOW_BLOCK_2_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_2_FLAG GF_FLO23_HiddenItem_Coin

// type: Marker:Entity:SimpleSpring
// name: SimpleSpring_1
#define GEN_SIMPLE_SPRING_1_X -50
#define GEN_SIMPLE_SPRING_1_Y 0
#define GEN_SIMPLE_SPRING_1_Z 0
#define GEN_SIMPLE_SPRING_1_DIR 90
#define GEN_SIMPLE_SPRING_1_VEC -50,0,0
#define GEN_SIMPLE_SPRING_1_XYZA -50, 0, 0, 90
#define GEN_SIMPLE_SPRING_1_HEIGHT 60
#define GEN_SIMPLE_SPRING_1_PARAMS GEN_SIMPLE_SPRING_1_XYZA, GEN_SIMPLE_SPRING_1_HEIGHT

// type: Marker:Volume
// name: FlowerVolume_1
#define GEN_FLOWER_VOLUME_1_X 95
#define GEN_FLOWER_VOLUME_1_Y 25
#define GEN_FLOWER_VOLUME_1_Z -140
#define GEN_FLOWER_VOLUME_1_DIR 0
#define GEN_FLOWER_VOLUME_1_VEC 95,25,-140
#define GEN_FLOWER_VOLUME_1_MIN_X -290
#define GEN_FLOWER_VOLUME_1_MIN_Y 0
#define GEN_FLOWER_VOLUME_1_MIN_Z -190
#define GEN_FLOWER_VOLUME_1_MIN_XZ -290,-190
#define GEN_FLOWER_VOLUME_1_MIN_VEC -290,0,-190
#define GEN_FLOWER_VOLUME_1_MAX_X 480
#define GEN_FLOWER_VOLUME_1_MAX_Y 50
#define GEN_FLOWER_VOLUME_1_MAX_Z -90
#define GEN_FLOWER_VOLUME_1_MAX_XZ 480,-90
#define GEN_FLOWER_VOLUME_1_MAX_VEC 480,50,-90

