/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_JADE_JUNGLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -330.0,    0.0,  330.0,   45.0 }, \
    {  500.0,  -20.0,    0.0,  270.0 }, \
    {    0.0,    0.0, -450.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   -80,   140,    80,  -100) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -330
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 330
#define GEN_ENTRY_0_DIR 45
#define GEN_ENTRY_0_VEC -330,0,330

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 500
#define GEN_ENTRY_1_Y -20
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 500,-20,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -450
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 0,0,-450

// type: Marker:NPC
// name: NPC_SpearGuy
// anim: ANIM_SpearGuy_Anim03
#define GEN_NPC_SPEAR_GUY_X 255
#define GEN_NPC_SPEAR_GUY_Y 15
#define GEN_NPC_SPEAR_GUY_Z -65
#define GEN_NPC_SPEAR_GUY_DIR 90
#define GEN_NPC_SPEAR_GUY_VEC 255,15,-65
#define GEN_NPC_SPEAR_GUY_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 255, 0, -65 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 255, 0, -65 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_HurtPlant
// anim: ANIM_HurtPlant_Anim01
#define GEN_NPC_HURT_PLANT_X 400
#define GEN_NPC_HURT_PLANT_Y 0
#define GEN_NPC_HURT_PLANT_Z 235
#define GEN_NPC_HURT_PLANT_DIR 270
#define GEN_NPC_HURT_PLANT_VEC 400,0,235
#define GEN_NPC_HURT_PLANT_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MBush_01
// anim: ANIM_MBush_Anim02
#define GEN_NPC_M_BUSH_01_X -407
#define GEN_NPC_M_BUSH_01_Y 0
#define GEN_NPC_M_BUSH_01_Z -42
#define GEN_NPC_M_BUSH_01_DIR 90
#define GEN_NPC_M_BUSH_01_VEC -407,0,-42
#define GEN_NPC_M_BUSH_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MBush_02
// anim: ANIM_MBush_Anim02
#define GEN_NPC_M_BUSH_02_X -120
#define GEN_NPC_M_BUSH_02_Y 0
#define GEN_NPC_M_BUSH_02_Z -395
#define GEN_NPC_M_BUSH_02_DIR 90
#define GEN_NPC_M_BUSH_02_VEC -120,0,-395
#define GEN_NPC_M_BUSH_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_HeartPlant_01
// anim: ANIM_HeartPlant_Anim00
#define GEN_NPC_HEART_PLANT_01_X -219
#define GEN_NPC_HEART_PLANT_01_Y 0
#define GEN_NPC_HEART_PLANT_01_Z 420
#define GEN_NPC_HEART_PLANT_01_DIR 270
#define GEN_NPC_HEART_PLANT_01_VEC -219,0,420
#define GEN_NPC_HEART_PLANT_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_HeartPlant_02
// anim: ANIM_HeartPlant_Anim00
#define GEN_NPC_HEART_PLANT_02_X -157
#define GEN_NPC_HEART_PLANT_02_Y 0
#define GEN_NPC_HEART_PLANT_02_Z 452
#define GEN_NPC_HEART_PLANT_02_DIR 270
#define GEN_NPC_HEART_PLANT_02_VEC -157,0,452
#define GEN_NPC_HEART_PLANT_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_YoshiKid
// anim: ANIM_YoshiKid_Red_Idle
#define GEN_NPC_YOSHI_KID_X -450
#define GEN_NPC_YOSHI_KID_Y 0
#define GEN_NPC_YOSHI_KID_Z -290
#define GEN_NPC_YOSHI_KID_DIR 90
#define GEN_NPC_YOSHI_KID_VEC -450,0,-290
#define GEN_NPC_YOSHI_KID_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 75
#define GEN_ITEM_1_Y -60
#define GEN_ITEM_1_Z 90
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 75,-60,90
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_COIN
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_JAN08_Item_CoinA

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 100
#define GEN_ITEM_2_Y -60
#define GEN_ITEM_2_Z 90
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 100,-60,90
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_COIN
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_2_FLAG GF_JAN08_Item_CoinB

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X 125
#define GEN_ITEM_3_Y -60
#define GEN_ITEM_3_Z 90
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC 125,-60,90
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_COIN
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_3_FLAG GF_JAN08_Item_CoinC

// type: Marker:Entity:BellbellPlant
// name: BellbellPlant_1
#define GEN_BELLBELL_PLANT_1_X 54
#define GEN_BELLBELL_PLANT_1_Y 0
#define GEN_BELLBELL_PLANT_1_Z -380
#define GEN_BELLBELL_PLANT_1_DIR 35
#define GEN_BELLBELL_PLANT_1_VEC 54,0,-380
#define GEN_BELLBELL_PLANT_1_XYZA 54, 0, -380, 35
#define GEN_BELLBELL_PLANT_1_PARAMS GEN_BELLBELL_PLANT_1_XYZA

// type: Marker:Entity:TrumpetPlant
// name: TrumpetPlant_1
#define GEN_TRUMPET_PLANT_1_X -450
#define GEN_TRUMPET_PLANT_1_Y 0
#define GEN_TRUMPET_PLANT_1_Z 166
#define GEN_TRUMPET_PLANT_1_DIR 170
#define GEN_TRUMPET_PLANT_1_VEC -450,0,166
#define GEN_TRUMPET_PLANT_1_XYZA -450, 0, 166, 170
#define GEN_TRUMPET_PLANT_1_PARAMS GEN_TRUMPET_PLANT_1_XYZA

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock_1
#define GEN_HIDDEN_YELLOW_BLOCK_1_X 24
#define GEN_HIDDEN_YELLOW_BLOCK_1_Y 60
#define GEN_HIDDEN_YELLOW_BLOCK_1_Z -410
#define GEN_HIDDEN_YELLOW_BLOCK_1_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_VEC 24,60,-410
#define GEN_HIDDEN_YELLOW_BLOCK_1_XYZA 24, 60, -410, 0
#define GEN_HIDDEN_YELLOW_BLOCK_1_ITEM ITEM_THUNDER_RAGE
#define GEN_HIDDEN_YELLOW_BLOCK_1_PARAMS GEN_HIDDEN_YELLOW_BLOCK_1_XYZA, GEN_HIDDEN_YELLOW_BLOCK_1_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_1_FLAG GF_JAN08_HiddenItem_ThunderRage

// type: Marker:Entity:SuperBlock
// name: SuperBlock_1
#define GEN_SUPER_BLOCK_1_X 250
#define GEN_SUPER_BLOCK_1_Y 60
#define GEN_SUPER_BLOCK_1_Z 300
#define GEN_SUPER_BLOCK_1_DIR 0
#define GEN_SUPER_BLOCK_1_VEC 250,60,300
#define GEN_SUPER_BLOCK_1_XYZA 250, 60, 300, 0
#define GEN_SUPER_BLOCK_1_PARAMS GEN_SUPER_BLOCK_1_XYZA
#define GEN_SUPER_BLOCK_1_VAR MV_SuperBlock
#define GEN_SUPER_BLOCK_1_FLAG GF_JAN08_SuperBlock

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -357
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -270
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -357,0,-270
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -145
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -460
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -145,0,-460
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X 341
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -124
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC 341,0,-124
#define GEN_BOMB_POS_3_RAD 0

