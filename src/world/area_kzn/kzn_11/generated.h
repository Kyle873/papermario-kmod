/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    { -810.0,   20.0,    0.0,   90.0 }, \
    {  810.0,   20.0,    0.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(   200,     0,   400,  -100) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(  -200,     0,   600,  -400) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(   500,     0,     0,  -400) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     0,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_5 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_5) \
    TEX_PAN_PARAMS_STEP(   300,  -500,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_D \
    TEX_PAN_PARAMS_ID(TEX_PANNER_D) \
    TEX_PAN_PARAMS_MAX(0x40000) \
    TEX_PAN_PARAMS_STEP( 32768,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     6,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -810
#define GEN_ENTRY_0_Y 20
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -810,20,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 810
#define GEN_ENTRY_1_Y 20
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 810,20,0

// type: Marker:NPC
// name: NPC_Bubble_01
// anim: ANIM_LavaBubble_Anim01
#define GEN_NPC_BUBBLE_01_X -150
#define GEN_NPC_BUBBLE_01_Y 50
#define GEN_NPC_BUBBLE_01_Z 10
#define GEN_NPC_BUBBLE_01_DIR 90
#define GEN_NPC_BUBBLE_01_VEC -150,50,10
#define GEN_NPC_BUBBLE_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -150, 50, 10 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -150, 50, 10 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bubble_02
// anim: ANIM_LavaBubble_Anim01
#define GEN_NPC_BUBBLE_02_X 150
#define GEN_NPC_BUBBLE_02_Y 50
#define GEN_NPC_BUBBLE_02_Z 10
#define GEN_NPC_BUBBLE_02_DIR 270
#define GEN_NPC_BUBBLE_02_VEC 150,50,10
#define GEN_NPC_BUBBLE_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 150, 50, 10 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 150, 50, 10 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:Position
// name: LavaReset_o80
#define GEN_LAVA_RESET_O80_X -760
#define GEN_LAVA_RESET_O80_Y 20
#define GEN_LAVA_RESET_O80_Z 0
#define GEN_LAVA_RESET_O80_DIR 0
#define GEN_LAVA_RESET_O80_VEC -760,20,0

// type: Marker:Position
// name: LavaReset_o211
#define GEN_LAVA_RESET_O211_X -400
#define GEN_LAVA_RESET_O211_Y 20
#define GEN_LAVA_RESET_O211_Z 0
#define GEN_LAVA_RESET_O211_DIR 0
#define GEN_LAVA_RESET_O211_VEC -400,20,0

// type: Marker:Position
// name: LavaReset_o212
#define GEN_LAVA_RESET_O212_X 230
#define GEN_LAVA_RESET_O212_Y 20
#define GEN_LAVA_RESET_O212_Z 0
#define GEN_LAVA_RESET_O212_DIR 0
#define GEN_LAVA_RESET_O212_VEC 230,20,0

// type: Marker:Position
// name: LavaReset_o83
#define GEN_LAVA_RESET_O83_X 790
#define GEN_LAVA_RESET_O83_Y 20
#define GEN_LAVA_RESET_O83_Z 0
#define GEN_LAVA_RESET_O83_DIR 0
#define GEN_LAVA_RESET_O83_VEC 790,20,0

