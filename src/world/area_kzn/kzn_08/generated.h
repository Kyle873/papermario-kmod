/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    { -315.0,    0.0,   85.0,   90.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_STEP(     0,  -800,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   800,     0,  1600,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
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

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -315
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 85
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -315,0,85

// type: Marker:NPC
// name: NPC_PutridPiranha
// anim: ANIM_LargePiranha_Putrid_Anim01
#define GEN_NPC_PUTRID_PIRANHA_X 80
#define GEN_NPC_PUTRID_PIRANHA_Y 0
#define GEN_NPC_PUTRID_PIRANHA_Z 135
#define GEN_NPC_PUTRID_PIRANHA_DIR 270
#define GEN_NPC_PUTRID_PIRANHA_VEC 80,0,135
#define GEN_NPC_PUTRID_PIRANHA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 80, 0, 135 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 90, 0, 130 }, \
        .detectSize  = { 130, 60 }, \
    }, \
}

// type: Marker:Entity:Chest
// name: Chest_1
#define GEN_CHEST_1_X 120
#define GEN_CHEST_1_Y 100
#define GEN_CHEST_1_Z -55
#define GEN_CHEST_1_DIR 0
#define GEN_CHEST_1_VEC 120,100,-55
#define GEN_CHEST_1_XYZA 120, 100, -55, 0
#define GEN_CHEST_1_PARAMS GEN_CHEST_1_XYZA
#define GEN_CHEST_1_FLAG GF_KZN08_Chest_DizzyStomp
#define GEN_CHEST_1_SCRIPT N(EVS_OpenChest_DizzyStomp)

// type: Marker:Position
// name: LavaReset_o468
#define GEN_LAVA_RESET_O468_X -230
#define GEN_LAVA_RESET_O468_Y 0
#define GEN_LAVA_RESET_O468_Z 100
#define GEN_LAVA_RESET_O468_DIR 0
#define GEN_LAVA_RESET_O468_VEC -230,0,100

// type: Marker:Position
// name: LavaReset_o470
#define GEN_LAVA_RESET_O470_X -230
#define GEN_LAVA_RESET_O470_Y 0
#define GEN_LAVA_RESET_O470_Z 100
#define GEN_LAVA_RESET_O470_DIR 0
#define GEN_LAVA_RESET_O470_VEC -230,0,100

// type: Marker:Position
// name: LavaReset_o322
#define GEN_LAVA_RESET_O322_X -10
#define GEN_LAVA_RESET_O322_Y 0
#define GEN_LAVA_RESET_O322_Z 100
#define GEN_LAVA_RESET_O322_DIR 0
#define GEN_LAVA_RESET_O322_VEC -10,0,100

// type: Marker:Position
// name: LavaReset_o446
#define GEN_LAVA_RESET_O446_X -10
#define GEN_LAVA_RESET_O446_Y 0
#define GEN_LAVA_RESET_O446_Z 100
#define GEN_LAVA_RESET_O446_DIR 0
#define GEN_LAVA_RESET_O446_VEC -10,0,100

// type: Marker:Position
// name: LavaReset_o454
#define GEN_LAVA_RESET_O454_X -90
#define GEN_LAVA_RESET_O454_Y 0
#define GEN_LAVA_RESET_O454_Z -45
#define GEN_LAVA_RESET_O454_DIR 0
#define GEN_LAVA_RESET_O454_VEC -90,0,-45

