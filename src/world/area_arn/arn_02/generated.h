/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GUSTY_GULCH

// type: EntryList
#define GEN_ENTRY_LIST \
    { -585.0,   60.0,  150.0,   90.0 }, \
    {  880.0,  320.0,  150.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -585
#define GEN_ENTRY_0_Y 60
#define GEN_ENTRY_0_Z 150
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -585,60,150

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 880
#define GEN_ENTRY_1_Y 320
#define GEN_ENTRY_1_Z 150
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 880,320,150

// type: Marker:NPC
// name: NPC_HyperCleft_01
// anim: ANIM_Cleft_Hyper_Anim02
#define GEN_NPC_HYPER_CLEFT_01_X -196
#define GEN_NPC_HYPER_CLEFT_01_Y 130
#define GEN_NPC_HYPER_CLEFT_01_Z 104
#define GEN_NPC_HYPER_CLEFT_01_DIR 90
#define GEN_NPC_HYPER_CLEFT_01_VEC -196,130,104
#define GEN_NPC_HYPER_CLEFT_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { -196, 130, 104 }, \
        .wanderSize  = { 50, 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -196, 130, 104 }, \
        .detectSize  = { 120 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_HyperCleft_02
// anim: ANIM_Cleft_Hyper_Anim02
#define GEN_NPC_HYPER_CLEFT_02_X 641
#define GEN_NPC_HYPER_CLEFT_02_Y 268
#define GEN_NPC_HYPER_CLEFT_02_Z 202
#define GEN_NPC_HYPER_CLEFT_02_DIR 90
#define GEN_NPC_HYPER_CLEFT_02_VEC 641,268,202
#define GEN_NPC_HYPER_CLEFT_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 641, 268, 202 }, \
        .wanderSize  = { 50, 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 641, 268, 202 }, \
        .detectSize  = { 120 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_HyperGoomba
// anim: ANIM_Goomba_Hyper_Idle
#define GEN_NPC_HYPER_GOOMBA_X 333
#define GEN_NPC_HYPER_GOOMBA_Y 215
#define GEN_NPC_HYPER_GOOMBA_Z 85
#define GEN_NPC_HYPER_GOOMBA_DIR 90
#define GEN_NPC_HYPER_GOOMBA_VEC 333,215,85
#define GEN_NPC_HYPER_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 333, 215, 85 }, \
        .wanderSize  = { 40, 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 360, 215, 150 }, \
        .detectSize  = { 120, 137 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -248
#define GEN_ITEM_1_Y 193
#define GEN_ITEM_1_Z 45
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -248,193,45
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_DIZZY_DIAL
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_ARN02_Item_DizzyDial

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 536
#define GEN_ITEM_2_Y 260
#define GEN_ITEM_2_Z 227
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 536,260,227
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_LETTER_TO_FICE_T
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_ARN02_Item_LetterFiceT

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -350
#define GEN_YELLOW_BLOCK_1_Y 172
#define GEN_YELLOW_BLOCK_1_Z 170
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -350,172,170
#define GEN_YELLOW_BLOCK_1_XYZA -350, 172, 170, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_ARN02_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 225
#define GEN_YELLOW_BLOCK_2_Y 265
#define GEN_YELLOW_BLOCK_2_Z 30
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 225,265,30
#define GEN_YELLOW_BLOCK_2_XYZA 225, 265, 30, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_ARN02_ItemBlock_CoinB

// type: Marker:Entity:YellowBlock
// name: YellowBlock_3
#define GEN_YELLOW_BLOCK_3_X 275
#define GEN_YELLOW_BLOCK_3_Y 265
#define GEN_YELLOW_BLOCK_3_Z 150
#define GEN_YELLOW_BLOCK_3_DIR 0
#define GEN_YELLOW_BLOCK_3_VEC 275,265,150
#define GEN_YELLOW_BLOCK_3_XYZA 275, 265, 150, 0
#define GEN_YELLOW_BLOCK_3_ITEM ITEM_REPEL_GEL
#define GEN_YELLOW_BLOCK_3_PARAMS GEN_YELLOW_BLOCK_3_XYZA, GEN_YELLOW_BLOCK_3_ITEM
#define GEN_YELLOW_BLOCK_3_FLAG GF_ARN02_ItemBlock_RepelGel

