/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_SHY_GUYS_TOYBOX

// type: EntryList
#define GEN_ENTRY_LIST \
    { -480.0,    0.0,    0.0,   90.0 }, \
    {  565.0,    0.0,    0.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -480
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -480,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 565
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 565,0,0

// type: Marker:NPC
// name: NPC_AntiGuy
// anim: ANIM_ShyGuy_Black_Anim01
#define GEN_NPC_ANTI_GUY_X 110
#define GEN_NPC_ANTI_GUY_Y 0
#define GEN_NPC_ANTI_GUY_Z -20
#define GEN_NPC_ANTI_GUY_DIR 270
#define GEN_NPC_ANTI_GUY_VEC 110,0,-20
#define GEN_NPC_ANTI_GUY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShyGuy
// anim: ANIM_ShyGuy_Yellow_Anim01
#define GEN_NPC_SHY_GUY_X 300
#define GEN_NPC_SHY_GUY_Y 0
#define GEN_NPC_SHY_GUY_Z 50
#define GEN_NPC_SHY_GUY_DIR 270
#define GEN_NPC_SHY_GUY_VEC 300,0,50
#define GEN_NPC_SHY_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 300, 0, 50 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 300, 0, 50 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_GrooveGuy
// anim: ANIM_GrooveGuy_Anim01
#define GEN_NPC_GROOVE_GUY_X -222
#define GEN_NPC_GROOVE_GUY_Y 0
#define GEN_NPC_GROOVE_GUY_Z 35
#define GEN_NPC_GROOVE_GUY_DIR 90
#define GEN_NPC_GROOVE_GUY_VEC -222,0,35
#define GEN_NPC_GROOVE_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -222, 0, 35 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -222, 0, 35 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -375
#define GEN_YELLOW_BLOCK_1_Y 60
#define GEN_YELLOW_BLOCK_1_Z -95
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -375,60,-95
#define GEN_YELLOW_BLOCK_1_XYZA -375, 60, -95, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_OMO13_ItemBlock_Coin

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 470
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 60
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -60
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 470,60,-60
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 470, 60, -60, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_MAPLE_SYRUP
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_OMO13_HiddenItem_MapleSyrup

// type: Marker:Entity:Chest
// name: Chest_1
#define GEN_CHEST_1_X 110
#define GEN_CHEST_1_Y 0
#define GEN_CHEST_1_Z -60
#define GEN_CHEST_1_DIR 0
#define GEN_CHEST_1_VEC 110,0,-60
#define GEN_CHEST_1_XYZA 110, 0, -60, 0
#define GEN_CHEST_1_PARAMS GEN_CHEST_1_XYZA
#define GEN_CHEST_1_FLAG GF_OMO13_Chest_PowerPlusB
#define GEN_CHEST_1_SCRIPT N(EVS_OpenChest_PowerPlus)

