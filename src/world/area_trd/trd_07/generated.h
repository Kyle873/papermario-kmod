/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_BROS_FORTRESS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  220.0,    0.0,    0.0,  270.0 }, \
    { -200.0,    0.0,    0.0,   90.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   100,     0,  -100,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 220
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 220,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -200
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -200,0,0

// type: Marker:NPC
// name: NPC_KoopaTroopa
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_X -75
#define GEN_NPC_KOOPA_TROOPA_Y 0
#define GEN_NPC_KOOPA_TROOPA_Z -30
#define GEN_NPC_KOOPA_TROOPA_DIR 90
#define GEN_NPC_KOOPA_TROOPA_VEC -75,0,-30
#define GEN_NPC_KOOPA_TROOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -75, 0, -30 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ParaTroopa_01
// anim: ANIM_ParaTroopa_Idle
#define GEN_NPC_PARA_TROOPA_01_X 0
#define GEN_NPC_PARA_TROOPA_01_Y 50
#define GEN_NPC_PARA_TROOPA_01_Z 30
#define GEN_NPC_PARA_TROOPA_01_DIR 270
#define GEN_NPC_PARA_TROOPA_01_VEC 0,50,30
#define GEN_NPC_PARA_TROOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 50, 30 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 50, 30 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ParaTroopa_02
// anim: ANIM_ParaTroopa_Idle
#define GEN_NPC_PARA_TROOPA_02_X 75
#define GEN_NPC_PARA_TROOPA_02_Y 50
#define GEN_NPC_PARA_TROOPA_02_Z -30
#define GEN_NPC_PARA_TROOPA_02_DIR 270
#define GEN_NPC_PARA_TROOPA_02_VEC 75,50,-30
#define GEN_NPC_PARA_TROOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 75, 50, -30 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 75, 50, -30 }, \
        .detectSize  = { 200 }, \
    }, \
}

