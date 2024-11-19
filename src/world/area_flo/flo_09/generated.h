/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_FLOWER_FIELDS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -520.0,    0.0,    0.0,   90.0 }, \
    {  520.0,    0.0,    0.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -520
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -520,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 520
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 520,0,0

// type: Marker:NPC
// name: NPC_Dayzee_01
// anim: ANIM_Dayzee_Anim01
#define GEN_NPC_DAYZEE_01_X -350
#define GEN_NPC_DAYZEE_01_Y 0
#define GEN_NPC_DAYZEE_01_Z 40
#define GEN_NPC_DAYZEE_01_DIR 90
#define GEN_NPC_DAYZEE_01_VEC -350,0,40
#define GEN_NPC_DAYZEE_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -350, 0, 40 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -350, 0, 40 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Dayzee_02
// anim: ANIM_Dayzee_Anim01
#define GEN_NPC_DAYZEE_02_X 260
#define GEN_NPC_DAYZEE_02_Y 0
#define GEN_NPC_DAYZEE_02_Z 75
#define GEN_NPC_DAYZEE_02_DIR 270
#define GEN_NPC_DAYZEE_02_VEC 260,0,75
#define GEN_NPC_DAYZEE_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 260, 0, 75 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 260, 0, 75 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bzzap_01
// anim: ANIM_Bzzap_Anim02
#define GEN_NPC_BZZAP_01_X -50
#define GEN_NPC_BZZAP_01_Y 55
#define GEN_NPC_BZZAP_01_Z 90
#define GEN_NPC_BZZAP_01_DIR 90
#define GEN_NPC_BZZAP_01_VEC -50,55,90
#define GEN_NPC_BZZAP_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -50, 55, 90 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -50, 50, 90 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bzzap_02
// anim: ANIM_Bzzap_Anim02
#define GEN_NPC_BZZAP_02_X 0
#define GEN_NPC_BZZAP_02_Y -1000
#define GEN_NPC_BZZAP_02_Z 0
#define GEN_NPC_BZZAP_02_DIR 90
#define GEN_NPC_BZZAP_02_VEC 0,-1000,0
#define GEN_NPC_BZZAP_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -50, 55, 90 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -50, 50, 90 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -250
#define GEN_ITEM_1_Y 100
#define GEN_ITEM_1_Z 0
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -250,100,0
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_HAPPY_FLOWER_B
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FALL_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_FLO09_Item_HappyFlowerB

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -200
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z 1
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -200,0,1
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X 0
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z 1
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC 0,0,1
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X 200
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z 1
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC 200,0,1
#define GEN_BOMB_POS_3_RAD 0

// type: Marker:Volume
// name: FlowerVolume_1
#define GEN_FLOWER_VOLUME_1_X -415
#define GEN_FLOWER_VOLUME_1_Y 25
#define GEN_FLOWER_VOLUME_1_Z 3
#define GEN_FLOWER_VOLUME_1_DIR 0
#define GEN_FLOWER_VOLUME_1_VEC -415,25,3
#define GEN_FLOWER_VOLUME_1_MIN_X -511
#define GEN_FLOWER_VOLUME_1_MIN_Y 0
#define GEN_FLOWER_VOLUME_1_MIN_Z -4
#define GEN_FLOWER_VOLUME_1_MIN_XZ -511,-4
#define GEN_FLOWER_VOLUME_1_MIN_VEC -511,0,-4
#define GEN_FLOWER_VOLUME_1_MAX_X -319
#define GEN_FLOWER_VOLUME_1_MAX_Y 50
#define GEN_FLOWER_VOLUME_1_MAX_Z 10
#define GEN_FLOWER_VOLUME_1_MAX_XZ -319,10
#define GEN_FLOWER_VOLUME_1_MAX_VEC -319,50,10

// type: Marker:Volume
// name: FlowerVolume_2
#define GEN_FLOWER_VOLUME_2_X -167
#define GEN_FLOWER_VOLUME_2_Y 25
#define GEN_FLOWER_VOLUME_2_Z 96
#define GEN_FLOWER_VOLUME_2_DIR 0
#define GEN_FLOWER_VOLUME_2_VEC -167,25,96
#define GEN_FLOWER_VOLUME_2_MIN_X -302
#define GEN_FLOWER_VOLUME_2_MIN_Y 0
#define GEN_FLOWER_VOLUME_2_MIN_Z 77
#define GEN_FLOWER_VOLUME_2_MIN_XZ -302,77
#define GEN_FLOWER_VOLUME_2_MIN_VEC -302,0,77
#define GEN_FLOWER_VOLUME_2_MAX_X -32
#define GEN_FLOWER_VOLUME_2_MAX_Y 50
#define GEN_FLOWER_VOLUME_2_MAX_Z 116
#define GEN_FLOWER_VOLUME_2_MAX_XZ -32,116
#define GEN_FLOWER_VOLUME_2_MAX_VEC -32,50,116

// type: Marker:Volume
// name: FlowerVolume_3
#define GEN_FLOWER_VOLUME_3_X 96
#define GEN_FLOWER_VOLUME_3_Y 25
#define GEN_FLOWER_VOLUME_3_Z 72
#define GEN_FLOWER_VOLUME_3_DIR 0
#define GEN_FLOWER_VOLUME_3_VEC 96,25,72
#define GEN_FLOWER_VOLUME_3_MIN_X 51
#define GEN_FLOWER_VOLUME_3_MIN_Y 0
#define GEN_FLOWER_VOLUME_3_MIN_Z 18
#define GEN_FLOWER_VOLUME_3_MIN_XZ 51,18
#define GEN_FLOWER_VOLUME_3_MIN_VEC 51,0,18
#define GEN_FLOWER_VOLUME_3_MAX_X 141
#define GEN_FLOWER_VOLUME_3_MAX_Y 50
#define GEN_FLOWER_VOLUME_3_MAX_Z 127
#define GEN_FLOWER_VOLUME_3_MAX_XZ 141,127
#define GEN_FLOWER_VOLUME_3_MAX_VEC 141,50,127

// type: Marker:Volume
// name: FlowerVolume_4
#define GEN_FLOWER_VOLUME_4_X 368
#define GEN_FLOWER_VOLUME_4_Y 25
#define GEN_FLOWER_VOLUME_4_Z 68
#define GEN_FLOWER_VOLUME_4_DIR 0
#define GEN_FLOWER_VOLUME_4_VEC 368,25,68
#define GEN_FLOWER_VOLUME_4_MIN_X 234
#define GEN_FLOWER_VOLUME_4_MIN_Y 0
#define GEN_FLOWER_VOLUME_4_MIN_Z 38
#define GEN_FLOWER_VOLUME_4_MIN_XZ 234,38
#define GEN_FLOWER_VOLUME_4_MIN_VEC 234,0,38
#define GEN_FLOWER_VOLUME_4_MAX_X 502
#define GEN_FLOWER_VOLUME_4_MAX_Y 50
#define GEN_FLOWER_VOLUME_4_MAX_Z 98
#define GEN_FLOWER_VOLUME_4_MAX_XZ 502,98
#define GEN_FLOWER_VOLUME_4_MAX_VEC 502,50,98

// type: Marker:Volume
// name: FlowerVolume_5
#define GEN_FLOWER_VOLUME_5_X -462
#define GEN_FLOWER_VOLUME_5_Y 85
#define GEN_FLOWER_VOLUME_5_Z -121
#define GEN_FLOWER_VOLUME_5_DIR 0
#define GEN_FLOWER_VOLUME_5_VEC -462,85,-121
#define GEN_FLOWER_VOLUME_5_MIN_X -525
#define GEN_FLOWER_VOLUME_5_MIN_Y 60
#define GEN_FLOWER_VOLUME_5_MIN_Z -163
#define GEN_FLOWER_VOLUME_5_MIN_XZ -525,-163
#define GEN_FLOWER_VOLUME_5_MIN_VEC -525,60,-163
#define GEN_FLOWER_VOLUME_5_MAX_X -400
#define GEN_FLOWER_VOLUME_5_MAX_Y 110
#define GEN_FLOWER_VOLUME_5_MAX_Z -80
#define GEN_FLOWER_VOLUME_5_MAX_XZ -400,-80
#define GEN_FLOWER_VOLUME_5_MAX_VEC -400,110,-80

// type: Marker:Volume
// name: FlowerVolume_6
#define GEN_FLOWER_VOLUME_6_X 85
#define GEN_FLOWER_VOLUME_6_Y 85
#define GEN_FLOWER_VOLUME_6_Z -119
#define GEN_FLOWER_VOLUME_6_DIR 0
#define GEN_FLOWER_VOLUME_6_VEC 85,85,-119
#define GEN_FLOWER_VOLUME_6_MIN_X -346
#define GEN_FLOWER_VOLUME_6_MIN_Y 60
#define GEN_FLOWER_VOLUME_6_MIN_Z -148
#define GEN_FLOWER_VOLUME_6_MIN_XZ -346,-148
#define GEN_FLOWER_VOLUME_6_MIN_VEC -346,60,-148
#define GEN_FLOWER_VOLUME_6_MAX_X 517
#define GEN_FLOWER_VOLUME_6_MAX_Y 110
#define GEN_FLOWER_VOLUME_6_MAX_Z -91
#define GEN_FLOWER_VOLUME_6_MAX_XZ 517,-91
#define GEN_FLOWER_VOLUME_6_MAX_VEC 517,110,-91

