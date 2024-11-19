/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_VILLAGE

// type: EntryList
#define GEN_ENTRY_LIST \
    {  391.0,    0.0,  286.0,  315.0 }, \
    { -371.0,    0.0,  304.0,   45.0 }, \
    { -473.0,    0.0,    4.0,   90.0 }, \
    {    0.0,   35.0,  355.0,  180.0 }, \
    {   60.0,    0.0,   10.0,    0.0 }, \
    { -230.0,   36.0, -332.0,    0.0 }, \
    {    0.0,    0.0,    0.0,    0.0 }, \
    {    0.0,    0.0,    0.0,    0.0 }, \
    {    0.0,    0.0,    0.0,    0.0 }, \
    {    0.0,    0.0,    0.0,    0.0 }, \
    {  200.0,   50.0,   70.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 391
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 286
#define GEN_ENTRY_0_DIR 315
#define GEN_ENTRY_0_VEC 391,0,286

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -371
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 304
#define GEN_ENTRY_1_DIR 45
#define GEN_ENTRY_1_VEC -371,0,304

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -473
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 4
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC -473,0,4

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 35
#define GEN_ENTRY_3_Z 355
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC 0,35,355

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 60
#define GEN_ENTRY_4_Y 0
#define GEN_ENTRY_4_Z 10
#define GEN_ENTRY_4_DIR 0
#define GEN_ENTRY_4_VEC 60,0,10

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X -230
#define GEN_ENTRY_5_Y 36
#define GEN_ENTRY_5_Z -332
#define GEN_ENTRY_5_DIR 0
#define GEN_ENTRY_5_VEC -230,36,-332

// type: Marker:Entry
// name: Entry_6
#define GEN_ENTRY_6_X 0
#define GEN_ENTRY_6_Y 0
#define GEN_ENTRY_6_Z 0
#define GEN_ENTRY_6_DIR 0
#define GEN_ENTRY_6_VEC 0,0,0

// type: Marker:Entry
// name: Entry_7
#define GEN_ENTRY_7_X 0
#define GEN_ENTRY_7_Y 0
#define GEN_ENTRY_7_Z 0
#define GEN_ENTRY_7_DIR 0
#define GEN_ENTRY_7_VEC 0,0,0

// type: Marker:Entry
// name: Entry_8
#define GEN_ENTRY_8_X 0
#define GEN_ENTRY_8_Y 0
#define GEN_ENTRY_8_Z 0
#define GEN_ENTRY_8_DIR 0
#define GEN_ENTRY_8_VEC 0,0,0

// type: Marker:Entry
// name: Entry_9
#define GEN_ENTRY_9_X 0
#define GEN_ENTRY_9_Y 0
#define GEN_ENTRY_9_Z 0
#define GEN_ENTRY_9_DIR 0
#define GEN_ENTRY_9_VEC 0,0,0

// type: Marker:Entry
// name: Entry_10
#define GEN_ENTRY_10_X 200
#define GEN_ENTRY_10_Y 50
#define GEN_ENTRY_10_Z 70
#define GEN_ENTRY_10_DIR 90
#define GEN_ENTRY_10_VEC 200,50,70

// type: Marker:NPC
// name: NPC_Goompa
// anim: ANIM_Goompa_Idle
#define GEN_NPC_GOOMPA_X 506
#define GEN_NPC_GOOMPA_Y 30
#define GEN_NPC_GOOMPA_Z -364
#define GEN_NPC_GOOMPA_DIR 45
#define GEN_NPC_GOOMPA_VEC 506,30,-364
#define GEN_NPC_GOOMPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 506, 30, -364 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 412, 28, -453 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goombaria
// anim: ANIM_Goombaria_Idle
#define GEN_NPC_GOOMBARIA_X 92
#define GEN_NPC_GOOMBARIA_Y 0
#define GEN_NPC_GOOMBARIA_Z 76
#define GEN_NPC_GOOMBARIA_DIR 0
#define GEN_NPC_GOOMBARIA_VEC 92,0,76
#define GEN_NPC_GOOMBARIA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 92, 0, 76 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 124, 0, -35 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goombario
// anim: ANIM_WorldGoombario_Idle
#define GEN_NPC_GOOMBARIO_X -50
#define GEN_NPC_GOOMBARIO_Y 0
#define GEN_NPC_GOOMBARIO_Z -30
#define GEN_NPC_GOOMBARIO_DIR 0
#define GEN_NPC_GOOMBARIO_VEC -50,0,-30
#define GEN_NPC_GOOMBARIO_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -50, 0, -30 }, \
        .wanderSize  = { 70 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -50, 0, -30 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Gooma
// anim: ANIM_Gooma_Idle
#define GEN_NPC_GOOMA_X 100
#define GEN_NPC_GOOMA_Y 0
#define GEN_NPC_GOOMA_Z -256
#define GEN_NPC_GOOMA_DIR 90
#define GEN_NPC_GOOMA_VEC 100,0,-256
#define GEN_NPC_GOOMA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 100, 0, -256 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 100, 0, -256 }, \
        .detectSize  = { 30 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goompapa
// anim: ANIM_Goompapa_Idle
#define GEN_NPC_GOOMPAPA_X 163
#define GEN_NPC_GOOMPAPA_Y 0
#define GEN_NPC_GOOMPAPA_Z 283
#define GEN_NPC_GOOMPAPA_DIR 0
#define GEN_NPC_GOOMPAPA_VEC 163,0,283
#define GEN_NPC_GOOMPAPA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 163, 0, 283 }, \
        .wanderSize  = { 50 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 267, 0, 245 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Goomama
// anim: ANIM_Goomama_Idle
#define GEN_NPC_GOOMAMA_X -200
#define GEN_NPC_GOOMAMA_Y 0
#define GEN_NPC_GOOMAMA_Z 100
#define GEN_NPC_GOOMAMA_DIR 0
#define GEN_NPC_GOOMAMA_VEC -200,0,100
#define GEN_NPC_GOOMAMA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -200, 0, 100 }, \
        .wanderSize  = { 70 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -200, 0, 100 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toad
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_X -138
#define GEN_NPC_TOAD_Y 19
#define GEN_NPC_TOAD_Z -297
#define GEN_NPC_TOAD_DIR 0
#define GEN_NPC_TOAD_VEC -138,19,-297
#define GEN_NPC_TOAD_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Kammy
// anim: ANIM_WorldKammy_Anim01
#define GEN_NPC_KAMMY_X 0
#define GEN_NPC_KAMMY_Y -1000
#define GEN_NPC_KAMMY_Z 0
#define GEN_NPC_KAMMY_DIR 90
#define GEN_NPC_KAMMY_VEC 0,-1000,0
#define GEN_NPC_KAMMY_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 0, 0, 0 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ChuckQuizmo
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_X -300
#define GEN_NPC_CHUCK_QUIZMO_Y 0
#define GEN_NPC_CHUCK_QUIZMO_Z 175
#define GEN_NPC_CHUCK_QUIZMO_DIR 90
#define GEN_NPC_CHUCK_QUIZMO_VEC -300,0,175
#define GEN_NPC_CHUCK_QUIZMO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Eldstar_01
// anim: ANIM_WorldEldstar_Idle
#define GEN_NPC_ELDSTAR_01_X 0
#define GEN_NPC_ELDSTAR_01_Y -1000
#define GEN_NPC_ELDSTAR_01_Z 0
#define GEN_NPC_ELDSTAR_01_DIR 0
#define GEN_NPC_ELDSTAR_01_VEC 0,-1000,0
#define GEN_NPC_ELDSTAR_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Eldstar_02
// anim: ANIM_WorldEldstar_Idle
#define GEN_NPC_ELDSTAR_02_X 0
#define GEN_NPC_ELDSTAR_02_Y -1000
#define GEN_NPC_ELDSTAR_02_Z 0
#define GEN_NPC_ELDSTAR_02_DIR 0
#define GEN_NPC_ELDSTAR_02_VEC 0,-1000,0
#define GEN_NPC_ELDSTAR_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Eldstar_01_1
// anim: ANIM_WorldEldstar_Idle
#define GEN_NPC_ELDSTAR_01_1_X 0
#define GEN_NPC_ELDSTAR_01_1_Y -1000
#define GEN_NPC_ELDSTAR_01_1_Z 0
#define GEN_NPC_ELDSTAR_01_1_DIR 0
#define GEN_NPC_ELDSTAR_01_1_VEC 0,-1000,0
#define GEN_NPC_ELDSTAR_01_1_TERRITORY \
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
// name: NPC_Goombario_1
// anim: ANIM_WorldGoombario_Idle
#define GEN_NPC_GOOMBARIO_1_X 0
#define GEN_NPC_GOOMBARIO_1_Y -1000
#define GEN_NPC_GOOMBARIO_1_Z 0
#define GEN_NPC_GOOMBARIO_1_DIR 0
#define GEN_NPC_GOOMBARIO_1_VEC 0,-1000,0
#define GEN_NPC_GOOMBARIO_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Goombaria_1
// anim: ANIM_Goombaria_Idle
#define GEN_NPC_GOOMBARIA_1_X 0
#define GEN_NPC_GOOMBARIA_1_Y -1000
#define GEN_NPC_GOOMBARIA_1_Z 0
#define GEN_NPC_GOOMBARIA_1_DIR 0
#define GEN_NPC_GOOMBARIA_1_VEC 0,-1000,0
#define GEN_NPC_GOOMBARIA_1_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 510
#define GEN_ITEM_1_Y 0
#define GEN_ITEM_1_Z -340
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 510,0,-340
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_SHOOTING_STAR
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_KMR02_Item_ShootingStar

// type: Marker:Entity:SavePoint
// name: SavePoint_1
#define GEN_SAVE_POINT_1_X 250
#define GEN_SAVE_POINT_1_Y 60
#define GEN_SAVE_POINT_1_Z 75
#define GEN_SAVE_POINT_1_DIR -15
#define GEN_SAVE_POINT_1_VEC 250,60,75
#define GEN_SAVE_POINT_1_XYZA 250, 60, 75, -15
#define GEN_SAVE_POINT_1_PARAMS GEN_SAVE_POINT_1_XYZA

// type: Marker:Entity:Hammer1Block
// name: Hammer1Block_1
#define GEN_HAMMER1_BLOCK_1_X 326
#define GEN_HAMMER1_BLOCK_1_Y 120
#define GEN_HAMMER1_BLOCK_1_Z 261
#define GEN_HAMMER1_BLOCK_1_DIR 148
#define GEN_HAMMER1_BLOCK_1_VEC 326,120,261
#define GEN_HAMMER1_BLOCK_1_XYZA 326, 120, 261, 148
#define GEN_HAMMER1_BLOCK_1_PARAMS GEN_HAMMER1_BLOCK_1_XYZA

// type: Marker:Entity:Hammer1BlockWideX
// name: Hammer1BlockWideX_1
#define GEN_HAMMER1_BLOCK_WIDE_X_1_X 326
#define GEN_HAMMER1_BLOCK_WIDE_X_1_Y 0
#define GEN_HAMMER1_BLOCK_WIDE_X_1_Z 261
#define GEN_HAMMER1_BLOCK_WIDE_X_1_DIR 270
#define GEN_HAMMER1_BLOCK_WIDE_X_1_VEC 326,0,261
#define GEN_HAMMER1_BLOCK_WIDE_X_1_XYZA 326, 0, 261, 270
#define GEN_HAMMER1_BLOCK_WIDE_X_1_PARAMS GEN_HAMMER1_BLOCK_WIDE_X_1_XYZA
#define GEN_HAMMER1_BLOCK_WIDE_X_1_SCRIPT N(EVS_OnSmash_GateBlock)

// type: Marker:Entity:BlueWarpPipe
// name: BlueWarpPipe_1
#define GEN_BLUE_WARP_PIPE_1_X 0
#define GEN_BLUE_WARP_PIPE_1_Y 0
#define GEN_BLUE_WARP_PIPE_1_Z 355
#define GEN_BLUE_WARP_PIPE_1_DIR 0
#define GEN_BLUE_WARP_PIPE_1_VEC 0,0,355
#define GEN_BLUE_WARP_PIPE_1_XYZA 0, 0, 355, 0
#define GEN_BLUE_WARP_PIPE_1_ENTRY kmr_02_ENTRY_3
#define GEN_BLUE_WARP_PIPE_1_SCRIPT N(EVS_GotoMap_tik_01_2)
#define GEN_BLUE_WARP_PIPE_1_FLAG GF_KMR02_WarpPipe
#define GEN_BLUE_WARP_PIPE_1_PARAMS GEN_BLUE_WARP_PIPE_1_XYZA, GEN_BLUE_WARP_PIPE_1_ENTRY, Ref(GEN_BLUE_WARP_PIPE_1_SCRIPT), EVT_INDEX_OF_GAME_FLAG(GEN_BLUE_WARP_PIPE_1_FLAG)

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X 46
#define GEN_PATH_1_Y 150
#define GEN_PATH_1_Z 180
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC 46,150,180
#define GEN_PATH_1_PATH \
    {  473,  150,  301 }, \
    {  234,   80,  200 }, \
    {   46,  150,  180 },

// type: Marker:Path
// name: Path_2
#define GEN_PATH_2_X 550
#define GEN_PATH_2_Y 108
#define GEN_PATH_2_Z 320
#define GEN_PATH_2_DIR 0
#define GEN_PATH_2_VEC 550,108,320
#define GEN_PATH_2_PATH \
    {   46,  150,  180 }, \
    {  -93,  262,  114 }, \
    {  118,  121,  141 }, \
    {  340,  141,  406 }, \
    {  550,  108,  320 },

// type: Marker:Path
// name: Path_3
#define GEN_PATH_3_X 399
#define GEN_PATH_3_Y 56
#define GEN_PATH_3_Z 288
#define GEN_PATH_3_DIR 0
#define GEN_PATH_3_VEC 399,56,288
#define GEN_PATH_3_PATH \
    {  465,  108,  320 }, \
    {  433,   78,  306 }, \
    {  399,   56,  288 },

// type: Marker:Path
// name: Path_4
#define GEN_PATH_4_X 380
#define GEN_PATH_4_Y 50
#define GEN_PATH_4_Z 282
#define GEN_PATH_4_DIR 0
#define GEN_PATH_4_VEC 380,50,282
#define GEN_PATH_4_PATH \
    {  399,   56,  288 }, \
    {  390,   53,  284 }, \
    {  380,   50,  282 },

// type: Marker:Path
// name: Path_5
#define GEN_PATH_5_X -391
#define GEN_PATH_5_Y 520
#define GEN_PATH_5_Z -212
#define GEN_PATH_5_DIR 0
#define GEN_PATH_5_VEC -391,520,-212
#define GEN_PATH_5_PATH \
    {  380,   50,  282 }, \
    {  290,  100,  240 }, \
    {  204,  142,  202 }, \
    { -391,  520, -212 },

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 387
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z 92
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 387,0,92
#define GEN_BOMB_POS_1_RAD 0

