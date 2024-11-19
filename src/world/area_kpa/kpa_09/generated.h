/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOWSERS_CASTLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -483.0,  100.0,  -17.0,   90.0 }, \
    {  202.0,    0.0,  -16.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -483
#define GEN_ENTRY_0_Y 100
#define GEN_ENTRY_0_Z -17
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -483,100,-17

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 202
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -16
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 202,0,-16

// type: Marker:NPC
// name: NPC_DryBones
// anim: ANIM_DryBones_Anim02
#define GEN_NPC_DRY_BONES_X -73
#define GEN_NPC_DRY_BONES_Y 0
#define GEN_NPC_DRY_BONES_Z 0
#define GEN_NPC_DRY_BONES_DIR 90
#define GEN_NPC_DRY_BONES_VEC -73,0,0
#define GEN_NPC_DRY_BONES_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -73, 0, 0 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -73, 0, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:RedSwitch
// name: RedSwitch_1
#define GEN_RED_SWITCH_1_X -325
#define GEN_RED_SWITCH_1_Y 0
#define GEN_RED_SWITCH_1_Z -8
#define GEN_RED_SWITCH_1_DIR 0
#define GEN_RED_SWITCH_1_VEC -325,0,-8
#define GEN_RED_SWITCH_1_XYZA -325, 0, -8, 0
#define GEN_RED_SWITCH_1_PARAMS GEN_RED_SWITCH_1_XYZA
#define GEN_RED_SWITCH_1_SCRIPT N(EVS_ActivateSwitch)

