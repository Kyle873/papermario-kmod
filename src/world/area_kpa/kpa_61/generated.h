/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOWSERS_CASTLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -100.0, -160.0,  116.0,  120.0 }, \
    { -100.0,  200.0,  102.0,  120.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   -90,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -130,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(  -120,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(   -70,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -100
#define GEN_ENTRY_0_Y -160
#define GEN_ENTRY_0_Z 116
#define GEN_ENTRY_0_DIR 120
#define GEN_ENTRY_0_VEC -100,-160,116

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -100
#define GEN_ENTRY_1_Y 200
#define GEN_ENTRY_1_Z 102
#define GEN_ENTRY_1_DIR 120
#define GEN_ENTRY_1_VEC -100,200,102

// type: Marker:NPC
// name: NPC_Koopatrol_01
// anim: ANIM_WorldKoopatrol_Anim01
#define GEN_NPC_KOOPATROL_01_X 300
#define GEN_NPC_KOOPATROL_01_Y -160
#define GEN_NPC_KOOPATROL_01_Z 140
#define GEN_NPC_KOOPATROL_01_DIR 270
#define GEN_NPC_KOOPATROL_01_VEC 300,-160,140
#define GEN_NPC_KOOPATROL_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 300, -160, 140 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 300, -160, 140 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Koopatrol_02
// anim: ANIM_WorldKoopatrol_Anim01
#define GEN_NPC_KOOPATROL_02_X 850
#define GEN_NPC_KOOPATROL_02_Y -160
#define GEN_NPC_KOOPATROL_02_Z 390
#define GEN_NPC_KOOPATROL_02_DIR 270
#define GEN_NPC_KOOPATROL_02_VEC 850,-160,390
#define GEN_NPC_KOOPATROL_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 850, -160, 390 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 850, -160, 390 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_FlyingMagikoopa_01
// anim: ANIM_FlyingMagikoopa_Anim00
#define GEN_NPC_FLYING_MAGIKOOPA_01_X 500
#define GEN_NPC_FLYING_MAGIKOOPA_01_Y 250
#define GEN_NPC_FLYING_MAGIKOOPA_01_Z -50
#define GEN_NPC_FLYING_MAGIKOOPA_01_DIR 90
#define GEN_NPC_FLYING_MAGIKOOPA_01_VEC 500,250,-50
#define GEN_NPC_FLYING_MAGIKOOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 500, 250, -50 }, \
        .wanderSize  = { 120, 25 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 500, 250, -50 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_FlyingMagikoopa_02
// anim: ANIM_FlyingMagikoopa_Anim00
#define GEN_NPC_FLYING_MAGIKOOPA_02_X 200
#define GEN_NPC_FLYING_MAGIKOOPA_02_Y 250
#define GEN_NPC_FLYING_MAGIKOOPA_02_Z -50
#define GEN_NPC_FLYING_MAGIKOOPA_02_DIR 90
#define GEN_NPC_FLYING_MAGIKOOPA_02_VEC 200,250,-50
#define GEN_NPC_FLYING_MAGIKOOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 200, 250, -50 }, \
        .wanderSize  = { 120, 25 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 200, 250, -50 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 1070
#define GEN_ITEM_1_Y -40
#define GEN_ITEM_1_Z 320
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 1070,-40,320
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_JAMMIN_JELLY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_KPA61_Item_JamminJelly

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -225
#define GEN_YELLOW_BLOCK_1_Y -100
#define GEN_YELLOW_BLOCK_1_Z 175
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -225,-100,175
#define GEN_YELLOW_BLOCK_1_XYZA -225, -100, 175, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_SUPER_SHROOM
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_KPA61_ItemBlock_SuperShroomA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 60
#define GEN_YELLOW_BLOCK_2_Y -100
#define GEN_YELLOW_BLOCK_2_Z 60
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 60,-100,60
#define GEN_YELLOW_BLOCK_2_XYZA 60, -100, 60, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_MAPLE_SYRUP
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_KPA61_ItemBlock_MapleSyrup

// type: Marker:Entity:YellowBlock
// name: YellowBlock_3
#define GEN_YELLOW_BLOCK_3_X 575
#define GEN_YELLOW_BLOCK_3_Y -100
#define GEN_YELLOW_BLOCK_3_Z 60
#define GEN_YELLOW_BLOCK_3_DIR 0
#define GEN_YELLOW_BLOCK_3_VEC 575,-100,60
#define GEN_YELLOW_BLOCK_3_XYZA 575, -100, 60, 0
#define GEN_YELLOW_BLOCK_3_ITEM ITEM_SUPER_SHROOM
#define GEN_YELLOW_BLOCK_3_PARAMS GEN_YELLOW_BLOCK_3_XYZA, GEN_YELLOW_BLOCK_3_ITEM
#define GEN_YELLOW_BLOCK_3_FLAG GF_KPA61_ItemBlock_SuperShroomB

