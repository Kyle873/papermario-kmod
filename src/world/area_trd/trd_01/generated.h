/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_BROS_FORTRESS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -310.0,    0.0,    0.0,   90.0 }, \
    {  310.0,    0.0,    0.0,  270.0 }, \
    {  310.0,  220.0,    0.0,  270.0 }, \
    {  310.0,  520.0,    0.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0,    90,   -60,   -70) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -600,  -600,  -300,  -300) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(   140,  -600,   -30,  -600) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_4 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_4) \
    TEX_PAN_PARAMS_STEP(   100,  -600,  -100,  -300) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -310
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -310,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 310
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 310,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 310
#define GEN_ENTRY_2_Y 220
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 310,220,0

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 310
#define GEN_ENTRY_3_Y 520
#define GEN_ENTRY_3_Z 0
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 310,520,0

// type: Marker:NPC
// name: NPC_KoopaTroopa_01
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_01_X 260
#define GEN_NPC_KOOPA_TROOPA_01_Y 0
#define GEN_NPC_KOOPA_TROOPA_01_Z 30
#define GEN_NPC_KOOPA_TROOPA_01_DIR 0
#define GEN_NPC_KOOPA_TROOPA_01_VEC 260,0,30
#define GEN_NPC_KOOPA_TROOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 260, 0, 40 }, \
        .wanderSize  = { 30, 25 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 260, 0, 40 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_02
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_02_X 0
#define GEN_NPC_KOOPA_TROOPA_02_Y 0
#define GEN_NPC_KOOPA_TROOPA_02_Z 0
#define GEN_NPC_KOOPA_TROOPA_02_DIR 270
#define GEN_NPC_KOOPA_TROOPA_02_VEC 0,0,0
#define GEN_NPC_KOOPA_TROOPA_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 240, 220, 130 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 240, 220, 130 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa_03
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_03_X 0
#define GEN_NPC_KOOPA_TROOPA_03_Y 0
#define GEN_NPC_KOOPA_TROOPA_03_Z 0
#define GEN_NPC_KOOPA_TROOPA_03_DIR 90
#define GEN_NPC_KOOPA_TROOPA_03_VEC 0,0,0
#define GEN_NPC_KOOPA_TROOPA_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 80, 220, 265 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 80, 220, 265 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bobomb
// anim: ANIM_Bobomb_Idle
#define GEN_NPC_BOBOMB_X -255
#define GEN_NPC_BOBOMB_Y 640
#define GEN_NPC_BOBOMB_Z 35
#define GEN_NPC_BOBOMB_DIR 180
#define GEN_NPC_BOBOMB_VEC -255,640,35
#define GEN_NPC_BOBOMB_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -255, 640, 35 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -255, 640, 35 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -268
#define GEN_ITEM_1_Y 656
#define GEN_ITEM_1_Z -40
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -268,656,-40
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_SMASH_CHARGE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_TRD01_Item_SmashCharge

// type: Marker:Entity:Item
// name: Item_2
#define GEN_ITEM_2_X 254
#define GEN_ITEM_2_Y 0
#define GEN_ITEM_2_Z 30
#define GEN_ITEM_2_DIR 0
#define GEN_ITEM_2_VEC 254,0,30
#define GEN_ITEM_2_PARAMS GEN_ITEM_2_ITEM, GEN_ITEM_2_VEC, GEN_ITEM_2_SPAWN, GEN_ITEM_2_FLAG
#define GEN_ITEM_2_ITEM ITEM_KOOPA_FORTRESS_KEY
#define GEN_ITEM_2_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_2_FLAG GF_TRD01_Item_FortressKey

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X 315
#define GEN_PADLOCK_1_Y 8
#define GEN_PADLOCK_1_Z 0
#define GEN_PADLOCK_1_DIR -80
#define GEN_PADLOCK_1_VEC 315,8,0
#define GEN_PADLOCK_1_XYZA 315, 8, 0, -80
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

// type: Marker:Entity:BlueSwitch
// name: BlueSwitch_1
#define GEN_BLUE_SWITCH_1_X 0
#define GEN_BLUE_SWITCH_1_Y 220
#define GEN_BLUE_SWITCH_1_Z 255
#define GEN_BLUE_SWITCH_1_DIR 0
#define GEN_BLUE_SWITCH_1_VEC 0,220,255
#define GEN_BLUE_SWITCH_1_XYZA 0, 220, 255, 0
#define GEN_BLUE_SWITCH_1_PARAMS GEN_BLUE_SWITCH_1_XYZA
#define GEN_BLUE_SWITCH_1_FLAG AF_TRD01_RaiseStairs

