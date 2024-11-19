/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_BROS_FORTRESS

// type: EntryList
#define GEN_ENTRY_LIST \
    {    0.0,    0.0,    0.0,    0.0 }, \
    { -310.0,    0.0,    0.0,   90.0 }, \
    {    0.0,    0.0,    0.0,    0.0 }, \
    {    0.0,    0.0,    0.0,    0.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   100,     0,  -100,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 0
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 0
#define GEN_ENTRY_0_VEC 0,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -310
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -310,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 0
#define GEN_ENTRY_2_VEC 0,0,0

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 0
#define GEN_ENTRY_3_DIR 0
#define GEN_ENTRY_3_VEC 0,0,0

// type: Marker:NPC
// name: NPC_KoopaBros_Red
// anim: ANIM_KoopaBros_Red_Idle
#define GEN_NPC_KOOPA_BROS_RED_X 60
#define GEN_NPC_KOOPA_BROS_RED_Y 0
#define GEN_NPC_KOOPA_BROS_RED_Z -60
#define GEN_NPC_KOOPA_BROS_RED_DIR 0
#define GEN_NPC_KOOPA_BROS_RED_VEC 60,0,-60
#define GEN_NPC_KOOPA_BROS_RED_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 60, 0, -60 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 60, 0, -60 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaBros_Black
// anim: ANIM_KoopaBros_Black_Idle
#define GEN_NPC_KOOPA_BROS_BLACK_X 60
#define GEN_NPC_KOOPA_BROS_BLACK_Y 0
#define GEN_NPC_KOOPA_BROS_BLACK_Z 0
#define GEN_NPC_KOOPA_BROS_BLACK_DIR 0
#define GEN_NPC_KOOPA_BROS_BLACK_VEC 60,0,0
#define GEN_NPC_KOOPA_BROS_BLACK_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 60, 0, 0 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 60, 0, 60 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaBros_Yellow
// anim: ANIM_KoopaBros_Yellow_Idle
#define GEN_NPC_KOOPA_BROS_YELLOW_X -10
#define GEN_NPC_KOOPA_BROS_YELLOW_Y 0
#define GEN_NPC_KOOPA_BROS_YELLOW_Z -60
#define GEN_NPC_KOOPA_BROS_YELLOW_DIR 0
#define GEN_NPC_KOOPA_BROS_YELLOW_VEC -10,0,-60
#define GEN_NPC_KOOPA_BROS_YELLOW_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -10, 0, -60 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -10, 0, -60 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaBros_Green
// anim: ANIM_KoopaBros_Green_Idle
#define GEN_NPC_KOOPA_BROS_GREEN_X 0
#define GEN_NPC_KOOPA_BROS_GREEN_Y 0
#define GEN_NPC_KOOPA_BROS_GREEN_Z 0
#define GEN_NPC_KOOPA_BROS_GREEN_DIR 0
#define GEN_NPC_KOOPA_BROS_GREEN_VEC 0,0,0
#define GEN_NPC_KOOPA_BROS_GREEN_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -10, 0, 60 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bombette
// anim: ANIM_WorldBombette_Idle
#define GEN_NPC_BOMBETTE_X 0
#define GEN_NPC_BOMBETTE_Y 0
#define GEN_NPC_BOMBETTE_Z 0
#define GEN_NPC_BOMBETTE_DIR 0
#define GEN_NPC_BOMBETTE_VEC 0,0,0
#define GEN_NPC_BOMBETTE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Jailer_KoopaTroopa
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_JAILER_KOOPA_TROOPA_X 0
#define GEN_NPC_JAILER_KOOPA_TROOPA_Y -1000
#define GEN_NPC_JAILER_KOOPA_TROOPA_Z 0
#define GEN_NPC_JAILER_KOOPA_TROOPA_DIR 0
#define GEN_NPC_JAILER_KOOPA_TROOPA_VEC 0,-1000,0
#define GEN_NPC_JAILER_KOOPA_TROOPA_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Jailer_Bobomb_01
// anim: ANIM_Bobomb_Idle
#define GEN_NPC_JAILER_BOBOMB_01_X 0
#define GEN_NPC_JAILER_BOBOMB_01_Y -1000
#define GEN_NPC_JAILER_BOBOMB_01_Z 0
#define GEN_NPC_JAILER_BOBOMB_01_DIR 0
#define GEN_NPC_JAILER_BOBOMB_01_VEC 0,-1000,0
#define GEN_NPC_JAILER_BOBOMB_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Jailer_Bobomb_02
// anim: ANIM_Bobomb_Idle
#define GEN_NPC_JAILER_BOBOMB_02_X 0
#define GEN_NPC_JAILER_BOBOMB_02_Y -1000
#define GEN_NPC_JAILER_BOBOMB_02_Z 0
#define GEN_NPC_JAILER_BOBOMB_02_DIR 0
#define GEN_NPC_JAILER_BOBOMB_02_VEC 0,-1000,0
#define GEN_NPC_JAILER_BOBOMB_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_01
// anim: ANIM_WorldBobomb_Red_Idle
#define GEN_NPC_BOBOMB_01_X 25
#define GEN_NPC_BOBOMB_01_Y 0
#define GEN_NPC_BOBOMB_01_Z 127
#define GEN_NPC_BOBOMB_01_DIR 270
#define GEN_NPC_BOBOMB_01_VEC 25,0,127
#define GEN_NPC_BOBOMB_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_02
// anim: ANIM_WorldBobomb_Blue_Idle
#define GEN_NPC_BOBOMB_02_X -30
#define GEN_NPC_BOBOMB_02_Y 0
#define GEN_NPC_BOBOMB_02_Z 130
#define GEN_NPC_BOBOMB_02_DIR 90
#define GEN_NPC_BOBOMB_02_VEC -30,0,130
#define GEN_NPC_BOBOMB_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_03
// anim: ANIM_WorldBobomb_Green_Idle
#define GEN_NPC_BOBOMB_03_X -140
#define GEN_NPC_BOBOMB_03_Y 0
#define GEN_NPC_BOBOMB_03_Z -90
#define GEN_NPC_BOBOMB_03_DIR 270
#define GEN_NPC_BOBOMB_03_VEC -140,0,-90
#define GEN_NPC_BOBOMB_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_04
// anim: ANIM_WorldBobomb_Green_Idle
#define GEN_NPC_BOBOMB_04_X -75
#define GEN_NPC_BOBOMB_04_Y 0
#define GEN_NPC_BOBOMB_04_Z -80
#define GEN_NPC_BOBOMB_04_DIR 90
#define GEN_NPC_BOBOMB_04_VEC -75,0,-80
#define GEN_NPC_BOBOMB_04_TERRITORY \
{}

// type: Marker:Entity:HeartBlock
// name: HeartBlock_1
#define GEN_HEART_BLOCK_1_X -150
#define GEN_HEART_BLOCK_1_Y 60
#define GEN_HEART_BLOCK_1_Z 100
#define GEN_HEART_BLOCK_1_DIR 0
#define GEN_HEART_BLOCK_1_VEC -150,60,100
#define GEN_HEART_BLOCK_1_XYZA -150, 60, 100, 0
#define GEN_HEART_BLOCK_1_STYLE 6
#define GEN_HEART_BLOCK_1_PARAMS GEN_HEART_BLOCK_1_XYZA, GEN_HEART_BLOCK_1_STYLE

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X 51
#define GEN_PATH_1_Y -143
#define GEN_PATH_1_Z 1
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC 51,-143,1
#define GEN_PATH_1_PATH \
    {    0,    0,    0 }, \
    {    9,  -48,   -2 }, \
    {   25,  -97,   -2 }, \
    {   51, -143,    1 },

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 160
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z 160
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 160,0,160
#define GEN_BOMB_POS_1_RAD 0

