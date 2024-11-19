/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_JADE_JUNGLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -663.0,  -14.0,   53.0,   90.0 }, \
    {  663.0,  -16.0,   40.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(  -100,   350,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(   100,   200,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -663
#define GEN_ENTRY_0_Y -14
#define GEN_ENTRY_0_Z 53
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -663,-14,53

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 663
#define GEN_ENTRY_1_Y -16
#define GEN_ENTRY_1_Z 40
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 663,-16,40

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X -70
#define GEN_NPC_KOLORADO_Y -9
#define GEN_NPC_KOLORADO_Z 90
#define GEN_NPC_KOLORADO_DIR 90
#define GEN_NPC_KOLORADO_VEC -70,-9,90
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_JungleFuzzy_01
// anim: ANIM_Fuzzy_Jungle_Walk
#define GEN_NPC_JUNGLE_FUZZY_01_X -30
#define GEN_NPC_JUNGLE_FUZZY_01_Y 0
#define GEN_NPC_JUNGLE_FUZZY_01_Z 90
#define GEN_NPC_JUNGLE_FUZZY_01_DIR 270
#define GEN_NPC_JUNGLE_FUZZY_01_VEC -30,0,90
#define GEN_NPC_JUNGLE_FUZZY_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_JungleFuzzy_02
// anim: ANIM_Fuzzy_Jungle_Walk
#define GEN_NPC_JUNGLE_FUZZY_02_X -350
#define GEN_NPC_JUNGLE_FUZZY_02_Y 3
#define GEN_NPC_JUNGLE_FUZZY_02_Z 40
#define GEN_NPC_JUNGLE_FUZZY_02_DIR 270
#define GEN_NPC_JUNGLE_FUZZY_02_VEC -350,3,40
#define GEN_NPC_JUNGLE_FUZZY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -350, 3, 40 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -350, 3, 40 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_JungleFuzzy_03
// anim: ANIM_Fuzzy_Jungle_Walk
#define GEN_NPC_JUNGLE_FUZZY_03_X 0
#define GEN_NPC_JUNGLE_FUZZY_03_Y -10
#define GEN_NPC_JUNGLE_FUZZY_03_Z 110
#define GEN_NPC_JUNGLE_FUZZY_03_DIR 90
#define GEN_NPC_JUNGLE_FUZZY_03_VEC 0,-10,110
#define GEN_NPC_JUNGLE_FUZZY_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, -10, 110 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, -10, 110 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_JungleFuzzy_04
// anim: ANIM_Fuzzy_Jungle_Walk
#define GEN_NPC_JUNGLE_FUZZY_04_X 350
#define GEN_NPC_JUNGLE_FUZZY_04_Y 3
#define GEN_NPC_JUNGLE_FUZZY_04_Z 40
#define GEN_NPC_JUNGLE_FUZZY_04_DIR 270
#define GEN_NPC_JUNGLE_FUZZY_04_VEC 350,3,40
#define GEN_NPC_JUNGLE_FUZZY_04_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 350, 3, 40 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 350, 3, 75 }, \
        .detectSize  = { 200, 125 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -110
#define GEN_ITEM_1_Y 90
#define GEN_ITEM_1_Z -230
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -110,90,-230
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_LETTER_TO_IGOR
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_JAN01_Item_Letter11

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 340
#define GEN_ITEM_2_Y 100
#define GEN_ITEM_2_Z -90
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 340,100,-90
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_COIN
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_JAN01_Item_CoinA

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X 340
#define GEN_ITEM_3_Y 125
#define GEN_ITEM_3_Z -90
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC 340,125,-90
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_COIN
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_3_FLAG GF_JAN01_Item_CoinB

// type: Marker:Entity:BellbellPlant
// name: BellbellPlant_1
#define GEN_BELLBELL_PLANT_1_X -375
#define GEN_BELLBELL_PLANT_1_Y -3
#define GEN_BELLBELL_PLANT_1_Z -75
#define GEN_BELLBELL_PLANT_1_DIR 0
#define GEN_BELLBELL_PLANT_1_VEC -375,-3,-75
#define GEN_BELLBELL_PLANT_1_XYZA -375, -3, -75, 0
#define GEN_BELLBELL_PLANT_1_PARAMS GEN_BELLBELL_PLANT_1_XYZA

// type: Marker:Entity:BellbellPlant
// name: BellbellPlant_2
#define GEN_BELLBELL_PLANT_2_X 180
#define GEN_BELLBELL_PLANT_2_Y -3
#define GEN_BELLBELL_PLANT_2_Z -115
#define GEN_BELLBELL_PLANT_2_DIR 0
#define GEN_BELLBELL_PLANT_2_VEC 180,-3,-115
#define GEN_BELLBELL_PLANT_2_XYZA 180, -3, -115, 0
#define GEN_BELLBELL_PLANT_2_PARAMS GEN_BELLBELL_PLANT_2_XYZA

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X -335
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 57
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -55
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC -335,57,-55
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA -335, 57, -55, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_REPEL_GEL
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_JAN01_HiddenItem_RepelGel

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_2
#define GEN_HIDDEN_YELLOW_BLOCK_2_X 140
#define GEN_HIDDEN_YELLOW_BLOCK_2_Y 57
#define GEN_HIDDEN_YELLOW_BLOCK_2_Z -85
#define GEN_HIDDEN_YELLOW_BLOCK_2_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_VEC 140,57,-85
#define GEN_HIDDEN_YELLOW_BLOCK_2_XYZA 140, 57, -85, 0
#define GEN_HIDDEN_YELLOW_BLOCK_2_ITEM ITEM_MYSTERY
#define GEN_HIDDEN_YELLOW_BLOCK_2_PARAMS GEN_HIDDEN_YELLOW_BLOCK_2_XYZA, GEN_HIDDEN_YELLOW_BLOCK_2_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_2_FLAG GF_JAN01_HiddenItem_Mystery

// type: Marker:Entity:SpinningFlower
// name: SpinningFlower_1
#define GEN_SPINNING_FLOWER_1_X 340
#define GEN_SPINNING_FLOWER_1_Y 0
#define GEN_SPINNING_FLOWER_1_Z -90
#define GEN_SPINNING_FLOWER_1_DIR 0
#define GEN_SPINNING_FLOWER_1_VEC 340,0,-90
#define GEN_SPINNING_FLOWER_1_XYZA 340, 0, -90, 0
#define GEN_SPINNING_FLOWER_1_PARAMS GEN_SPINNING_FLOWER_1_XYZA

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 160
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -287
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 160,0,-287
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -628
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -95
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -628,0,-95
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X -391
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -135
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC -391,0,-135
#define GEN_BOMB_POS_3_RAD 0

// type: Marker:Sphere
// name: BombPos_4
#define GEN_BOMB_POS_4_X -341
#define GEN_BOMB_POS_4_Y 0
#define GEN_BOMB_POS_4_Z -115
#define GEN_BOMB_POS_4_DIR 0
#define GEN_BOMB_POS_4_VEC -341,0,-115
#define GEN_BOMB_POS_4_RAD 0

// type: Marker:Sphere
// name: BombPos_5
#define GEN_BOMB_POS_5_X 68
#define GEN_BOMB_POS_5_Y 0
#define GEN_BOMB_POS_5_Z -155
#define GEN_BOMB_POS_5_DIR 0
#define GEN_BOMB_POS_5_VEC 68,0,-155
#define GEN_BOMB_POS_5_RAD 0

// type: Marker:Sphere
// name: BombPos_6
#define GEN_BOMB_POS_6_X 251
#define GEN_BOMB_POS_6_Y 0
#define GEN_BOMB_POS_6_Z -135
#define GEN_BOMB_POS_6_DIR 0
#define GEN_BOMB_POS_6_VEC 251,0,-135
#define GEN_BOMB_POS_6_RAD 0

// type: Marker:Sphere
// name: BombPos_7
#define GEN_BOMB_POS_7_X 431
#define GEN_BOMB_POS_7_Y 0
#define GEN_BOMB_POS_7_Z -155
#define GEN_BOMB_POS_7_DIR 0
#define GEN_BOMB_POS_7_VEC 431,0,-155
#define GEN_BOMB_POS_7_RAD 0

