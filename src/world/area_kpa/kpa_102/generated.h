/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOWSERS_CASTLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -480.0,    0.0, -215.0,   90.0 }, \
    {  764.0,    0.0, -215.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(    20,    20,   -20,   -20) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(    20,    20,   -20,   -20) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(    20,    20,   -20,   -20) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(    20,    20,   -20,   -20) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -480
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -215
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -480,0,-215

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 764
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -215
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 764,0,-215

// type: Marker:NPC
// name: NPC_Koopatrol
// anim: ANIM_WorldKoopatrol_Anim01
#define GEN_NPC_KOOPATROL_X -200
#define GEN_NPC_KOOPATROL_Y 0
#define GEN_NPC_KOOPATROL_Z -225
#define GEN_NPC_KOOPATROL_DIR 270
#define GEN_NPC_KOOPATROL_VEC -200,0,-225
#define GEN_NPC_KOOPATROL_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -200, 0, -225 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -200, 0, -225 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_FlyingMagikoopa
// anim: ANIM_FlyingMagikoopa_Anim00
#define GEN_NPC_FLYING_MAGIKOOPA_X 125
#define GEN_NPC_FLYING_MAGIKOOPA_Y 50
#define GEN_NPC_FLYING_MAGIKOOPA_Z -225
#define GEN_NPC_FLYING_MAGIKOOPA_DIR 90
#define GEN_NPC_FLYING_MAGIKOOPA_VEC 125,50,-225
#define GEN_NPC_FLYING_MAGIKOOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 125, 50, -225 }, \
        .wanderSize  = { 120, 25 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 125, 50, -225 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_HammerBros
// anim: ANIM_HammerBros_Anim02
#define GEN_NPC_HAMMER_BROS_X 450
#define GEN_NPC_HAMMER_BROS_Y 0
#define GEN_NPC_HAMMER_BROS_Z -225
#define GEN_NPC_HAMMER_BROS_DIR 270
#define GEN_NPC_HAMMER_BROS_VEC 450,0,-225
#define GEN_NPC_HAMMER_BROS_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 450, 0, -225 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 450, 0, -225 }, \
        .detectSize  = { 200 }, \
    }, \
}

