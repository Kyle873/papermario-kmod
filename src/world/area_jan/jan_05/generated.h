/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_JADE_JUNGLE

// type: EntryList
#define GEN_ENTRY_LIST \
    {  330.0,    0.0,  330.0,  315.0 }, \
    { -500.0,  -20.0,    0.0,   90.0 }, \
    {  480.0,    0.0,    0.0,  270.0 }, \
    {    0.0,    0.0, -450.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   -80,   140,    80,  -100) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 330
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 330
#define GEN_ENTRY_0_DIR 315
#define GEN_ENTRY_0_VEC 330,0,330

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -500
#define GEN_ENTRY_1_Y -20
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -500,-20,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 480
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 480,0,0

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z -450
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC 0,0,-450

// type: Marker:NPC
// name: NPC_YoshiKid
// anim: ANIM_YoshiKid_Purple_Idle
#define GEN_NPC_YOSHI_KID_X -320
#define GEN_NPC_YOSHI_KID_Y 0
#define GEN_NPC_YOSHI_KID_Z 80
#define GEN_NPC_YOSHI_KID_DIR 270
#define GEN_NPC_YOSHI_KID_VEC -320,0,80
#define GEN_NPC_YOSHI_KID_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_JungleFuzzy
// anim: ANIM_Fuzzy_Jungle_Walk
#define GEN_NPC_JUNGLE_FUZZY_X 0
#define GEN_NPC_JUNGLE_FUZZY_Y 0
#define GEN_NPC_JUNGLE_FUZZY_Z 0
#define GEN_NPC_JUNGLE_FUZZY_DIR 270
#define GEN_NPC_JUNGLE_FUZZY_VEC 0,0,0
#define GEN_NPC_JUNGLE_FUZZY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 63, 0, -366 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 63, 0, -366 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpearGuy
// anim: ANIM_SpearGuy_Anim03
#define GEN_NPC_SPEAR_GUY_X 0
#define GEN_NPC_SPEAR_GUY_Y 0
#define GEN_NPC_SPEAR_GUY_Z 0
#define GEN_NPC_SPEAR_GUY_DIR 90
#define GEN_NPC_SPEAR_GUY_VEC 0,0,0
#define GEN_NPC_SPEAR_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_HeartPlant
// anim: ANIM_HeartPlant_Anim00
#define GEN_NPC_HEART_PLANT_X 430
#define GEN_NPC_HEART_PLANT_Y 0
#define GEN_NPC_HEART_PLANT_Z 205
#define GEN_NPC_HEART_PLANT_DIR 270
#define GEN_NPC_HEART_PLANT_VEC 430,0,205
#define GEN_NPC_HEART_PLANT_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_HurtPlant
// anim: ANIM_HurtPlant_Anim01
#define GEN_NPC_HURT_PLANT_X 375
#define GEN_NPC_HURT_PLANT_Y 0
#define GEN_NPC_HURT_PLANT_Z 260
#define GEN_NPC_HURT_PLANT_DIR 270
#define GEN_NPC_HURT_PLANT_VEC 375,0,260
#define GEN_NPC_HURT_PLANT_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MBush
// anim: ANIM_MBush_Anim02
#define GEN_NPC_M_BUSH_X 400
#define GEN_NPC_M_BUSH_Y 0
#define GEN_NPC_M_BUSH_Z -75
#define GEN_NPC_M_BUSH_DIR 90
#define GEN_NPC_M_BUSH_VEC 400,0,-75
#define GEN_NPC_M_BUSH_TERRITORY \
{}

// type: Marker:Entity:CymbalPlant
// name: CymbalPlant_1
#define GEN_CYMBAL_PLANT_1_X 205
#define GEN_CYMBAL_PLANT_1_Y 0
#define GEN_CYMBAL_PLANT_1_Z 220
#define GEN_CYMBAL_PLANT_1_DIR 0
#define GEN_CYMBAL_PLANT_1_VEC 205,0,220
#define GEN_CYMBAL_PLANT_1_XYZA 205, 0, 220, 0
#define GEN_CYMBAL_PLANT_1_PARAMS GEN_CYMBAL_PLANT_1_XYZA

// type: Marker:Entity:TrumpetPlant
// name: TrumpetPlant_1
#define GEN_TRUMPET_PLANT_1_X -386
#define GEN_TRUMPET_PLANT_1_Y 0
#define GEN_TRUMPET_PLANT_1_Z -214
#define GEN_TRUMPET_PLANT_1_DIR 160
#define GEN_TRUMPET_PLANT_1_VEC -386,0,-214
#define GEN_TRUMPET_PLANT_1_XYZA -386, 0, -214, 160
#define GEN_TRUMPET_PLANT_1_PARAMS GEN_TRUMPET_PLANT_1_XYZA

// type: Marker:Entity:RedBlock
// name: RedBlock_1
#define GEN_RED_BLOCK_1_X 0
#define GEN_RED_BLOCK_1_Y 60
#define GEN_RED_BLOCK_1_Z 0
#define GEN_RED_BLOCK_1_DIR 0
#define GEN_RED_BLOCK_1_VEC 0,60,0
#define GEN_RED_BLOCK_1_XYZA 0, 60, 0, 0
#define GEN_RED_BLOCK_1_ITEM ITEM_POWER_QUAKE
#define GEN_RED_BLOCK_1_PARAMS GEN_RED_BLOCK_1_XYZA, GEN_RED_BLOCK_1_ITEM
#define GEN_RED_BLOCK_1_FLAG GF_JAN05_BadgeBlock_PowerQuake

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 127
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -420
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 127,0,-420
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X 442
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -165
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC 442,0,-165
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X -270
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -310
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC -270,0,-310
#define GEN_BOMB_POS_3_RAD 0

