/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -270.0,  -20.0,  -20.0,   90.0 }, \
    {  107.0,  -20.0, -115.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_STEP(    70,  -100,   100,  -130) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -270
#define GEN_ENTRY_0_Y -20
#define GEN_ENTRY_0_Z -20
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -270,-20,-20

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 107
#define GEN_ENTRY_1_Y -20
#define GEN_ENTRY_1_Z -115
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 107,-20,-115

// type: Marker:NPC
// name: NPC_Spiny_01
// anim: ANIM_Spiny_Anim01
#define GEN_NPC_SPINY_01_X 25
#define GEN_NPC_SPINY_01_Y -20
#define GEN_NPC_SPINY_01_Z 0
#define GEN_NPC_SPINY_01_DIR 270
#define GEN_NPC_SPINY_01_VEC 25,-20,0
#define GEN_NPC_SPINY_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 25, -20, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 25, -20, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Spiny_02
// anim: ANIM_Spiny_Anim01
#define GEN_NPC_SPINY_02_X 275
#define GEN_NPC_SPINY_02_Y -20
#define GEN_NPC_SPINY_02_Z 120
#define GEN_NPC_SPINY_02_DIR 90
#define GEN_NPC_SPINY_02_VEC 275,-20,120
#define GEN_NPC_SPINY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 275, -20, 120 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 275, -20, 120 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Spiny_03
// anim: ANIM_Spiny_Anim01
#define GEN_NPC_SPINY_03_X -150
#define GEN_NPC_SPINY_03_Y -20
#define GEN_NPC_SPINY_03_Z 120
#define GEN_NPC_SPINY_03_DIR 90
#define GEN_NPC_SPINY_03_VEC -150,-20,120
#define GEN_NPC_SPINY_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -150, -20, 120 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -150, -20, 120 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Hammer2Block
// name: Hammer2Block_1
#define GEN_HAMMER2_BLOCK_1_X -280
#define GEN_HAMMER2_BLOCK_1_Y -20
#define GEN_HAMMER2_BLOCK_1_Z -20
#define GEN_HAMMER2_BLOCK_1_DIR 0
#define GEN_HAMMER2_BLOCK_1_VEC -280,-20,-20
#define GEN_HAMMER2_BLOCK_1_XYZA -280, -20, -20, 0
#define GEN_HAMMER2_BLOCK_1_PARAMS GEN_HAMMER2_BLOCK_1_XYZA
#define GEN_HAMMER2_BLOCK_1_SCRIPT N(EVS_OnSmashBlock)

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X -75
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 40
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -120
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC -75,40,-120
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA -75, 40, -120, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_MAPLE_SYRUP
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_TIK23_HiddenItem_MapleSyrup

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_2
#define GEN_HIDDEN_YELLOW_BLOCK_2_X 175
#define GEN_HIDDEN_YELLOW_BLOCK_2_Y 40
#define GEN_HIDDEN_YELLOW_BLOCK_2_Z 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_VEC 175,40,0
#define GEN_HIDDEN_YELLOW_BLOCK_2_XYZA 175, 40, 0, 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_ITEM ITEM_STOP_WATCH
#define GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS GEN_HIDDEN_YELLOW_BLOCK_2_XYZA, GEN_HIDDEN_YELLOW_BLOCK_2_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_2_FLAG GF_TIK23_HiddenItem_StopWatch

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_3
#define GEN_HIDDEN_YELLOW_BLOCK_3_X -250
#define GEN_HIDDEN_YELLOW_BLOCK_3_Y 40
#define GEN_HIDDEN_YELLOW_BLOCK_3_Z -100
#define GEN_HIDDEN_YELLOW_BLOCK_3_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_3_VEC -250,40,-100
#define GEN_HIDDEN_YELLOW_BLOCK_3_XYZA -250, 40, -100, 0
#define GEN_HIDDEN_YELLOW_BLOCK_3_ITEM ITEM_VOLT_SHROOM
#define GEN_HIDDEN_YELLOW_BLOCK_3_PARAMS GEN_HIDDEN_YELLOW_BLOCK_3_XYZA, GEN_HIDDEN_YELLOW_BLOCK_3_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_3_FLAG GF_TIK23_HiddenItem_VoltShroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -200
#define GEN_YELLOW_BLOCK_1_Y 40
#define GEN_YELLOW_BLOCK_1_Z -100
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -200,40,-100
#define GEN_YELLOW_BLOCK_1_XYZA -200, 40, -100, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_TIK23_ItemBlock_Coin

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X -10
#define GEN_DRIP_VOLUME_1_Y 90
#define GEN_DRIP_VOLUME_1_Z 68
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC -10,90,68
#define GEN_DRIP_VOLUME_1_MIN_X -180
#define GEN_DRIP_VOLUME_1_MIN_Y -20
#define GEN_DRIP_VOLUME_1_MIN_Z 36
#define GEN_DRIP_VOLUME_1_MIN_XZ -180,36
#define GEN_DRIP_VOLUME_1_MIN_VEC -180,-20,36
#define GEN_DRIP_VOLUME_1_MAX_X 160
#define GEN_DRIP_VOLUME_1_MAX_Y 200
#define GEN_DRIP_VOLUME_1_MAX_Z 100
#define GEN_DRIP_VOLUME_1_MAX_XZ 160,100
#define GEN_DRIP_VOLUME_1_MAX_VEC 160,200,100

// type: Marker:Volume
// name: DripVolume_2
#define GEN_DRIP_VOLUME_2_X 145
#define GEN_DRIP_VOLUME_2_Y 90
#define GEN_DRIP_VOLUME_2_Z 65
#define GEN_DRIP_VOLUME_2_DIR 0
#define GEN_DRIP_VOLUME_2_VEC 145,90,65
#define GEN_DRIP_VOLUME_2_MIN_X 25
#define GEN_DRIP_VOLUME_2_MIN_Y -20
#define GEN_DRIP_VOLUME_2_MIN_Z -120
#define GEN_DRIP_VOLUME_2_MIN_XZ 25,-120
#define GEN_DRIP_VOLUME_2_MIN_VEC 25,-20,-120
#define GEN_DRIP_VOLUME_2_MAX_X 265
#define GEN_DRIP_VOLUME_2_MAX_Y 200
#define GEN_DRIP_VOLUME_2_MAX_Z 250
#define GEN_DRIP_VOLUME_2_MAX_XZ 265,250
#define GEN_DRIP_VOLUME_2_MAX_VEC 265,200,250

