/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -173.0, -135.0, -100.0,   90.0 },

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(     0,  -200,  -100,  -500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -173
#define GEN_ENTRY_0_Y -135
#define GEN_ENTRY_0_Z -100
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -173,-135,-100

// type: Marker:NPC
// name: NPC_BuzzyBeetle
// anim: ANIM_BuzzyBeetle_Anim01
#define GEN_NPC_BUZZY_BEETLE_X -6
#define GEN_NPC_BUZZY_BEETLE_Y -135
#define GEN_NPC_BUZZY_BEETLE_Z 75
#define GEN_NPC_BUZZY_BEETLE_DIR 90
#define GEN_NPC_BUZZY_BEETLE_VEC -6,-135,75
#define GEN_NPC_BUZZY_BEETLE_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -6, -135, 75 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 60, -135, 5 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_1
#define GEN_HAMMER3_BLOCK_1_X 140
#define GEN_HAMMER3_BLOCK_1_Y -135
#define GEN_HAMMER3_BLOCK_1_Z 55
#define GEN_HAMMER3_BLOCK_1_DIR 0
#define GEN_HAMMER3_BLOCK_1_VEC 140,-135,55
#define GEN_HAMMER3_BLOCK_1_XYZA 140, -135, 55, 0
#define GEN_HAMMER3_BLOCK_1_PARAMS GEN_HAMMER3_BLOCK_1_XYZA
#define GEN_HAMMER3_BLOCK_1_SCRIPT N(EVS_SmashBlockA)

// type: Marker:Entity:Hammer3Block
// name: Hammer3Block_2
#define GEN_HAMMER3_BLOCK_2_X 140
#define GEN_HAMMER3_BLOCK_2_Y -135
#define GEN_HAMMER3_BLOCK_2_Z 105
#define GEN_HAMMER3_BLOCK_2_DIR 0
#define GEN_HAMMER3_BLOCK_2_VEC 140,-135,105
#define GEN_HAMMER3_BLOCK_2_XYZA 140, -135, 105, 0
#define GEN_HAMMER3_BLOCK_2_PARAMS GEN_HAMMER3_BLOCK_2_XYZA
#define GEN_HAMMER3_BLOCK_2_SCRIPT N(EVS_SmashBlockB)

// type: Marker:Entity:SuperBlock
// name: SuperBlock_1
#define GEN_SUPER_BLOCK_1_X 240
#define GEN_SUPER_BLOCK_1_Y 0
#define GEN_SUPER_BLOCK_1_Z -40
#define GEN_SUPER_BLOCK_1_DIR 0
#define GEN_SUPER_BLOCK_1_VEC 240,0,-40
#define GEN_SUPER_BLOCK_1_XYZA 240, 0, -40, 0
#define GEN_SUPER_BLOCK_1_PARAMS GEN_SUPER_BLOCK_1_XYZA
#define GEN_SUPER_BLOCK_1_VAR MV_SuperBlock
#define GEN_SUPER_BLOCK_1_FLAG GF_TIK02_SuperBlock

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X 51
#define GEN_DRIP_VOLUME_1_Y 32
#define GEN_DRIP_VOLUME_1_Z 68
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC 51,32,68
#define GEN_DRIP_VOLUME_1_MIN_X -216
#define GEN_DRIP_VOLUME_1_MIN_Y -135
#define GEN_DRIP_VOLUME_1_MIN_Z -56
#define GEN_DRIP_VOLUME_1_MIN_XZ -216,-56
#define GEN_DRIP_VOLUME_1_MIN_VEC -216,-135,-56
#define GEN_DRIP_VOLUME_1_MAX_X 318
#define GEN_DRIP_VOLUME_1_MAX_Y 200
#define GEN_DRIP_VOLUME_1_MAX_Z 193
#define GEN_DRIP_VOLUME_1_MAX_XZ 318,193
#define GEN_DRIP_VOLUME_1_MAX_VEC 318,200,193

