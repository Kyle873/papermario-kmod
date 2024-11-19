/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -320.0,  -20.0,    0.0,   90.0 }, \
    {  507.0,  -20.0,    0.0,  270.0 }, \
    {  207.0,   60.0, -100.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_STEP(    70,   100,   100,   130) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -320
#define GEN_ENTRY_0_Y -20
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -320,-20,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 507
#define GEN_ENTRY_1_Y -20
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 507,-20,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 207
#define GEN_ENTRY_2_Y 60
#define GEN_ENTRY_2_Z -100
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 207,60,-100

// type: Marker:NPC
// name: NPC_DarkTroopa_01
// anim: ANIM_KoopaTroopa_Dark_Scramble
#define GEN_NPC_DARK_TROOPA_01_X -50
#define GEN_NPC_DARK_TROOPA_01_Y -20
#define GEN_NPC_DARK_TROOPA_01_Z 100
#define GEN_NPC_DARK_TROOPA_01_DIR 90
#define GEN_NPC_DARK_TROOPA_01_VEC -50,-20,100
#define GEN_NPC_DARK_TROOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -50, -20, 100 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -50, -20, 100 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_DarkTroopa_02
// anim: ANIM_KoopaTroopa_Dark_Scramble
#define GEN_NPC_DARK_TROOPA_02_X 250
#define GEN_NPC_DARK_TROOPA_02_Y -20
#define GEN_NPC_DARK_TROOPA_02_Z 100
#define GEN_NPC_DARK_TROOPA_02_DIR 90
#define GEN_NPC_DARK_TROOPA_02_VEC 250,-20,100
#define GEN_NPC_DARK_TROOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 250, -20, 100 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 250, -20, 100 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 475
#define GEN_YELLOW_BLOCK_1_Y 70
#define GEN_YELLOW_BLOCK_1_Z -100
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 475,70,-100
#define GEN_YELLOW_BLOCK_1_XYZA 475, 70, -100, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_SHOOTING_STAR
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_TIK20_ItemBlock_ShootingStar

// type: Marker:Position
// name: LavaReset_yuka
#define GEN_LAVA_RESET_YUKA_X -190
#define GEN_LAVA_RESET_YUKA_Y 30
#define GEN_LAVA_RESET_YUKA_Z -85
#define GEN_LAVA_RESET_YUKA_DIR 0
#define GEN_LAVA_RESET_YUKA_VEC -190,30,-85

// type: Marker:Position
// name: LavaReset_yuka2
#define GEN_LAVA_RESET_YUKA2_X 200
#define GEN_LAVA_RESET_YUKA2_Y 30
#define GEN_LAVA_RESET_YUKA2_Z -70
#define GEN_LAVA_RESET_YUKA2_DIR 0
#define GEN_LAVA_RESET_YUKA2_VEC 200,30,-70

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X -130
#define GEN_DRIP_VOLUME_1_Y 90
#define GEN_DRIP_VOLUME_1_Z 13
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC -130,90,13
#define GEN_DRIP_VOLUME_1_MIN_X -312
#define GEN_DRIP_VOLUME_1_MIN_Y -20
#define GEN_DRIP_VOLUME_1_MIN_Z -19
#define GEN_DRIP_VOLUME_1_MIN_XZ -312,-19
#define GEN_DRIP_VOLUME_1_MIN_VEC -312,-20,-19
#define GEN_DRIP_VOLUME_1_MAX_X 52
#define GEN_DRIP_VOLUME_1_MAX_Y 200
#define GEN_DRIP_VOLUME_1_MAX_Z 46
#define GEN_DRIP_VOLUME_1_MAX_XZ 52,46
#define GEN_DRIP_VOLUME_1_MAX_VEC 52,200,46

// type: Marker:Volume
// name: DripVolume_2
#define GEN_DRIP_VOLUME_2_X 250
#define GEN_DRIP_VOLUME_2_Y 90
#define GEN_DRIP_VOLUME_2_Z 67
#define GEN_DRIP_VOLUME_2_DIR 0
#define GEN_DRIP_VOLUME_2_VEC 250,90,67
#define GEN_DRIP_VOLUME_2_MIN_X 40
#define GEN_DRIP_VOLUME_2_MIN_Y -20
#define GEN_DRIP_VOLUME_2_MIN_Z -50
#define GEN_DRIP_VOLUME_2_MIN_XZ 40,-50
#define GEN_DRIP_VOLUME_2_MIN_VEC 40,-20,-50
#define GEN_DRIP_VOLUME_2_MAX_X 460
#define GEN_DRIP_VOLUME_2_MAX_Y 200
#define GEN_DRIP_VOLUME_2_MAX_Z 185
#define GEN_DRIP_VOLUME_2_MAX_XZ 460,185
#define GEN_DRIP_VOLUME_2_MAX_VEC 460,200,185

