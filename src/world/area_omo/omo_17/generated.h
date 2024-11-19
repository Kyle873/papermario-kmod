/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_SHY_GUYS_TOYBOX

// type: EntryList
#define GEN_ENTRY_LIST \
    { -600.0,    0.0,  135.0,   90.0 }, \
    { -600.0,   10.0, -135.0,   90.0 }, \
    {  600.0,    0.0,  135.0,  270.0 }, \
    {  600.0,   10.0, -135.0,  270.0 }, \
    { -600.0,   10.0,    0.0,   90.0 }, \
    {  600.0,   10.0,    0.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -600
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 135
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -600,0,135

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -600
#define GEN_ENTRY_1_Y 10
#define GEN_ENTRY_1_Z -135
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -600,10,-135

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 600
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 135
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 600,0,135

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 600
#define GEN_ENTRY_3_Y 10
#define GEN_ENTRY_3_Z -135
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 600,10,-135

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -600
#define GEN_ENTRY_4_Y 10
#define GEN_ENTRY_4_Z 0
#define GEN_ENTRY_4_DIR 90
#define GEN_ENTRY_4_VEC -600,10,0

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X 600
#define GEN_ENTRY_5_Y 10
#define GEN_ENTRY_5_Z 0
#define GEN_ENTRY_5_DIR 270
#define GEN_ENTRY_5_VEC 600,10,0

// type: Marker:NPC
// name: NPC_SpyGuy
// anim: ANIM_SpyGuy_Anim02
#define GEN_NPC_SPY_GUY_X -305
#define GEN_NPC_SPY_GUY_Y 0
#define GEN_NPC_SPY_GUY_Z 135
#define GEN_NPC_SPY_GUY_DIR 270
#define GEN_NPC_SPY_GUY_VEC -305,0,135
#define GEN_NPC_SPY_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -305, 0, 135 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -305, 0, 135 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_PyroGuy
// anim: ANIM_PyroGuy_Anim01
#define GEN_NPC_PYRO_GUY_X 354
#define GEN_NPC_PYRO_GUY_Y 10
#define GEN_NPC_PYRO_GUY_Z -113
#define GEN_NPC_PYRO_GUY_DIR 270
#define GEN_NPC_PYRO_GUY_VEC 354,10,-113
#define GEN_NPC_PYRO_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 354, 10, -113 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 354, 10, -113 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_GrooveGuy
// anim: ANIM_GrooveGuy_Anim01
#define GEN_NPC_GROOVE_GUY_X -150
#define GEN_NPC_GROOVE_GUY_Y 10
#define GEN_NPC_GROOVE_GUY_Z -125
#define GEN_NPC_GROOVE_GUY_DIR 90
#define GEN_NPC_GROOVE_GUY_VEC -150,10,-125
#define GEN_NPC_GROOVE_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -150, 10, -125 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -150, 10, -125 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -75
#define GEN_YELLOW_BLOCK_1_Y 120
#define GEN_YELLOW_BLOCK_1_Z 135
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -75,120,135
#define GEN_YELLOW_BLOCK_1_XYZA -75, 120, 135, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_OMO17_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X -50
#define GEN_YELLOW_BLOCK_2_Y 70
#define GEN_YELLOW_BLOCK_2_Z -150
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC -50,70,-150
#define GEN_YELLOW_BLOCK_2_XYZA -50, 70, -150, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_OMO17_ItemBlock_CoinB

// type: Marker:Entity:YellowBlock
// name: YellowBlock_3
#define GEN_YELLOW_BLOCK_3_X 0
#define GEN_YELLOW_BLOCK_3_Y 70
#define GEN_YELLOW_BLOCK_3_Z -150
#define GEN_YELLOW_BLOCK_3_DIR 0
#define GEN_YELLOW_BLOCK_3_VEC 0,70,-150
#define GEN_YELLOW_BLOCK_3_XYZA 0, 70, -150, 0
#define GEN_YELLOW_BLOCK_3_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_3_PARAMS GEN_YELLOW_BLOCK_3_XYZA, GEN_YELLOW_BLOCK_3_ITEM
#define GEN_YELLOW_BLOCK_3_FLAG GF_OMO17_ItemBlock_CoinC

// type: Marker:Entity:MulticoinBlock
// name: MulticoinBlock_1
#define GEN_MULTICOIN_BLOCK_1_X -25
#define GEN_MULTICOIN_BLOCK_1_Y 70
#define GEN_MULTICOIN_BLOCK_1_Z -150
#define GEN_MULTICOIN_BLOCK_1_DIR 0
#define GEN_MULTICOIN_BLOCK_1_VEC -25,70,-150
#define GEN_MULTICOIN_BLOCK_1_XYZA -25, 70, -150, 0
#define GEN_MULTICOIN_BLOCK_1_PARAMS GEN_MULTICOIN_BLOCK_1_XYZA
#define GEN_MULTICOIN_BLOCK_1_FLAG GF_OMO17_MultiCoinBrick

