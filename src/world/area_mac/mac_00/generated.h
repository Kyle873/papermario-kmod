/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN

// type: EntryList
#define GEN_ENTRY_LIST \
    { -387.0,    0.0, -460.0,  125.0 }, \
    {  600.0,    0.0,    0.0,  270.0 }, \
    { -435.0,  147.0, -441.0,  125.0 }, \
    {    0.0,   50.0,  300.0,  180.0 }, \
    { -100.0,   30.0, -370.0,  180.0 }, \
    { -100.0,   30.0, -370.0,  135.0 }, \
    { -100.0,   30.0, -370.0,  135.0 }, \
    { -100.0,   30.0, -370.0,  135.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0,     0,     0,   120) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -387
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z -460
#define GEN_ENTRY_0_DIR 125
#define GEN_ENTRY_0_VEC -387,0,-460

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 600
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 600,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X -435
#define GEN_ENTRY_2_Y 147
#define GEN_ENTRY_2_Z -441
#define GEN_ENTRY_2_DIR 125
#define GEN_ENTRY_2_VEC -435,147,-441

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 50
#define GEN_ENTRY_3_Z 300
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC 0,50,300

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -100
#define GEN_ENTRY_4_Y 30
#define GEN_ENTRY_4_Z -370
#define GEN_ENTRY_4_DIR 180
#define GEN_ENTRY_4_VEC -100,30,-370

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X -100
#define GEN_ENTRY_5_Y 30
#define GEN_ENTRY_5_Z -370
#define GEN_ENTRY_5_DIR 135
#define GEN_ENTRY_5_VEC -100,30,-370

// type: Marker:Entry
// name: Entry_6
#define GEN_ENTRY_6_X -100
#define GEN_ENTRY_6_Y 30
#define GEN_ENTRY_6_Z -370
#define GEN_ENTRY_6_DIR 135
#define GEN_ENTRY_6_VEC -100,30,-370

// type: Marker:Entry
// name: Entry_7
#define GEN_ENTRY_7_X -100
#define GEN_ENTRY_7_Y 30
#define GEN_ENTRY_7_Z -370
#define GEN_ENTRY_7_DIR 135
#define GEN_ENTRY_7_VEC -100,30,-370

