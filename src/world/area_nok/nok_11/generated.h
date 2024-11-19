/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PLEASANT_PATH

// type: EntryList
#define GEN_ENTRY_LIST \
    { -758.0,    0.0,  -49.0,   90.0 }, \
    {  886.0,    0.0,  -40.0,  270.0 },

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
#define GEN_ENTRY_0_X -758
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -49
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -758,0,-49

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 886
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -40
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 886,0,-40

// type: Marker:NPC
// name: NPC_KoopaTroopa
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_X -350
#define GEN_NPC_KOOPA_TROOPA_Y 0
#define GEN_NPC_KOOPA_TROOPA_Z -30
#define GEN_NPC_KOOPA_TROOPA_DIR 90
#define GEN_NPC_KOOPA_TROOPA_VEC -350,0,-30
#define GEN_NPC_KOOPA_TROOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { -350, 0, -30 }, \
        .wanderSize  = { 50, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -350, 0, -30 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Paragoomba
// anim: ANIM_Paragoomba_Idle
#define GEN_NPC_PARAGOOMBA_X 0
#define GEN_NPC_PARAGOOMBA_Y 60
#define GEN_NPC_PARAGOOMBA_Z -30
#define GEN_NPC_PARAGOOMBA_DIR 0
#define GEN_NPC_PARAGOOMBA_VEC 0,60,-30
#define GEN_NPC_PARAGOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 0, 60, -30 }, \
        .wanderSize  = { 50, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 60, -30 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_SpikedGoomba
// anim: ANIM_SpikedGoomba_Idle
#define GEN_NPC_SPIKED_GOOMBA_X 430
#define GEN_NPC_SPIKED_GOOMBA_Y 0
#define GEN_NPC_SPIKED_GOOMBA_Z -27
#define GEN_NPC_SPIKED_GOOMBA_DIR 270
#define GEN_NPC_SPIKED_GOOMBA_VEC 430,0,-27
#define GEN_NPC_SPIKED_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 430, 0, -27 }, \
        .wanderSize  = { 50, 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 430, 0, -27 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_JrTroopa_01
// anim: ANIM_JrTroopa_Idle
#define GEN_NPC_JR_TROOPA_01_X -170
#define GEN_NPC_JR_TROOPA_01_Y 0
#define GEN_NPC_JR_TROOPA_01_Z -155
#define GEN_NPC_JR_TROOPA_01_DIR 90
#define GEN_NPC_JR_TROOPA_01_VEC -170,0,-155
#define GEN_NPC_JR_TROOPA_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_JrTroopa_02
// anim: ANIM_JrTroopa_Idle
#define GEN_NPC_JR_TROOPA_02_X -170
#define GEN_NPC_JR_TROOPA_02_Y 0
#define GEN_NPC_JR_TROOPA_02_Z -155
#define GEN_NPC_JR_TROOPA_02_DIR 90
#define GEN_NPC_JR_TROOPA_02_VEC -170,0,-155
#define GEN_NPC_JR_TROOPA_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KentCKoopa_01
// anim: ANIM_KentCKoopa_Anim01
#define GEN_NPC_KENT_C_KOOPA_01_X -164
#define GEN_NPC_KENT_C_KOOPA_01_Y 0
#define GEN_NPC_KENT_C_KOOPA_01_Z -37
#define GEN_NPC_KENT_C_KOOPA_01_DIR 270
#define GEN_NPC_KENT_C_KOOPA_01_VEC -164,0,-37
#define GEN_NPC_KENT_C_KOOPA_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KentCKoopa_02
// anim: ANIM_KentCKoopa_Anim01
#define GEN_NPC_KENT_C_KOOPA_02_X -164
#define GEN_NPC_KENT_C_KOOPA_02_Y 0
#define GEN_NPC_KENT_C_KOOPA_02_Z -37
#define GEN_NPC_KENT_C_KOOPA_02_DIR 270
#define GEN_NPC_KENT_C_KOOPA_02_VEC -164,0,-37
#define GEN_NPC_KENT_C_KOOPA_02_TERRITORY \
{}

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 30
#define GEN_BRICK_BLOCK_1_Y 60
#define GEN_BRICK_BLOCK_1_Z -85
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC 30,60,-85
#define GEN_BRICK_BLOCK_1_XYZA 30, 60, -85, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_2
#define GEN_BRICK_BLOCK_2_X 330
#define GEN_BRICK_BLOCK_2_Y 60
#define GEN_BRICK_BLOCK_2_Z -85
#define GEN_BRICK_BLOCK_2_DIR 0
#define GEN_BRICK_BLOCK_2_VEC 330,60,-85
#define GEN_BRICK_BLOCK_2_XYZA 330, 60, -85, 0
#define GEN_BRICK_BLOCK_2_PARAMS GEN_BRICK_BLOCK_2_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_3
#define GEN_BRICK_BLOCK_3_X 650
#define GEN_BRICK_BLOCK_3_Y 60
#define GEN_BRICK_BLOCK_3_Z -85
#define GEN_BRICK_BLOCK_3_DIR 0
#define GEN_BRICK_BLOCK_3_VEC 650,60,-85
#define GEN_BRICK_BLOCK_3_XYZA 650, 60, -85, 0
#define GEN_BRICK_BLOCK_3_PARAMS GEN_BRICK_BLOCK_3_XYZA

// type: Marker:Entity:BrickBlock
// name: BrickBlock_4
#define GEN_BRICK_BLOCK_4_X 700
#define GEN_BRICK_BLOCK_4_Y 60
#define GEN_BRICK_BLOCK_4_Z -85
#define GEN_BRICK_BLOCK_4_DIR 0
#define GEN_BRICK_BLOCK_4_VEC 700,60,-85
#define GEN_BRICK_BLOCK_4_XYZA 700, 60, -85, 0
#define GEN_BRICK_BLOCK_4_PARAMS GEN_BRICK_BLOCK_4_XYZA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 110
#define GEN_YELLOW_BLOCK_1_Y 60
#define GEN_YELLOW_BLOCK_1_Z -85
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 110,60,-85
#define GEN_YELLOW_BLOCK_1_XYZA 110, 60, -85, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_COIN
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_NOK11_ItemBlock_Coin

// type: Marker:Entity:RedBlock
// name: RedBlock_1
#define GEN_RED_BLOCK_1_X 380
#define GEN_RED_BLOCK_1_Y 60
#define GEN_RED_BLOCK_1_Z -85
#define GEN_RED_BLOCK_1_DIR 0
#define GEN_RED_BLOCK_1_VEC 380,60,-85
#define GEN_RED_BLOCK_1_XYZA 380, 60, -85, 0
#define GEN_RED_BLOCK_1_ITEM ITEM_DIZZY_ATTACK
#define GEN_RED_BLOCK_1_PARAMS GEN_RED_BLOCK_1_XYZA, GEN_RED_BLOCK_1_ITEM
#define GEN_RED_BLOCK_1_FLAG GF_NOK11_BadgeBlock_DizzyAttack

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 750
#define GEN_YELLOW_BLOCK_2_Y 60
#define GEN_YELLOW_BLOCK_2_Z -85
#define GEN_YELLOW_BLOCK_2_DIR 0
#define GEN_YELLOW_BLOCK_2_VEC 750,60,-85
#define GEN_YELLOW_BLOCK_2_XYZA 750, 60, -85, 0
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_FRIGHT_JAR
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_NOK11_ItemBlock_FrightJar

