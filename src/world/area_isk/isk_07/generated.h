/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_DRY_DRY_RUINS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -283.0, -390.0,  530.0,  110.0 }, \
    {  560.0, -340.0,  217.0,  210.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -283
#define GEN_ENTRY_0_Y -390
#define GEN_ENTRY_0_Z 530
#define GEN_ENTRY_0_DIR 110
#define GEN_ENTRY_0_VEC -283,-390,530

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 560
#define GEN_ENTRY_1_Y -340
#define GEN_ENTRY_1_Z 217
#define GEN_ENTRY_1_DIR 210
#define GEN_ENTRY_1_VEC 560,-340,217

// type: Marker:NPC
// name: NPC_Pokey_01
// anim: ANIM_Pokey_Mummy_Idle4
#define GEN_NPC_POKEY_01_X -132
#define GEN_NPC_POKEY_01_Y -390
#define GEN_NPC_POKEY_01_Z 492
#define GEN_NPC_POKEY_01_DIR 304
#define GEN_NPC_POKEY_01_VEC -132,-390,492
#define GEN_NPC_POKEY_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -301, 0, 427 }, \
        .wanderSize  = { 200 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -301, 0, 427 }, \
        .detectSize  = { 400 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Pokey_02
// anim: ANIM_Pokey_Mummy_Idle4
#define GEN_NPC_POKEY_02_X 45
#define GEN_NPC_POKEY_02_Y -390
#define GEN_NPC_POKEY_02_Z 507
#define GEN_NPC_POKEY_02_DIR 263
#define GEN_NPC_POKEY_02_VEC 45,-390,507
#define GEN_NPC_POKEY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 52, -390, 573 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 52, -390, 573 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Pokey_03
// anim: ANIM_Pokey_Mummy_Idle4
#define GEN_NPC_POKEY_03_X 220
#define GEN_NPC_POKEY_03_Y -389
#define GEN_NPC_POKEY_03_Z 467
#define GEN_NPC_POKEY_03_DIR 244
#define GEN_NPC_POKEY_03_VEC 220,-389,467
#define GEN_NPC_POKEY_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 243, -390, 523 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 243, -390, 523 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -250
#define GEN_ITEM_1_Y -390
#define GEN_ITEM_1_Z 545
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -250,-390,545
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_RUINS_KEY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_1_FLAG GF_ISK07_Item_RuinsKey

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 490
#define GEN_ITEM_2_Y -250
#define GEN_ITEM_2_Z 215
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 490,-250,215
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_ARTIFACT
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_ISK07_Item_Artifact

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X -300
#define GEN_PADLOCK_1_Y -380
#define GEN_PADLOCK_1_Z 530
#define GEN_PADLOCK_1_DIR 50
#define GEN_PADLOCK_1_VEC -300,-380,530
#define GEN_PADLOCK_1_XYZA -300, -380, 530, 50
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

// type: Marker:Entity:Hammer2BlockWideX
// name: Hammer2BlockWideX_1
#define GEN_HAMMER2_BLOCK_WIDE_X_1_X 470
#define GEN_HAMMER2_BLOCK_WIDE_X_1_Y -250
#define GEN_HAMMER2_BLOCK_WIDE_X_1_Z 270
#define GEN_HAMMER2_BLOCK_WIDE_X_1_DIR 150
#define GEN_HAMMER2_BLOCK_WIDE_X_1_VEC 470,-250,270
#define GEN_HAMMER2_BLOCK_WIDE_X_1_XYZA 470, -250, 270, 150
#define GEN_HAMMER2_BLOCK_WIDE_X_1_PARAMS GEN_HAMMER2_BLOCK_WIDE_X_1_XYZA
#define GEN_HAMMER2_BLOCK_WIDE_X_1_SCRIPT N(EVS_SmashBlock_Stone)

// type: Marker:Entity:TriggerBlock
// name: TriggerBlock_1
#define GEN_TRIGGER_BLOCK_1_X -250
#define GEN_TRIGGER_BLOCK_1_Y -330
#define GEN_TRIGGER_BLOCK_1_Z 545
#define GEN_TRIGGER_BLOCK_1_DIR -25
#define GEN_TRIGGER_BLOCK_1_VEC -250,-330,545
#define GEN_TRIGGER_BLOCK_1_XYZA -250, -330, 545, -25
#define GEN_TRIGGER_BLOCK_1_PARAMS GEN_TRIGGER_BLOCK_1_XYZA
#define GEN_TRIGGER_BLOCK_1_SCRIPT N(EVS_HitBlock_Trigger)

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X -250
#define GEN_ITEM_3_Y -240
#define GEN_ITEM_3_Z 545
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC -250,-240,545
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_RUINS_KEY
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_FALL_NEVER_VANISH
#define GEN_ITEM_3_FLAG GF_ISK07_Item_RuinsKey