// type: Marker:NPC
// name: NPC_Toad_04
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_04_X -150
#define GEN_NPC_TOAD_04_Y 0
#define GEN_NPC_TOAD_04_Z -275
#define GEN_NPC_TOAD_04_DIR 90
#define GEN_NPC_TOAD_04_VEC -150,0,-275
#define GEN_NPC_TOAD_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_05
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_05_X 219
#define GEN_NPC_TOAD_05_Y 0
#define GEN_NPC_TOAD_05_Z -45
#define GEN_NPC_TOAD_05_DIR 90
#define GEN_NPC_TOAD_05_VEC 219,0,-45
#define GEN_NPC_TOAD_05_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 5, \
        .points = { \
            { 219, 0, -45 }, \
            { 144, 0, -10 }, \
            { 163, 0, -50 }, \
            { 240, 0, 50 }, \
            { 275, 0, 10 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toad_06
// anim: ANIM_Toad_Yellow_Idle
#define GEN_NPC_TOAD_06_X -290
#define GEN_NPC_TOAD_06_Y 0
#define GEN_NPC_TOAD_06_Z -120
#define GEN_NPC_TOAD_06_DIR 90
#define GEN_NPC_TOAD_06_VEC -290,0,-120
#define GEN_NPC_TOAD_06_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { -290, 0, -120 }, \
            { 37, 0, -150 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_FickleLover
// anim: ANIM_Toad_Blue_Idle
#define GEN_NPC_FICKLE_LOVER_X -40
#define GEN_NPC_FICKLE_LOVER_Y 0
#define GEN_NPC_FICKLE_LOVER_Z 61
#define GEN_NPC_FICKLE_LOVER_DIR 90
#define GEN_NPC_FICKLE_LOVER_VEC -40,0,61
#define GEN_NPC_FICKLE_LOVER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShamelessLover
// anim: ANIM_Toadette_Pink_Idle
#define GEN_NPC_SHAMELESS_LOVER_X -15
#define GEN_NPC_SHAMELESS_LOVER_Y 0
#define GEN_NPC_SHAMELESS_LOVER_Z 60
#define GEN_NPC_SHAMELESS_LOVER_DIR 270
#define GEN_NPC_SHAMELESS_LOVER_VEC -15,0,60
#define GEN_NPC_SHAMELESS_LOVER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_KrisT
// anim: ANIM_Toadette_Green_Idle
#define GEN_NPC_KRIS_T_X 426
#define GEN_NPC_KRIS_T_Y 20
#define GEN_NPC_KRIS_T_Z 268
#define GEN_NPC_KRIS_T_DIR 90
#define GEN_NPC_KRIS_T_VEC 426,20,268
#define GEN_NPC_KRIS_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_MissT
// anim: ANIM_Toadette_Orange_Idle
#define GEN_NPC_MISS_T_X 381
#define GEN_NPC_MISS_T_Y 20
#define GEN_NPC_MISS_T_Z 326
#define GEN_NPC_MISS_T_DIR 180
#define GEN_NPC_MISS_T_VEC 381,20,326
#define GEN_NPC_MISS_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_FelissaT
// anim: ANIM_Toadette_Purple_Idle
#define GEN_NPC_FELISSA_T_X 476
#define GEN_NPC_FELISSA_T_Y 20
#define GEN_NPC_FELISSA_T_Z 326
#define GEN_NPC_FELISSA_T_DIR 270
#define GEN_NPC_FELISSA_T_VEC 476,20,326
#define GEN_NPC_FELISSA_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_DojoSpectator
// anim: ANIM_Toad_Blue_Idle
#define GEN_NPC_DOJO_SPECTATOR_X 424
#define GEN_NPC_DOJO_SPECTATOR_Y 20
#define GEN_NPC_DOJO_SPECTATOR_Z -85
#define GEN_NPC_DOJO_SPECTATOR_DIR 270
#define GEN_NPC_DOJO_SPECTATOR_VEC 424,20,-85
#define GEN_NPC_DOJO_SPECTATOR_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_DojoFan
// anim: ANIM_Toad_Yellow_Idle
#define GEN_NPC_DOJO_FAN_X 373
#define GEN_NPC_DOJO_FAN_Y 0
#define GEN_NPC_DOJO_FAN_Z 22
#define GEN_NPC_DOJO_FAN_DIR 270
#define GEN_NPC_DOJO_FAN_VEC 373,0,22
#define GEN_NPC_DOJO_FAN_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Luigi_Epilogue
// anim: ANIM_Luigi_Still
#define GEN_NPC_LUIGI_EPILOGUE_X 0
#define GEN_NPC_LUIGI_EPILOGUE_Y -1000
#define GEN_NPC_LUIGI_EPILOGUE_Z 0
#define GEN_NPC_LUIGI_EPILOGUE_DIR 90
#define GEN_NPC_LUIGI_EPILOGUE_VEC 0,-1000,0
#define GEN_NPC_LUIGI_EPILOGUE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Goompapa_Epilogue
// anim: ANIM_Goompapa_Idle
#define GEN_NPC_GOOMPAPA_EPILOGUE_X 70
#define GEN_NPC_GOOMPAPA_EPILOGUE_Y 0
#define GEN_NPC_GOOMPAPA_EPILOGUE_Z -30
#define GEN_NPC_GOOMPAPA_EPILOGUE_DIR 90
#define GEN_NPC_GOOMPAPA_EPILOGUE_VEC 70,0,-30
#define GEN_NPC_GOOMPAPA_EPILOGUE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Goomama_Epilogue
// anim: ANIM_Goomama_Idle
#define GEN_NPC_GOOMAMA_EPILOGUE_X 40
#define GEN_NPC_GOOMAMA_EPILOGUE_Y 0
#define GEN_NPC_GOOMAMA_EPILOGUE_Z 20
#define GEN_NPC_GOOMAMA_EPILOGUE_DIR 90
#define GEN_NPC_GOOMAMA_EPILOGUE_VEC 40,0,20
#define GEN_NPC_GOOMAMA_EPILOGUE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Gooma_Epilogue
// anim: ANIM_Gooma_Idle
#define GEN_NPC_GOOMA_EPILOGUE_X 20
#define GEN_NPC_GOOMA_EPILOGUE_Y 0
#define GEN_NPC_GOOMA_EPILOGUE_Z -35
#define GEN_NPC_GOOMA_EPILOGUE_DIR 90
#define GEN_NPC_GOOMA_EPILOGUE_VEC 20,0,-35
#define GEN_NPC_GOOMA_EPILOGUE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ChuckQuizmo
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_X 545
#define GEN_NPC_CHUCK_QUIZMO_Y 20
#define GEN_NPC_CHUCK_QUIZMO_Z 150
#define GEN_NPC_CHUCK_QUIZMO_DIR 30
#define GEN_NPC_CHUCK_QUIZMO_VEC 545,20,150
#define GEN_NPC_CHUCK_QUIZMO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_VannaT_Epilogue
// anim: ANIM_VannaT_Still
#define GEN_NPC_VANNA_T_EPILOGUE_X 500
#define GEN_NPC_VANNA_T_EPILOGUE_Y 20
#define GEN_NPC_VANNA_T_EPILOGUE_Z -130
#define GEN_NPC_VANNA_T_EPILOGUE_DIR 270
#define GEN_NPC_VANNA_T_EPILOGUE_VEC 500,20,-130
#define GEN_NPC_VANNA_T_EPILOGUE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_TheMaster
// anim: ANIM_TheMaster_Idle
#define GEN_NPC_THE_MASTER_X 375
#define GEN_NPC_THE_MASTER_Y 115
#define GEN_NPC_THE_MASTER_Z -440
#define GEN_NPC_THE_MASTER_DIR 225
#define GEN_NPC_THE_MASTER_VEC 375,115,-440
#define GEN_NPC_THE_MASTER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Chan
// anim: ANIM_Chan_Idle
#define GEN_NPC_CHAN_X 310
#define GEN_NPC_CHAN_Y 115
#define GEN_NPC_CHAN_Z -390
#define GEN_NPC_CHAN_DIR 45
#define GEN_NPC_CHAN_VEC 310,115,-390
#define GEN_NPC_CHAN_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Lee
// anim: ANIM_Lee_Idle
#define GEN_NPC_LEE_X 330
#define GEN_NPC_LEE_Y 115
#define GEN_NPC_LEE_Z -410
#define GEN_NPC_LEE_DIR 45
#define GEN_NPC_LEE_VEC 330,115,-410
#define GEN_NPC_LEE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_01
// anim: ANIM_HarryT_Idle
#define GEN_NPC_TOAD_01_X 430
#define GEN_NPC_TOAD_01_Y 20
#define GEN_NPC_TOAD_01_Z -373
#define GEN_NPC_TOAD_01_DIR 223
#define GEN_NPC_TOAD_01_VEC 430,20,-373
#define GEN_NPC_TOAD_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_HarryT
// anim: ANIM_HarryT_Idle
#define GEN_NPC_HARRY_T_X 410
#define GEN_NPC_HARRY_T_Y 20
#define GEN_NPC_HARRY_T_Z -320
#define GEN_NPC_HARRY_T_DIR 43
#define GEN_NPC_HARRY_T_VEC 410,20,-320
#define GEN_NPC_HARRY_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Luigi_Intro
// anim: ANIM_Luigi_Still
#define GEN_NPC_LUIGI_INTRO_X 0
#define GEN_NPC_LUIGI_INTRO_Y -1000
#define GEN_NPC_LUIGI_INTRO_Z 0
#define GEN_NPC_LUIGI_INTRO_DIR 90
#define GEN_NPC_LUIGI_INTRO_VEC 0,-1000,0
#define GEN_NPC_LUIGI_INTRO_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_01_1
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_01_1_X -150
#define GEN_NPC_TOAD_01_1_Y 0
#define GEN_NPC_TOAD_01_1_Z -275
#define GEN_NPC_TOAD_01_1_DIR 90
#define GEN_NPC_TOAD_01_1_VEC -150,0,-275
#define GEN_NPC_TOAD_01_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_02
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_02_X 219
#define GEN_NPC_TOAD_02_Y 0
#define GEN_NPC_TOAD_02_Z -45
#define GEN_NPC_TOAD_02_DIR 90
#define GEN_NPC_TOAD_02_VEC 219,0,-45
#define GEN_NPC_TOAD_02_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 5, \
        .points = { \
            { 219, 0, -45 }, \
            { 144, 0, -10 }, \
            { 163, 0, -50 }, \
            { 240, 0, 50 }, \
            { 275, 0, 10 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toad_03
// anim: ANIM_Toad_Blue_Idle
#define GEN_NPC_TOAD_03_X 424
#define GEN_NPC_TOAD_03_Y 20
#define GEN_NPC_TOAD_03_Z -85
#define GEN_NPC_TOAD_03_DIR 270
#define GEN_NPC_TOAD_03_VEC 424,20,-85
#define GEN_NPC_TOAD_03_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Chan_1
// anim: ANIM_Chan_Idle
#define GEN_NPC_CHAN_1_X 310
#define GEN_NPC_CHAN_1_Y 115
#define GEN_NPC_CHAN_1_Z -390
#define GEN_NPC_CHAN_1_DIR 45
#define GEN_NPC_CHAN_1_VEC 310,115,-390
#define GEN_NPC_CHAN_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Lee_1
// anim: ANIM_Lee_Idle
#define GEN_NPC_LEE_1_X 330
#define GEN_NPC_LEE_1_Y 115
#define GEN_NPC_LEE_1_Z -410
#define GEN_NPC_LEE_1_DIR 45
#define GEN_NPC_LEE_1_VEC 330,115,-410
#define GEN_NPC_LEE_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShyGuyThief
// anim: ANIM_ShyGuy_Red_Anim01
#define GEN_NPC_SHY_GUY_THIEF_X 0
#define GEN_NPC_SHY_GUY_THIEF_Y -1000
#define GEN_NPC_SHY_GUY_THIEF_Z 0
#define GEN_NPC_SHY_GUY_THIEF_DIR 270
#define GEN_NPC_SHY_GUY_THIEF_VEC 0,-1000,0
#define GEN_NPC_SHY_GUY_THIEF_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShyGuy_02
// anim: ANIM_ShyGuy_Red_Anim01
#define GEN_NPC_SHY_GUY_02_X 0
#define GEN_NPC_SHY_GUY_02_Y -1000
#define GEN_NPC_SHY_GUY_02_Z 0
#define GEN_NPC_SHY_GUY_02_DIR 270
#define GEN_NPC_SHY_GUY_02_VEC 0,-1000,0
#define GEN_NPC_SHY_GUY_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_GardenShyGuy1
// anim: ANIM_ShyGuy_Red_Anim01
#define GEN_NPC_GARDEN_SHY_GUY1_X 0
#define GEN_NPC_GARDEN_SHY_GUY1_Y -1000
#define GEN_NPC_GARDEN_SHY_GUY1_Z 0
#define GEN_NPC_GARDEN_SHY_GUY1_DIR 270
#define GEN_NPC_GARDEN_SHY_GUY1_VEC 0,-1000,0
#define GEN_NPC_GARDEN_SHY_GUY1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_RussT
// anim: ANIM_RussT_Idle
#define GEN_NPC_RUSS_T_X -66
#define GEN_NPC_RUSS_T_Y 20
#define GEN_NPC_RUSS_T_Z -532
#define GEN_NPC_RUSS_T_DIR 119
#define GEN_NPC_RUSS_T_VEC -66,20,-532
#define GEN_NPC_RUSS_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_01_2
// anim: ANIM_HarryT_Idle
#define GEN_NPC_TOAD_01_2_X 430
#define GEN_NPC_TOAD_01_2_Y 20
#define GEN_NPC_TOAD_01_2_Z -373
#define GEN_NPC_TOAD_01_2_DIR 223
#define GEN_NPC_TOAD_01_2_VEC 430,20,-373
#define GEN_NPC_TOAD_01_2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_02_1
// anim: ANIM_HarryT_Idle
#define GEN_NPC_TOAD_02_1_X 0
#define GEN_NPC_TOAD_02_1_Y -1000
#define GEN_NPC_TOAD_02_1_Z 0
#define GEN_NPC_TOAD_02_1_DIR 223
#define GEN_NPC_TOAD_02_1_VEC 0,-1000,0
#define GEN_NPC_TOAD_02_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_TheMaster_1
// anim: ANIM_TheMaster_Idle
#define GEN_NPC_THE_MASTER_1_X 375
#define GEN_NPC_THE_MASTER_1_Y 115
#define GEN_NPC_THE_MASTER_1_Z -440
#define GEN_NPC_THE_MASTER_1_DIR 225
#define GEN_NPC_THE_MASTER_1_VEC 375,115,-440
#define GEN_NPC_THE_MASTER_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Chan_2
// anim: ANIM_Chan_Idle
#define GEN_NPC_CHAN_2_X 310
#define GEN_NPC_CHAN_2_Y 115
#define GEN_NPC_CHAN_2_Z -390
#define GEN_NPC_CHAN_2_DIR 45
#define GEN_NPC_CHAN_2_VEC 310,115,-390
#define GEN_NPC_CHAN_2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Lee_2
// anim: ANIM_Lee_Idle
#define GEN_NPC_LEE_2_X 330
#define GEN_NPC_LEE_2_Y 115
#define GEN_NPC_LEE_2_Z -410
#define GEN_NPC_LEE_2_DIR 45
#define GEN_NPC_LEE_2_VEC 330,115,-410
#define GEN_NPC_LEE_2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ChuckQuizmo_1
// anim: ANIM_ChuckQuizmo_Idle
#define GEN_NPC_CHUCK_QUIZMO_1_X 545
#define GEN_NPC_CHUCK_QUIZMO_1_Y 20
#define GEN_NPC_CHUCK_QUIZMO_1_Z 150
#define GEN_NPC_CHUCK_QUIZMO_1_DIR 30
#define GEN_NPC_CHUCK_QUIZMO_1_VEC 545,20,150
#define GEN_NPC_CHUCK_QUIZMO_1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Waterfront_Dad
// anim: ANIM_Toad_Green_Idle
#define GEN_NPC_WATERFRONT_DAD_X -496
#define GEN_NPC_WATERFRONT_DAD_Y 20
#define GEN_NPC_WATERFRONT_DAD_Z 218
#define GEN_NPC_WATERFRONT_DAD_DIR 133
#define GEN_NPC_WATERFRONT_DAD_VEC -496,20,218
#define GEN_NPC_WATERFRONT_DAD_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Waterfront_Mom
// anim: ANIM_Toadette_Orange_Idle
#define GEN_NPC_WATERFRONT_MOM_X -566
#define GEN_NPC_WATERFRONT_MOM_Y 20
#define GEN_NPC_WATERFRONT_MOM_Z 267
#define GEN_NPC_WATERFRONT_MOM_DIR 133
#define GEN_NPC_WATERFRONT_MOM_VEC -566,20,267
#define GEN_NPC_WATERFRONT_MOM_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Waterfront_Kid1
// anim: ANIM_ToadKid_Green_Idle
#define GEN_NPC_WATERFRONT_KID1_X -508
#define GEN_NPC_WATERFRONT_KID1_Y 20
#define GEN_NPC_WATERFRONT_KID1_Z 324
#define GEN_NPC_WATERFRONT_KID1_DIR 313
#define GEN_NPC_WATERFRONT_KID1_VEC -508,20,324
#define GEN_NPC_WATERFRONT_KID1_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Waterfront_Kid2
// anim: ANIM_ToadKid_Green_Idle
#define GEN_NPC_WATERFRONT_KID2_X -480
#define GEN_NPC_WATERFRONT_KID2_Y 20
#define GEN_NPC_WATERFRONT_KID2_Z 329
#define GEN_NPC_WATERFRONT_KID2_DIR 313
#define GEN_NPC_WATERFRONT_KID2_VEC -480,20,329
#define GEN_NPC_WATERFRONT_KID2_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_11
// anim: ANIM_Toad_Pink_Idle
#define GEN_NPC_TOAD_11_X -112
#define GEN_NPC_TOAD_11_Y 0
#define GEN_NPC_TOAD_11_Z -62
#define GEN_NPC_TOAD_11_DIR 90
#define GEN_NPC_TOAD_11_VEC -112,0,-62
#define GEN_NPC_TOAD_11_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -420
#define GEN_ITEM_1_Y 20
#define GEN_ITEM_1_Z 410
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -420,20,410
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_MAC00_Item_StarPiece

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 545
#define GEN_HIDDEN_PANEL_1_Y 20
#define GEN_HIDDEN_PANEL_1_Z 205
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC 545,20,205
#define GEN_HIDDEN_PANEL_1_XYZA 545, 20, 205, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o262
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_MAC00_HiddenPanel

