/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_SHY_GUYS_TOYBOX

// type: EntryList
#define GEN_ENTRY_LIST \
    { -965.0,    0.0,    0.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -965
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -965,0,0

// type: Marker:NPC
// name: NPC_Goomba
// anim: ANIM_Goomba_Idle
#define GEN_NPC_GOOMBA_X 1100
#define GEN_NPC_GOOMBA_Y 0
#define GEN_NPC_GOOMBA_Z 0
#define GEN_NPC_GOOMBA_DIR 270
#define GEN_NPC_GOOMBA_VEC 1100,0,0
#define GEN_NPC_GOOMBA_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Clubba
// anim: ANIM_WorldClubba_Anim02
#define GEN_NPC_CLUBBA_X 1100
#define GEN_NPC_CLUBBA_Y 0
#define GEN_NPC_CLUBBA_Z 0
#define GEN_NPC_CLUBBA_DIR 270
#define GEN_NPC_CLUBBA_VEC 1100,0,0
#define GEN_NPC_CLUBBA_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShyGuy
// anim: ANIM_ShyGuy_Pink_Anim01
#define GEN_NPC_SHY_GUY_X -770
#define GEN_NPC_SHY_GUY_Y 0
#define GEN_NPC_SHY_GUY_Z 0
#define GEN_NPC_SHY_GUY_DIR 270
#define GEN_NPC_SHY_GUY_VEC -770,0,0
#define GEN_NPC_SHY_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -770, 0, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -770, 0, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SkyGuy
// anim: ANIM_SkyGuy_Anim34
#define GEN_NPC_SKY_GUY_X -170
#define GEN_NPC_SKY_GUY_Y 60
#define GEN_NPC_SKY_GUY_Z 30
#define GEN_NPC_SKY_GUY_DIR 270
#define GEN_NPC_SKY_GUY_VEC -170,60,30
#define GEN_NPC_SKY_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -170, 60, 30 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -170, 60, 30 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Kammy
// anim: ANIM_WorldKammy_Anim01
#define GEN_NPC_KAMMY_X 0
#define GEN_NPC_KAMMY_Y -1000
#define GEN_NPC_KAMMY_Z 0
#define GEN_NPC_KAMMY_DIR 90
#define GEN_NPC_KAMMY_VEC 0,-1000,0
#define GEN_NPC_KAMMY_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -892
#define GEN_ITEM_1_Y 110
#define GEN_ITEM_1_Z -124
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -892,110,-124
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_COIN
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_OMO04_Item_CoinA

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X -892
#define GEN_ITEM_2_Y 130
#define GEN_ITEM_2_Z -124
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC -892,130,-124
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_COIN
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_OMO04_Item_CoinB

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X -892
#define GEN_ITEM_3_Y 150
#define GEN_ITEM_3_Z -124
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC -892,150,-124
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_COIN
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_3_FLAG GF_OMO04_Item_CoinC

// type: Marker:Entity:Item
// name: Item_4
#define GEN_ITEM_4_X -637
#define GEN_ITEM_4_Y 190
#define GEN_ITEM_4_Z 62
#define GEN_ITEM_4_DIR 0
#define GEN_ITEM_4_VEC -637,190,62
#define GEN_ITEM_4_PARAMS GEN_ITEM_4_ITEM, GEN_ITEM_4_VEC, GEN_ITEM_4_SPAWN, GEN_ITEM_4_FLAG
#define GEN_ITEM_4_ITEM ITEM_COIN
#define GEN_ITEM_4_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_4_FLAG GF_OMO04_Item_CoinD

// type: Marker:Entity:Item
// name: Item_5
#define GEN_ITEM_5_X -614
#define GEN_ITEM_5_Y 210
#define GEN_ITEM_5_Z 62
#define GEN_ITEM_5_DIR 0
#define GEN_ITEM_5_VEC -614,210,62
#define GEN_ITEM_5_PARAMS GEN_ITEM_5_ITEM, GEN_ITEM_5_VEC, GEN_ITEM_5_SPAWN, GEN_ITEM_5_FLAG
#define GEN_ITEM_5_ITEM ITEM_COIN
#define GEN_ITEM_5_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_5_FLAG GF_OMO04_Item_CoinE

// type: Marker:Entity:Item
// name: Item_6
#define GEN_ITEM_6_X -594
#define GEN_ITEM_6_Y 220
#define GEN_ITEM_6_Z 62
#define GEN_ITEM_6_DIR 0
#define GEN_ITEM_6_VEC -594,220,62
#define GEN_ITEM_6_PARAMS GEN_ITEM_6_ITEM, GEN_ITEM_6_VEC, GEN_ITEM_6_SPAWN, GEN_ITEM_6_FLAG
#define GEN_ITEM_6_ITEM ITEM_COIN
#define GEN_ITEM_6_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_6_FLAG GF_OMO04_Item_CoinF

// type: Marker:Entity:Item
// name: Item_7
#define GEN_ITEM_7_X -574
#define GEN_ITEM_7_Y 210
#define GEN_ITEM_7_Z 62
#define GEN_ITEM_7_DIR 0
#define GEN_ITEM_7_VEC -574,210,62
#define GEN_ITEM_7_PARAMS GEN_ITEM_7_ITEM, GEN_ITEM_7_VEC, GEN_ITEM_7_SPAWN, GEN_ITEM_7_FLAG
#define GEN_ITEM_7_ITEM ITEM_COIN
#define GEN_ITEM_7_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_7_FLAG GF_OMO04_Item_CoinG

// type: Marker:Entity:Item
// name: Item_8
#define GEN_ITEM_8_X -554
#define GEN_ITEM_8_Y 190
#define GEN_ITEM_8_Z 62
#define GEN_ITEM_8_DIR 0
#define GEN_ITEM_8_VEC -554,190,62
#define GEN_ITEM_8_PARAMS GEN_ITEM_8_ITEM, GEN_ITEM_8_VEC, GEN_ITEM_8_SPAWN, GEN_ITEM_8_FLAG
#define GEN_ITEM_8_ITEM ITEM_COIN
#define GEN_ITEM_8_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_8_FLAG GF_OMO04_Item_CoinH

// type: Marker:Entity:Item
// name: Item_9
#define GEN_ITEM_9_X 120
#define GEN_ITEM_9_Y 180
#define GEN_ITEM_9_Z -80
#define GEN_ITEM_9_DIR 0
#define GEN_ITEM_9_VEC 120,180,-80
#define GEN_ITEM_9_PARAMS GEN_ITEM_9_ITEM, GEN_ITEM_9_VEC, GEN_ITEM_9_SPAWN, GEN_ITEM_9_FLAG
#define GEN_ITEM_9_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_9_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_9_FLAG GF_OMO04_Item_StarPieceA

// type: Marker:Entity:Item
// name: Item_10
#define GEN_ITEM_10_X -90
#define GEN_ITEM_10_Y 0
#define GEN_ITEM_10_Z -125
#define GEN_ITEM_10_DIR 0
#define GEN_ITEM_10_VEC -90,0,-125
#define GEN_ITEM_10_PARAMS GEN_ITEM_10_ITEM, GEN_ITEM_10_VEC, GEN_ITEM_10_SPAWN, GEN_ITEM_10_FLAG
#define GEN_ITEM_10_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_10_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_10_FLAG GF_OMO04_Item_StarPieceB

// type: Marker:Entity:StarBoxLauncher
// name: StarBoxLauncher_1
#define GEN_STAR_BOX_LAUNCHER_1_X -892
#define GEN_STAR_BOX_LAUNCHER_1_Y 0
#define GEN_STAR_BOX_LAUNCHER_1_Z -125
#define GEN_STAR_BOX_LAUNCHER_1_DIR 0
#define GEN_STAR_BOX_LAUNCHER_1_VEC -892,0,-125
#define GEN_STAR_BOX_LAUNCHER_1_XYZA -892, 0, -125, 0
#define GEN_STAR_BOX_LAUNCHER_1_PARAMS GEN_STAR_BOX_LAUNCHER_1_XYZA
#define GEN_STAR_BOX_LAUNCHER_1_SCRIPT N(EVS_StarBoxLaunch1)

// type: Marker:Entity:StarBoxLauncher
// name: StarBoxLauncher_2
#define GEN_STAR_BOX_LAUNCHER_2_X -847
#define GEN_STAR_BOX_LAUNCHER_2_Y 0
#define GEN_STAR_BOX_LAUNCHER_2_Z 98
#define GEN_STAR_BOX_LAUNCHER_2_DIR 0
#define GEN_STAR_BOX_LAUNCHER_2_VEC -847,0,98
#define GEN_STAR_BOX_LAUNCHER_2_XYZA -847, 0, 98, 0
#define GEN_STAR_BOX_LAUNCHER_2_PARAMS GEN_STAR_BOX_LAUNCHER_2_XYZA
#define GEN_STAR_BOX_LAUNCHER_2_SCRIPT N(EVS_StarBoxLaunch2)

// type: Marker:Entity:StarBoxLauncher
// name: StarBoxLauncher_3
#define GEN_STAR_BOX_LAUNCHER_3_X -722
#define GEN_STAR_BOX_LAUNCHER_3_Y 0
#define GEN_STAR_BOX_LAUNCHER_3_Z -72
#define GEN_STAR_BOX_LAUNCHER_3_DIR 0
#define GEN_STAR_BOX_LAUNCHER_3_VEC -722,0,-72
#define GEN_STAR_BOX_LAUNCHER_3_XYZA -722, 0, -72, 0
#define GEN_STAR_BOX_LAUNCHER_3_PARAMS GEN_STAR_BOX_LAUNCHER_3_XYZA
#define GEN_STAR_BOX_LAUNCHER_3_SCRIPT N(EVS_StarBoxLaunch3)

// type: Marker:Entity:StarBoxLauncher
// name: StarBoxLauncher_4
#define GEN_STAR_BOX_LAUNCHER_4_X -647
#define GEN_STAR_BOX_LAUNCHER_4_Y 80
#define GEN_STAR_BOX_LAUNCHER_4_Z 62
#define GEN_STAR_BOX_LAUNCHER_4_DIR 0
#define GEN_STAR_BOX_LAUNCHER_4_VEC -647,80,62
#define GEN_STAR_BOX_LAUNCHER_4_XYZA -647, 80, 62, 0
#define GEN_STAR_BOX_LAUNCHER_4_PARAMS GEN_STAR_BOX_LAUNCHER_4_XYZA
#define GEN_STAR_BOX_LAUNCHER_4_SCRIPT N(EVS_StarBoxLaunch4)

// type: Marker:Entity:StarBoxLauncher
// name: StarBoxLauncher_5
#define GEN_STAR_BOX_LAUNCHER_5_X -607
#define GEN_STAR_BOX_LAUNCHER_5_Y 0
#define GEN_STAR_BOX_LAUNCHER_5_Z 133
#define GEN_STAR_BOX_LAUNCHER_5_DIR 0
#define GEN_STAR_BOX_LAUNCHER_5_VEC -607,0,133
#define GEN_STAR_BOX_LAUNCHER_5_XYZA -607, 0, 133, 0
#define GEN_STAR_BOX_LAUNCHER_5_PARAMS GEN_STAR_BOX_LAUNCHER_5_XYZA
#define GEN_STAR_BOX_LAUNCHER_5_SCRIPT N(EVS_StarBoxLaunch5)

// type: Marker:Entity:StarBoxLauncher
// name: StarBoxLauncher_6
#define GEN_STAR_BOX_LAUNCHER_6_X -467
#define GEN_STAR_BOX_LAUNCHER_6_Y 0
#define GEN_STAR_BOX_LAUNCHER_6_Z 133
#define GEN_STAR_BOX_LAUNCHER_6_DIR 0
#define GEN_STAR_BOX_LAUNCHER_6_VEC -467,0,133
#define GEN_STAR_BOX_LAUNCHER_6_XYZA -467, 0, 133, 0
#define GEN_STAR_BOX_LAUNCHER_6_PARAMS GEN_STAR_BOX_LAUNCHER_6_XYZA
#define GEN_STAR_BOX_LAUNCHER_6_SCRIPT N(EVS_StarBoxLaunch6)

// type: Marker:Entity:StarBoxLauncher
// name: StarBoxLauncher_7
#define GEN_STAR_BOX_LAUNCHER_7_X 712
#define GEN_STAR_BOX_LAUNCHER_7_Y 0
#define GEN_STAR_BOX_LAUNCHER_7_Z 133
#define GEN_STAR_BOX_LAUNCHER_7_DIR 0
#define GEN_STAR_BOX_LAUNCHER_7_VEC 712,0,133
#define GEN_STAR_BOX_LAUNCHER_7_XYZA 712, 0, 133, 0
#define GEN_STAR_BOX_LAUNCHER_7_PARAMS GEN_STAR_BOX_LAUNCHER_7_XYZA
#define GEN_STAR_BOX_LAUNCHER_7_SCRIPT N(EVS_StarBoxLaunch7)

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 575
#define GEN_YELLOW_BLOCK_1_Y 60
#define GEN_YELLOW_BLOCK_1_Z 60
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 575,60,60
#define GEN_YELLOW_BLOCK_1_XYZA 575, 60, 60, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_OMO04_ItemBlock_CoinA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 761
#define GEN_YELLOW_BLOCK_2_Y 60
#define GEN_YELLOW_BLOCK_2_Z -85
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 761,60,-85
#define GEN_YELLOW_BLOCK_2_XYZA 761, 60, -85, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_OMO04_ItemBlock_CoinB

// type: Marker:Entity:YellowBlock
// name: YellowBlock_3
#define GEN_YELLOW_BLOCK_3_X 885
#define GEN_YELLOW_BLOCK_3_Y 140
#define GEN_YELLOW_BLOCK_3_Z -110
#define GEN_YELLOW_BLOCK_3_DIR 0
#define GEN_YELLOW_BLOCK_3_VEC 885,140,-110
#define GEN_YELLOW_BLOCK_3_XYZA 885, 140, -110, 0
#define GEN_YELLOW_BLOCK_3_ITEM ITEM_THUNDER_BOLT
#define GEN_YELLOW_BLOCK_3_PARAMS GEN_YELLOW_BLOCK_3_XYZA, GEN_YELLOW_BLOCK_3_ITEM
#define GEN_YELLOW_BLOCK_3_FLAG GF_OMO04_ItemBlock_ThunderBolt

// type: Marker:Entity:Chest
// name: Chest_1
#define GEN_CHEST_1_X 1150
#define GEN_CHEST_1_Y 0
#define GEN_CHEST_1_Z 0
#define GEN_CHEST_1_DIR 0
#define GEN_CHEST_1_VEC 1150,0,0
#define GEN_CHEST_1_XYZA 1150, 0, 0, 0
#define GEN_CHEST_1_PARAMS GEN_CHEST_1_XYZA
#define GEN_CHEST_1_FLAG GF_OMO04_Chest_StoreroomKey
#define GEN_CHEST_1_SCRIPT N(EVS_OpenChest_StoreroomKey)

// type: Marker:Entity:Item
// name: Item_11
#define GEN_ITEM_11_X 1100
#define GEN_ITEM_11_Y 0
#define GEN_ITEM_11_Z 0
#define GEN_ITEM_11_DIR 0
#define GEN_ITEM_11_VEC 1100,0,0
#define GEN_ITEM_11_PARAMS GEN_ITEM_11_ITEM, GEN_ITEM_11_VEC, GEN_ITEM_11_SPAWN, GEN_ITEM_11_FLAG
#define GEN_ITEM_11_ITEM ITEM_MUSHROOM
#define GEN_ITEM_11_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_11_FLAG GF_OMO04_Item_Mushroom

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X 1000
#define GEN_PATH_1_Y 20
#define GEN_PATH_1_Z 0
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC 1000,20,0
#define GEN_PATH_1_PATH \
    {  800,  140,  -20 }, \
    { 1050,  120,  -70 }, \
    { 1150,   95, -100 }, \
    { 1200,   77,  -30 }, \
    { 1150,   62,   85 }, \
    { 1050,   50,  130 }, \
    {  800,   40,   50 }, \
    { 1000,   20,    0 },

// type: Marker:Path
// name: Path_2
#define GEN_PATH_2_X 1020
#define GEN_PATH_2_Y 15
#define GEN_PATH_2_Z 0
#define GEN_PATH_2_DIR 0
#define GEN_PATH_2_VEC 1020,15,0
#define GEN_PATH_2_PATH \
    { 1000,   20,    0 }, \
    { 1010,   17,    0 }, \
    { 1020,   15,    0 },

// type: Marker:Path
// name: Path_3
#define GEN_PATH_3_X 600
#define GEN_PATH_3_Y 150
#define GEN_PATH_3_Z 90
#define GEN_PATH_3_DIR 0
#define GEN_PATH_3_VEC 600,150,90
#define GEN_PATH_3_PATH \
    { 1020,   15,    0 }, \
    { 1080,   30,   30 }, \
    { 1160,   80,  -40 }, \
    {  600,  150,   90 },

