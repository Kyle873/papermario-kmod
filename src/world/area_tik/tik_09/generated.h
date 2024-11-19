/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -225.0,  -10.0,    0.0,   90.0 }, \
    {  325.0,  -10.0,    0.0,  270.0 }, \
    {  -30.0,   25.0,  -40.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(    70,   100,   100,   130) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(   -50,  -900,   -70, -1200) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_5 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_5) \
    TEX_PAN_PARAMS_STEP(     0, -1400, -2600,   -60) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_6 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_6) \
    TEX_PAN_PARAMS_STEP(   200,   400,   250,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -225
#define GEN_ENTRY_0_Y -10
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -225,-10,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 325
#define GEN_ENTRY_1_Y -10
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 325,-10,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -30
#define GEN_ENTRY_2_Y 25
#define GEN_ENTRY_2_Z -40
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC -30,25,-40

// type: Marker:NPC
// name: NPC_KoopaTroopa_01
// anim: ANIM_KoopaTroopa_Dark_Scramble
#define GEN_NPC_KOOPA_TROOPA_01_X -80
#define GEN_NPC_KOOPA_TROOPA_01_Y -10
#define GEN_NPC_KOOPA_TROOPA_01_Z 0
#define GEN_NPC_KOOPA_TROOPA_01_DIR 90
#define GEN_NPC_KOOPA_TROOPA_01_VEC -80,-10,0
#define GEN_NPC_KOOPA_TROOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -80, -10, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -80, -10, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_02
// anim: ANIM_KoopaTroopa_Dark_Scramble
#define GEN_NPC_KOOPA_TROOPA_02_X 60
#define GEN_NPC_KOOPA_TROOPA_02_Y -10
#define GEN_NPC_KOOPA_TROOPA_02_Z 0
#define GEN_NPC_KOOPA_TROOPA_02_DIR 90
#define GEN_NPC_KOOPA_TROOPA_02_VEC 60,-10,0
#define GEN_NPC_KOOPA_TROOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 60, -10, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 60, -10, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_03
// anim: ANIM_KoopaTroopa_Dark_Scramble
#define GEN_NPC_KOOPA_TROOPA_03_X 180
#define GEN_NPC_KOOPA_TROOPA_03_Y -10
#define GEN_NPC_KOOPA_TROOPA_03_Z 0
#define GEN_NPC_KOOPA_TROOPA_03_DIR 270
#define GEN_NPC_KOOPA_TROOPA_03_VEC 180,-10,0
#define GEN_NPC_KOOPA_TROOPA_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 180, -10, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 180, -10, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:BlueWarpPipe
// name: BlueWarpPipe_1
#define GEN_BLUE_WARP_PIPE_1_X -30
#define GEN_BLUE_WARP_PIPE_1_Y -10
#define GEN_BLUE_WARP_PIPE_1_Z -40
#define GEN_BLUE_WARP_PIPE_1_DIR 0
#define GEN_BLUE_WARP_PIPE_1_VEC -30,-10,-40
#define GEN_BLUE_WARP_PIPE_1_XYZA -30, -10, -40, 0
#define GEN_BLUE_WARP_PIPE_1_ENTRY tik_09_ENTRY_2
#define GEN_BLUE_WARP_PIPE_1_SCRIPT N(EVS_GotoMap_mim_11_3)
#define GEN_BLUE_WARP_PIPE_1_FLAG GF_TIK09_WarpPipe
#define GEN_BLUE_WARP_PIPE_1_PARAMS GEN_BLUE_WARP_PIPE_1_XYZA, GEN_BLUE_WARP_PIPE_1_ENTRY, Ref(GEN_BLUE_WARP_PIPE_1_SCRIPT), EVT_INDEX_OF_GAME_FLAG(GEN_BLUE_WARP_PIPE_1_FLAG)

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X 163
#define GEN_DRIP_VOLUME_1_Y 95
#define GEN_DRIP_VOLUME_1_Z 18
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC 163,95,18
#define GEN_DRIP_VOLUME_1_MIN_X -223
#define GEN_DRIP_VOLUME_1_MIN_Y -10
#define GEN_DRIP_VOLUME_1_MIN_Z -31
#define GEN_DRIP_VOLUME_1_MIN_XZ -223,-31
#define GEN_DRIP_VOLUME_1_MIN_VEC -223,-10,-31
#define GEN_DRIP_VOLUME_1_MAX_X 550
#define GEN_DRIP_VOLUME_1_MAX_Y 200
#define GEN_DRIP_VOLUME_1_MAX_Z 68
#define GEN_DRIP_VOLUME_1_MAX_XZ 550,68
#define GEN_DRIP_VOLUME_1_MAX_VEC 550,200,68

