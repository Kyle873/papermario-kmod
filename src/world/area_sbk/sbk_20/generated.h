/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_DRY_DRY_DESERT

// type: EntryList
#define GEN_ENTRY_LIST \
    { -475.0,    0.0,    0.0,   90.0 }, \
    {  475.0,    0.0,    0.0,  270.0 }, \
    {    0.0,    0.0, -475.0,  180.0 }, \
    {    0.0,    0.0,  475.0,    0.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -475
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -475,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 475
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 475,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -475
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 0,0,-475

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 475
#define GEN_ENTRY_3_DIR 0
#define GEN_ENTRY_3_VEC 0,0,475

// type: Marker:NPC
// name: NPC_Bandit_01
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_01_X -100
#define GEN_NPC_BANDIT_01_Y 0
#define GEN_NPC_BANDIT_01_Z 80
#define GEN_NPC_BANDIT_01_DIR 90
#define GEN_NPC_BANDIT_01_VEC -100,0,80
#define GEN_NPC_BANDIT_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -100, 0, 80 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bandit_02
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_02_X 120
#define GEN_NPC_BANDIT_02_Y 0
#define GEN_NPC_BANDIT_02_Z 30
#define GEN_NPC_BANDIT_02_DIR 270
#define GEN_NPC_BANDIT_02_VEC 120,0,30
#define GEN_NPC_BANDIT_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 120, 0, 30 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:Entity:InertYellowBlock
// name: InertYellowBlock_1
#define GEN_INERT_YELLOW_BLOCK_1_X -130
#define GEN_INERT_YELLOW_BLOCK_1_Y 0
#define GEN_INERT_YELLOW_BLOCK_1_Z -200
#define GEN_INERT_YELLOW_BLOCK_1_DIR 0
#define GEN_INERT_YELLOW_BLOCK_1_VEC -130,0,-200
#define GEN_INERT_YELLOW_BLOCK_1_XYZA -130, 0, -200, 0
#define GEN_INERT_YELLOW_BLOCK_1_PARAMS GEN_INERT_YELLOW_BLOCK_1_XYZA
#define GEN_INERT_YELLOW_BLOCK_1_SCRIPT N(EVS_OnHitInertBlock)

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -80
#define GEN_YELLOW_BLOCK_1_Y 60
#define GEN_YELLOW_BLOCK_1_Z -200
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -80,60,-200
#define GEN_YELLOW_BLOCK_1_XYZA -80, 60, -200, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_MUSHROOM
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_SBK20_ItemBlock_Mushroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X -180
#define GEN_YELLOW_BLOCK_2_Y 60
#define GEN_YELLOW_BLOCK_2_Z -200
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC -180,60,-200
#define GEN_YELLOW_BLOCK_2_XYZA -180, 60, -200, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_SUPER_SHROOM
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_SBK20_ItemBlock_SuperShroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_3
#define GEN_YELLOW_BLOCK_3_X -130
#define GEN_YELLOW_BLOCK_3_Y 60
#define GEN_YELLOW_BLOCK_3_Z -150
#define GEN_YELLOW_BLOCK_3_DIR 0
#define GEN_YELLOW_BLOCK_3_VEC -130,60,-150
#define GEN_YELLOW_BLOCK_3_XYZA -130, 60, -150, 0
#define GEN_YELLOW_BLOCK_3_ITEM ITEM_ULTRA_SHROOM
#define GEN_YELLOW_BLOCK_3_PARAMS GEN_YELLOW_BLOCK_3_XYZA, GEN_YELLOW_BLOCK_3_ITEM
#define GEN_YELLOW_BLOCK_3_FLAG GF_SBK20_ItemBlock_UltraShroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_4
#define GEN_YELLOW_BLOCK_4_X -80
#define GEN_YELLOW_BLOCK_4_Y 60
#define GEN_YELLOW_BLOCK_4_Z -200
#define GEN_YELLOW_BLOCK_4_DIR 0
#define GEN_YELLOW_BLOCK_4_VEC -80,60,-200
#define GEN_YELLOW_BLOCK_4_XYZA -80, 60, -200, 0
#define GEN_YELLOW_BLOCK_4_ITEM ITEM_MUSHROOM
#define GEN_YELLOW_BLOCK_4_PARAMS GEN_YELLOW_BLOCK_4_XYZA, GEN_YELLOW_BLOCK_4_ITEM
#define GEN_YELLOW_BLOCK_4_FLAG GF_SBK20_ItemBlock_Mushroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_5
#define GEN_YELLOW_BLOCK_5_X -180
#define GEN_YELLOW_BLOCK_5_Y 60
#define GEN_YELLOW_BLOCK_5_Z -200
#define GEN_YELLOW_BLOCK_5_DIR 0
#define GEN_YELLOW_BLOCK_5_VEC -180,60,-200
#define GEN_YELLOW_BLOCK_5_XYZA -180, 60, -200, 0
#define GEN_YELLOW_BLOCK_5_ITEM ITEM_SUPER_SHROOM
#define GEN_YELLOW_BLOCK_5_PARAMS GEN_YELLOW_BLOCK_5_XYZA, GEN_YELLOW_BLOCK_5_ITEM
#define GEN_YELLOW_BLOCK_5_FLAG GF_SBK20_ItemBlock_SuperShroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_6
#define GEN_YELLOW_BLOCK_6_X -130
#define GEN_YELLOW_BLOCK_6_Y 60
#define GEN_YELLOW_BLOCK_6_Z -150
#define GEN_YELLOW_BLOCK_6_DIR 0
#define GEN_YELLOW_BLOCK_6_VEC -130,60,-150
#define GEN_YELLOW_BLOCK_6_XYZA -130, 60, -150, 0
#define GEN_YELLOW_BLOCK_6_ITEM ITEM_ULTRA_SHROOM
#define GEN_YELLOW_BLOCK_6_PARAMS GEN_YELLOW_BLOCK_6_XYZA, GEN_YELLOW_BLOCK_6_ITEM
#define GEN_YELLOW_BLOCK_6_FLAG GF_SBK20_ItemBlock_UltraShroom

