/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_DRY_DRY_RUINS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  568.0, -650.0, -120.0,  340.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 568
#define GEN_ENTRY_0_Y -650
#define GEN_ENTRY_0_Z -120
#define GEN_ENTRY_0_DIR 340
#define GEN_ENTRY_0_VEC 568,-650,-120

// type: Marker:NPC
// name: NPC_StoneChomp
// anim: ANIM_StoneChomp_Idle
#define GEN_NPC_STONE_CHOMP_X 440
#define GEN_NPC_STONE_CHOMP_Y -470
#define GEN_NPC_STONE_CHOMP_Z -300
#define GEN_NPC_STONE_CHOMP_DIR 320
#define GEN_NPC_STONE_CHOMP_VEC 440,-470,-300
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
#define GEN_ITEM_1_X 460
#define GEN_ITEM_1_Y -568
#define GEN_ITEM_1_Z -342
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 460,-568,-342
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_LUNAR_STONE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_1_FLAG GF_ISK13_Item_LunarStone

// type: Marker:Entity:Hammer2BlockWideX
// name: Hammer2BlockWideX_1
#define GEN_HAMMER2_BLOCK_WIDE_X_1_X 568
#define GEN_HAMMER2_BLOCK_WIDE_X_1_Y -650
#define GEN_HAMMER2_BLOCK_WIDE_X_1_Z -302
#define GEN_HAMMER2_BLOCK_WIDE_X_1_DIR 25
#define GEN_HAMMER2_BLOCK_WIDE_X_1_VEC 568,-650,-302
#define GEN_HAMMER2_BLOCK_WIDE_X_1_XYZA 568, -650, -302, 25
#define GEN_HAMMER2_BLOCK_WIDE_X_1_PARAMS GEN_HAMMER2_BLOCK_WIDE_X_1_XYZA
#define GEN_HAMMER2_BLOCK_WIDE_X_1_SCRIPT N(EVS_OnSmash_Block)

