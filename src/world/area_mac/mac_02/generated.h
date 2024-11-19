/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN

// type: EntryList
#define GEN_ENTRY_LIST \
    { -600.0,    0.0,    0.0,   90.0 }, \
    {  600.0,    0.0,    0.0,  270.0 }, \
    {    0.0,    0.0, -600.0,  180.0 }, \
    {    0.0,    0.0,  600.0,    0.0 }, \
    { -450.0,   30.0,  245.0,   90.0 }, \
    { -460.0,   50.0, -270.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   100,    40,   200,   -40) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -600
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -600,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 600
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 600,0,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 0
#define GEN_ENTRY_2_Y 0
#define GEN_ENTRY_2_Z -600
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 0,0,-600

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 0
#define GEN_ENTRY_3_Y 0
#define GEN_ENTRY_3_Z 600
#define GEN_ENTRY_3_DIR 0
#define GEN_ENTRY_3_VEC 0,0,600

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -450
#define GEN_ENTRY_4_Y 30
#define GEN_ENTRY_4_Z 245
#define GEN_ENTRY_4_DIR 90
#define GEN_ENTRY_4_VEC -450,30,245

// type: Marker:Entry
// name: Entry_5
#define GEN_ENTRY_5_X -460
#define GEN_ENTRY_5_Y 50
#define GEN_ENTRY_5_Z -270
#define GEN_ENTRY_5_DIR 180
#define GEN_ENTRY_5_VEC -460,50,-270

// type: Marker:NPC
// name: NPC_TayceT
// anim: ANIM_TayceT_Idle
#define GEN_NPC_TAYCE_T_X -217
#define GEN_NPC_TAYCE_T_Y 20
#define GEN_NPC_TAYCE_T_Z -434
#define GEN_NPC_TAYCE_T_DIR 90
#define GEN_NPC_TAYCE_T_VEC -217,20,-434
#define GEN_NPC_TAYCE_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_FiceT
// anim: ANIM_FiceT_Idle
#define GEN_NPC_FICE_T_X 389
#define GEN_NPC_FICE_T_Y 0
#define GEN_NPC_FICE_T_Z -90
#define GEN_NPC_FICE_T_DIR 90
#define GEN_NPC_FICE_T_VEC 389,0,-90
#define GEN_NPC_FICE_T_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bubulb
// anim: ANIM_Bubulb_Pink_Idle
#define GEN_NPC_BUBULB_X 150
#define GEN_NPC_BUBULB_Y 20
#define GEN_NPC_BUBULB_Z 500
#define GEN_NPC_BUBULB_DIR 90
#define GEN_NPC_BUBULB_VEC 150,20,500
#define GEN_NPC_BUBULB_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_01
// anim: ANIM_Toad_Blue_Idle
#define GEN_NPC_TOAD_01_X 40
#define GEN_NPC_TOAD_01_Y 0
#define GEN_NPC_TOAD_01_Z -60
#define GEN_NPC_TOAD_01_DIR 270
#define GEN_NPC_TOAD_01_VEC 40,0,-60
#define GEN_NPC_TOAD_01_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -50, 0, 0 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 10 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_CookingApprentice
// anim: ANIM_Toadette_Purple_Idle
#define GEN_NPC_COOKING_APPRENTICE_X -26
#define GEN_NPC_COOKING_APPRENTICE_Y 0
#define GEN_NPC_COOKING_APPRENTICE_Z -220
#define GEN_NPC_COOKING_APPRENTICE_DIR 270
#define GEN_NPC_COOKING_APPRENTICE_VEC -26,0,-220
#define GEN_NPC_COOKING_APPRENTICE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_02
// anim: ANIM_Toad_Green_Idle
#define GEN_NPC_TOAD_02_X -350
#define GEN_NPC_TOAD_02_Y 20
#define GEN_NPC_TOAD_02_Z -140
#define GEN_NPC_TOAD_02_DIR 90
#define GEN_NPC_TOAD_02_VEC -350,20,-140
#define GEN_NPC_TOAD_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadKid
// anim: ANIM_ToadKid_Yellow_Idle
#define GEN_NPC_TOAD_KID_X 180
#define GEN_NPC_TOAD_KID_Y 20
#define GEN_NPC_TOAD_KID_Z -435
#define GEN_NPC_TOAD_KID_DIR 270
#define GEN_NPC_TOAD_KID_VEC 180,20,-435
#define GEN_NPC_TOAD_KID_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 180, 20, -435 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 180, 20, -435 }, \
        .detectSize  = { 10 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toad_03
// anim: ANIM_Toad_Yellow_Idle
#define GEN_NPC_TOAD_03_X -160
#define GEN_NPC_TOAD_03_Y 0
#define GEN_NPC_TOAD_03_Z 25
#define GEN_NPC_TOAD_03_DIR 90
#define GEN_NPC_TOAD_03_VEC -160,0,25
#define GEN_NPC_TOAD_03_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -50, 0, 0 }, \
        .wanderSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 0, 0, 0 }, \
        .detectSize  = { 10 }, \
    }, \
}

