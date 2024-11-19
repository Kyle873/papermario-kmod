/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_DRY_DRY_DESERT

// type: EntryList
#define GEN_ENTRY_LIST \
    { -475.0,    0.0,    0.0,   90.0 }, \
    {  475.0,    0.0,    0.0,  270.0 }, \
    {    0.0,    0.0, -475.0,  180.0 }, \
    {    0.0,    0.0,  475.0,    0.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -475
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -475,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 475
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 475,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -475
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 0,0,-475

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 475
#define GEN_ENTRY_3_DIR 0
#define GEN_ENTRY_3_VEC 0,0,475

// type: Marker:NPC
// name: NPC_Bandit
// anim: ANIM_Bandit_Idle
#define GEN_NPC_BANDIT_X -40
#define GEN_NPC_BANDIT_Y 0
#define GEN_NPC_BANDIT_Z 155
#define GEN_NPC_BANDIT_DIR 270
#define GEN_NPC_BANDIT_VEC -40,0,155
#define GEN_NPC_BANDIT_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -40, 0, 155 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 1000 }, \
    }, \
}

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -398
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z 104
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -398,0,104
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -108
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -406
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -108,0,-406
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X 211
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -111
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC 211,0,-111
#define GEN_BOMB_POS_3_RAD 0

