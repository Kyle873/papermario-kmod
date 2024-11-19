/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_JADE_JUNGLE

// type: EntryList
#define GEN_ENTRY_LIST \
    {    0.0,    0.0,  480.0,    0.0 }, \
    {  480.0,    0.0,    0.0,  270.0 }, \
    { -480.0,  -20.0,    0.0,   90.0 }, \
    { -177.0,  125.0, -435.0,   90.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   -80,   140,    80,  -100) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 0
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 480
#define GEN_ENTRY_0_DIR 0
#define GEN_ENTRY_0_VEC 0,0,480

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 480
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 480,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -480
#define GEN_ENTRY_2_Y -20
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -480,-20,0

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -177
#define GEN_ENTRY_3_Y 125
#define GEN_ENTRY_3_Z -435
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC -177,125,-435

// type: Marker:NPC
// name: NPC_SpearGuy
// anim: ANIM_SpearGuy_Anim03
#define GEN_NPC_SPEAR_GUY_X -200
#define GEN_NPC_SPEAR_GUY_Y 90
#define GEN_NPC_SPEAR_GUY_Z -330
#define GEN_NPC_SPEAR_GUY_DIR 90
#define GEN_NPC_SPEAR_GUY_VEC -200,90,-330
#define GEN_NPC_SPEAR_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -200, 90, -330 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { -182, 90, -302 }, \
        .detectSize  = { 212, 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_MBush_01
// anim: ANIM_MBush_Anim02
#define GEN_NPC_M_BUSH_01_X 335
#define GEN_NPC_M_BUSH_01_Y 0
#define GEN_NPC_M_BUSH_01_Z -40
#define GEN_NPC_M_BUSH_01_DIR 90
#define GEN_NPC_M_BUSH_01_VEC 335,0,-40
#define GEN_NPC_M_BUSH_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MBush_02
// anim: ANIM_MBush_Anim02
#define GEN_NPC_M_BUSH_02_X 415
#define GEN_NPC_M_BUSH_02_Y 0
#define GEN_NPC_M_BUSH_02_Z -65
#define GEN_NPC_M_BUSH_02_DIR 90
#define GEN_NPC_M_BUSH_02_VEC 415,0,-65
#define GEN_NPC_M_BUSH_02_TERRITORY \
{}

// type: Marker:Entity:Munchlesia
// name: Munchlesia_1
#define GEN_MUNCHLESIA_1_X 271
#define GEN_MUNCHLESIA_1_Y 0
#define GEN_MUNCHLESIA_1_Z 336
#define GEN_MUNCHLESIA_1_DIR 0
#define GEN_MUNCHLESIA_1_VEC 271,0,336
#define GEN_MUNCHLESIA_1_XYZA 271, 0, 336, 0
#define GEN_MUNCHLESIA_1_PARAMS GEN_MUNCHLESIA_1_XYZA

// type: Marker:Entity:SpinningFlower
// name: SpinningFlower_1
#define GEN_SPINNING_FLOWER_1_X 30
#define GEN_SPINNING_FLOWER_1_Y 0
#define GEN_SPINNING_FLOWER_1_Z -250
#define GEN_SPINNING_FLOWER_1_DIR 0
#define GEN_SPINNING_FLOWER_1_VEC 30,0,-250
#define GEN_SPINNING_FLOWER_1_XYZA 30, 0, -250, 0
#define GEN_SPINNING_FLOWER_1_TARGET GEN_TARGET_1_VEC
#define GEN_SPINNING_FLOWER_1_PARAMS GEN_SPINNING_FLOWER_1_XYZA, GEN_SPINNING_FLOWER_1_TARGET

// type: Marker:Position
// name: Target_1
#define GEN_TARGET_1_X -33
#define GEN_TARGET_1_Y 90
#define GEN_TARGET_1_Z -347
#define GEN_TARGET_1_DIR 0
#define GEN_TARGET_1_VEC -33,90,-347

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -421
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -234
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -421,0,-234
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X 14
#define GEN_BOMB_POS_2_Y 90
#define GEN_BOMB_POS_2_Z -459
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC 14,90,-459
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X 455
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -150
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC 455,0,-150
#define GEN_BOMB_POS_3_RAD 0

