/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_BROS_FORTRESS

// type: EntryList
#define GEN_ENTRY_LIST \
    { -257.0,    0.0,   80.0,   90.0 }, \
    {  257.0,    0.0,   80.0,  270.0 }, \
    { -257.0,  187.0,  -55.0,   90.0 }, \
    {  257.0,  187.0,  -55.0,  270.0 }, \
    {  235.0,   50.0,  -70.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -257
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 80
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -257,0,80

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 257
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 80
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 257,0,80

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -257
#define GEN_ENTRY_2_Y 187
#define GEN_ENTRY_2_Z -55
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -257,187,-55

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 257
#define GEN_ENTRY_3_Y 187
#define GEN_ENTRY_3_Z -55
#define GEN_ENTRY_3_DIR 270
#define GEN_ENTRY_3_VEC 257,187,-55

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 235
#define GEN_ENTRY_4_Y 50
#define GEN_ENTRY_4_Z -70
#define GEN_ENTRY_4_DIR 270
#define GEN_ENTRY_4_VEC 235,50,-70

// type: Marker:NPC
// name: NPC_Bobomb_01
// anim: ANIM_Bobomb_Idle
#define GEN_NPC_BOBOMB_01_X -70
#define GEN_NPC_BOBOMB_01_Y 0
#define GEN_NPC_BOBOMB_01_Z 80
#define GEN_NPC_BOBOMB_01_DIR 90
#define GEN_NPC_BOBOMB_01_VEC -70,0,80
#define GEN_NPC_BOBOMB_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -70, 0, 80 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 0, 0, 35 }, \
        .detectSize  = { 250, 175 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bobomb_02
// anim: ANIM_Bobomb_Idle
#define GEN_NPC_BOBOMB_02_X 140
#define GEN_NPC_BOBOMB_02_Y 0
#define GEN_NPC_BOBOMB_02_Z 80
#define GEN_NPC_BOBOMB_02_DIR 270
#define GEN_NPC_BOBOMB_02_VEC 140,0,80
#define GEN_NPC_BOBOMB_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 140, 0, 80 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 0, 0, 35 }, \
        .detectSize  = { 250, 175 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaTroopa
// anim: ANIM_KoopaTroopa_Idle
#define GEN_NPC_KOOPA_TROOPA_X 50
#define GEN_NPC_KOOPA_TROOPA_Y 187
#define GEN_NPC_KOOPA_TROOPA_Z 183
#define GEN_NPC_KOOPA_TROOPA_DIR 0
#define GEN_NPC_KOOPA_TROOPA_VEC 50,187,183
#define GEN_NPC_KOOPA_TROOPA_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 70, 187, 183 }, \
            { -20, 187, 183 }, \
        }, \
        .detectShape = SHAPE_RECT, \
        .detectPos   = { 20, 187, 207 }, \
        .detectSize  = { 150, 80 }, \
    }, \
}

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X -265
#define GEN_PADLOCK_1_Y 195
#define GEN_PADLOCK_1_Z -55
#define GEN_PADLOCK_1_DIR 80
#define GEN_PADLOCK_1_VEC -265,195,-55
#define GEN_PADLOCK_1_XYZA -265, 195, -55, 80
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

// type: Marker:Entity:BlueSwitch
// name: BlueSwitch_1
#define GEN_BLUE_SWITCH_1_X 10
#define GEN_BLUE_SWITCH_1_Y 187
#define GEN_BLUE_SWITCH_1_Z 100
#define GEN_BLUE_SWITCH_1_DIR 0
#define GEN_BLUE_SWITCH_1_VEC 10,187,100
#define GEN_BLUE_SWITCH_1_XYZA 10, 187, 100, 0
#define GEN_BLUE_SWITCH_1_PARAMS GEN_BLUE_SWITCH_1_XYZA
#define GEN_BLUE_SWITCH_1_FLAG AF_TRD02_LowerStairs

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 255
#define GEN_BOMB_POS_1_Y 50
#define GEN_BOMB_POS_1_Z -80
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 255,50,-80
#define GEN_BOMB_POS_1_RAD 0

