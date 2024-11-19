/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PEACH_CASTLE_GROUNDS

// type: EntryList
#define GEN_ENTRY_LIST \
    {    0.0,    0.0,  480.0,    0.0 }, \
    {    0.0,  100.0, -360.0,  180.0 }, \
    { -325.0,    0.0,  360.0,   45.0 }, \
    { -480.0,    0.0,   50.0,   90.0 }, \
    {    0.0,    0.0, -255.0,  180.0 }, \
    {  480.0,    0.0,   50.0,  270.0 }, \
    {  300.0,    0.0,  380.0,  315.0 }, \
    {  354.0,    0.0,  294.0,  117.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 0
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 480
#define GEN_ENTRY_0_DIR 0
#define GEN_ENTRY_0_VEC 0,0,480

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 0
#define GEN_ENTRY_1_Y 100
#define GEN_ENTRY_1_Z -360
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC 0,100,-360

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -325
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 360
#define GEN_ENTRY_2_DIR 45
#define GEN_ENTRY_2_VEC -325,0,360

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -480
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 50
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC -480,0,50

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 0
#define GEN_ENTRY_4_Y 0
#define GEN_ENTRY_4_Z -255
#define GEN_ENTRY_4_DIR 180
#define GEN_ENTRY_4_VEC 0,0,-255

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X 480
#define GEN_ENTRY_5_Y 0
#define GEN_ENTRY_5_Z 50
#define GEN_ENTRY_5_DIR 270
#define GEN_ENTRY_5_VEC 480,0,50

// type: Marker:Entry
// name: Entry_6
#define GEN_ENTRY_6_X 300
#define GEN_ENTRY_6_Y 0
#define GEN_ENTRY_6_Z 380
#define GEN_ENTRY_6_DIR 315
#define GEN_ENTRY_6_VEC 300,0,380

// type: Marker:Entry
// name: Entry_7
#define GEN_ENTRY_7_X 354
#define GEN_ENTRY_7_Y 0
#define GEN_ENTRY_7_Z 294
#define GEN_ENTRY_7_DIR 117
#define GEN_ENTRY_7_VEC 354,0,294

// type: Marker:NPC
// name: NPC_ToadMinister
// anim: ANIM_ToadMinister_Idle
#define GEN_NPC_TOAD_MINISTER_X 0
#define GEN_NPC_TOAD_MINISTER_Y 0
#define GEN_NPC_TOAD_MINISTER_Z 350
#define GEN_NPC_TOAD_MINISTER_DIR 270
#define GEN_NPC_TOAD_MINISTER_VEC 0,0,350
#define GEN_NPC_TOAD_MINISTER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_01
// anim: ANIM_Toad_Blue_Idle
#define GEN_NPC_TOAD_01_X 100
#define GEN_NPC_TOAD_01_Y 0
#define GEN_NPC_TOAD_01_Z 175
#define GEN_NPC_TOAD_01_DIR 270
#define GEN_NPC_TOAD_01_VEC 100,0,175
#define GEN_NPC_TOAD_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_02
// anim: ANIM_Toad_Green_Idle
#define GEN_NPC_TOAD_02_X 200
#define GEN_NPC_TOAD_02_Y 0
#define GEN_NPC_TOAD_02_Z 110
#define GEN_NPC_TOAD_02_DIR 270
#define GEN_NPC_TOAD_02_VEC 200,0,110
#define GEN_NPC_TOAD_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 200, 0, 110 }, \
        .wanderSize  = { 70 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 200, 0, 110 }, \
        .detectSize  = { 70 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toad_03
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_03_X -250
#define GEN_NPC_TOAD_03_Y 0
#define GEN_NPC_TOAD_03_Z 225
#define GEN_NPC_TOAD_03_DIR 90
#define GEN_NPC_TOAD_03_VEC -250,0,225
#define GEN_NPC_TOAD_03_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -250, 0, 225 }, \
            { 300, 0, -50 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -250, 0, 225 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toadette
// anim: ANIM_Toadette_Orange_Idle
#define GEN_NPC_TOADETTE_X -170
#define GEN_NPC_TOADETTE_Y 0
#define GEN_NPC_TOADETTE_Z 100
#define GEN_NPC_TOADETTE_DIR 90
#define GEN_NPC_TOADETTE_VEC -170,0,100
#define GEN_NPC_TOADETTE_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -170, 0, 100 }, \
        .wanderSize  = { 70 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -170, 0, 100 }, \
        .detectSize  = { 70 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ToadGuard_01
// anim: ANIM_ToadGuard_Red_Idle
#define GEN_NPC_TOAD_GUARD_01_X -55
#define GEN_NPC_TOAD_GUARD_01_Y 100
#define GEN_NPC_TOAD_GUARD_01_Z -360
#define GEN_NPC_TOAD_GUARD_01_DIR 270
#define GEN_NPC_TOAD_GUARD_01_VEC -55,100,-360
#define GEN_NPC_TOAD_GUARD_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_02
// anim: ANIM_ToadGuard_Yellow_Idle
#define GEN_NPC_TOAD_GUARD_02_X 0
#define GEN_NPC_TOAD_GUARD_02_Y -1000
#define GEN_NPC_TOAD_GUARD_02_Z 0
#define GEN_NPC_TOAD_GUARD_02_DIR 270
#define GEN_NPC_TOAD_GUARD_02_VEC 0,-1000,0
#define GEN_NPC_TOAD_GUARD_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Dryite
// anim: ANIM_Dryite_Yellow_Idle
#define GEN_NPC_DRYITE_X 170
#define GEN_NPC_DRYITE_Y 0
#define GEN_NPC_DRYITE_Z 345
#define GEN_NPC_DRYITE_DIR 90
#define GEN_NPC_DRYITE_VEC 170,0,345
#define GEN_NPC_DRYITE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Mouser
// anim: ANIM_Mouser_Blue_Idle
#define GEN_NPC_MOUSER_X 200
#define GEN_NPC_MOUSER_Y 0
#define GEN_NPC_MOUSER_Z 325
#define GEN_NPC_MOUSER_DIR 270
#define GEN_NPC_MOUSER_VEC 200,0,325
#define GEN_NPC_MOUSER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MayorPenguin
// anim: ANIM_MayorPenguin_Idle
#define GEN_NPC_MAYOR_PENGUIN_X -150
#define GEN_NPC_MAYOR_PENGUIN_Y 0
#define GEN_NPC_MAYOR_PENGUIN_Z 0
#define GEN_NPC_MAYOR_PENGUIN_DIR 90
#define GEN_NPC_MAYOR_PENGUIN_VEC -150,0,0
#define GEN_NPC_MAYOR_PENGUIN_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_X -120
#define GEN_NPC_KOOPA_Y 0
#define GEN_NPC_KOOPA_Z -15
#define GEN_NPC_KOOPA_DIR 270
#define GEN_NPC_KOOPA_VEC -120,0,-15
#define GEN_NPC_KOOPA_TERRITORY \
{}

