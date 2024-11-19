/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_ROAD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -110.0,    0.0,   33.0,   90.0 }, \
    {  850.0,    0.0,   35.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -110
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 33
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -110,0,33

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 850
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 35
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 850,0,35

// type: Marker:NPC
// name: NPC_SpikedGoomba
// anim: ANIM_SpikedGoomba_Idle
#define GEN_NPC_SPIKED_GOOMBA_X 160
#define GEN_NPC_SPIKED_GOOMBA_Y 0
#define GEN_NPC_SPIKED_GOOMBA_Z 30
#define GEN_NPC_SPIKED_GOOMBA_DIR 270
#define GEN_NPC_SPIKED_GOOMBA_VEC 160,0,30
#define GEN_NPC_SPIKED_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 160, 0, 30 }, \
        .wanderSize  = { 30, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 160, 0, 30 }, \
        .detectSize  = { 300 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Paragoomba
// anim: ANIM_Paragoomba_Idle
#define GEN_NPC_PARAGOOMBA_X 525
#define GEN_NPC_PARAGOOMBA_Y 60
#define GEN_NPC_PARAGOOMBA_Z 15
#define GEN_NPC_PARAGOOMBA_DIR 270
#define GEN_NPC_PARAGOOMBA_VEC 525,60,15
#define GEN_NPC_PARAGOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 525, 60, 15 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 525, 60, 15 }, \
        .detectSize  = { 300 }, \
    }, \
}

// type: Marker:Entity:RedBlock
// name: RedBlock_1
#define GEN_RED_BLOCK_1_X 220
#define GEN_RED_BLOCK_1_Y 60
#define GEN_RED_BLOCK_1_Z 10
#define GEN_RED_BLOCK_1_DIR 0
#define GEN_RED_BLOCK_1_VEC 220,60,10
#define GEN_RED_BLOCK_1_XYZA 220, 60, 10, 0
#define GEN_RED_BLOCK_1_ITEM ITEM_CLOSE_CALL
#define GEN_RED_BLOCK_1_PARAMS GEN_RED_BLOCK_1_XYZA, GEN_RED_BLOCK_1_ITEM
#define GEN_RED_BLOCK_1_FLAG GF_KMR06_BadgeBlock_CloseCall

// type: Marker:Entity:HeartBlock
// name: HeartBlock_1
#define GEN_HEART_BLOCK_1_X 800
#define GEN_HEART_BLOCK_1_Y 60
#define GEN_HEART_BLOCK_1_Z 0
#define GEN_HEART_BLOCK_1_DIR 0
#define GEN_HEART_BLOCK_1_VEC 800,60,0
#define GEN_HEART_BLOCK_1_XYZA 800, 60, 0, 0
#define GEN_HEART_BLOCK_1_PARAMS GEN_HEART_BLOCK_1_XYZA

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 362
#define GEN_ITEM_1_Y 0
#define GEN_ITEM_1_Z 40
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 362,0,40
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_MUSHROOM
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_KMR06_Item_Mushroom

