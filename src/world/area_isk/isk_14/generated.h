/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_DRY_DRY_RUINS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -538.0, -780.0, -217.0,   29.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -538
#define GEN_ENTRY_0_Y -780
#define GEN_ENTRY_0_Z -217
#define GEN_ENTRY_0_DIR 29
#define GEN_ENTRY_0_VEC -538,-780,-217

// type: Marker:NPC
// name: NPC_StoneChomp
// anim: ANIM_StoneChomp_Idle
#define GEN_NPC_STONE_CHOMP_X 0
#define GEN_NPC_STONE_CHOMP_Y -1000
#define GEN_NPC_STONE_CHOMP_Z 0
#define GEN_NPC_STONE_CHOMP_DIR 218
#define GEN_NPC_STONE_CHOMP_VEC 0,-1000,0
#define GEN_NPC_STONE_CHOMP_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 468, 0, -378 }, \
        .wanderSize  = { 200 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 468, 0, -378 }, \
        .detectSize  = { 400 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -389
#define GEN_ITEM_1_Y -698
#define GEN_ITEM_1_Z -424
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -389,-698,-424
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_DIAMOND_STONE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_1_FLAG GF_ISK14_Item_DiamondStone

// type: Marker:Entity:Hammer2BlockWideX
// name: Hammer2BlockWideX_1
#define GEN_HAMMER2_BLOCK_WIDE_X_1_X -507
#define GEN_HAMMER2_BLOCK_WIDE_X_1_Y -780
#define GEN_HAMMER2_BLOCK_WIDE_X_1_Z -396
#define GEN_HAMMER2_BLOCK_WIDE_X_1_DIR 143
#define GEN_HAMMER2_BLOCK_WIDE_X_1_VEC -507,-780,-396
#define GEN_HAMMER2_BLOCK_WIDE_X_1_XYZA -507, -780, -396, 143
#define GEN_HAMMER2_BLOCK_WIDE_X_1_PARAMS GEN_HAMMER2_BLOCK_WIDE_X_1_XYZA
#define GEN_HAMMER2_BLOCK_WIDE_X_1_SCRIPT N(EVS_OnSmash_Block)

