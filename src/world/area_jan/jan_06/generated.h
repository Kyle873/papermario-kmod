/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_JADE_JUNGLE

// type: EntryList
#define GEN_ENTRY_LIST \
    {    0.0,    0.0,  470.0,    0.0 }, \
    {  470.0,    0.0,    0.0,  270.0 }, \
    {    0.0,    0.0, -470.0,  180.0 }, \
    { -470.0,    0.0,    0.0,   90.0 },

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
#define GEN_ENTRY_0_Z 470
#define GEN_ENTRY_0_DIR 0
#define GEN_ENTRY_0_VEC 0,0,470

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 470
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 470,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -470
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 0,0,-470

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -470
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 0
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC -470,0,0

// type: Marker:NPC
// name: NPC_JungleFuzzy
// anim: ANIM_Fuzzy_Jungle_Walk
#define GEN_NPC_JUNGLE_FUZZY_X 310
#define GEN_NPC_JUNGLE_FUZZY_Y 24
#define GEN_NPC_JUNGLE_FUZZY_Z 35
#define GEN_NPC_JUNGLE_FUZZY_DIR 270
#define GEN_NPC_JUNGLE_FUZZY_VEC 310,24,35
#define GEN_NPC_JUNGLE_FUZZY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 310, 24, 35 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 310, 24, 35 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpearGuy
// anim: ANIM_SpearGuy_Anim03
#define GEN_NPC_SPEAR_GUY_X -298
#define GEN_NPC_SPEAR_GUY_Y 35
#define GEN_NPC_SPEAR_GUY_Z 37
#define GEN_NPC_SPEAR_GUY_DIR 90
#define GEN_NPC_SPEAR_GUY_VEC -298,35,37
#define GEN_NPC_SPEAR_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -298, 0, 37 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -298, 0, 37 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_HeartPlant
// anim: ANIM_HeartPlant_Anim00
#define GEN_NPC_HEART_PLANT_X 410
#define GEN_NPC_HEART_PLANT_Y 0
#define GEN_NPC_HEART_PLANT_Z -30
#define GEN_NPC_HEART_PLANT_DIR 270
#define GEN_NPC_HEART_PLANT_VEC 410,0,-30
#define GEN_NPC_HEART_PLANT_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_HurtPlant_01
// anim: ANIM_HurtPlant_Anim01
#define GEN_NPC_HURT_PLANT_01_X 110
#define GEN_NPC_HURT_PLANT_01_Y 0
#define GEN_NPC_HURT_PLANT_01_Z 55
#define GEN_NPC_HURT_PLANT_01_DIR 90
#define GEN_NPC_HURT_PLANT_01_VEC 110,0,55
#define GEN_NPC_HURT_PLANT_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_HurtPlant_02
// anim: ANIM_HurtPlant_Anim01
#define GEN_NPC_HURT_PLANT_02_X -430
#define GEN_NPC_HURT_PLANT_02_Y 0
#define GEN_NPC_HURT_PLANT_02_Z -80
#define GEN_NPC_HURT_PLANT_02_DIR 90
#define GEN_NPC_HURT_PLANT_02_VEC -430,0,-80
#define GEN_NPC_HURT_PLANT_02_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 285
#define GEN_ITEM_1_Y -60
#define GEN_ITEM_1_Z 220
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 285,-60,220
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_COIN
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_JAN06_Item_Coin

// type: Marker:Entity:PinkFlower
// name: PinkFlower_1
#define GEN_PINK_FLOWER_1_X 84
#define GEN_PINK_FLOWER_1_Y 0
#define GEN_PINK_FLOWER_1_Z -320
#define GEN_PINK_FLOWER_1_DIR 5
#define GEN_PINK_FLOWER_1_VEC 84,0,-320
#define GEN_PINK_FLOWER_1_XYZA 84, 0, -320, 5
#define GEN_PINK_FLOWER_1_PARAMS GEN_PINK_FLOWER_1_XYZA

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 0
#define GEN_ITEM_2_Y 15
#define GEN_ITEM_2_Z -400
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 0,15,-400
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_JADE_RAVEN
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_DECORATION
#define GEN_ITEM_2_FLAG 0

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X -100
#define GEN_ITEM_3_Y 15
#define GEN_ITEM_3_Z -400
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC -100,15,-400
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_JADE_RAVEN
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_DECORATION
#define GEN_ITEM_3_FLAG 0

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -285
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -360
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -285,0,-360
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X 452
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -135
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC 452,0,-135
#define GEN_BOMB_POS_2_RAD 0

