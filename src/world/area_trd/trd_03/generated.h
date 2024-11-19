/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_BROS_FORTRESS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -647.0,    0.0,   80.0,   90.0 }, \
    {  537.0,    0.0,   80.0,  270.0 }, \
    { -647.0,  180.0, -100.0,   90.0 }, \
    {  537.0,  180.0, -100.0,  270.0 }, \
    { -645.0,   45.0, -100.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -647
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 80
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -647,0,80

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 537
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 80
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 537,0,80

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -647
#define GEN_ENTRY_2_Y 180
#define GEN_ENTRY_2_Z -100
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -647,180,-100

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 537
#define GEN_ENTRY_3_Y 180
#define GEN_ENTRY_3_Z -100
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 537,180,-100

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -645
#define GEN_ENTRY_4_Y 45
#define GEN_ENTRY_4_Z -100
#define GEN_ENTRY_4_DIR 90
#define GEN_ENTRY_4_VEC -645,45,-100

// type: Marker:NPC
// name: NPC_KoopaBros
// anim: ANIM_KoopaBros_Green_Idle
#define GEN_NPC_KOOPA_BROS_X -569
#define GEN_NPC_KOOPA_BROS_Y 0
#define GEN_NPC_KOOPA_BROS_Z -57
#define GEN_NPC_KOOPA_BROS_DIR 270
#define GEN_NPC_KOOPA_BROS_VEC -569,0,-57
#define GEN_NPC_KOOPA_BROS_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KoopaTroopa_01
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_01_X -520
#define GEN_NPC_KOOPA_TROOPA_01_Y 0
#define GEN_NPC_KOOPA_TROOPA_01_Z 15
#define GEN_NPC_KOOPA_TROOPA_01_DIR 90
#define GEN_NPC_KOOPA_TROOPA_01_VEC -520,0,15
#define GEN_NPC_KOOPA_TROOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -520, 0, 15 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -520, 0, 15 }, \
        .detectSize  = { 350 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_02
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_02_X -52
#define GEN_NPC_KOOPA_TROOPA_02_Y 0
#define GEN_NPC_KOOPA_TROOPA_02_Z -21
#define GEN_NPC_KOOPA_TROOPA_02_DIR 90
#define GEN_NPC_KOOPA_TROOPA_02_VEC -52,0,-21
#define GEN_NPC_KOOPA_TROOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -52, 0, -21 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -52, 0, -21 }, \
        .detectSize  = { 350 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_03
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_03_X 375
#define GEN_NPC_KOOPA_TROOPA_03_Y 0
#define GEN_NPC_KOOPA_TROOPA_03_Z 15
#define GEN_NPC_KOOPA_TROOPA_03_DIR 270
#define GEN_NPC_KOOPA_TROOPA_03_VEC 375,0,15
#define GEN_NPC_KOOPA_TROOPA_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 375, 0, 15 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 375, 0, 15 }, \
        .detectSize  = { 350 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -580
#define GEN_ITEM_1_Y 0
#define GEN_ITEM_1_Z -60
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -580,0,-60
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_KOOPA_FORTRESS_KEY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_1_FLAG GF_TRD03_Item_FortressKeyA

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 470
#define GEN_ITEM_2_Y 0
#define GEN_ITEM_2_Z -60
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 470,0,-60
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_KOOPA_FORTRESS_KEY
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_2_FLAG GF_TRD03_Item_FortressKeyB

// type: Marker:Entity:Item
// name: Item_3
#define GEN_ITEM_3_X -50
#define GEN_ITEM_3_Y 0
#define GEN_ITEM_3_Z -60
#define GEN_ITEM_3_DIR 0
#define GEN_ITEM_3_VEC -50,0,-60
#define GEN_ITEM_3_PARAMS GEN_ITEM_3_ITEM, GEN_ITEM_3_VEC, GEN_ITEM_3_SPAWN, GEN_ITEM_3_FLAG
#define GEN_ITEM_3_ITEM ITEM_POWER_BOUNCE
#define GEN_ITEM_3_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_3_FLAG GF_TRD03_Item_PowerBounce

// type: Marker:Entity:RedSwitch
// name: RedSwitch_1
#define GEN_RED_SWITCH_1_X -315
#define GEN_RED_SWITCH_1_Y 120
#define GEN_RED_SWITCH_1_Z -100
#define GEN_RED_SWITCH_1_DIR 0
#define GEN_RED_SWITCH_1_VEC -315,120,-100
#define GEN_RED_SWITCH_1_XYZA -315, 120, -100, 0
#define GEN_RED_SWITCH_1_PARAMS GEN_RED_SWITCH_1_XYZA
#define GEN_RED_SWITCH_1_SCRIPT N(EVS_TogglePlatforms_LeftSwitch)

// type: Marker:Entity:RedSwitch
// name: RedSwitch_2
#define GEN_RED_SWITCH_2_X 210
#define GEN_RED_SWITCH_2_Y 120
#define GEN_RED_SWITCH_2_Z -100
#define GEN_RED_SWITCH_2_DIR 0
#define GEN_RED_SWITCH_2_VEC 210,120,-100
#define GEN_RED_SWITCH_2_XYZA 210, 120, -100, 0
#define GEN_RED_SWITCH_2_PARAMS GEN_RED_SWITCH_2_XYZA
#define GEN_RED_SWITCH_2_SCRIPT N(EVS_TogglePlatforms_RightSwitch)

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -160
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -10
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -160,0,-10
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X 360
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -10
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC 360,0,-10
#define GEN_BOMB_POS_2_RAD 0

