/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_VILLAGE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -654.0,    0.0,    6.0,   90.0 }, \
    { 1046.0,    0.0,  -31.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_MAX(0x8000) \
    TEX_PAN_PARAMS_STEP( 16384,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(    12,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(  -100,     0,   600,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -100,     0,   400,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -654
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 6
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -654,0,6

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 1046
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -31
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 1046,0,-31

// type: Marker:NPC
// name: NPC_Fuzzy_01
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_FUZZY_01_X -388
#define GEN_NPC_FUZZY_01_Y 100
#define GEN_NPC_FUZZY_01_Z -107
#define GEN_NPC_FUZZY_01_DIR 0
#define GEN_NPC_FUZZY_01_VEC -388,100,-107
#define GEN_NPC_FUZZY_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -388, 100, -107 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -388, 0, -107 }, \
        .detectSize  = { 300 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Fuzzy_02
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_FUZZY_02_X -76
#define GEN_NPC_FUZZY_02_Y 118
#define GEN_NPC_FUZZY_02_Z -43
#define GEN_NPC_FUZZY_02_DIR 0
#define GEN_NPC_FUZZY_02_VEC -76,118,-43
#define GEN_NPC_FUZZY_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -76, 118, -43 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -76, 118, -43 }, \
        .detectSize  = { 300 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Fuzzy_03
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_FUZZY_03_X -540
#define GEN_NPC_FUZZY_03_Y 0
#define GEN_NPC_FUZZY_03_Z 0
#define GEN_NPC_FUZZY_03_DIR 0
#define GEN_NPC_FUZZY_03_VEC -540,0,0
#define GEN_NPC_FUZZY_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopersShell
// anim: ANIM_WorldKooper_Idle
#define GEN_NPC_KOOPERS_SHELL_X 0
#define GEN_NPC_KOOPERS_SHELL_Y 0
#define GEN_NPC_KOOPERS_SHELL_Z 0
#define GEN_NPC_KOOPERS_SHELL_DIR 0
#define GEN_NPC_KOOPERS_SHELL_VEC 0,0,0
#define GEN_NPC_KOOPERS_SHELL_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 218
#define GEN_ITEM_1_Y 64
#define GEN_ITEM_1_Z -100
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 218,64,-100
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_HP_PLUS_B
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_NOK03_Item_HPPlusB

