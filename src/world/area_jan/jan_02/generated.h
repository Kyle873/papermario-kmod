/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_YOSHIS_VILLAGE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -450.0,    0.0, -450.0,  135.0 }, \
    {  640.0,    0.0,    0.0,  270.0 },

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
#define GEN_ENTRY_0_X -450
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -450
#define GEN_ENTRY_0_DIR 135
#define GEN_ENTRY_0_VEC -450,0,-450

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 640
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 640,0,0

// type: Marker:NPC
// name: NPC_YoshiLeader
// anim: ANIM_VillageLeader_Idle
#define GEN_NPC_YOSHI_LEADER_X 323
#define GEN_NPC_YOSHI_LEADER_Y 30
#define GEN_NPC_YOSHI_LEADER_Z 412
#define GEN_NPC_YOSHI_LEADER_DIR 270
#define GEN_NPC_YOSHI_LEADER_VEC 323,30,412
#define GEN_NPC_YOSHI_LEADER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_YoshiCouncillor
// anim: ANIM_LeadersFriend_Idle
#define GEN_NPC_YOSHI_COUNCILLOR_X 172
#define GEN_NPC_YOSHI_COUNCILLOR_Y 30
#define GEN_NPC_YOSHI_COUNCILLOR_Z 418
#define GEN_NPC_YOSHI_COUNCILLOR_DIR 90
#define GEN_NPC_YOSHI_COUNCILLOR_VEC 172,30,418
#define GEN_NPC_YOSHI_COUNCILLOR_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Yoshi_01
// anim: ANIM_Yoshi_Red_Idle
#define GEN_NPC_YOSHI_01_X -520
#define GEN_NPC_YOSHI_01_Y 0
#define GEN_NPC_YOSHI_01_Z -270
#define GEN_NPC_YOSHI_01_DIR 90
#define GEN_NPC_YOSHI_01_VEC -520,0,-270
#define GEN_NPC_YOSHI_01_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -520, 0, -270 }, \
            { -420, 0, -270 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -520, 0, -270 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Yoshi_02
// anim: ANIM_Yoshi_Blue_Idle
#define GEN_NPC_YOSHI_02_X 180
#define GEN_NPC_YOSHI_02_Y 0
#define GEN_NPC_YOSHI_02_Z -520
#define GEN_NPC_YOSHI_02_DIR 270
#define GEN_NPC_YOSHI_02_VEC 180,0,-520
#define GEN_NPC_YOSHI_02_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 3, \
        .points = { \
            { 180, 0, -520 }, \
            { 10, 0, -520 }, \
            { 100, 0, -600 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 5, 0, -554 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Yoshi_03
// anim: ANIM_Yoshi_Purple_Idle
#define GEN_NPC_YOSHI_03_X 600
#define GEN_NPC_YOSHI_03_Y 0
#define GEN_NPC_YOSHI_03_Z -150
#define GEN_NPC_YOSHI_03_DIR 270
#define GEN_NPC_YOSHI_03_VEC 600,0,-150
#define GEN_NPC_YOSHI_03_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 600, 0, -150 }, \
            { 485, 0, -220 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 600, 0, -150 }, \
        .detectSize  = { 100 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_ChuckQuizmo
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_X -150
#define GEN_NPC_CHUCK_QUIZMO_Y 15
#define GEN_NPC_CHUCK_QUIZMO_Z 300
#define GEN_NPC_CHUCK_QUIZMO_DIR 90
#define GEN_NPC_CHUCK_QUIZMO_VEC -150,15,300
#define GEN_NPC_CHUCK_QUIZMO_TERRITORY \
{}

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 25
#define GEN_HIDDEN_PANEL_1_Y 15
#define GEN_HIDDEN_PANEL_1_Z -60
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC 25,15,-60
#define GEN_HIDDEN_PANEL_1_XYZA 25, 15, -60, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o222
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_JAN02_HiddenPanel

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X -220
#define GEN_BOMB_POS_1_Y 15
#define GEN_BOMB_POS_1_Z 292
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC -220,15,292
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -586
#define GEN_BOMB_POS_2_Y 0
#define GEN_BOMB_POS_2_Z -215
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -586,0,-215
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X 581
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -240
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC 581,0,-240
#define GEN_BOMB_POS_3_RAD 0

// type: Marker:Sphere
// name: BombPos_4
#define GEN_BOMB_POS_4_X -636
#define GEN_BOMB_POS_4_Y 0
#define GEN_BOMB_POS_4_Z -235
#define GEN_BOMB_POS_4_DIR 0
#define GEN_BOMB_POS_4_VEC -636,0,-235
#define GEN_BOMB_POS_4_RAD 0

