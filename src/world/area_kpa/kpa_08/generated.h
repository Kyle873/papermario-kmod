/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOWSERS_CASTLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -483.0,    0.0,  -19.0,   90.0 }, \
    {  203.0,  100.0,  -22.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -483
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -19
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -483,0,-19

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 203
#define GEN_ENTRY_1_Y 100
#define GEN_ENTRY_1_Z -22
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 203,100,-22

// type: Marker:NPC
// name: NPC_Magikoopa
// anim: ANIM_Magikoopa_Anim01
#define GEN_NPC_MAGIKOOPA_X -210
#define GEN_NPC_MAGIKOOPA_Y 0
#define GEN_NPC_MAGIKOOPA_Z 25
#define GEN_NPC_MAGIKOOPA_DIR 270
#define GEN_NPC_MAGIKOOPA_VEC -210,0,25
#define GEN_NPC_MAGIKOOPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { -210, 0, 25 }, \
        .wanderSize  = { 30, 10 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -210, 0, 25 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:RedSwitch
// name: RedSwitch_1
#define GEN_RED_SWITCH_1_X 10
#define GEN_RED_SWITCH_1_Y 0
#define GEN_RED_SWITCH_1_Z 0
#define GEN_RED_SWITCH_1_DIR 0
#define GEN_RED_SWITCH_1_VEC 10,0,0
#define GEN_RED_SWITCH_1_XYZA 10, 0, 0, 0
#define GEN_RED_SWITCH_1_PARAMS GEN_RED_SWITCH_1_XYZA
#define GEN_RED_SWITCH_1_SCRIPT N(EVS_ActivateSwitch)

