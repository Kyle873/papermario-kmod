/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_WINDY_MILL

// type: EntryList
#define GEN_ENTRY_LIST \
    { -231.0,    0.0,    5.0,   90.0 }, \
    {  231.0,    0.0,    5.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -231
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 5
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -231,0,5

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 231
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 5
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 231,0,5

// type: Marker:NPC
// name: NPC_TubbasHeart
// anim: ANIM_TubbasHeart_Anim01
#define GEN_NPC_TUBBAS_HEART_X 80
#define GEN_NPC_TUBBAS_HEART_Y 50
#define GEN_NPC_TUBBAS_HEART_Z 0
#define GEN_NPC_TUBBAS_HEART_DIR 270
#define GEN_NPC_TUBBAS_HEART_VEC 80,50,0
#define GEN_NPC_TUBBAS_HEART_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_HyperGoomba
// anim: ANIM_Goomba_Hyper_Idle
#define GEN_NPC_HYPER_GOOMBA_X 0
#define GEN_NPC_HYPER_GOOMBA_Y 0
#define GEN_NPC_HYPER_GOOMBA_Z 0
#define GEN_NPC_HYPER_GOOMBA_DIR 270
#define GEN_NPC_HYPER_GOOMBA_VEC 0,0,0
#define GEN_NPC_HYPER_GOOMBA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 20 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 150 }, \
    }, \
}

// type: Marker:Entity:Signpost
// name: Signpost_1
#define GEN_SIGNPOST_1_X 200
#define GEN_SIGNPOST_1_Y 0
#define GEN_SIGNPOST_1_Z -40
#define GEN_SIGNPOST_1_DIR 0
#define GEN_SIGNPOST_1_VEC 200,0,-40
#define GEN_SIGNPOST_1_XYZA 200, 0, -40, 0
#define GEN_SIGNPOST_1_PARAMS GEN_SIGNPOST_1_XYZA
#define GEN_SIGNPOST_1_SCRIPT N(EVS_ReadSign)

