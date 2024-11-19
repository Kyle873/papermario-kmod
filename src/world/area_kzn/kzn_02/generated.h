/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    { -810.0,   20.0,  -10.0,   90.0 }, \
    {  810.0,   20.0,  -10.0,  270.0 }, \
    { -810.0,   20.0,  -10.0,   90.0 },

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
#define GEN_ENTRY_0_Z -10
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -810,20,-10

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 810
#define GEN_ENTRY_1_Y 20
#define GEN_ENTRY_1_Z -10
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 810,20,-10

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -810
#define GEN_ENTRY_2_Y 20
#define GEN_ENTRY_2_Z -10
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -810,20,-10

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X -740
#define GEN_NPC_KOLORADO_Y 20
#define GEN_NPC_KOLORADO_Z 0
#define GEN_NPC_KOLORADO_DIR 90
#define GEN_NPC_KOLORADO_VEC -740,20,0
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_LavaBubble
// anim: ANIM_LavaBubble_Anim01
#define GEN_NPC_LAVA_BUBBLE_X 250
#define GEN_NPC_LAVA_BUBBLE_Y 50
#define GEN_NPC_LAVA_BUBBLE_Z 0
#define GEN_NPC_LAVA_BUBBLE_DIR 90
#define GEN_NPC_LAVA_BUBBLE_VEC 250,50,0
#define GEN_NPC_LAVA_BUBBLE_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 250, 50, 0 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 250, 50, 0 }, \
        .detectSize  = { 70, 200 }, \
    }, \
}

// type: Marker:Position
// name: LavaReset_o80
#define GEN_LAVA_RESET_O80_X -790
#define GEN_LAVA_RESET_O80_Y 20
#define GEN_LAVA_RESET_O80_Z 0
#define GEN_LAVA_RESET_O80_DIR 0
#define GEN_LAVA_RESET_O80_VEC -790,20,0

// type: Marker:Position
// name: LavaReset_o81
#define GEN_LAVA_RESET_O81_X -790
#define GEN_LAVA_RESET_O81_Y 20
#define GEN_LAVA_RESET_O81_Z 0
#define GEN_LAVA_RESET_O81_DIR 0
#define GEN_LAVA_RESET_O81_VEC -790,20,0

// type: Marker:Position
// name: LavaReset_o58
#define GEN_LAVA_RESET_O58_X -250
#define GEN_LAVA_RESET_O58_Y 20
#define GEN_LAVA_RESET_O58_Z 0
#define GEN_LAVA_RESET_O58_DIR 0
#define GEN_LAVA_RESET_O58_VEC -250,20,0

// type: Marker:Position
// name: LavaReset_o59
#define GEN_LAVA_RESET_O59_X -250
#define GEN_LAVA_RESET_O59_Y 20
#define GEN_LAVA_RESET_O59_Z 0
#define GEN_LAVA_RESET_O59_DIR 0
#define GEN_LAVA_RESET_O59_VEC -250,20,0

// type: Marker:Position
// name: LavaReset_o77
#define GEN_LAVA_RESET_O77_X 250
#define GEN_LAVA_RESET_O77_Y 20
#define GEN_LAVA_RESET_O77_Z 15
#define GEN_LAVA_RESET_O77_DIR 0
#define GEN_LAVA_RESET_O77_VEC 250,20,15

// type: Marker:Position
// name: LavaReset_o78
#define GEN_LAVA_RESET_O78_X 250
#define GEN_LAVA_RESET_O78_Y 20
#define GEN_LAVA_RESET_O78_Z 15
#define GEN_LAVA_RESET_O78_DIR 0
#define GEN_LAVA_RESET_O78_VEC 250,20,15

// type: Marker:Position
// name: LavaReset_o83
#define GEN_LAVA_RESET_O83_X 790
#define GEN_LAVA_RESET_O83_Y 20
#define GEN_LAVA_RESET_O83_Z 0
#define GEN_LAVA_RESET_O83_DIR 0
#define GEN_LAVA_RESET_O83_VEC 790,20,0

// type: Marker:Position
// name: LavaReset_o84
#define GEN_LAVA_RESET_O84_X 790
#define GEN_LAVA_RESET_O84_Y 20
#define GEN_LAVA_RESET_O84_Z 0
#define GEN_LAVA_RESET_O84_DIR 0
#define GEN_LAVA_RESET_O84_VEC 790,20,0