// type: Marker:NPC
// name: NPC_Toad_04
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_04_X -80
#define GEN_NPC_TOAD_04_Y 0
#define GEN_NPC_TOAD_04_Z 300
#define GEN_NPC_TOAD_04_DIR 90
#define GEN_NPC_TOAD_04_VEC -80,0,300
#define GEN_NPC_TOAD_04_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bootler
// anim: ANIM_Bootler_Idle
#define GEN_NPC_BOOTLER_X 0
#define GEN_NPC_BOOTLER_Y -1000
#define GEN_NPC_BOOTLER_Z 0
#define GEN_NPC_BOOTLER_DIR 0
#define GEN_NPC_BOOTLER_VEC 0,-1000,0
#define GEN_NPC_BOOTLER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ShyGuy
// anim: ANIM_ShyGuy_Red_Anim01
#define GEN_NPC_SHY_GUY_X 0
#define GEN_NPC_SHY_GUY_Y -1000
#define GEN_NPC_SHY_GUY_Z 0
#define GEN_NPC_SHY_GUY_DIR 270
#define GEN_NPC_SHY_GUY_VEC 0,-1000,0
#define GEN_NPC_SHY_GUY_TERRITORY \
{}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X -412
#define GEN_ITEM_1_Y 20
#define GEN_ITEM_1_Z -320
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC -412,20,-320
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_ODD_KEY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_MAC02_Item_OddKey

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X -470
#define GEN_PADLOCK_1_Y 30
#define GEN_PADLOCK_1_Z -155
#define GEN_PADLOCK_1_DIR 180
#define GEN_PADLOCK_1_VEC -470,30,-155
#define GEN_PADLOCK_1_XYZA -470, 30, -155, 180
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

// type: Marker:Entity:Signpost
// name: Signpost_1
#define GEN_SIGNPOST_1_X -375
#define GEN_SIGNPOST_1_Y 0
#define GEN_SIGNPOST_1_Z 190
#define GEN_SIGNPOST_1_DIR 0
#define GEN_SIGNPOST_1_VEC -375,0,190
#define GEN_SIGNPOST_1_XYZA -375, 0, 190, 0
#define GEN_SIGNPOST_1_PARAMS GEN_SIGNPOST_1_XYZA
#define GEN_SIGNPOST_1_SCRIPT N(EVS_ReadSign)

// type: Marker:Entity:HiddenPanel
// name: HiddenPanel_1
#define GEN_HIDDEN_PANEL_1_X 400
#define GEN_HIDDEN_PANEL_1_Y 0
#define GEN_HIDDEN_PANEL_1_Z 100
#define GEN_HIDDEN_PANEL_1_DIR 0
#define GEN_HIDDEN_PANEL_1_VEC 400,0,100
#define GEN_HIDDEN_PANEL_1_XYZA 400, 0, 100, 0
#define GEN_HIDDEN_PANEL_1_MODEL MODEL_o236
#define GEN_HIDDEN_PANEL_1_PARAMS GEN_HIDDEN_PANEL_1_XYZA, GEN_HIDDEN_PANEL_1_MODEL
#define GEN_HIDDEN_PANEL_1_FLAG GF_MAC02_HiddenPanel

// type: Marker:Sphere
// name: BombPos_1
#define GEN_BOMB_POS_1_X 98
#define GEN_BOMB_POS_1_Y 20
#define GEN_BOMB_POS_1_Z -531
#define GEN_BOMB_POS_1_DIR 0
#define GEN_BOMB_POS_1_VEC 98,20,-531
#define GEN_BOMB_POS_1_RAD 0

// type: Marker:Sphere
// name: BombPos_2
#define GEN_BOMB_POS_2_X -323
#define GEN_BOMB_POS_2_Y 20
#define GEN_BOMB_POS_2_Z -190
#define GEN_BOMB_POS_2_DIR 0
#define GEN_BOMB_POS_2_VEC -323,20,-190
#define GEN_BOMB_POS_2_RAD 0

// type: Marker:Sphere
// name: BombPos_3
#define GEN_BOMB_POS_3_X 598
#define GEN_BOMB_POS_3_Y 0
#define GEN_BOMB_POS_3_Z -67
#define GEN_BOMB_POS_3_DIR 0
#define GEN_BOMB_POS_3_VEC 598,0,-67
#define GEN_BOMB_POS_3_RAD 0

// type: Marker:Sphere
// name: BombPos_4
#define GEN_BOMB_POS_4_X -608
#define GEN_BOMB_POS_4_Y 20
#define GEN_BOMB_POS_4_Z -156
#define GEN_BOMB_POS_4_DIR 0
#define GEN_BOMB_POS_4_VEC -608,20,-156
#define GEN_BOMB_POS_4_RAD 0

// type: Marker:Sphere
// name: BombPos_5
#define GEN_BOMB_POS_5_X 351
#define GEN_BOMB_POS_5_Y 20
#define GEN_BOMB_POS_5_Z 555
#define GEN_BOMB_POS_5_DIR 0
#define GEN_BOMB_POS_5_VEC 351,20,555
#define GEN_BOMB_POS_5_RAD 0

