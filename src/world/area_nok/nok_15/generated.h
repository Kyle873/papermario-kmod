/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PLEASANT_PATH

// type: EntryList
#define GEN_ENTRY_LIST \
    { -782.0,    0.0,  -48.0,   90.0 }, \
    {  -21.0,    0.0, -931.0,  145.0 }, \
    { -238.0,  200.0, -758.0,  130.0 }, \
    {  -62.0,   30.0, -430.0,    0.0 }, \
    { -138.0,  260.0, -638.0,  320.0 },

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
#define GEN_ENTRY_0_X -782
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -48
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -782,0,-48

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -21
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -931
#define GEN_ENTRY_1_DIR 145
#define GEN_ENTRY_1_VEC -21,0,-931

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -238
#define GEN_ENTRY_2_Y 200
#define GEN_ENTRY_2_Z -758
#define GEN_ENTRY_2_DIR 130
#define GEN_ENTRY_2_VEC -238,200,-758

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -62
#define GEN_ENTRY_3_Y 30
#define GEN_ENTRY_3_Z -430
#define GEN_ENTRY_3_DIR 0
#define GEN_ENTRY_3_VEC -62,30,-430

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -138
#define GEN_ENTRY_4_Y 260
#define GEN_ENTRY_4_Z -638
#define GEN_ENTRY_4_DIR 320
#define GEN_ENTRY_4_VEC -138,260,-638

// type: Marker:NPC
// name: NPC_KoopaTroopa
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_X -450
#define GEN_NPC_KOOPA_TROOPA_Y 0
#define GEN_NPC_KOOPA_TROOPA_Z -45
#define GEN_NPC_KOOPA_TROOPA_DIR 270
#define GEN_NPC_KOOPA_TROOPA_VEC -450,0,-45
#define GEN_NPC_KOOPA_TROOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -450, 0, -45 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -450, 0, -45 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ParaTroopa
// anim: ANIM_ParaTroopa_Idle
#define GEN_NPC_PARA_TROOPA_X -150
#define GEN_NPC_PARA_TROOPA_Y 50
#define GEN_NPC_PARA_TROOPA_Z -70
#define GEN_NPC_PARA_TROOPA_DIR 270
#define GEN_NPC_PARA_TROOPA_VEC -150,50,-70
#define GEN_NPC_PARA_TROOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -150, 50, -70 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -150, 50, -70 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:HeartBlock
// name: HeartBlock_1
#define GEN_HEART_BLOCK_1_X -50
#define GEN_HEART_BLOCK_1_Y 60
#define GEN_HEART_BLOCK_1_Z -825
#define GEN_HEART_BLOCK_1_DIR 35
#define GEN_HEART_BLOCK_1_VEC -50,60,-825
#define GEN_HEART_BLOCK_1_XYZA -50, 60, -825, 35
#define GEN_HEART_BLOCK_1_STYLE 6
#define GEN_HEART_BLOCK_1_PARAMS GEN_HEART_BLOCK_1_XYZA, GEN_HEART_BLOCK_1_STYLE

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -592
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -118
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -592,0,-118
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -26
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -531
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -26,0,-531
#define GEN_BOMB_POS_2_RAD 0

