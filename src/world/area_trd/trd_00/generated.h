/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_BROS_FORTRESS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -973.0,    0.0,  204.0,   90.0 }, \
    { -525.0,    0.0,  130.0,  240.0 }, \
    {  400.0,    0.0,  185.0,  180.0 }, \
    {  587.0,    0.0,    6.0,   90.0 }, \
    { -955.0,  200.0, -101.0,   90.0 }, \
    { -518.0,    0.0,  212.0,  240.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   100,     0,  -100,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(     0,    90,   -60,   -70) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -973
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 204
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -973,0,204

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -525
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 130
#define GEN_ENTRY_1_DIR 240
#define GEN_ENTRY_1_VEC -525,0,130

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 400
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 185
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 400,0,185

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 587
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 6
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC 587,0,6

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -955
#define GEN_ENTRY_4_Y 200
#define GEN_ENTRY_4_Z -101
#define GEN_ENTRY_4_DIR 90
#define GEN_ENTRY_4_VEC -955,200,-101

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X -518
#define GEN_ENTRY_5_Y 0
#define GEN_ENTRY_5_Z 212
#define GEN_ENTRY_5_DIR 240
#define GEN_ENTRY_5_VEC -518,0,212

// type: Marker:NPC
// name: NPC_KoopaBros
// anim: ANIM_KoopaBros_Green_Idle
#define GEN_NPC_KOOPA_BROS_X -469
#define GEN_NPC_KOOPA_BROS_Y 0
#define GEN_NPC_KOOPA_BROS_Z 101
#define GEN_NPC_KOOPA_BROS_DIR 0
#define GEN_NPC_KOOPA_BROS_VEC -469,0,101
#define GEN_NPC_KOOPA_BROS_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Eldstar
// anim: ANIM_WorldEldstar_Idle
#define GEN_NPC_ELDSTAR_X 0
#define GEN_NPC_ELDSTAR_Y -1000
#define GEN_NPC_ELDSTAR_Z 0
#define GEN_NPC_ELDSTAR_DIR 0
#define GEN_NPC_ELDSTAR_VEC 0,-1000,0
#define GEN_NPC_ELDSTAR_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, -1000, 0 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, -1000, 0 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:Entity:SavePoint
// name: SavePoint_1
#define GEN_SAVE_POINT_1_X -920
#define GEN_SAVE_POINT_1_Y 60
#define GEN_SAVE_POINT_1_Z 80
#define GEN_SAVE_POINT_1_DIR 0
#define GEN_SAVE_POINT_1_VEC -920,60,80
#define GEN_SAVE_POINT_1_XYZA -920, 60, 80, 0
#define GEN_SAVE_POINT_1_PARAMS GEN_SAVE_POINT_1_XYZA

// type: Marker:Entity:SavePoint
// name: SavePoint_2
#define GEN_SAVE_POINT_2_X 325
#define GEN_SAVE_POINT_2_Y 60
#define GEN_SAVE_POINT_2_Z 220
#define GEN_SAVE_POINT_2_DIR 0
#define GEN_SAVE_POINT_2_VEC 325,60,220
#define GEN_SAVE_POINT_2_XYZA 325, 60, 220, 0
#define GEN_SAVE_POINT_2_PARAMS GEN_SAVE_POINT_2_XYZA

// type: Marker:Entity:Chest
// name: Chest_1
#define GEN_CHEST_1_X 810
#define GEN_CHEST_1_Y 0
#define GEN_CHEST_1_Z -50
#define GEN_CHEST_1_DIR 0
#define GEN_CHEST_1_VEC 810,0,-50
#define GEN_CHEST_1_XYZA 810, 0, -50, 0
#define GEN_CHEST_1_PARAMS GEN_CHEST_1_XYZA
#define GEN_CHEST_1_FLAG GF_TRD00_Chest_Refund
#define GEN_CHEST_1_SCRIPT N(EVS_OpenChest_Refund)

// type: Marker:Entity:Chest
// name: Chest_2
#define GEN_CHEST_2_X -750
#define GEN_CHEST_2_Y 200
#define GEN_CHEST_2_Z -125
#define GEN_CHEST_2_DIR 0
#define GEN_CHEST_2_VEC -750,200,-125
#define GEN_CHEST_2_XYZA -750, 200, -125, 0
#define GEN_CHEST_2_PARAMS GEN_CHEST_2_XYZA
#define GEN_CHEST_2_FLAG GF_TRD00_Chest_FPPlusB
#define GEN_CHEST_2_SCRIPT N(EVS_OpenChest_FPPlus)

