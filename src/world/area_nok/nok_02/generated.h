/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_KOOPA_VILLAGE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -484.0,    0.0,    5.0,   90.0 }, \
    {    2.0,    0.0, -479.0,  180.0 }, \
    {  365.0,   35.0,   90.0,  180.0 }, \
    {    0.0,    0.0,  -60.0,    0.0 }, \
    { -360.0,    0.0,  -50.0,   90.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_MAX(0x8000) \
    TEX_PAN_PARAMS_STEP( 16384,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(    12,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -484
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 5
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -484,0,5

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 2
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -479
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC 2,0,-479

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 365
#define GEN_ENTRY_2_Y 35
#define GEN_ENTRY_2_Z 90
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 365,35,90

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z -60
#define GEN_ENTRY_3_DIR 0
#define GEN_ENTRY_3_VEC 0,0,-60

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -360
#define GEN_ENTRY_4_Y 0
#define GEN_ENTRY_4_Z -50
#define GEN_ENTRY_4_DIR 90
#define GEN_ENTRY_4_VEC -360,0,-50

// type: Marker:NPC
// name: NPC_Koopa_01
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_01_X -109
#define GEN_NPC_KOOPA_01_Y 0
#define GEN_NPC_KOOPA_01_Z 191
#define GEN_NPC_KOOPA_01_DIR 0
#define GEN_NPC_KOOPA_01_VEC -109,0,191
#define GEN_NPC_KOOPA_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -109, 0, 191 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -109, 0, 191 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_FuzzyThief
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_FUZZY_THIEF_X -109
#define GEN_NPC_FUZZY_THIEF_Y 0
#define GEN_NPC_FUZZY_THIEF_Z 191
#define GEN_NPC_FUZZY_THIEF_DIR 0
#define GEN_NPC_FUZZY_THIEF_VEC -109,0,191
#define GEN_NPC_FUZZY_THIEF_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KoopaShell_01
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_SHELL_01_X -109
#define GEN_NPC_KOOPA_SHELL_01_Y 0
#define GEN_NPC_KOOPA_SHELL_01_Z 191
#define GEN_NPC_KOOPA_SHELL_01_DIR 0
#define GEN_NPC_KOOPA_SHELL_01_VEC -109,0,191
#define GEN_NPC_KOOPA_SHELL_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa_02
// anim: ANIM_KoopaWithoutShell_CryIdle
#define GEN_NPC_KOOPA_02_X 192
#define GEN_NPC_KOOPA_02_Y 0
#define GEN_NPC_KOOPA_02_Z 152
#define GEN_NPC_KOOPA_02_DIR 0
#define GEN_NPC_KOOPA_02_VEC 192,0,152
#define GEN_NPC_KOOPA_02_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 199, 0, 152 }, \
            { 107, 0, 152 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 192, 0, 152 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_KoopaShell_02
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_SHELL_02_X 0
#define GEN_NPC_KOOPA_SHELL_02_Y -1000
#define GEN_NPC_KOOPA_SHELL_02_Z 0
#define GEN_NPC_KOOPA_SHELL_02_DIR 0
#define GEN_NPC_KOOPA_SHELL_02_VEC 0,-1000,0
#define GEN_NPC_KOOPA_SHELL_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Kooper
// anim: ANIM_WorldKooper_Idle
#define GEN_NPC_KOOPER_X 20
#define GEN_NPC_KOOPER_Y 0
#define GEN_NPC_KOOPER_Z -145
#define GEN_NPC_KOOPER_DIR 0
#define GEN_NPC_KOOPER_VEC 20,0,-145
#define GEN_NPC_KOOPER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_FuzzyBoss
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_FUZZY_BOSS_X 12
#define GEN_NPC_FUZZY_BOSS_Y 10
#define GEN_NPC_FUZZY_BOSS_Z -351
#define GEN_NPC_FUZZY_BOSS_DIR 90
#define GEN_NPC_FUZZY_BOSS_VEC 12,10,-351
#define GEN_NPC_FUZZY_BOSS_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KoopersShell
// anim: ANIM_WorldKooper_Idle
#define GEN_NPC_KOOPERS_SHELL_X 12
#define GEN_NPC_KOOPERS_SHELL_Y 0
#define GEN_NPC_KOOPERS_SHELL_Z -351
#define GEN_NPC_KOOPERS_SHELL_DIR 90
#define GEN_NPC_KOOPERS_SHELL_VEC 12,0,-351
#define GEN_NPC_KOOPERS_SHELL_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MiscFuzzy1
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_MISC_FUZZY1_X 0
#define GEN_NPC_MISC_FUZZY1_Y -1000
#define GEN_NPC_MISC_FUZZY1_Z 0
#define GEN_NPC_MISC_FUZZY1_DIR 0
#define GEN_NPC_MISC_FUZZY1_VEC 0,-1000,0
#define GEN_NPC_MISC_FUZZY1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MiscFuzzy2
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_MISC_FUZZY2_X 0
#define GEN_NPC_MISC_FUZZY2_Y -1000
#define GEN_NPC_MISC_FUZZY2_Z 0
#define GEN_NPC_MISC_FUZZY2_DIR 0
#define GEN_NPC_MISC_FUZZY2_VEC 0,-1000,0
#define GEN_NPC_MISC_FUZZY2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa_01_1
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_01_1_X -109
#define GEN_NPC_KOOPA_01_1_Y 0
#define GEN_NPC_KOOPA_01_1_Z 191
#define GEN_NPC_KOOPA_01_1_DIR 0
#define GEN_NPC_KOOPA_01_1_VEC -109,0,191
#define GEN_NPC_KOOPA_01_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -124, 0, 250 }, \
        .wanderSize  = { 80 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -85, 0, 260 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Koopa_02_1
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_02_1_X 200
#define GEN_NPC_KOOPA_02_1_Y 0
#define GEN_NPC_KOOPA_02_1_Z 117
#define GEN_NPC_KOOPA_02_1_DIR 90
#define GEN_NPC_KOOPA_02_1_VEC 200,0,117
#define GEN_NPC_KOOPA_02_1_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_RECT, \
        .centerPos   = { 200, 0, 117 }, \
        .wanderSize  = { 50, 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 170 }, \
        .detectSize  = { 500 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Bobomb_01
// anim: ANIM_WorldBobomb_Blue_Idle
#define GEN_NPC_BOBOMB_01_X 0
#define GEN_NPC_BOBOMB_01_Y 0
#define GEN_NPC_BOBOMB_01_Z -333
#define GEN_NPC_BOBOMB_01_DIR 180
#define GEN_NPC_BOBOMB_01_VEC 0,0,-333
#define GEN_NPC_BOBOMB_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_02
// anim: ANIM_WorldBobomb_Green_Idle
#define GEN_NPC_BOBOMB_02_X -7
#define GEN_NPC_BOBOMB_02_Y 0
#define GEN_NPC_BOBOMB_02_Z -285
#define GEN_NPC_BOBOMB_02_DIR 0
#define GEN_NPC_BOBOMB_02_VEC -7,0,-285
#define GEN_NPC_BOBOMB_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bobomb_03
// anim: ANIM_WorldBobomb_Green_Idle
#define GEN_NPC_BOBOMB_03_X 47
#define GEN_NPC_BOBOMB_03_Y 0
#define GEN_NPC_BOBOMB_03_Z -140
#define GEN_NPC_BOBOMB_03_DIR 270
#define GEN_NPC_BOBOMB_03_VEC 47,0,-140
#define GEN_NPC_BOBOMB_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X -240
#define GEN_NPC_KOLORADO_Y 0
#define GEN_NPC_KOLORADO_Z -70
#define GEN_NPC_KOLORADO_DIR 0
#define GEN_NPC_KOLORADO_VEC -240,0,-70
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Fuzzy_Later
// anim: ANIM_Fuzzy_Walk
#define GEN_NPC_FUZZY_LATER_X 0
#define GEN_NPC_FUZZY_LATER_Y -1000
#define GEN_NPC_FUZZY_LATER_Z 0
#define GEN_NPC_FUZZY_LATER_DIR 0
#define GEN_NPC_FUZZY_LATER_VEC 0,-1000,0
#define GEN_NPC_FUZZY_LATER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KoopaKoot
// anim: ANIM_KoopaKoot_Idle
#define GEN_NPC_KOOPA_KOOT_X 330
#define GEN_NPC_KOOPA_KOOT_Y 0
#define GEN_NPC_KOOPA_KOOT_Z -100
#define GEN_NPC_KOOPA_KOOT_DIR 270
#define GEN_NPC_KOOPA_KOOT_VEC 330,0,-100
#define GEN_NPC_KOOPA_KOOT_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KoloradoWife
// anim: ANIM_KoloradoWife_Idle
#define GEN_NPC_KOLORADO_WIFE_X -328
#define GEN_NPC_KOLORADO_WIFE_Y 0
#define GEN_NPC_KOLORADO_WIFE_Z -180
#define GEN_NPC_KOLORADO_WIFE_DIR 0
#define GEN_NPC_KOLORADO_WIFE_VEC -328,0,-180
#define GEN_NPC_KOLORADO_WIFE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa_03
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_03_X -307
#define GEN_NPC_KOOPA_03_Y 0
#define GEN_NPC_KOOPA_03_Z 97
#define GEN_NPC_KOOPA_03_DIR 90
#define GEN_NPC_KOOPA_03_VEC -307,0,97
#define GEN_NPC_KOOPA_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopa_04
// anim: ANIM_Koopa_Idle
#define GEN_NPC_KOOPA_04_X 285
#define GEN_NPC_KOOPA_04_Y 0
#define GEN_NPC_KOOPA_04_Z 223
#define GEN_NPC_KOOPA_04_DIR 270
#define GEN_NPC_KOOPA_04_VEC 285,0,223
#define GEN_NPC_KOOPA_04_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 240, 0, 175 }, \
            { 350, 0, 250 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Parakarry
// anim: ANIM_WorldParakarry_Idle
#define GEN_NPC_PARAKARRY_X 0
#define GEN_NPC_PARAKARRY_Y 0
#define GEN_NPC_PARAKARRY_Z 0
#define GEN_NPC_PARAKARRY_DIR 0
#define GEN_NPC_PARAKARRY_VEC 0,0,0
#define GEN_NPC_PARAKARRY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bombette
// anim: ANIM_WorldBombette_Idle
#define GEN_NPC_BOMBETTE_X 0
#define GEN_NPC_BOMBETTE_Y 0
#define GEN_NPC_BOMBETTE_Z 0
#define GEN_NPC_BOMBETTE_DIR 0
#define GEN_NPC_BOMBETTE_VEC 0,0,0
#define GEN_NPC_BOMBETTE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KoloradoWife_Epilogue
// anim: ANIM_KoloradoWife_Idle
#define GEN_NPC_KOLORADO_WIFE_EPILOGUE_X -328
#define GEN_NPC_KOLORADO_WIFE_EPILOGUE_Y 0
#define GEN_NPC_KOLORADO_WIFE_EPILOGUE_Z -180
#define GEN_NPC_KOLORADO_WIFE_EPILOGUE_DIR 0
#define GEN_NPC_KOLORADO_WIFE_EPILOGUE_VEC -328,0,-180
#define GEN_NPC_KOLORADO_WIFE_EPILOGUE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ChuckQuizmo
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_X 300
#define GEN_NPC_CHUCK_QUIZMO_Y 0
#define GEN_NPC_CHUCK_QUIZMO_Z 330
#define GEN_NPC_CHUCK_QUIZMO_DIR 270
#define GEN_NPC_CHUCK_QUIZMO_VEC 300,0,330
#define GEN_NPC_CHUCK_QUIZMO_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 150
#define GEN_ITEM_1_Y 106
#define GEN_ITEM_1_Z 250
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 150,106,250
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_NOK02_Item_StarPiece

// type: Marker:Entity:BrickBlock
// name: BrickBlock_1
#define GEN_BRICK_BLOCK_1_X 151
#define GEN_BRICK_BLOCK_1_Y 81
#define GEN_BRICK_BLOCK_1_Z 251
#define GEN_BRICK_BLOCK_1_DIR 0
#define GEN_BRICK_BLOCK_1_VEC 151,81,251
#define GEN_BRICK_BLOCK_1_XYZA 151, 81, 251, 0
#define GEN_BRICK_BLOCK_1_PARAMS GEN_BRICK_BLOCK_1_XYZA

// type: Marker:Entity:BlueWarpPipe
// name: BlueWarpPipe_1
#define GEN_BLUE_WARP_PIPE_1_X 365
#define GEN_BLUE_WARP_PIPE_1_Y 0
#define GEN_BLUE_WARP_PIPE_1_Z 90
#define GEN_BLUE_WARP_PIPE_1_DIR 30
#define GEN_BLUE_WARP_PIPE_1_VEC 365,0,90
#define GEN_BLUE_WARP_PIPE_1_XYZA 365, 0, 90, 30
#define GEN_BLUE_WARP_PIPE_1_ENTRY nok_02_ENTRY_2
#define GEN_BLUE_WARP_PIPE_1_SCRIPT N(EVS_GotoMap_tik_01_3)
#define GEN_BLUE_WARP_PIPE_1_FLAG GF_NOK02_WarpPipe
#define GEN_BLUE_WARP_PIPE_1_PARAMS GEN_BLUE_WARP_PIPE_1_XYZA, GEN_BLUE_WARP_PIPE_1_ENTRY, Ref(GEN_BLUE_WARP_PIPE_1_SCRIPT), EVT_INDEX_OF_GAME_FLAG(GEN_BLUE_WARP_PIPE_1_FLAG)

// type: Marker:BlockGrid
// name: PushBlocks_1
#define GEN_PUSH_BLOCKS_1_X 88
#define GEN_PUSH_BLOCKS_1_Y -4
#define GEN_PUSH_BLOCKS_1_Z 188
#define GEN_PUSH_BLOCKS_1_DIR 0
#define GEN_PUSH_BLOCKS_1_VEC 88,-4,188
#define GEN_PUSH_BLOCKS_1_GRID_PARAMS 0, 5, 5, 88, -4, 188, NULL
#define GEN_PUSH_BLOCKS_1_GRID_CONTENT \
    Call(SetPushBlock, 0, 0, 0, PUSH_GRID_BLOCK)

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 443
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z 68
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 443,0,68
#define GEN_BOMB_POS_1_RAD 0

