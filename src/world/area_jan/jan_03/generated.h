/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_YOSHIS_VILLAGE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -583.0,    0.0,    0.0,   90.0 }, \
    { -405.0,    0.0, -405.0,  135.0 }, \
    {  583.0,    0.0,    0.0,  270.0 }, \
    { -540.0,   35.0,  195.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0,   400,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -100,   200,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -583
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -583,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -405
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z -405
#define GEN_ENTRY_1_DIR 135
#define GEN_ENTRY_1_VEC -405,0,-405

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 583
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z 0
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 583,0,0

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X -540
#define GEN_ENTRY_3_Y 35
#define GEN_ENTRY_3_Z 195
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC -540,35,195

// type: Marker:NPC
// name: NPC_VillageLeader
// anim: ANIM_VillageLeader_Idle
#define GEN_NPC_VILLAGE_LEADER_X -300
#define GEN_NPC_VILLAGE_LEADER_Y 0
#define GEN_NPC_VILLAGE_LEADER_Z -70
#define GEN_NPC_VILLAGE_LEADER_DIR 270
#define GEN_NPC_VILLAGE_LEADER_VEC -300,0,-70
#define GEN_NPC_VILLAGE_LEADER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Sushie
// anim: ANIM_WorldSushie_Idle
#define GEN_NPC_SUSHIE_X -425
#define GEN_NPC_SUSHIE_Y 0
#define GEN_NPC_SUSHIE_Z -350
#define GEN_NPC_SUSHIE_DIR 90
#define GEN_NPC_SUSHIE_VEC -425,0,-350
#define GEN_NPC_SUSHIE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Kolorado
// anim: ANIM_Kolorado_Idle
#define GEN_NPC_KOLORADO_X -475
#define GEN_NPC_KOLORADO_Y 0
#define GEN_NPC_KOLORADO_Z -75
#define GEN_NPC_KOLORADO_DIR 90
#define GEN_NPC_KOLORADO_VEC -475,0,-75
#define GEN_NPC_KOLORADO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_X 275
#define GEN_NPC_TOAD_Y 0
#define GEN_NPC_TOAD_Z -70
#define GEN_NPC_TOAD_DIR 0
#define GEN_NPC_TOAD_VEC 275,0,-70
#define GEN_NPC_TOAD_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Yoshi_01
// anim: ANIM_Yoshi_Blue_Idle
#define GEN_NPC_YOSHI_01_X 125
#define GEN_NPC_YOSHI_01_Y 30
#define GEN_NPC_YOSHI_01_Z -425
#define GEN_NPC_YOSHI_01_DIR 270
#define GEN_NPC_YOSHI_01_VEC 125,30,-425
#define GEN_NPC_YOSHI_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Yoshi_02
// anim: ANIM_Yoshi_Green_Idle
#define GEN_NPC_YOSHI_02_X -350
#define GEN_NPC_YOSHI_02_Y 0
#define GEN_NPC_YOSHI_02_Z -220
#define GEN_NPC_YOSHI_02_DIR 90
#define GEN_NPC_YOSHI_02_VEC -350,0,-220
#define GEN_NPC_YOSHI_02_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -375, 0, -220 }, \
            { -325, 0, -220 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Yoshi_03
// anim: ANIM_Yoshi_Yellow_Idle
#define GEN_NPC_YOSHI_03_X -100
#define GEN_NPC_YOSHI_03_Y 0
#define GEN_NPC_YOSHI_03_Z -80
#define GEN_NPC_YOSHI_03_DIR 270
#define GEN_NPC_YOSHI_03_VEC -100,0,-80
#define GEN_NPC_YOSHI_03_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -100, 0, -20 }, \
            { -210, 0, -80 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_YoshiKid_01
// anim: ANIM_YoshiKid_Green_Idle
#define GEN_NPC_YOSHI_KID_01_X -450
#define GEN_NPC_YOSHI_KID_01_Y 0
#define GEN_NPC_YOSHI_KID_01_Z -160
#define GEN_NPC_YOSHI_KID_01_DIR 90
#define GEN_NPC_YOSHI_KID_01_VEC -450,0,-160
#define GEN_NPC_YOSHI_KID_01_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 5, \
        .points = { \
            { -450, 0, -160 }, \
            { -378, 0, -81 }, \
            { -590, 0, -100 }, \
            { -464, 0, -46 }, \
            { -495, 0, -147 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_YoshiKid_02
// anim: ANIM_YoshiKid_Red_Idle
#define GEN_NPC_YOSHI_KID_02_X -340
#define GEN_NPC_YOSHI_KID_02_Y 0
#define GEN_NPC_YOSHI_KID_02_Z -385
#define GEN_NPC_YOSHI_KID_02_DIR 90
#define GEN_NPC_YOSHI_KID_02_VEC -340,0,-385
#define GEN_NPC_YOSHI_KID_02_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 3, \
        .points = { \
            { -340, 0, -385 }, \
            { -290, 0, -310 }, \
            { -360, 0, -310 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_YoshiKid_03
// anim: ANIM_YoshiKid_Blue_Idle
#define GEN_NPC_YOSHI_KID_03_X -260
#define GEN_NPC_YOSHI_KID_03_Y 0
#define GEN_NPC_YOSHI_KID_03_Z -220
#define GEN_NPC_YOSHI_KID_03_DIR 270
#define GEN_NPC_YOSHI_KID_03_VEC -260,0,-220
#define GEN_NPC_YOSHI_KID_03_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 3, \
        .points = { \
            { -260, 0, -220 }, \
            { -270, 0, -220 }, \
            { -260, 0, -230 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_YoshiKid_04
// anim: ANIM_YoshiKid_Yellow_Idle
#define GEN_NPC_YOSHI_KID_04_X -460
#define GEN_NPC_YOSHI_KID_04_Y 0
#define GEN_NPC_YOSHI_KID_04_Z 150
#define GEN_NPC_YOSHI_KID_04_DIR 90
#define GEN_NPC_YOSHI_KID_04_VEC -460,0,150
#define GEN_NPC_YOSHI_KID_04_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 3, \
        .points = { \
            { -460, 0, 150 }, \
            { -450, 0, 150 }, \
            { -460, 0, 160 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_YoshiKid_05
// anim: ANIM_YoshiKid_Purple_Idle
#define GEN_NPC_YOSHI_KID_05_X -320
#define GEN_NPC_YOSHI_KID_05_Y 0
#define GEN_NPC_YOSHI_KID_05_Z 80
#define GEN_NPC_YOSHI_KID_05_DIR 270
#define GEN_NPC_YOSHI_KID_05_VEC -320,0,80
#define GEN_NPC_YOSHI_KID_05_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 3, \
        .points = { \
            { -320, 0, 80 }, \
            { -330, 0, 80 }, \
            { -320, 0, 90 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 0 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Raven_01
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_01_X -650
#define GEN_NPC_RAVEN_01_Y 374
#define GEN_NPC_RAVEN_01_Z -150
#define GEN_NPC_RAVEN_01_DIR 90
#define GEN_NPC_RAVEN_01_VEC -650,374,-150
#define GEN_NPC_RAVEN_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_02
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_02_X -645
#define GEN_NPC_RAVEN_02_Y 457
#define GEN_NPC_RAVEN_02_Z -255
#define GEN_NPC_RAVEN_02_DIR 90
#define GEN_NPC_RAVEN_02_VEC -645,457,-255
#define GEN_NPC_RAVEN_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_03
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_03_X -570
#define GEN_NPC_RAVEN_03_Y 374
#define GEN_NPC_RAVEN_03_Z -300
#define GEN_NPC_RAVEN_03_DIR 90
#define GEN_NPC_RAVEN_03_VEC -570,374,-300
#define GEN_NPC_RAVEN_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_04
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_04_X -500
#define GEN_NPC_RAVEN_04_Y 374
#define GEN_NPC_RAVEN_04_Z -285
#define GEN_NPC_RAVEN_04_DIR 270
#define GEN_NPC_RAVEN_04_VEC -500,374,-285
#define GEN_NPC_RAVEN_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Raven_05
// anim: ANIM_Raven_Idle
#define GEN_NPC_RAVEN_05_X -450
#define GEN_NPC_RAVEN_05_Y 374
#define GEN_NPC_RAVEN_05_Z -175
#define GEN_NPC_RAVEN_05_DIR 270
#define GEN_NPC_RAVEN_05_VEC -450,374,-175
#define GEN_NPC_RAVEN_05_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ChuckQuizmo
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_X 300
#define GEN_NPC_CHUCK_QUIZMO_Y 0
#define GEN_NPC_CHUCK_QUIZMO_Z 400
#define GEN_NPC_CHUCK_QUIZMO_DIR 90
#define GEN_NPC_CHUCK_QUIZMO_VEC 300,0,400
#define GEN_NPC_CHUCK_QUIZMO_TERRITORY \
{}

// type: Marker:Entity:SavePoint
// name: SavePoint_1
#define GEN_SAVE_POINT_1_X 100
#define GEN_SAVE_POINT_1_Y 60
#define GEN_SAVE_POINT_1_Z -25
#define GEN_SAVE_POINT_1_DIR 0
#define GEN_SAVE_POINT_1_VEC 100,60,-25
#define GEN_SAVE_POINT_1_XYZA 100, 60, -25, 0
#define GEN_SAVE_POINT_1_PARAMS GEN_SAVE_POINT_1_XYZA

// type: Marker:Entity:ScriptSpring
// name: ScriptSpring_1
#define GEN_SCRIPT_SPRING_1_X -556
#define GEN_SCRIPT_SPRING_1_Y 0
#define GEN_SCRIPT_SPRING_1_Z -195
#define GEN_SCRIPT_SPRING_1_DIR 0
#define GEN_SCRIPT_SPRING_1_VEC -556,0,-195
#define GEN_SCRIPT_SPRING_1_XYZA -556, 0, -195, 0
#define GEN_SCRIPT_SPRING_1_PARAMS GEN_SCRIPT_SPRING_1_XYZA
#define GEN_SCRIPT_SPRING_1_SCRIPT N(EVS_UseSpring)

// type: Marker:Entity:BlueWarpPipe
// name: BlueWarpPipe_1
#define GEN_BLUE_WARP_PIPE_1_X -540
#define GEN_BLUE_WARP_PIPE_1_Y 0
#define GEN_BLUE_WARP_PIPE_1_Z 195
#define GEN_BLUE_WARP_PIPE_1_DIR 30
#define GEN_BLUE_WARP_PIPE_1_VEC -540,0,195
#define GEN_BLUE_WARP_PIPE_1_XYZA -540, 0, 195, 30
#define GEN_BLUE_WARP_PIPE_1_ENTRY jan_03_ENTRY_3
#define GEN_BLUE_WARP_PIPE_1_SCRIPT N(EVS_GotoMap_tik_08_4)
#define GEN_BLUE_WARP_PIPE_1_FLAG GF_JAN03_WarpPipe
#define GEN_BLUE_WARP_PIPE_1_PARAMS GEN_BLUE_WARP_PIPE_1_XYZA, GEN_BLUE_WARP_PIPE_1_ENTRY, Ref(GEN_BLUE_WARP_PIPE_1_SCRIPT), EVT_INDEX_OF_GAME_FLAG(GEN_BLUE_WARP_PIPE_1_FLAG)

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 576
#define GEN_BOMB_POS_1_Y 0
#define GEN_BOMB_POS_1_Z -135
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 576,0,-135
#define GEN_BOMB_POS_1_RAD 0

