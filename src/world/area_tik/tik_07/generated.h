/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -270.0,  -10.0,    0.0,   90.0 }, \
    { -275.0,   90.0, -110.0,  180.0 }, \
    {  525.0,   25.0, -100.0,  180.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -270
#define GEN_ENTRY_0_Y -10
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -270,-10,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -275
#define GEN_ENTRY_1_Y 90
#define GEN_ENTRY_1_Z -110
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC -275,90,-110

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 525
#define GEN_ENTRY_2_Y 25
#define GEN_ENTRY_2_Z -100
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 525,25,-100

// type: Marker:NPC
// name: NPC_Paragoomba_01
// anim: ANIM_Paragoomba_Dark_Idle
#define GEN_NPC_PARAGOOMBA_01_X 230
#define GEN_NPC_PARAGOOMBA_01_Y 50
#define GEN_NPC_PARAGOOMBA_01_Z 50
#define GEN_NPC_PARAGOOMBA_01_DIR 90
#define GEN_NPC_PARAGOOMBA_01_VEC 230,50,50
#define GEN_NPC_PARAGOOMBA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 230, 50, 50 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 230, 50, 50 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Paragoomba_02
// anim: ANIM_Paragoomba_Dark_Idle
#define GEN_NPC_PARAGOOMBA_02_X 535
#define GEN_NPC_PARAGOOMBA_02_Y 50
#define GEN_NPC_PARAGOOMBA_02_Z 20
#define GEN_NPC_PARAGOOMBA_02_DIR 90
#define GEN_NPC_PARAGOOMBA_02_VEC 535,50,20
#define GEN_NPC_PARAGOOMBA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 535, 50, 20 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 535, 50, 20 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 306
#define GEN_ITEM_1_Y 90
#define GEN_ITEM_1_Z -104
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 306,90,-104
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_TIK07_Item_StarPiece

// type: Marker:Entity:SuperBlock
// name: SuperBlock_1
#define GEN_SUPER_BLOCK_1_X 820
#define GEN_SUPER_BLOCK_1_Y 70
#define GEN_SUPER_BLOCK_1_Z -5
#define GEN_SUPER_BLOCK_1_DIR 0
#define GEN_SUPER_BLOCK_1_VEC 820,70,-5
#define GEN_SUPER_BLOCK_1_XYZA 820, 70, -5, 0
#define GEN_SUPER_BLOCK_1_PARAMS GEN_SUPER_BLOCK_1_XYZA
#define GEN_SUPER_BLOCK_1_VAR MV_SuperBlock
#define GEN_SUPER_BLOCK_1_FLAG GF_TIK07_SuperBlock

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X -57
#define GEN_DRIP_VOLUME_1_Y 110
#define GEN_DRIP_VOLUME_1_Z 63
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC -57,110,63
#define GEN_DRIP_VOLUME_1_MIN_X -264
#define GEN_DRIP_VOLUME_1_MIN_Y -10
#define GEN_DRIP_VOLUME_1_MIN_Z -61
#define GEN_DRIP_VOLUME_1_MIN_XZ -264,-61
#define GEN_DRIP_VOLUME_1_MIN_VEC -264,-10,-61
#define GEN_DRIP_VOLUME_1_MAX_X 150
#define GEN_DRIP_VOLUME_1_MAX_Y 230
#define GEN_DRIP_VOLUME_1_MAX_Z 188
#define GEN_DRIP_VOLUME_1_MAX_XZ 150,188
#define GEN_DRIP_VOLUME_1_MAX_VEC 150,230,188

// type: Marker:Volume
// name: DripVolume_2
#define GEN_DRIP_VOLUME_2_X 164
#define GEN_DRIP_VOLUME_2_Y 110
#define GEN_DRIP_VOLUME_2_Z 68
#define GEN_DRIP_VOLUME_2_DIR 0
#define GEN_DRIP_VOLUME_2_VEC 164,110,68
#define GEN_DRIP_VOLUME_2_MIN_X 31
#define GEN_DRIP_VOLUME_2_MIN_Y -10
#define GEN_DRIP_VOLUME_2_MIN_Z -20
#define GEN_DRIP_VOLUME_2_MIN_XZ 31,-20
#define GEN_DRIP_VOLUME_2_MIN_VEC 31,-10,-20
#define GEN_DRIP_VOLUME_2_MAX_X 297
#define GEN_DRIP_VOLUME_2_MAX_Y 230
#define GEN_DRIP_VOLUME_2_MAX_Z 156
#define GEN_DRIP_VOLUME_2_MAX_XZ 297,156
#define GEN_DRIP_VOLUME_2_MAX_VEC 297,230,156

// type: Marker:Volume
// name: DripVolume_3
#define GEN_DRIP_VOLUME_3_X 82
#define GEN_DRIP_VOLUME_3_Y 160
#define GEN_DRIP_VOLUME_3_Z -37
#define GEN_DRIP_VOLUME_3_DIR 0
#define GEN_DRIP_VOLUME_3_VEC 82,160,-37
#define GEN_DRIP_VOLUME_3_MIN_X 56
#define GEN_DRIP_VOLUME_3_MIN_Y 90
#define GEN_DRIP_VOLUME_3_MIN_Z -117
#define GEN_DRIP_VOLUME_3_MIN_XZ 56,-117
#define GEN_DRIP_VOLUME_3_MIN_VEC 56,90,-117
#define GEN_DRIP_VOLUME_3_MAX_X 108
#define GEN_DRIP_VOLUME_3_MAX_Y 230
#define GEN_DRIP_VOLUME_3_MAX_Z 43
#define GEN_DRIP_VOLUME_3_MAX_XZ 108,43
#define GEN_DRIP_VOLUME_3_MAX_VEC 108,230,43

