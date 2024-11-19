/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_ROAD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -925.0,    0.0,  -53.0,   90.0 }, \
    {  770.0,    0.0, -525.0,  225.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -925
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -53
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -925,0,-53

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 770
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -525
#define GEN_ENTRY_1_DIR 225
#define GEN_ENTRY_1_VEC 770,0,-525

// type: Marker:NPC
// name: NPC_BlueGoombaBro
// anim: ANIM_GoombaBros_Blue_Idle
#define GEN_NPC_BLUE_GOOMBA_BRO_X 0
#define GEN_NPC_BLUE_GOOMBA_BRO_Y -1000
#define GEN_NPC_BLUE_GOOMBA_BRO_Z 0
#define GEN_NPC_BLUE_GOOMBA_BRO_DIR 270
#define GEN_NPC_BLUE_GOOMBA_BRO_VEC 0,-1000,0
#define GEN_NPC_BLUE_GOOMBA_BRO_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_RedGoombaBro
// anim: ANIM_GoombaBros_Red_Idle
#define GEN_NPC_RED_GOOMBA_BRO_X 0
#define GEN_NPC_RED_GOOMBA_BRO_Y -1000
#define GEN_NPC_RED_GOOMBA_BRO_Z 0
#define GEN_NPC_RED_GOOMBA_BRO_DIR 0
#define GEN_NPC_RED_GOOMBA_BRO_VEC 0,-1000,0
#define GEN_NPC_RED_GOOMBA_BRO_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_GoombaKing
// anim: ANIM_GoombaKing_Idle
#define GEN_NPC_GOOMBA_KING_X 0
#define GEN_NPC_GOOMBA_KING_Y -1000
#define GEN_NPC_GOOMBA_KING_Z 0
#define GEN_NPC_GOOMBA_KING_DIR 0
#define GEN_NPC_GOOMBA_KING_VEC 0,-1000,0
#define GEN_NPC_GOOMBA_KING_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Kammy
// anim: ANIM_WorldKammy_Anim0A
#define GEN_NPC_KAMMY_X 0
#define GEN_NPC_KAMMY_Y -1000
#define GEN_NPC_KAMMY_Z 0
#define GEN_NPC_KAMMY_DIR 100
#define GEN_NPC_KAMMY_VEC 0,-1000,0
#define GEN_NPC_KAMMY_TERRITORY \
{}

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 625
#define GEN_BRICK_BLOCK_1_Y -25
#define GEN_BRICK_BLOCK_1_Z 110
#define GEN_BRICK_BLOCK_1_DIR 45
#define GEN_BRICK_BLOCK_1_VEC 625,-25,110
#define GEN_BRICK_BLOCK_1_XYZA 625, -25, 110, 45
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:BlueSwitch
// name: BlueSwitch_1
#define GEN_BLUE_SWITCH_1_X -469
#define GEN_BLUE_SWITCH_1_Y 0
#define GEN_BLUE_SWITCH_1_Z 153
#define GEN_BLUE_SWITCH_1_DIR 0
#define GEN_BLUE_SWITCH_1_VEC -469,0,153
#define GEN_BLUE_SWITCH_1_XYZA -469, 0, 153, 0
#define GEN_BLUE_SWITCH_1_PARAMS GEN_BLUE_SWITCH_1_XYZA
#define GEN_BLUE_SWITCH_1_FLAG AF_KMR_04

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 665
#define GEN_YELLOW_BLOCK_1_Y 35
#define GEN_YELLOW_BLOCK_1_Z 70
#define GEN_YELLOW_BLOCK_1_DIR 45
#define GEN_YELLOW_BLOCK_1_VEC 665,35,70
#define GEN_YELLOW_BLOCK_1_XYZA 665, 35, 70, 45
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_SUPER_SHROOM
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_KMR11_ItemBlock_SuperShroom

// type: Marker:Entity:YellowBlock
// name: YellowBlock_2
#define GEN_YELLOW_BLOCK_2_X 665
#define GEN_YELLOW_BLOCK_2_Y 35
#define GEN_YELLOW_BLOCK_2_Z 70
#define GEN_YELLOW_BLOCK_2_DIR 45
#define GEN_YELLOW_BLOCK_2_VEC 665,35,70
#define GEN_YELLOW_BLOCK_2_XYZA 665, 35, 70, 45
#define GEN_YELLOW_BLOCK_2_ITEM ITEM_SUPER_SHROOM
#define GEN_YELLOW_BLOCK_2_PARAMS GEN_YELLOW_BLOCK_2_XYZA, GEN_YELLOW_BLOCK_2_ITEM
#define GEN_YELLOW_BLOCK_2_FLAG GF_KMR11_ItemBlock_SuperShroom

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 550
#define GEN_HIDDEN_PANEL_1_Y 0
#define GEN_HIDDEN_PANEL_1_Z -550
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC 550,0,-550
#define GEN_HIDDEN_PANEL_1_XYZA 550, 0, -550, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_point
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_KMR11_HiddenPanel

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X 250
#define GEN_PATH_1_Y 400
#define GEN_PATH_1_Z 0
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC 250,400,0
#define GEN_PATH_1_PATH \
    {    0,    0,    0 }, \
    {  100,   50,    0 }, \
    {  200,  150,    0 }, \
    {  250,  400,    0 },

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -665
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -149
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -665,0,-149
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X 320
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -496
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC 320,0,-496
#define GEN_BOMB_POS_2_RAD 0

