/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_SHIVER_CITY

// type: EntryList
#define GEN_ENTRY_LIST \
    { -480.0,    0.0,    0.0,   90.0 }, \
    {  455.0,    0.0,    0.0,  270.0 }, \
    {  325.0,    0.0,    0.0,    0.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(    70,    60,    60,  -100) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -480
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -480,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 455
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 455,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 325
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 0
#define GEN_ENTRY_2_VEC 325,0,0

// type: Marker:NPC
// name: NPC_PenguinPatrol
// anim: ANIM_PenguinPatrol_Idle
#define GEN_NPC_PENGUIN_PATROL_X -275
#define GEN_NPC_PENGUIN_PATROL_Y 0
#define GEN_NPC_PENGUIN_PATROL_Z 100
#define GEN_NPC_PENGUIN_PATROL_DIR 0
#define GEN_NPC_PENGUIN_PATROL_VEC -275,0,100
#define GEN_NPC_PENGUIN_PATROL_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_PenguinSentry
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_SENTRY_X 0
#define GEN_NPC_PENGUIN_SENTRY_Y -1000
#define GEN_NPC_PENGUIN_SENTRY_Z 0
#define GEN_NPC_PENGUIN_SENTRY_DIR 180
#define GEN_NPC_PENGUIN_SENTRY_VEC 0,-1000,0
#define GEN_NPC_PENGUIN_SENTRY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Herringway
// anim: ANIM_Herringway_Idle
#define GEN_NPC_HERRINGWAY_X 0
#define GEN_NPC_HERRINGWAY_Y -1000
#define GEN_NPC_HERRINGWAY_Z 0
#define GEN_NPC_HERRINGWAY_DIR 0
#define GEN_NPC_HERRINGWAY_VEC 0,-1000,0
#define GEN_NPC_HERRINGWAY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Penguin_04
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_04_X 200
#define GEN_NPC_PENGUIN_04_Y 0
#define GEN_NPC_PENGUIN_04_Z -110
#define GEN_NPC_PENGUIN_04_DIR 0
#define GEN_NPC_PENGUIN_04_VEC 200,0,-110
#define GEN_NPC_PENGUIN_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Penguin_05
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_05_X -200
#define GEN_NPC_PENGUIN_05_Y 0
#define GEN_NPC_PENGUIN_05_Z -110
#define GEN_NPC_PENGUIN_05_DIR 0
#define GEN_NPC_PENGUIN_05_VEC -200,0,-110
#define GEN_NPC_PENGUIN_05_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Penguin_06
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_06_X 330
#define GEN_NPC_PENGUIN_06_Y 0
#define GEN_NPC_PENGUIN_06_Z 300
#define GEN_NPC_PENGUIN_06_DIR 0
#define GEN_NPC_PENGUIN_06_VEC 330,0,300
#define GEN_NPC_PENGUIN_06_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 320, 0, 280 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Penguin_02
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_02_X -100
#define GEN_NPC_PENGUIN_02_Y -10
#define GEN_NPC_PENGUIN_02_Z 180
#define GEN_NPC_PENGUIN_02_DIR 0
#define GEN_NPC_PENGUIN_02_VEC -100,-10,180
#define GEN_NPC_PENGUIN_02_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -100, -10, 180 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Penguin_03
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_03_X 57
#define GEN_NPC_PENGUIN_03_Y -10
#define GEN_NPC_PENGUIN_03_Z 194
#define GEN_NPC_PENGUIN_03_DIR 0
#define GEN_NPC_PENGUIN_03_VEC 57,-10,194
#define GEN_NPC_PENGUIN_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 57, -10, 194 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Penguin_02_1
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_02_1_X -323
#define GEN_NPC_PENGUIN_02_1_Y 0
#define GEN_NPC_PENGUIN_02_1_Z 160
#define GEN_NPC_PENGUIN_02_1_DIR 0
#define GEN_NPC_PENGUIN_02_1_VEC -323,0,160
#define GEN_NPC_PENGUIN_02_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -323, 0, 160 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Penguin_03_1
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_03_1_X 363
#define GEN_NPC_PENGUIN_03_1_Y 0
#define GEN_NPC_PENGUIN_03_1_Z 213
#define GEN_NPC_PENGUIN_03_1_DIR 0
#define GEN_NPC_PENGUIN_03_1_VEC 363,0,213
#define GEN_NPC_PENGUIN_03_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 363, 0, 213 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toadette_01
// anim: ANIM_Toadette_Pink_Idle
#define GEN_NPC_TOADETTE_01_X -400
#define GEN_NPC_TOADETTE_01_Y 0
#define GEN_NPC_TOADETTE_01_Z 230
#define GEN_NPC_TOADETTE_01_DIR 90
#define GEN_NPC_TOADETTE_01_VEC -400,0,230
#define GEN_NPC_TOADETTE_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_02
// anim: ANIM_Toadette_Pink_Idle
#define GEN_NPC_TOADETTE_02_X -350
#define GEN_NPC_TOADETTE_02_Y 0
#define GEN_NPC_TOADETTE_02_Z 230
#define GEN_NPC_TOADETTE_02_DIR 90
#define GEN_NPC_TOADETTE_02_VEC -350,0,230
#define GEN_NPC_TOADETTE_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_03
// anim: ANIM_Toadette_Pink_Idle
#define GEN_NPC_TOADETTE_03_X -375
#define GEN_NPC_TOADETTE_03_Y 0
#define GEN_NPC_TOADETTE_03_Z 220
#define GEN_NPC_TOADETTE_03_DIR 90
#define GEN_NPC_TOADETTE_03_VEC -375,0,220
#define GEN_NPC_TOADETTE_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X 0
#define GEN_NPC_KOLORADO_Y -1000
#define GEN_NPC_KOLORADO_Z 0
#define GEN_NPC_KOLORADO_DIR 0
#define GEN_NPC_KOLORADO_VEC 0,-1000,0
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Archeologist_01
// anim: ANIM_Archeologist_Idle
#define GEN_NPC_ARCHEOLOGIST_01_X 0
#define GEN_NPC_ARCHEOLOGIST_01_Y -1000
#define GEN_NPC_ARCHEOLOGIST_01_Z 0
#define GEN_NPC_ARCHEOLOGIST_01_DIR 0
#define GEN_NPC_ARCHEOLOGIST_01_VEC 0,-1000,0
#define GEN_NPC_ARCHEOLOGIST_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Archeologist_02
// anim: ANIM_Archeologist_Idle
#define GEN_NPC_ARCHEOLOGIST_02_X 0
#define GEN_NPC_ARCHEOLOGIST_02_Y -1000
#define GEN_NPC_ARCHEOLOGIST_02_Z 0
#define GEN_NPC_ARCHEOLOGIST_02_DIR 0
#define GEN_NPC_ARCHEOLOGIST_02_VEC 0,-1000,0
#define GEN_NPC_ARCHEOLOGIST_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Kooper
// anim: ANIM_WorldKooper_Idle
#define GEN_NPC_KOOPER_X 0
#define GEN_NPC_KOOPER_Y -1000
#define GEN_NPC_KOOPER_Z 0
#define GEN_NPC_KOOPER_DIR 0
#define GEN_NPC_KOOPER_VEC 0,-1000,0
#define GEN_NPC_KOOPER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Parakarry
// anim: ANIM_WorldParakarry_Idle
#define GEN_NPC_PARAKARRY_X 0
#define GEN_NPC_PARAKARRY_Y -1000
#define GEN_NPC_PARAKARRY_Z 0
#define GEN_NPC_PARAKARRY_DIR 0
#define GEN_NPC_PARAKARRY_VEC 0,-1000,0
#define GEN_NPC_PARAKARRY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ChuckQuizmo
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_X 0
#define GEN_NPC_CHUCK_QUIZMO_Y 0
#define GEN_NPC_CHUCK_QUIZMO_Z -150
#define GEN_NPC_CHUCK_QUIZMO_DIR 90
#define GEN_NPC_CHUCK_QUIZMO_VEC 0,0,-150
#define GEN_NPC_CHUCK_QUIZMO_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 0
#define GEN_ITEM_1_Y -60
#define GEN_ITEM_1_Z 220
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 0,-60,220
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_WAREHOUSE_KEY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_KEY
#define GEN_ITEM_1_FLAG GF_SAM11_Item_WarehouseKey

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X 153
#define GEN_PADLOCK_1_Y 8
#define GEN_PADLOCK_1_Z -145
#define GEN_PADLOCK_1_DIR 0
#define GEN_PADLOCK_1_VEC 153,8,-145
#define GEN_PADLOCK_1_XYZA 153, 8, -145, 0
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

// type: Marker:Entity:ScriptSpring
// name: ScriptSpring_1
#define GEN_SCRIPT_SPRING_1_X 224
#define GEN_SCRIPT_SPRING_1_Y 150
#define GEN_SCRIPT_SPRING_1_Z -328
#define GEN_SCRIPT_SPRING_1_DIR 0
#define GEN_SCRIPT_SPRING_1_VEC 224,150,-328
#define GEN_SCRIPT_SPRING_1_XYZA 224, 150, -328, 0
#define GEN_SCRIPT_SPRING_1_PARAMS GEN_SCRIPT_SPRING_1_XYZA
#define GEN_SCRIPT_SPRING_1_SCRIPT N(EVS_UseSpring)

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 0
#define GEN_BOMB_POS_1_Y -10
#define GEN_BOMB_POS_1_Z 220
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 0,-10,220
#define GEN_BOMB_POS_1_RAD 150

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X 447
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -144
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC 447,0,-144
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X -440
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -178
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC -440,0,-178
#define GEN_BOMB_POS_3_RAD 0

// type: Marker:Sphere
// name: BombPos_4
#define GEN_BOMB_POS_4_X -450
#define GEN_BOMB_POS_4_Y 0
#define GEN_BOMB_POS_4_Z -80
#define GEN_BOMB_POS_4_DIR 0
#define GEN_BOMB_POS_4_VEC -450,0,-80
#define GEN_BOMB_POS_4_RAD 0

