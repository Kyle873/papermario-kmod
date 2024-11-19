/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_VILLAGE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -110.0,    0.0,  -19.0,   90.0 }, \
    { 1397.0,  200.0, -145.0,  220.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -110
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -19
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -110,0,-19

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 1397
#define GEN_ENTRY_1_Y 200
#define GEN_ENTRY_1_Z -145
#define GEN_ENTRY_1_DIR 220
#define GEN_ENTRY_1_VEC 1397,200,-145

// type: Marker:NPC
// name: NPC_Goomba_01
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_01_X 305
#define GEN_NPC_GOOMBA_01_Y 50
#define GEN_NPC_GOOMBA_01_Z -13
#define GEN_NPC_GOOMBA_01_DIR 90
#define GEN_NPC_GOOMBA_01_VEC 305,50,-13
#define GEN_NPC_GOOMBA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 305, 50, -13 }, \
        .wanderSize  = { 30, 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 330, 50, 20 }, \
        .detectSize  = { 120, 130 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goomba_02
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_02_X 700
#define GEN_NPC_GOOMBA_02_Y 210
#define GEN_NPC_GOOMBA_02_Z -165
#define GEN_NPC_GOOMBA_02_DIR 90
#define GEN_NPC_GOOMBA_02_VEC 700,210,-165
#define GEN_NPC_GOOMBA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 700, 210, -165 }, \
        .wanderSize  = { 30, 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 700, 210, -165 }, \
        .detectSize  = { 120, 130 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikedGoomba
// anim: ANIM_SpikedGoomba_Idle
#define GEN_NPC_SPIKED_GOOMBA_X 712
#define GEN_NPC_SPIKED_GOOMBA_Y 100
#define GEN_NPC_SPIKED_GOOMBA_Z -95
#define GEN_NPC_SPIKED_GOOMBA_DIR 270
#define GEN_NPC_SPIKED_GOOMBA_VEC 712,100,-95
#define GEN_NPC_SPIKED_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 630, 100, 25 }, \
        .wanderSize  = { 40, 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 660, 100, 30 }, \
        .detectSize  = { 165, 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Paragoomba
// anim: ANIM_Paragoomba_Idle
#define GEN_NPC_PARAGOOMBA_X 960
#define GEN_NPC_PARAGOOMBA_Y 210
#define GEN_NPC_PARAGOOMBA_Z -20
#define GEN_NPC_PARAGOOMBA_DIR 270
#define GEN_NPC_PARAGOOMBA_VEC 960,210,-20
#define GEN_NPC_PARAGOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 960, 210, -20 }, \
        .wanderSize  = { 50, 25 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 995, 210, -57 }, \
        .detectSize  = { 210, 100 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 133
#define GEN_ITEM_1_Y 140
#define GEN_ITEM_1_Z -155
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 133,140,-155
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_KMR05_Item_StarPiece

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 540
#define GEN_ITEM_2_Y 290
#define GEN_ITEM_2_Z -180
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 540,290,-180
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_COIN
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FALL
#define GEN_ITEM_2_FLAG GF_KMR05_Tree1_Coin

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X 436
#define GEN_ITEM_3_Y 300
#define GEN_ITEM_3_Z -180
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC 436,300,-180
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_COIN
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_FALL
#define GEN_ITEM_3_FLAG GF_KMR05_Tree1_Coin

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 488
#define GEN_BOMB_POS_1_Y 245
#define GEN_BOMB_POS_1_Z -196
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 488,245,-196
#define GEN_BOMB_POS_1_RAD 0

