/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_SHY_GUYS_TOYBOX

// type: EntryList
#define GEN_ENTRY_LIST \
    {  590.0,    0.0,  135.0,  270.0 }, \
    {  590.0,   10.0, -140.0,  270.0 }, \
    { -600.0,   10.0,    0.0,   90.0 }, \
    {  600.0,   10.0,    0.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 590
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 135
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 590,0,135

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 590
#define GEN_ENTRY_1_Y 10
#define GEN_ENTRY_1_Z -140
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 590,10,-140

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -600
#define GEN_ENTRY_2_Y 10
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -600,10,0

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 600
#define GEN_ENTRY_3_Y 10
#define GEN_ENTRY_3_Z 0
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 600,10,0

// type: Marker:NPC
// name: NPC_GourmetGuy
// anim: ANIM_GourmetGuy_Idle
#define GEN_NPC_GOURMET_GUY_X -250
#define GEN_NPC_GOURMET_GUY_Y 10
#define GEN_NPC_GOURMET_GUY_Z 85
#define GEN_NPC_GOURMET_GUY_DIR 90
#define GEN_NPC_GOURMET_GUY_VEC -250,10,85
#define GEN_NPC_GOURMET_GUY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_GourmetGuy_Knife
// anim: ANIM_GourmetGuy_Idle
#define GEN_NPC_GOURMET_GUY_KNIFE_X -250
#define GEN_NPC_GOURMET_GUY_KNIFE_Y 10
#define GEN_NPC_GOURMET_GUY_KNIFE_Z 85
#define GEN_NPC_GOURMET_GUY_KNIFE_DIR 90
#define GEN_NPC_GOURMET_GUY_KNIFE_VEC -250,10,85
#define GEN_NPC_GOURMET_GUY_KNIFE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_GourmetGuy_Fork
// anim: ANIM_GourmetGuy_Idle
#define GEN_NPC_GOURMET_GUY_FORK_X -250
#define GEN_NPC_GOURMET_GUY_FORK_Y 10
#define GEN_NPC_GOURMET_GUY_FORK_Z 85
#define GEN_NPC_GOURMET_GUY_FORK_DIR 90
#define GEN_NPC_GOURMET_GUY_FORK_VEC -250,10,85
#define GEN_NPC_GOURMET_GUY_FORK_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_GrooveGuy
// anim: ANIM_GrooveGuy_Anim01
#define GEN_NPC_GROOVE_GUY_X 320
#define GEN_NPC_GROOVE_GUY_Y 10
#define GEN_NPC_GROOVE_GUY_Z -145
#define GEN_NPC_GROOVE_GUY_DIR 270
#define GEN_NPC_GROOVE_GUY_VEC 320,10,-145
#define GEN_NPC_GROOVE_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 320, 10, -145 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 320, 10, -145 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -250
#define GEN_ITEM_1_Y 0
#define GEN_ITEM_1_Z 120
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -250,0,120
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_COOKBOOK
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_1_FLAG GF_OMO05_Item_Cookbook

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 400
#define GEN_YELLOW_BLOCK_1_Y 70
#define GEN_YELLOW_BLOCK_1_Z -150
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 400,70,-150
#define GEN_YELLOW_BLOCK_1_XYZA 400, 70, -150, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_OMO05_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 550
#define GEN_YELLOW_BLOCK_2_Y 70
#define GEN_YELLOW_BLOCK_2_Z -150
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 550,70,-150
#define GEN_YELLOW_BLOCK_2_XYZA 550, 70, -150, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_OMO05_ItemBlock_CoinB

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 475
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 70
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -150
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 475,70,-150
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 475, 70, -150, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_DIZZY_DIAL
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_OMO05_HiddenItem_DizzyDial

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_2
#define GEN_HIDDEN_YELLOW_BLOCK_2_X -540
#define GEN_HIDDEN_YELLOW_BLOCK_2_Y 70
#define GEN_HIDDEN_YELLOW_BLOCK_2_Z -150
#define GEN_HIDDEN_YELLOW_BLOCK_2_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_VEC -540,70,-150
#define GEN_HIDDEN_YELLOW_BLOCK_2_XYZA -540, 70, -150, 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_ITEM ITEM_SUPER_SODA
#define GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS GEN_HIDDEN_YELLOW_BLOCK_2_XYZA, GEN_HIDDEN_YELLOW_BLOCK_2_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_2_FLAG GF_OMO05_HiddenItem_SuperSoda

