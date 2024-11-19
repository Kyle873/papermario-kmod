/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOOS_MANSION

// type: EntryList
#define GEN_ENTRY_LIST \
    {  460.0, -420.0,  630.0,    0.0 }, \
    {  250.0, -420.0,   15.0,  180.0 }, \
    {  610.0, -420.0,   15.0,  180.0 }, \
    {  250.0, -210.0,   15.0,  180.0 }, \
    {  610.0, -210.0,   15.0,  180.0 }, \
    {  270.0,    0.0,   15.0,  180.0 }, \
    {  630.0,    0.0,   15.0,  180.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 460
#define GEN_ENTRY_0_Y -420
#define GEN_ENTRY_0_Z 630
#define GEN_ENTRY_0_DIR 0
#define GEN_ENTRY_0_VEC 460,-420,630

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 250
#define GEN_ENTRY_1_Y -420
#define GEN_ENTRY_1_Z 15
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC 250,-420,15

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 610
#define GEN_ENTRY_2_Y -420
#define GEN_ENTRY_2_Z 15
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 610,-420,15

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 250
#define GEN_ENTRY_3_Y -210
#define GEN_ENTRY_3_Z 15
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC 250,-210,15

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 610
#define GEN_ENTRY_4_Y -210
#define GEN_ENTRY_4_Z 15
#define GEN_ENTRY_4_DIR 180
#define GEN_ENTRY_4_VEC 610,-210,15

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X 270
#define GEN_ENTRY_5_Y 0
#define GEN_ENTRY_5_Z 15
#define GEN_ENTRY_5_DIR 180
#define GEN_ENTRY_5_VEC 270,0,15

// type: Marker:Entry
// name: Entry_6
#define GEN_ENTRY_6_X 630
#define GEN_ENTRY_6_Y 0
#define GEN_ENTRY_6_Z 15
#define GEN_ENTRY_6_DIR 180
#define GEN_ENTRY_6_VEC 630,0,15

// type: Marker:NPC
// name: NPC_JumpScareBoo
// anim: ANIM_Boo_Idle
#define GEN_NPC_JUMP_SCARE_BOO_X 0
#define GEN_NPC_JUMP_SCARE_BOO_Y -1000
#define GEN_NPC_JUMP_SCARE_BOO_Z 0
#define GEN_NPC_JUMP_SCARE_BOO_DIR 0
#define GEN_NPC_JUMP_SCARE_BOO_VEC 0,-1000,0
#define GEN_NPC_JUMP_SCARE_BOO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_TrafficBoo1
// anim: ANIM_Boo_Idle
#define GEN_NPC_TRAFFIC_BOO1_X 523
#define GEN_NPC_TRAFFIC_BOO1_Y -139
#define GEN_NPC_TRAFFIC_BOO1_Z 193
#define GEN_NPC_TRAFFIC_BOO1_DIR 0
#define GEN_NPC_TRAFFIC_BOO1_VEC 523,-139,193
#define GEN_NPC_TRAFFIC_BOO1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_TrafficBoo2
// anim: ANIM_Boo_Idle
#define GEN_NPC_TRAFFIC_BOO2_X 473
#define GEN_NPC_TRAFFIC_BOO2_Y -122
#define GEN_NPC_TRAFFIC_BOO2_Z 247
#define GEN_NPC_TRAFFIC_BOO2_DIR 0
#define GEN_NPC_TRAFFIC_BOO2_VEC 473,-122,247
#define GEN_NPC_TRAFFIC_BOO2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_UpstairsBoo
// anim: ANIM_Boo_Idle
#define GEN_NPC_UPSTAIRS_BOO_X 422
#define GEN_NPC_UPSTAIRS_BOO_Y -200
#define GEN_NPC_UPSTAIRS_BOO_Z 112
#define GEN_NPC_UPSTAIRS_BOO_DIR 0
#define GEN_NPC_UPSTAIRS_BOO_VEC 422,-200,112
#define GEN_NPC_UPSTAIRS_BOO_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 422, -200, 112 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 422, -200, 112 }, \
        .detectSize  = { 30 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Franky
// anim: ANIM_Boo_Idle
#define GEN_NPC_FRANKY_X 397
#define GEN_NPC_FRANKY_Y -410
#define GEN_NPC_FRANKY_Z 352
#define GEN_NPC_FRANKY_DIR 0
#define GEN_NPC_FRANKY_VEC 397,-410,352
#define GEN_NPC_FRANKY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 397, -410, 352 }, \
        .wanderSize  = { 80 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 397, -410, 352 }, \
        .detectSize  = { 80 }, \
    }, \
}

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 675
#define GEN_HIDDEN_PANEL_1_Y -420
#define GEN_HIDDEN_PANEL_1_Z 415
#define GEN_HIDDEN_PANEL_1_DIR 180
#define GEN_HIDDEN_PANEL_1_VEC 675,-420,415
#define GEN_HIDDEN_PANEL_1_XYZA 675, -420, 415, 180
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o317
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_OBK01_HiddenPanel

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 447
#define GEN_ITEM_1_Y -350
#define GEN_ITEM_1_Z 278
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 447,-350,278
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_BOO_WEIGHT
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_DECORATION
#define GEN_ITEM_1_FLAG 0

