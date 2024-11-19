/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_JADE_JUNGLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -480.0,    0.0,    0.0,   90.0 }, \
    { -190.0,    0.0, -130.0,  180.0 }, \
    { 1200.0,   90.0,    0.0,  270.0 }, \
    { 1200.0,   90.0,    0.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0,  -300,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(     0,  -300,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(     0,  -170,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(     0,  -300,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -480
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -480,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -190
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -130
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC -190,0,-130

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 1200
#define GEN_ENTRY_2_Y 90
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 1200,90,0

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 1200
#define GEN_ENTRY_3_Y 90
#define GEN_ENTRY_3_Z 0
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 1200,90,0

// type: Marker:NPC
// name: NPC_Kolorado_01
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_01_X -100
#define GEN_NPC_KOLORADO_01_Y 0
#define GEN_NPC_KOLORADO_01_Z 10
#define GEN_NPC_KOLORADO_01_DIR 90
#define GEN_NPC_KOLORADO_01_VEC -100,0,10
#define GEN_NPC_KOLORADO_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Kolorado_02
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_02_X -100
#define GEN_NPC_KOLORADO_02_Y 0
#define GEN_NPC_KOLORADO_02_Z 10
#define GEN_NPC_KOLORADO_02_DIR 90
#define GEN_NPC_KOLORADO_02_VEC -100,0,10
#define GEN_NPC_KOLORADO_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ZiplineDummy1
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_ZIPLINE_DUMMY1_X -100
#define GEN_NPC_ZIPLINE_DUMMY1_Y 0
#define GEN_NPC_ZIPLINE_DUMMY1_Z 10
#define GEN_NPC_ZIPLINE_DUMMY1_DIR 90
#define GEN_NPC_ZIPLINE_DUMMY1_VEC -100,0,10
#define GEN_NPC_ZIPLINE_DUMMY1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ZiplineDummy2
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_ZIPLINE_DUMMY2_X -100
#define GEN_NPC_ZIPLINE_DUMMY2_Y 0
#define GEN_NPC_ZIPLINE_DUMMY2_Z 10
#define GEN_NPC_ZIPLINE_DUMMY2_DIR 90
#define GEN_NPC_ZIPLINE_DUMMY2_VEC -100,0,10
#define GEN_NPC_ZIPLINE_DUMMY2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_SpearGuy
// anim: ANIM_SpearGuy_Anim03
#define GEN_NPC_SPEAR_GUY_X -70
#define GEN_NPC_SPEAR_GUY_Y 0
#define GEN_NPC_SPEAR_GUY_Z 10
#define GEN_NPC_SPEAR_GUY_DIR 270
#define GEN_NPC_SPEAR_GUY_VEC -70,0,10
#define GEN_NPC_SPEAR_GUY_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 3, \
        .points = { \
            { 368, 0, 190 }, \
            { 411, 0, 190 }, \
            { 396, 0, 239 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -70, 0, 10 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_RaphaelRaven
// anim: ANIM_RaphaelRaven_Idle
#define GEN_NPC_RAPHAEL_RAVEN_X 0
#define GEN_NPC_RAPHAEL_RAVEN_Y -1000
#define GEN_NPC_RAPHAEL_RAVEN_Z 0
#define GEN_NPC_RAPHAEL_RAVEN_DIR 270
#define GEN_NPC_RAPHAEL_RAVEN_VEC 0,-1000,0
#define GEN_NPC_RAPHAEL_RAVEN_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_01
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_01_X 0
#define GEN_NPC_RAVEN_01_Y -1000
#define GEN_NPC_RAVEN_01_Z 0
#define GEN_NPC_RAVEN_01_DIR 270
#define GEN_NPC_RAVEN_01_VEC 0,-1000,0
#define GEN_NPC_RAVEN_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_02
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_02_X 0
#define GEN_NPC_RAVEN_02_Y -1000
#define GEN_NPC_RAVEN_02_Z 0
#define GEN_NPC_RAVEN_02_DIR 270
#define GEN_NPC_RAVEN_02_VEC 0,-1000,0
#define GEN_NPC_RAVEN_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_03
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_03_X 0
#define GEN_NPC_RAVEN_03_Y -1000
#define GEN_NPC_RAVEN_03_Z 0
#define GEN_NPC_RAVEN_03_DIR 270
#define GEN_NPC_RAVEN_03_VEC 0,-1000,0
#define GEN_NPC_RAVEN_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_04
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_04_X 0
#define GEN_NPC_RAVEN_04_Y -1000
#define GEN_NPC_RAVEN_04_Z 0
#define GEN_NPC_RAVEN_04_DIR 270
#define GEN_NPC_RAVEN_04_VEC 0,-1000,0
#define GEN_NPC_RAVEN_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_05
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_05_X 0
#define GEN_NPC_RAVEN_05_Y -1000
#define GEN_NPC_RAVEN_05_Z 0
#define GEN_NPC_RAVEN_05_DIR 270
#define GEN_NPC_RAVEN_05_VEC 0,-1000,0
#define GEN_NPC_RAVEN_05_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Misstar
// anim: ANIM_WorldMisstar_Idle
#define GEN_NPC_MISSTAR_X 1075
#define GEN_NPC_MISSTAR_Y 120
#define GEN_NPC_MISSTAR_Z 130
#define GEN_NPC_MISSTAR_DIR 90
#define GEN_NPC_MISSTAR_VEC 1075,120,130
#define GEN_NPC_MISSTAR_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 340
#define GEN_ITEM_1_Y 0
#define GEN_ITEM_1_Z -75
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 340,0,-75
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_JAMMIN_JELLY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_JAN22_Item_JamminJelly

// type: Marker:Entity:PinkFlower
// name: PinkFlower_1
#define GEN_PINK_FLOWER_1_X -107
#define GEN_PINK_FLOWER_1_Y 0
#define GEN_PINK_FLOWER_1_Z -97
#define GEN_PINK_FLOWER_1_DIR -15
#define GEN_PINK_FLOWER_1_VEC -107,0,-97
#define GEN_PINK_FLOWER_1_XYZA -107, 0, -97, -15
#define GEN_PINK_FLOWER_1_PARAMS GEN_PINK_FLOWER_1_XYZA

// type: Marker:Entity:HeartBlock
// name: HeartBlock_1
#define GEN_HEART_BLOCK_1_X 1075
#define GEN_HEART_BLOCK_1_Y 150
#define GEN_HEART_BLOCK_1_Z -50
#define GEN_HEART_BLOCK_1_DIR 0
#define GEN_HEART_BLOCK_1_VEC 1075,150,-50
#define GEN_HEART_BLOCK_1_XYZA 1075, 150, -50, 0
#define GEN_HEART_BLOCK_1_PARAMS GEN_HEART_BLOCK_1_XYZA

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X -180
#define GEN_PATH_1_Y 0
#define GEN_PATH_1_Z 10
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC -180,0,10
#define GEN_PATH_1_PATH \
    { -190,    0, -200 }, \
    { -185,    0,  -95 }, \
    { -180,    0,   10 },

// type: Marker:Path
// name: Path_2
#define GEN_PATH_2_X 725
#define GEN_PATH_2_Y 10
#define GEN_PATH_2_Z 0
#define GEN_PATH_2_DIR 0
#define GEN_PATH_2_VEC 725,10,0
#define GEN_PATH_2_PATH \
    {  990,  210, -120 }, \
    {  925,  115,  -80 }, \
    {  860,   65,  -40 }, \
    {  725,   10,    0 },

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -385
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -39
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -385,0,-39
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -328
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -123
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -328,0,-123
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Path
// name: Path_3
#define GEN_PATH_3_X 950
#define GEN_PATH_3_Y 307
#define GEN_PATH_3_Z -35
#define GEN_PATH_3_DIR 0
#define GEN_PATH_3_VEC 950,307,-35
#define GEN_PATH_3_PATH \
    {  507,  407,  -35 }, \
    {  950,  307,  -35 },

// type: Marker:Path
// name: Path_4
#define GEN_PATH_4_X 530
#define GEN_PATH_4_Y 164
#define GEN_PATH_4_Z 65
#define GEN_PATH_4_DIR 0
#define GEN_PATH_4_VEC 530,164,65
#define GEN_PATH_4_PATH \
    {  972,  247,   65 }, \
    {  530,  164,   65 },

// type: Marker:Position
// name: LavaReset_o170
#define GEN_LAVA_RESET_O170_X 750
#define GEN_LAVA_RESET_O170_Y 0
#define GEN_LAVA_RESET_O170_Z 50
#define GEN_LAVA_RESET_O170_DIR 0
#define GEN_LAVA_RESET_O170_VEC 750,0,50

// type: Marker:Position
// name: LavaReset_o70
#define GEN_LAVA_RESET_O70_X 750
#define GEN_LAVA_RESET_O70_Y 0
#define GEN_LAVA_RESET_O70_Z 50
#define GEN_LAVA_RESET_O70_DIR 0
#define GEN_LAVA_RESET_O70_VEC 750,0,50

// type: Marker:Position
// name: LavaReset_o119
#define GEN_LAVA_RESET_O119_X 960
#define GEN_LAVA_RESET_O119_Y 0
#define GEN_LAVA_RESET_O119_Z 50
#define GEN_LAVA_RESET_O119_DIR 0
#define GEN_LAVA_RESET_O119_VEC 960,0,50

// type: Marker:Position
// name: LavaReset_o276
#define GEN_LAVA_RESET_O276_X 960
#define GEN_LAVA_RESET_O276_Y 0
#define GEN_LAVA_RESET_O276_Z 50
#define GEN_LAVA_RESET_O276_DIR 0
#define GEN_LAVA_RESET_O276_VEC 960,0,50

