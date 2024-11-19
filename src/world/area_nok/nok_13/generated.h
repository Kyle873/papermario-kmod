/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PLEASANT_PATH

// type: EntryList
#define GEN_ENTRY_LIST \
    { -488.0,  150.0,    0.0,   90.0 }, \
    {  165.0,    0.0, -483.0,  180.0 }, \
    {  277.0,  150.0,  210.0,  315.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_MAX(0x8000) \
    TEX_PAN_PARAMS_STEP( 16384,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(    12,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(  -100,     0,   600,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -100,     0,   400,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -488
#define GEN_ENTRY_0_Y 150
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -488,150,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 165
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -483
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC 165,0,-483

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 277
#define GEN_ENTRY_2_Y 150
#define GEN_ENTRY_2_Z 210
#define GEN_ENTRY_2_DIR 315
#define GEN_ENTRY_2_VEC 277,150,210

// type: Marker:NPC
// name: NPC_UnusedFuzzy
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_UNUSED_FUZZY_X 175
#define GEN_NPC_UNUSED_FUZZY_Y 0
#define GEN_NPC_UNUSED_FUZZY_Z -270
#define GEN_NPC_UNUSED_FUZZY_DIR 180
#define GEN_NPC_UNUSED_FUZZY_VEC 175,0,-270
#define GEN_NPC_UNUSED_FUZZY_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 175, 0, -270 }, \
        .wanderSize  = { 70 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 175, 0, -270 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -155
#define GEN_ITEM_1_Y 150
#define GEN_ITEM_1_Z -130
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -155,150,-130
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_HONEY_SYRUP
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_NOK13_Item_HoneySyrup

// type: Marker:Entity:Signpost
// name: Signpost_1
#define GEN_SIGNPOST_1_X -430
#define GEN_SIGNPOST_1_Y 150
#define GEN_SIGNPOST_1_Z -75
#define GEN_SIGNPOST_1_DIR 0
#define GEN_SIGNPOST_1_VEC -430,150,-75
#define GEN_SIGNPOST_1_XYZA -430, 150, -75, 0
#define GEN_SIGNPOST_1_PARAMS GEN_SIGNPOST_1_XYZA
#define GEN_SIGNPOST_1_SCRIPT N(EVS_ReadSign_Directions)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 70
#define GEN_BRICK_BLOCK_1_Y 0
#define GEN_BRICK_BLOCK_1_Z -250
#define GEN_BRICK_BLOCK_1_DIR 90
#define GEN_BRICK_BLOCK_1_VEC 70,0,-250
#define GEN_BRICK_BLOCK_1_XYZA 70, 0, -250, 90
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA
#define GEN_BRICK_BLOCK_1_SCRIPT N(EVS_BreakBlock_First)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X 70
#define GEN_BRICK_BLOCK_2_Y 0
#define GEN_BRICK_BLOCK_2_Z -320
#define GEN_BRICK_BLOCK_2_DIR 90
#define GEN_BRICK_BLOCK_2_VEC 70,0,-320
#define GEN_BRICK_BLOCK_2_XYZA 70, 0, -320, 90
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA
#define GEN_BRICK_BLOCK_2_SCRIPT N(EVS_BreakBlock_Second)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_3
#define GEN_BRICK_BLOCK_3_X -10
#define GEN_BRICK_BLOCK_3_Y 0
#define GEN_BRICK_BLOCK_3_Z -285
#define GEN_BRICK_BLOCK_3_DIR 90
#define GEN_BRICK_BLOCK_3_VEC -10,0,-285
#define GEN_BRICK_BLOCK_3_XYZA -10, 0, -285, 90
#define GEN_BRICK_BLOCK_3_PARAMS GEN_BRICK_BLOCK_3_XYZA
#define GEN_BRICK_BLOCK_3_SCRIPT N(EVS_BreakBlock_Third)

// type: Marker:Entity:BrickBlock
// name: BrickBlock_4
#define GEN_BRICK_BLOCK_4_X 70
#define GEN_BRICK_BLOCK_4_Y 0
#define GEN_BRICK_BLOCK_4_Z -250
#define GEN_BRICK_BLOCK_4_DIR 90
#define GEN_BRICK_BLOCK_4_VEC 70,0,-250
#define GEN_BRICK_BLOCK_4_XYZA 70, 0, -250, 90
#define GEN_BRICK_BLOCK_4_PARAMS GEN_BRICK_BLOCK_4_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_5
#define GEN_BRICK_BLOCK_5_X 70
#define GEN_BRICK_BLOCK_5_Y 0
#define GEN_BRICK_BLOCK_5_Z -320
#define GEN_BRICK_BLOCK_5_DIR 90
#define GEN_BRICK_BLOCK_5_VEC 70,0,-320
#define GEN_BRICK_BLOCK_5_XYZA 70, 0, -320, 90
#define GEN_BRICK_BLOCK_5_PARAMS GEN_BRICK_BLOCK_5_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_6
#define GEN_BRICK_BLOCK_6_X -10
#define GEN_BRICK_BLOCK_6_Y 0
#define GEN_BRICK_BLOCK_6_Z -285
#define GEN_BRICK_BLOCK_6_DIR 90
#define GEN_BRICK_BLOCK_6_VEC -10,0,-285
#define GEN_BRICK_BLOCK_6_XYZA -10, 0, -285, 90
#define GEN_BRICK_BLOCK_6_PARAMS GEN_BRICK_BLOCK_6_XYZA

// type: Marker:Entity:RedBlock
// name: RedBlock_1
#define GEN_RED_BLOCK_1_X 40
#define GEN_RED_BLOCK_1_Y 60
#define GEN_RED_BLOCK_1_Z -285
#define GEN_RED_BLOCK_1_DIR 90
#define GEN_RED_BLOCK_1_VEC 40,60,-285
#define GEN_RED_BLOCK_1_XYZA 40, 60, -285, 90
#define GEN_RED_BLOCK_1_ITEM ITEM_ATTACK_FX_B
#define GEN_RED_BLOCK_1_PARAMS GEN_RED_BLOCK_1_XYZA, GEN_RED_BLOCK_1_ITEM
#define GEN_RED_BLOCK_1_FLAG GF_NOK13_BadgeBlock_AttackFXB

// type: Marker:Entity:RedBlock
// name: RedBlock_2
#define GEN_RED_BLOCK_2_X 40
#define GEN_RED_BLOCK_2_Y 60
#define GEN_RED_BLOCK_2_Z -285
#define GEN_RED_BLOCK_2_DIR 90
#define GEN_RED_BLOCK_2_VEC 40,60,-285
#define GEN_RED_BLOCK_2_XYZA 40, 60, -285, 90
#define GEN_RED_BLOCK_2_ITEM ITEM_ATTACK_FX_B
#define GEN_RED_BLOCK_2_PARAMS GEN_RED_BLOCK_2_XYZA, GEN_RED_BLOCK_2_ITEM
#define GEN_RED_BLOCK_2_FLAG GF_NOK13_BadgeBlock_AttackFXB

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X -255
#define GEN_HIDDEN_PANEL_1_Y 150
#define GEN_HIDDEN_PANEL_1_Z -100
#define GEN_HIDDEN_PANEL_1_DIR 90
#define GEN_HIDDEN_PANEL_1_VEC -255,150,-100
#define GEN_HIDDEN_PANEL_1_XYZA -255, 150, -100, 90
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_jimen_u
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_NOK13_HiddenPanel

