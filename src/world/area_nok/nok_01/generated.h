/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_VILLAGE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -333.0,    0.0,  350.0,   45.0 }, \
    {  470.0,    0.0,   10.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_MAX(0x8000) \
    TEX_PAN_PARAMS_STEP( 16384,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(    12,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -333
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 350
#define GEN_ENTRY_0_DIR 45
#define GEN_ENTRY_0_VEC -333,0,350

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 470
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 10
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 470,0,10

// type: Marker:NPC
// name: NPC_Koover
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOVER_X -233
#define GEN_NPC_KOOVER_Y 0
#define GEN_NPC_KOOVER_Z 256
#define GEN_NPC_KOOVER_DIR 0
#define GEN_NPC_KOOVER_VEC -233,0,256
#define GEN_NPC_KOOVER_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -233, 0, 256 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -233, 0, 256 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_FuzzyWithShell
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_FUZZY_WITH_SHELL_X 0
#define GEN_NPC_FUZZY_WITH_SHELL_Y -1000
#define GEN_NPC_FUZZY_WITH_SHELL_Z 0
#define GEN_NPC_FUZZY_WITH_SHELL_DIR 0
#define GEN_NPC_FUZZY_WITH_SHELL_VEC 0,-1000,0
#define GEN_NPC_FUZZY_WITH_SHELL_TERRITORY \
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
// name: NPC_KooversShell
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOVERS_SHELL_X 0
#define GEN_NPC_KOOVERS_SHELL_Y -1000
#define GEN_NPC_KOOVERS_SHELL_Z 0
#define GEN_NPC_KOOVERS_SHELL_DIR 0
#define GEN_NPC_KOOVERS_SHELL_VEC 0,-1000,0
#define GEN_NPC_KOOVERS_SHELL_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa_02
// anim: ANIM_KoopaWithoutShell_CryIdle
#define GEN_NPC_KOOPA_02_X 50
#define GEN_NPC_KOOPA_02_Y 0
#define GEN_NPC_KOOPA_02_Z 300
#define GEN_NPC_KOOPA_02_DIR 180
#define GEN_NPC_KOOPA_02_VEC 50,0,300
#define GEN_NPC_KOOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 50, 0, 325 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 52, 0, 330 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaShell_02
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_SHELL_02_X 0
#define GEN_NPC_KOOPA_SHELL_02_Y -1000
#define GEN_NPC_KOOPA_SHELL_02_Z 0
#define GEN_NPC_KOOPA_SHELL_02_DIR 0
#define GEN_NPC_KOOPA_SHELL_02_VEC 0,-1000,0
#define GEN_NPC_KOOPA_SHELL_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa_03
// anim: ANIM_KoopaWithoutShell_CryIdle
#define GEN_NPC_KOOPA_03_X 150
#define GEN_NPC_KOOPA_03_Y 0
#define GEN_NPC_KOOPA_03_Z 217
#define GEN_NPC_KOOPA_03_DIR 0
#define GEN_NPC_KOOPA_03_VEC 150,0,217
#define GEN_NPC_KOOPA_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = OVERRIDE_MOVEMENT_SPEED(3.000000), \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 175, 0, 225 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 150, 0, 217 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaShell_03
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_SHELL_03_X 0
#define GEN_NPC_KOOPA_SHELL_03_Y -1000
#define GEN_NPC_KOOPA_SHELL_03_Z 0
#define GEN_NPC_KOOPA_SHELL_03_DIR 0
#define GEN_NPC_KOOPA_SHELL_03_VEC 0,-1000,0
#define GEN_NPC_KOOPA_SHELL_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_01
// anim: ANIM_WorldBobomb_Red_Idle
#define GEN_NPC_BOBOMB_01_X 260
#define GEN_NPC_BOBOMB_01_Y 0
#define GEN_NPC_BOBOMB_01_Z -110
#define GEN_NPC_BOBOMB_01_DIR 82
#define GEN_NPC_BOBOMB_01_VEC 260,0,-110
#define GEN_NPC_BOBOMB_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_02
// anim: ANIM_WorldBobomb_Red_Idle
#define GEN_NPC_BOBOMB_02_X 270
#define GEN_NPC_BOBOMB_02_Y 0
#define GEN_NPC_BOBOMB_02_Z -160
#define GEN_NPC_BOBOMB_02_DIR 82
#define GEN_NPC_BOBOMB_02_VEC 270,0,-160
#define GEN_NPC_BOBOMB_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MiscFuzzy1
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_MISC_FUZZY1_X 0
#define GEN_NPC_MISC_FUZZY1_Y -1000
#define GEN_NPC_MISC_FUZZY1_Z 0
#define GEN_NPC_MISC_FUZZY1_DIR 0
#define GEN_NPC_MISC_FUZZY1_VEC 0,-1000,0
#define GEN_NPC_MISC_FUZZY1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MiscFuzzy2
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_MISC_FUZZY2_X 0
#define GEN_NPC_MISC_FUZZY2_Y -1000
#define GEN_NPC_MISC_FUZZY2_Z 0
#define GEN_NPC_MISC_FUZZY2_DIR 0
#define GEN_NPC_MISC_FUZZY2_VEC 0,-1000,0
#define GEN_NPC_MISC_FUZZY2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koover_1
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOVER_1_X -233
#define GEN_NPC_KOOVER_1_Y 0
#define GEN_NPC_KOOVER_1_Z 256
#define GEN_NPC_KOOVER_1_DIR 0
#define GEN_NPC_KOOVER_1_VEC -233,0,256
#define GEN_NPC_KOOVER_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -233, 0, 256 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -233, 0, 256 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Koopa_02_1
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_02_1_X 52
#define GEN_NPC_KOOPA_02_1_Y 0
#define GEN_NPC_KOOPA_02_1_Z 330
#define GEN_NPC_KOOPA_02_1_DIR 0
#define GEN_NPC_KOOPA_02_1_VEC 52,0,330
#define GEN_NPC_KOOPA_02_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 50, 0, 325 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 52, 0, 330 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Koopa_03_1
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_03_1_X 110
#define GEN_NPC_KOOPA_03_1_Y 0
#define GEN_NPC_KOOPA_03_1_Z 240
#define GEN_NPC_KOOPA_03_1_DIR 0
#define GEN_NPC_KOOPA_03_1_VEC 110,0,240
#define GEN_NPC_KOOPA_03_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 110, 0, 240 }, \
        .wanderSize  = { 45 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 150, 0, 217 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bobomb_01_1
// anim: ANIM_WorldBobomb_Red_Idle
#define GEN_NPC_BOBOMB_01_1_X 236
#define GEN_NPC_BOBOMB_01_1_Y 0
#define GEN_NPC_BOBOMB_01_1_Z 251
#define GEN_NPC_BOBOMB_01_1_DIR 82
#define GEN_NPC_BOBOMB_01_1_VEC 236,0,251
#define GEN_NPC_BOBOMB_01_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_02_1
// anim: ANIM_WorldBobomb_Red_Idle
#define GEN_NPC_BOBOMB_02_1_X 224
#define GEN_NPC_BOBOMB_02_1_Y 0
#define GEN_NPC_BOBOMB_02_1_Z 309
#define GEN_NPC_BOBOMB_02_1_DIR 82
#define GEN_NPC_BOBOMB_02_1_VEC 224,0,309
#define GEN_NPC_BOBOMB_02_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_03
// anim: ANIM_WorldBobomb_Red_Idle
#define GEN_NPC_BOBOMB_03_X 280
#define GEN_NPC_BOBOMB_03_Y 0
#define GEN_NPC_BOBOMB_03_Z 274
#define GEN_NPC_BOBOMB_03_DIR 262
#define GEN_NPC_BOBOMB_03_VEC 280,0,274
#define GEN_NPC_BOBOMB_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MortT
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_MORT_T_X -268
#define GEN_NPC_MORT_T_Y 10
#define GEN_NPC_MORT_T_Z 68
#define GEN_NPC_MORT_T_DIR 0
#define GEN_NPC_MORT_T_VEC -268,10,68
#define GEN_NPC_MORT_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa_ShopOwner
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_SHOP_OWNER_X -73
#define GEN_NPC_KOOPA_SHOP_OWNER_Y 0
#define GEN_NPC_KOOPA_SHOP_OWNER_Z -338
#define GEN_NPC_KOOPA_SHOP_OWNER_DIR 157
#define GEN_NPC_KOOPA_SHOP_OWNER_VEC -73,0,-338
#define GEN_NPC_KOOPA_SHOP_OWNER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_RelaxedKoopa
// anim: ANIM_Koopa_Idle
#define GEN_NPC_RELAXED_KOOPA_X 337
#define GEN_NPC_RELAXED_KOOPA_Y 17
#define GEN_NPC_RELAXED_KOOPA_Z -162
#define GEN_NPC_RELAXED_KOOPA_DIR 262
#define GEN_NPC_RELAXED_KOOPA_VEC 337,17,-162
#define GEN_NPC_RELAXED_KOOPA_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ChuckQuizmo
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_X 356
#define GEN_NPC_CHUCK_QUIZMO_Y 0
#define GEN_NPC_CHUCK_QUIZMO_Z 166
#define GEN_NPC_CHUCK_QUIZMO_DIR 270
#define GEN_NPC_CHUCK_QUIZMO_VEC 356,0,166
#define GEN_NPC_CHUCK_QUIZMO_TERRITORY \
{}

// type: Marker:Entity:SavePoint
// name: SavePoint_1
#define GEN_SAVE_POINT_1_X 425
#define GEN_SAVE_POINT_1_Y 60
#define GEN_SAVE_POINT_1_Z 125
#define GEN_SAVE_POINT_1_DIR 0
#define GEN_SAVE_POINT_1_VEC 425,60,125
#define GEN_SAVE_POINT_1_XYZA 425, 60, 125, 0
#define GEN_SAVE_POINT_1_PARAMS GEN_SAVE_POINT_1_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 20
#define GEN_BRICK_BLOCK_1_Y 60
#define GEN_BRICK_BLOCK_1_Z 370
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC 20,60,370
#define GEN_BRICK_BLOCK_1_XYZA 20, 60, 370, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 150
#define GEN_HIDDEN_PANEL_1_Y 0
#define GEN_HIDDEN_PANEL_1_Z 350
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC 150,0,350
#define GEN_HIDDEN_PANEL_1_XYZA 150, 0, 350, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o4
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_NOK01_HiddenPanel

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 198
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z 147
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 198,0,147
#define GEN_BOMB_POS_1_RAD 0

