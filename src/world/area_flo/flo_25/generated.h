/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_FLOWER_FIELDS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  620.0,    0.0,    0.0,  270.0 }, \
    { -620.0,    0.0,    0.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 620
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 620,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -620
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -620,0,0

// type: Marker:NPC
// name: NPC_GateFlower
// anim: ANIM_GateFlower_Red_Idle
#define GEN_NPC_GATE_FLOWER_X 505
#define GEN_NPC_GATE_FLOWER_Y 0
#define GEN_NPC_GATE_FLOWER_Z -25
#define GEN_NPC_GATE_FLOWER_DIR 90
#define GEN_NPC_GATE_FLOWER_VEC 505,0,-25
#define GEN_NPC_GATE_FLOWER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_RuffPuff
// anim: ANIM_RuffPuff_Still
#define GEN_NPC_RUFF_PUFF_X -200
#define GEN_NPC_RUFF_PUFF_Y 45
#define GEN_NPC_RUFF_PUFF_Z 0
#define GEN_NPC_RUFF_PUFF_DIR 90
#define GEN_NPC_RUFF_PUFF_VEC -200,45,0
#define GEN_NPC_RUFF_PUFF_TERRITORY \
{ \
    .wander = { \
        .isFlying = FALSE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -200, 45, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -200, 45, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bzzap
// anim: ANIM_Bzzap_Anim02
#define GEN_NPC_BZZAP_X 150
#define GEN_NPC_BZZAP_Y 55
#define GEN_NPC_BZZAP_Z 0
#define GEN_NPC_BZZAP_DIR 90
#define GEN_NPC_BZZAP_VEC 150,55,0
#define GEN_NPC_BZZAP_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 150, 50, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 150, 50, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X -390
#define GEN_HIDDEN_PANEL_1_Y 0
#define GEN_HIDDEN_PANEL_1_Z 0
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC -390,0,0
#define GEN_HIDDEN_PANEL_1_XYZA -390, 0, 0, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o3
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_FLO25_HiddenPanel

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -388
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -92
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -388,0,-92
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Volume
// name: FlowerVolume_1
#define GEN_FLOWER_VOLUME_1_X 185
#define GEN_FLOWER_VOLUME_1_Y 85
#define GEN_FLOWER_VOLUME_1_Z -125
#define GEN_FLOWER_VOLUME_1_DIR 0
#define GEN_FLOWER_VOLUME_1_VEC 185,85,-125
#define GEN_FLOWER_VOLUME_1_MIN_X -270
#define GEN_FLOWER_VOLUME_1_MIN_Y 60
#define GEN_FLOWER_VOLUME_1_MIN_Z -190
#define GEN_FLOWER_VOLUME_1_MIN_XZ -270,-190
#define GEN_FLOWER_VOLUME_1_MIN_VEC -270,60,-190
#define GEN_FLOWER_VOLUME_1_MAX_X 640
#define GEN_FLOWER_VOLUME_1_MAX_Y 110
#define GEN_FLOWER_VOLUME_1_MAX_Z -60
#define GEN_FLOWER_VOLUME_1_MAX_XZ 640,-60
#define GEN_FLOWER_VOLUME_1_MAX_VEC 640,110,-60

