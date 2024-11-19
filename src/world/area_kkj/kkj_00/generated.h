/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_PEACH_CASTLE_GROUNDS

// type: EntryList
#define GEN_ENTRY_LIST \
    {    0.0,    0.0,  480.0,    0.0 }, \
    {    0.0,  100.0, -365.0,  180.0 }, \
    { -420.0,   40.0, -260.0,  135.0 }, \
    {  230.0,    0.0, -210.0,  180.0 }, \
    {  420.0,   40.0, -260.0,  225.0 }, \
    {    0.0,    0.0,  480.0,    0.0 }, \
    {    0.0,    0.0,  480.0,    0.0 },

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
#define GEN_ENTRY_1_Z -365
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC 0,100,-365

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -420
#define GEN_ENTRY_2_Y 40
#define GEN_ENTRY_2_Z -260
#define GEN_ENTRY_2_DIR 135
#define GEN_ENTRY_2_VEC -420,40,-260

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 230
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z -210
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC 230,0,-210

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 420
#define GEN_ENTRY_4_Y 40
#define GEN_ENTRY_4_Z -260
#define GEN_ENTRY_4_DIR 225
#define GEN_ENTRY_4_VEC 420,40,-260

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X 0
#define GEN_ENTRY_5_Y 0
#define GEN_ENTRY_5_Z 480
#define GEN_ENTRY_5_DIR 0
#define GEN_ENTRY_5_VEC 0,0,480

// type: Marker:Entry
// name: Entry_6
#define GEN_ENTRY_6_X 0
#define GEN_ENTRY_6_Y 0
#define GEN_ENTRY_6_Z 480
#define GEN_ENTRY_6_DIR 0
#define GEN_ENTRY_6_VEC 0,0,480

