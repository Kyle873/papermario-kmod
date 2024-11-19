/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_MT_LAVALAVA

// type: EntryList
#define GEN_ENTRY_LIST \
    { -445.0,  870.0,  -40.0,   90.0 }, \
    {  435.0,  719.0,   10.0,  270.0 }, \
    { -445.0,  400.0,   95.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -445
#define GEN_ENTRY_0_Y 870
#define GEN_ENTRY_0_Z -40
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -445,870,-40

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 435
#define GEN_ENTRY_1_Y 719
#define GEN_ENTRY_1_Z 10
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 435,719,10

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -445
#define GEN_ENTRY_2_Y 400
#define GEN_ENTRY_2_Z 95
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -445,400,95

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X 0
#define GEN_NPC_KOLORADO_Y -1000
#define GEN_NPC_KOLORADO_Z 0
#define GEN_NPC_KOLORADO_DIR 90
#define GEN_NPC_KOLORADO_VEC 0,-1000,0
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ZiplineDummy
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_ZIPLINE_DUMMY_X 0
#define GEN_NPC_ZIPLINE_DUMMY_Y -1000
#define GEN_NPC_ZIPLINE_DUMMY_Z 0
#define GEN_NPC_ZIPLINE_DUMMY_DIR 90
#define GEN_NPC_ZIPLINE_DUMMY_VEC 0,-1000,0
#define GEN_NPC_ZIPLINE_DUMMY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_SpikeTop
// anim: ANIM_SpikeTop_Anim03
#define GEN_NPC_SPIKE_TOP_X -100
#define GEN_NPC_SPIKE_TOP_Y 350
#define GEN_NPC_SPIKE_TOP_Z 50
#define GEN_NPC_SPIKE_TOP_DIR 270
#define GEN_NPC_SPIKE_TOP_VEC -100,350,50
#define GEN_NPC_SPIKE_TOP_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -100, 350, 50 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -100, 350, 50 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Piranha
// anim: ANIM_LargePiranha_Putrid_Anim01
#define GEN_NPC_PIRANHA_X 200
#define GEN_NPC_PIRANHA_Y 350
#define GEN_NPC_PIRANHA_Z 100
#define GEN_NPC_PIRANHA_DIR 270
#define GEN_NPC_PIRANHA_VEC 200,350,100
#define GEN_NPC_PIRANHA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 200, 350, 100 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 10, 350, 25 }, \
        .detectSize  = { 220, 165 }, \
    }, \
}

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 350
#define GEN_HIDDEN_PANEL_1_Y 350
#define GEN_HIDDEN_PANEL_1_Z 55
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC 350,350,55
#define GEN_HIDDEN_PANEL_1_XYZA 350, 350, 55, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o149
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_KZN09_HiddenPanel

// type: Marker:Entity:SuperBlock
// name: SuperBlock_1
#define GEN_SUPER_BLOCK_1_X 130
#define GEN_SUPER_BLOCK_1_Y 480
#define GEN_SUPER_BLOCK_1_Z -75
#define GEN_SUPER_BLOCK_1_DIR 0
#define GEN_SUPER_BLOCK_1_VEC 130,480,-75
#define GEN_SUPER_BLOCK_1_XYZA 130, 480, -75, 0
#define GEN_SUPER_BLOCK_1_PARAMS GEN_SUPER_BLOCK_1_XYZA
#define GEN_SUPER_BLOCK_1_VAR MV_SuperBlock
#define GEN_SUPER_BLOCK_1_FLAG GF_KZN09_SuperBlock

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X 360
#define GEN_PATH_1_Y 886
#define GEN_PATH_1_Z -55
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC 360,886,-55
#define GEN_PATH_1_PATH \
    { -332, 1009,  -55 }, \
    {  360,  886,  -55 },

