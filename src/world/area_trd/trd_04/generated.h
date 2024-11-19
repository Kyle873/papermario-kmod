/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_BROS_FORTRESS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -257.0,    0.0,   80.0,   90.0 }, \
    {  257.0,    0.0,   80.0,  270.0 }, \
    { -257.0,  187.0,  -55.0,   90.0 }, \
    {  257.0,  187.0,  -55.0,  270.0 }, \
    { -257.0, -187.0,   80.0,   90.0 }, \
    {  257.0, -187.0,   80.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   100,     0,  -100,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -257
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 80
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -257,0,80

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 257
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 80
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 257,0,80

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -257
#define GEN_ENTRY_2_Y 187
#define GEN_ENTRY_2_Z -55
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -257,187,-55

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 257
#define GEN_ENTRY_3_Y 187
#define GEN_ENTRY_3_Z -55
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 257,187,-55

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -257
#define GEN_ENTRY_4_Y -187
#define GEN_ENTRY_4_Z 80
#define GEN_ENTRY_4_DIR 90
#define GEN_ENTRY_4_VEC -257,-187,80

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X 257
#define GEN_ENTRY_5_Y -187
#define GEN_ENTRY_5_Z 80
#define GEN_ENTRY_5_DIR 270
#define GEN_ENTRY_5_VEC 257,-187,80

// type: Marker:NPC
// name: NPC_KoopaTroopa
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_X 0
#define GEN_NPC_KOOPA_TROOPA_Y 0
#define GEN_NPC_KOOPA_TROOPA_Z 125
#define GEN_NPC_KOOPA_TROOPA_DIR 90
#define GEN_NPC_KOOPA_TROOPA_VEC 0,0,125
#define GEN_NPC_KOOPA_TROOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 125 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 125 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_1
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_1_X 220
#define GEN_NPC_KOOPA_TROOPA_1_Y 0
#define GEN_NPC_KOOPA_TROOPA_1_Z 30
#define GEN_NPC_KOOPA_TROOPA_1_DIR 90
#define GEN_NPC_KOOPA_TROOPA_1_VEC 220,0,30
#define GEN_NPC_KOOPA_TROOPA_1_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 220, 0, 30 }, \
            { 240, 0, 160 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 220, 0, 30 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ParaTroopa
// anim: ANIM_ParaTroopa_Idle
#define GEN_NPC_PARA_TROOPA_X -5
#define GEN_NPC_PARA_TROOPA_Y 237
#define GEN_NPC_PARA_TROOPA_Z 157
#define GEN_NPC_PARA_TROOPA_DIR 270
#define GEN_NPC_PARA_TROOPA_VEC -5,237,157
#define GEN_NPC_PARA_TROOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -5, 237, 157 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -5, 237, 157 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X 265
#define GEN_PADLOCK_1_Y 8
#define GEN_PADLOCK_1_Z 90
#define GEN_PADLOCK_1_DIR -80
#define GEN_PADLOCK_1_VEC 265,8,90
#define GEN_PADLOCK_1_XYZA 265, 8, 90, -80
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

// type: Marker:Entity:Padlock
// name: Padlock_2
#define GEN_PADLOCK_2_X -265
#define GEN_PADLOCK_2_Y 195
#define GEN_PADLOCK_2_Z -55
#define GEN_PADLOCK_2_DIR 80
#define GEN_PADLOCK_2_VEC -265,195,-55
#define GEN_PADLOCK_2_XYZA -265, 195, -55, 80
#define GEN_PADLOCK_2_PARAMS GEN_PADLOCK_2_XYZA