// type: Marker:NPC
// name: NPC_Luigi
// anim: ANIM_Luigi_Still
#define GEN_NPC_LUIGI_X 0
#define GEN_NPC_LUIGI_Y -1000
#define GEN_NPC_LUIGI_Z 0
#define GEN_NPC_LUIGI_DIR 90
#define GEN_NPC_LUIGI_VEC 0,-1000,0
#define GEN_NPC_LUIGI_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_01
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_01_X 182
#define GEN_NPC_TOAD_01_Y 0
#define GEN_NPC_TOAD_01_Z 320
#define GEN_NPC_TOAD_01_DIR 270
#define GEN_NPC_TOAD_01_VEC 182,0,320
#define GEN_NPC_TOAD_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_02
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_02_X -250
#define GEN_NPC_TOAD_02_Y 0
#define GEN_NPC_TOAD_02_Z 250
#define GEN_NPC_TOAD_02_DIR 90
#define GEN_NPC_TOAD_02_VEC -250,0,250
#define GEN_NPC_TOAD_02_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -250, 0, 250 }, \
            { 250, 0, 250 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -250, 0, 250 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toad_03
// anim: ANIM_Toad_Yellow_Idle
#define GEN_NPC_TOAD_03_X 150
#define GEN_NPC_TOAD_03_Y 0
#define GEN_NPC_TOAD_03_Z 0
#define GEN_NPC_TOAD_03_DIR 270
#define GEN_NPC_TOAD_03_VEC 150,0,0
#define GEN_NPC_TOAD_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_01
// anim: ANIM_Toadette_Pink_Idle
#define GEN_NPC_TOADETTE_01_X -300
#define GEN_NPC_TOADETTE_01_Y 0
#define GEN_NPC_TOADETTE_01_Z 100
#define GEN_NPC_TOADETTE_01_DIR 90
#define GEN_NPC_TOADETTE_01_VEC -300,0,100
#define GEN_NPC_TOADETTE_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_02
// anim: ANIM_Toadette_Green_Idle
#define GEN_NPC_TOADETTE_02_X -270
#define GEN_NPC_TOADETTE_02_Y 0
#define GEN_NPC_TOADETTE_02_Z 85
#define GEN_NPC_TOADETTE_02_DIR 270
#define GEN_NPC_TOADETTE_02_VEC -270,0,85
#define GEN_NPC_TOADETTE_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_RussT_01
// anim: ANIM_RussT_Idle
#define GEN_NPC_RUSS_T_01_X 300
#define GEN_NPC_RUSS_T_01_Y 0
#define GEN_NPC_RUSS_T_01_Z 150
#define GEN_NPC_RUSS_T_01_DIR 90
#define GEN_NPC_RUSS_T_01_VEC 300,0,150
#define GEN_NPC_RUSS_T_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShiverToad_01
// anim: ANIM_ShiverToad_Green_Idle
#define GEN_NPC_SHIVER_TOAD_01_X 330
#define GEN_NPC_SHIVER_TOAD_01_Y 0
#define GEN_NPC_SHIVER_TOAD_01_Z 135
#define GEN_NPC_SHIVER_TOAD_01_DIR 270
#define GEN_NPC_SHIVER_TOAD_01_VEC 330,0,135
#define GEN_NPC_SHIVER_TOAD_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Penguin_01
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_01_X -120
#define GEN_NPC_PENGUIN_01_Y 100
#define GEN_NPC_PENGUIN_01_Z -305
#define GEN_NPC_PENGUIN_01_DIR 90
#define GEN_NPC_PENGUIN_01_VEC -120,100,-305
#define GEN_NPC_PENGUIN_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_01
// anim: ANIM_ToadGuard_Red_Idle
#define GEN_NPC_TOAD_GUARD_01_X 100
#define GEN_NPC_TOAD_GUARD_01_Y 0
#define GEN_NPC_TOAD_GUARD_01_Z 150
#define GEN_NPC_TOAD_GUARD_01_DIR 270
#define GEN_NPC_TOAD_GUARD_01_VEC 100,0,150
#define GEN_NPC_TOAD_GUARD_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_02
// anim: ANIM_ToadGuard_Blue_Idle
#define GEN_NPC_TOAD_GUARD_02_X -50
#define GEN_NPC_TOAD_GUARD_02_Y 100
#define GEN_NPC_TOAD_GUARD_02_Z -365
#define GEN_NPC_TOAD_GUARD_02_DIR 270
#define GEN_NPC_TOAD_GUARD_02_VEC -50,100,-365
#define GEN_NPC_TOAD_GUARD_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Peach
// anim: ANIM_Peach1_Still
#define GEN_NPC_PEACH_X 0
#define GEN_NPC_PEACH_Y 100
#define GEN_NPC_PEACH_Z -440
#define GEN_NPC_PEACH_DIR 270
#define GEN_NPC_PEACH_VEC 0,100,-440
#define GEN_NPC_PEACH_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadMinister
// anim: ANIM_ToadMinister_Idle
#define GEN_NPC_TOAD_MINISTER_X 100
#define GEN_NPC_TOAD_MINISTER_Y 0
#define GEN_NPC_TOAD_MINISTER_Z 250
#define GEN_NPC_TOAD_MINISTER_DIR 270
#define GEN_NPC_TOAD_MINISTER_VEC 100,0,250
#define GEN_NPC_TOAD_MINISTER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_TayceT
// anim: ANIM_TayceT_Idle
#define GEN_NPC_TAYCE_T_X -200
#define GEN_NPC_TAYCE_T_Y 0
#define GEN_NPC_TAYCE_T_Z 260
#define GEN_NPC_TAYCE_T_DIR 90
#define GEN_NPC_TAYCE_T_VEC -200,0,260
#define GEN_NPC_TAYCE_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_RussT_02
// anim: ANIM_RussT_Idle
#define GEN_NPC_RUSS_T_02_X 300
#define GEN_NPC_RUSS_T_02_Y 0
#define GEN_NPC_RUSS_T_02_Z 150
#define GEN_NPC_RUSS_T_02_DIR 90
#define GEN_NPC_RUSS_T_02_VEC 300,0,150
#define GEN_NPC_RUSS_T_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShiverToad_02
// anim: ANIM_ShiverToad_Green_Idle
#define GEN_NPC_SHIVER_TOAD_02_X 330
#define GEN_NPC_SHIVER_TOAD_02_Y 0
#define GEN_NPC_SHIVER_TOAD_02_Z 135
#define GEN_NPC_SHIVER_TOAD_02_DIR 270
#define GEN_NPC_SHIVER_TOAD_02_VEC 330,0,135
#define GEN_NPC_SHIVER_TOAD_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Goombario
// anim: ANIM_WorldGoombario_Idle
#define GEN_NPC_GOOMBARIO_X 180
#define GEN_NPC_GOOMBARIO_Y 0
#define GEN_NPC_GOOMBARIO_Z 80
#define GEN_NPC_GOOMBARIO_DIR 270
#define GEN_NPC_GOOMBARIO_VEC 180,0,80
#define GEN_NPC_GOOMBARIO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Kooper
// anim: ANIM_WorldKooper_Idle
#define GEN_NPC_KOOPER_X 225
#define GEN_NPC_KOOPER_Y 0
#define GEN_NPC_KOOPER_Z 225
#define GEN_NPC_KOOPER_DIR 270
#define GEN_NPC_KOOPER_VEC 225,0,225
#define GEN_NPC_KOOPER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bombette
// anim: ANIM_WorldBombette_Idle
#define GEN_NPC_BOMBETTE_X 270
#define GEN_NPC_BOMBETTE_Y 0
#define GEN_NPC_BOMBETTE_Z 115
#define GEN_NPC_BOMBETTE_DIR 270
#define GEN_NPC_BOMBETTE_VEC 270,0,115
#define GEN_NPC_BOMBETTE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Parakarry
// anim: ANIM_WorldParakarry_Idle
#define GEN_NPC_PARAKARRY_X 325
#define GEN_NPC_PARAKARRY_Y 10
#define GEN_NPC_PARAKARRY_Z 175
#define GEN_NPC_PARAKARRY_DIR 270
#define GEN_NPC_PARAKARRY_VEC 325,10,175
#define GEN_NPC_PARAKARRY_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bow
// anim: ANIM_WorldBow_Idle
#define GEN_NPC_BOW_X -270
#define GEN_NPC_BOW_Y 0
#define GEN_NPC_BOW_Z 145
#define GEN_NPC_BOW_DIR 90
#define GEN_NPC_BOW_VEC -270,0,145
#define GEN_NPC_BOW_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Watt
// anim: ANIM_WorldWatt_Idle
#define GEN_NPC_WATT_X -235
#define GEN_NPC_WATT_Y 0
#define GEN_NPC_WATT_Z 85
#define GEN_NPC_WATT_DIR 90
#define GEN_NPC_WATT_VEC -235,0,85
#define GEN_NPC_WATT_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Sushie
// anim: ANIM_WorldSushie_Idle
#define GEN_NPC_SUSHIE_X -190
#define GEN_NPC_SUSHIE_Y 0
#define GEN_NPC_SUSHIE_Z 50
#define GEN_NPC_SUSHIE_DIR 90
#define GEN_NPC_SUSHIE_VEC -190,0,50
#define GEN_NPC_SUSHIE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Lakilester
// anim: ANIM_WorldLakilester_Idle
#define GEN_NPC_LAKILESTER_X -320
#define GEN_NPC_LAKILESTER_Y 0
#define GEN_NPC_LAKILESTER_Z -60
#define GEN_NPC_LAKILESTER_DIR 90
#define GEN_NPC_LAKILESTER_VEC -320,0,-60
#define GEN_NPC_LAKILESTER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Merlon
// anim: ANIM_Merlon_Idle
#define GEN_NPC_MERLON_X -145
#define GEN_NPC_MERLON_Y 0
#define GEN_NPC_MERLON_Z 415
#define GEN_NPC_MERLON_DIR 90
#define GEN_NPC_MERLON_VEC -145,0,415
#define GEN_NPC_MERLON_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Merluvlee
// anim: ANIM_Merluvlee_Idle
#define GEN_NPC_MERLUVLEE_X -225
#define GEN_NPC_MERLUVLEE_Y 0
#define GEN_NPC_MERLUVLEE_Z 380
#define GEN_NPC_MERLUVLEE_DIR 90
#define GEN_NPC_MERLUVLEE_VEC -225,0,380
#define GEN_NPC_MERLUVLEE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Merlow
// anim: ANIM_Merlow_Idle
#define GEN_NPC_MERLOW_X -175
#define GEN_NPC_MERLOW_Y 0
#define GEN_NPC_MERLOW_Z 330
#define GEN_NPC_MERLOW_DIR 90
#define GEN_NPC_MERLOW_VEC -175,0,330
#define GEN_NPC_MERLOW_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Merlee
// anim: ANIM_WorldMerlee_Idle
#define GEN_NPC_MERLEE_X -250
#define GEN_NPC_MERLEE_Y 0
#define GEN_NPC_MERLEE_Z 350
#define GEN_NPC_MERLEE_DIR 90
#define GEN_NPC_MERLEE_VEC -250,0,350
#define GEN_NPC_MERLEE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Merle
// anim: ANIM_Merle_Idle
#define GEN_NPC_MERLE_X -220
#define GEN_NPC_MERLE_Y 0
#define GEN_NPC_MERLE_Z 450
#define GEN_NPC_MERLE_DIR 90
#define GEN_NPC_MERLE_VEC -220,0,450
#define GEN_NPC_MERLE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Lakilulu
// anim: ANIM_Lakilulu_Idle
#define GEN_NPC_LAKILULU_X -365
#define GEN_NPC_LAKILULU_Y 0
#define GEN_NPC_LAKILULU_Z -60
#define GEN_NPC_LAKILULU_DIR 90
#define GEN_NPC_LAKILULU_VEC -365,0,-60
#define GEN_NPC_LAKILULU_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bootler
// anim: ANIM_Bootler_Idle
#define GEN_NPC_BOOTLER_X -340
#define GEN_NPC_BOOTLER_Y 0
#define GEN_NPC_BOOTLER_Z 100
#define GEN_NPC_BOOTLER_DIR 90
#define GEN_NPC_BOOTLER_VEC -340,0,100
#define GEN_NPC_BOOTLER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Goompa
// anim: ANIM_Goompa_Idle
#define GEN_NPC_GOOMPA_X 170
#define GEN_NPC_GOOMPA_Y 0
#define GEN_NPC_GOOMPA_Z 0
#define GEN_NPC_GOOMPA_DIR 270
#define GEN_NPC_GOOMPA_VEC 170,0,0
#define GEN_NPC_GOOMPA_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Goombaria
// anim: ANIM_Goombaria_Idle
#define GEN_NPC_GOOMBARIA_X 140
#define GEN_NPC_GOOMBARIA_Y 0
#define GEN_NPC_GOOMBARIA_Z 50
#define GEN_NPC_GOOMBARIA_DIR 270
#define GEN_NPC_GOOMBARIA_VEC 140,0,50
#define GEN_NPC_GOOMBARIA_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Yoshi
// anim: ANIM_Yoshi_Blue_Idle
#define GEN_NPC_YOSHI_X -340
#define GEN_NPC_YOSHI_Y 0
#define GEN_NPC_YOSHI_Z 310
#define GEN_NPC_YOSHI_DIR 90
#define GEN_NPC_YOSHI_VEC -340,0,310
#define GEN_NPC_YOSHI_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Penguin_02
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_02_X 225
#define GEN_NPC_PENGUIN_02_Y 0
#define GEN_NPC_PENGUIN_02_Z -80
#define GEN_NPC_PENGUIN_02_DIR 270
#define GEN_NPC_PENGUIN_02_VEC 225,0,-80
#define GEN_NPC_PENGUIN_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Penguin_03
// anim: ANIM_Penguin_Idle
#define GEN_NPC_PENGUIN_03_X -250
#define GEN_NPC_PENGUIN_03_Y 0
#define GEN_NPC_PENGUIN_03_Z -150
#define GEN_NPC_PENGUIN_03_DIR 90
#define GEN_NPC_PENGUIN_03_VEC -250,0,-150
#define GEN_NPC_PENGUIN_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Dryite
// anim: ANIM_Dryite_Yellow_Idle
#define GEN_NPC_DRYITE_X -320
#define GEN_NPC_DRYITE_Y 0
#define GEN_NPC_DRYITE_Z 245
#define GEN_NPC_DRYITE_DIR 90
#define GEN_NPC_DRYITE_VEC -320,0,245
#define GEN_NPC_DRYITE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Ninji
// anim: ANIM_Ninji_Idle
#define GEN_NPC_NINJI_X -395
#define GEN_NPC_NINJI_Y 68
#define GEN_NPC_NINJI_Z 50
#define GEN_NPC_NINJI_DIR 90
#define GEN_NPC_NINJI_VEC -395,68,50
#define GEN_NPC_NINJI_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_04
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_04_X 200
#define GEN_NPC_TOAD_04_Y 0
#define GEN_NPC_TOAD_04_Z 420
#define GEN_NPC_TOAD_04_DIR 270
#define GEN_NPC_TOAD_04_VEC 200,0,420
#define GEN_NPC_TOAD_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_05
// anim: ANIM_Toad_Yellow_Idle
#define GEN_NPC_TOAD_05_X -120
#define GEN_NPC_TOAD_05_Y 0
#define GEN_NPC_TOAD_05_Z 205
#define GEN_NPC_TOAD_05_DIR 90
#define GEN_NPC_TOAD_05_VEC -120,0,205
#define GEN_NPC_TOAD_05_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_06
// anim: ANIM_Toad_Green_Idle
#define GEN_NPC_TOAD_06_X -440
#define GEN_NPC_TOAD_06_Y 0
#define GEN_NPC_TOAD_06_Z 220
#define GEN_NPC_TOAD_06_DIR 90
#define GEN_NPC_TOAD_06_VEC -440,0,220
#define GEN_NPC_TOAD_06_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_07
// anim: ANIM_Toad_Blue_Idle
#define GEN_NPC_TOAD_07_X 285
#define GEN_NPC_TOAD_07_Y 0
#define GEN_NPC_TOAD_07_Z 290
#define GEN_NPC_TOAD_07_DIR 270
#define GEN_NPC_TOAD_07_VEC 285,0,290
#define GEN_NPC_TOAD_07_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_03
// anim: ANIM_Toadette_Pink_Idle
#define GEN_NPC_TOADETTE_03_X -300
#define GEN_NPC_TOADETTE_03_Y 0
#define GEN_NPC_TOADETTE_03_Z 100
#define GEN_NPC_TOADETTE_03_DIR 90
#define GEN_NPC_TOADETTE_03_VEC -300,0,100
#define GEN_NPC_TOADETTE_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_04
// anim: ANIM_Toadette_Green_Idle
#define GEN_NPC_TOADETTE_04_X -270
#define GEN_NPC_TOADETTE_04_Y 0
#define GEN_NPC_TOADETTE_04_Z 85
#define GEN_NPC_TOADETTE_04_DIR 270
#define GEN_NPC_TOADETTE_04_VEC -270,0,85
#define GEN_NPC_TOADETTE_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_05
// anim: ANIM_Toadette_Orange_Idle
#define GEN_NPC_TOADETTE_05_X -190
#define GEN_NPC_TOADETTE_05_Y 0
#define GEN_NPC_TOADETTE_05_Z 160
#define GEN_NPC_TOADETTE_05_DIR 90
#define GEN_NPC_TOADETTE_05_VEC -190,0,160
#define GEN_NPC_TOADETTE_05_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toadette_06
// anim: ANIM_Toadette_Purple_Idle
#define GEN_NPC_TOADETTE_06_X 190
#define GEN_NPC_TOADETTE_06_Y 0
#define GEN_NPC_TOADETTE_06_Z 300
#define GEN_NPC_TOADETTE_06_DIR 270
#define GEN_NPC_TOADETTE_06_VEC 190,0,300
#define GEN_NPC_TOADETTE_06_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_03
// anim: ANIM_ToadGuard_Red_Idle
#define GEN_NPC_TOAD_GUARD_03_X 100
#define GEN_NPC_TOAD_GUARD_03_Y 0
#define GEN_NPC_TOAD_GUARD_03_Z 150
#define GEN_NPC_TOAD_GUARD_03_DIR 270
#define GEN_NPC_TOAD_GUARD_03_VEC 100,0,150
#define GEN_NPC_TOAD_GUARD_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_04
// anim: ANIM_ToadGuard_Blue_Idle
#define GEN_NPC_TOAD_GUARD_04_X -50
#define GEN_NPC_TOAD_GUARD_04_Y 100
#define GEN_NPC_TOAD_GUARD_04_Z -365
#define GEN_NPC_TOAD_GUARD_04_DIR 270
#define GEN_NPC_TOAD_GUARD_04_VEC -50,100,-365
#define GEN_NPC_TOAD_GUARD_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_05
// anim: ANIM_ToadGuard_Red_Idle
#define GEN_NPC_TOAD_GUARD_05_X 225
#define GEN_NPC_TOAD_GUARD_05_Y 0
#define GEN_NPC_TOAD_GUARD_05_Z 125
#define GEN_NPC_TOAD_GUARD_05_DIR 270
#define GEN_NPC_TOAD_GUARD_05_VEC 225,0,125
#define GEN_NPC_TOAD_GUARD_05_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_06
// anim: ANIM_ToadGuard_Green_Idle
#define GEN_NPC_TOAD_GUARD_06_X -392
#define GEN_NPC_TOAD_GUARD_06_Y 40
#define GEN_NPC_TOAD_GUARD_06_Z -230
#define GEN_NPC_TOAD_GUARD_06_DIR 90
#define GEN_NPC_TOAD_GUARD_06_VEC -392,40,-230
#define GEN_NPC_TOAD_GUARD_06_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard_07
// anim: ANIM_ToadGuard_Yellow_Idle
#define GEN_NPC_TOAD_GUARD_07_X -392
#define GEN_NPC_TOAD_GUARD_07_Y 40
#define GEN_NPC_TOAD_GUARD_07_Z -230
#define GEN_NPC_TOAD_GUARD_07_DIR 90
#define GEN_NPC_TOAD_GUARD_07_VEC -392,40,-230
#define GEN_NPC_TOAD_GUARD_07_TERRITORY \
{}

