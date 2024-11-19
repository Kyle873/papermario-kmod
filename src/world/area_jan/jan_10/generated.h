/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_JADE_JUNGLE

// type: EntryList
#define GEN_ENTRY_LIST \
    {  380.0,  -20.0,    0.0,  270.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   -80,   140,    80,  -100) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 380
#define GEN_ENTRY_0_Y -20
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 380,-20,0

// type: Marker:NPC
// name: NPC_YoshiKid
// anim: ANIM_YoshiKid_Blue_Idle
#define GEN_NPC_YOSHI_KID_X -260
#define GEN_NPC_YOSHI_KID_Y 0
#define GEN_NPC_YOSHI_KID_Z -220
#define GEN_NPC_YOSHI_KID_DIR 270
#define GEN_NPC_YOSHI_KID_VEC -260,0,-220
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
        .centerPos   = { -460, 0, 70 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -460, 0, 70 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -150
#define GEN_ITEM_1_Y -60
#define GEN_ITEM_1_Z 60
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -150,-60,60
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_JAN10_Item_StarPiece

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -557
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z 29
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -557,0,29
#define GEN_BOMB_POS_1_RAD 0

