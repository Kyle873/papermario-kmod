/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_RUGGED

// type: EntryList
#define GEN_ENTRY_LIST \
    { -786.0,   63.0,  323.0,   90.0 }, \
    { -770.0,  163.0,   45.0,   90.0 }, \
    {  958.0,  170.0,  173.0,  270.0 }, \
    {  989.0,  370.0,  235.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0, -3000,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_C \
    TEX_PAN_PARAMS_ID(TEX_PANNER_C) \
    TEX_PAN_PARAMS_STEP( 32768,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     4,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -786
#define GEN_ENTRY_0_Y 63
#define GEN_ENTRY_0_Z 323
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -786,63,323

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -770
#define GEN_ENTRY_1_Y 163
#define GEN_ENTRY_1_Z 45
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -770,163,45

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 958
#define GEN_ENTRY_2_Y 170
#define GEN_ENTRY_2_Z 173
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 958,170,173

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 989
#define GEN_ENTRY_3_Y 370
#define GEN_ENTRY_3_Z 235
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 989,370,235

// type: Marker:NPC
// name: NPC_MontyMole_01
// anim: ANIM_MontyMole_Anim19
#define GEN_NPC_MONTY_MOLE_01_X 340
#define GEN_NPC_MONTY_MOLE_01_Y 70
#define GEN_NPC_MONTY_MOLE_01_Z 101
#define GEN_NPC_MONTY_MOLE_01_DIR 0
#define GEN_NPC_MONTY_MOLE_01_VEC 340,70,101
#define GEN_NPC_MONTY_MOLE_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 345, 70, 245 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 425, 70, 245 }, \
        .detectSize  = { 145, 300 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_MontyMole_01_Hole
// anim: ANIM_MontyMole_Anim19
#define GEN_NPC_MONTY_MOLE_01_HOLE_X 340
#define GEN_NPC_MONTY_MOLE_01_HOLE_Y 70
#define GEN_NPC_MONTY_MOLE_01_HOLE_Z 101
#define GEN_NPC_MONTY_MOLE_01_HOLE_DIR 0
#define GEN_NPC_MONTY_MOLE_01_HOLE_VEC 340,70,101
#define GEN_NPC_MONTY_MOLE_01_HOLE_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_MontyMole_02
// anim: ANIM_MontyMole_Anim01
#define GEN_NPC_MONTY_MOLE_02_X -250
#define GEN_NPC_MONTY_MOLE_02_Y 10
#define GEN_NPC_MONTY_MOLE_02_Z 260
#define GEN_NPC_MONTY_MOLE_02_DIR 90
#define GEN_NPC_MONTY_MOLE_02_VEC -250,10,260
#define GEN_NPC_MONTY_MOLE_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -250, 10, 260 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -250, 10, 260 }, \
        .detectSize  = { 180 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_MontyMole_03
// anim: ANIM_MontyMole_Anim01
#define GEN_NPC_MONTY_MOLE_03_X -175
#define GEN_NPC_MONTY_MOLE_03_Y 10
#define GEN_NPC_MONTY_MOLE_03_Z 240
#define GEN_NPC_MONTY_MOLE_03_DIR 270
#define GEN_NPC_MONTY_MOLE_03_VEC -175,10,240
#define GEN_NPC_MONTY_MOLE_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -175, 10, 240 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -175, 10, 240 }, \
        .detectSize  = { 180 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_MontyMole_04
// anim: ANIM_MontyMole_Anim01
#define GEN_NPC_MONTY_MOLE_04_X -55
#define GEN_NPC_MONTY_MOLE_04_Y 10
#define GEN_NPC_MONTY_MOLE_04_Z 180
#define GEN_NPC_MONTY_MOLE_04_DIR 270
#define GEN_NPC_MONTY_MOLE_04_VEC -55,10,180
#define GEN_NPC_MONTY_MOLE_04_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -55, 10, 180 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -55, 10, 180 }, \
        .detectSize  = { 180 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Cleft
// anim: ANIM_Cleft_Anim02
#define GEN_NPC_CLEFT_X -657
#define GEN_NPC_CLEFT_Y 163
#define GEN_NPC_CLEFT_Z 155
#define GEN_NPC_CLEFT_DIR 0
#define GEN_NPC_CLEFT_VEC -657,163,155
#define GEN_NPC_CLEFT_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -639, 163, 100 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -655, 0, 125 }, \
        .detectSize  = { 125 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 160
#define GEN_ITEM_1_Y 125
#define GEN_ITEM_1_Z 125
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 160,125,125
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_QUAKE_HAMMER
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_IWA01_Item_QuakeHammer

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 410
#define GEN_ITEM_2_Y 140
#define GEN_ITEM_2_Z 135
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 410,140,135
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_LETTER_TO_MERLON
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_2_FLAG GF_IWA01_Item_Letter01

// type: Marker:Entity:SavePoint
// name: SavePoint_1
#define GEN_SAVE_POINT_1_X -650
#define GEN_SAVE_POINT_1_Y 123
#define GEN_SAVE_POINT_1_Z 375
#define GEN_SAVE_POINT_1_DIR 0
#define GEN_SAVE_POINT_1_VEC -650,123,375
#define GEN_SAVE_POINT_1_XYZA -650, 123, 375, 0
#define GEN_SAVE_POINT_1_PARAMS GEN_SAVE_POINT_1_XYZA

// type: Marker:Entity:ArrowSign
// name: ArrowSign_1
#define GEN_ARROW_SIGN_1_X -503
#define GEN_ARROW_SIGN_1_Y 63
#define GEN_ARROW_SIGN_1_Z 225
#define GEN_ARROW_SIGN_1_DIR 0
#define GEN_ARROW_SIGN_1_VEC -503,63,225
#define GEN_ARROW_SIGN_1_XYZA -503, 63, 225, 0
#define GEN_ARROW_SIGN_1_ANGLE 90
#define GEN_ARROW_SIGN_1_PARAMS GEN_ARROW_SIGN_1_XYZA, GEN_ARROW_SIGN_1_ANGLE

// type: Marker:Entity:ArrowSign
// name: ArrowSign_2
#define GEN_ARROW_SIGN_2_X 825
#define GEN_ARROW_SIGN_2_Y 170
#define GEN_ARROW_SIGN_2_Z 115
#define GEN_ARROW_SIGN_2_DIR 0
#define GEN_ARROW_SIGN_2_VEC 825,170,115
#define GEN_ARROW_SIGN_2_XYZA 825, 170, 115, 0
#define GEN_ARROW_SIGN_2_ANGLE 90
#define GEN_ARROW_SIGN_2_PARAMS GEN_ARROW_SIGN_2_XYZA, GEN_ARROW_SIGN_2_ANGLE

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 45
#define GEN_HIDDEN_PANEL_1_Y 10
#define GEN_HIDDEN_PANEL_1_Z 60
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC 45,10,60
#define GEN_HIDDEN_PANEL_1_XYZA 45, 10, 60, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_cam2b
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_IWA01_HiddenPanel

