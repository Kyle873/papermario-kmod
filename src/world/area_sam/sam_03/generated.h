/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_SHIVER_SNOWFIELD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -730.0,    0.0,    0.0,   90.0 }, \
    {  730.0,    0.0,    0.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -730
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -730,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 730
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 730,0,0

// type: Marker:NPC
// name: NPC_JrTroopa
// anim: ANIM_JrTroopa_Idle
#define GEN_NPC_JR_TROOPA_X 261
#define GEN_NPC_JR_TROOPA_Y 0
#define GEN_NPC_JR_TROOPA_Z -76
#define GEN_NPC_JR_TROOPA_DIR 270
#define GEN_NPC_JR_TROOPA_VEC 261,0,-76
#define GEN_NPC_JR_TROOPA_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_JrTroopa_Hitbox
// anim: ANIM_JrTroopa_Idle
#define GEN_NPC_JR_TROOPA_HITBOX_X 261
#define GEN_NPC_JR_TROOPA_HITBOX_Y 0
#define GEN_NPC_JR_TROOPA_HITBOX_Z -76
#define GEN_NPC_JR_TROOPA_HITBOX_DIR 270
#define GEN_NPC_JR_TROOPA_HITBOX_VEC 261,0,-76
#define GEN_NPC_JR_TROOPA_HITBOX_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Gulpit_01
// anim: ANIM_Gulpit_Anim01
#define GEN_NPC_GULPIT_01_X -345
#define GEN_NPC_GULPIT_01_Y 0
#define GEN_NPC_GULPIT_01_Z 115
#define GEN_NPC_GULPIT_01_DIR 90
#define GEN_NPC_GULPIT_01_VEC -345,0,115
#define GEN_NPC_GULPIT_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -345, 0, 115 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -345, 0, 115 }, \
        .detectSize  = { 250 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Gulpit_02
// anim: ANIM_Gulpit_Anim01
#define GEN_NPC_GULPIT_02_X 200
#define GEN_NPC_GULPIT_02_Y 0
#define GEN_NPC_GULPIT_02_Z 0
#define GEN_NPC_GULPIT_02_DIR 270
#define GEN_NPC_GULPIT_02_VEC 200,0,0
#define GEN_NPC_GULPIT_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 200, 0, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 200, 0, 0 }, \
        .detectSize  = { 250 }, \
    }, \
}

