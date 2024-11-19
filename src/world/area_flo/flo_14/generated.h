/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_FLOWER_FIELDS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  720.0,    0.0,    0.0,  270.0 }, \
    { -720.0,    0.0,    0.0,   90.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   140,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(  -200,     0,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 720
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 720,0,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -720
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -720,0,0

// type: Marker:NPC
// name: NPC_BubbleFlower
// anim: ANIM_Bubulb_Pink_Idle
#define GEN_NPC_BUBBLE_FLOWER_X 617
#define GEN_NPC_BUBBLE_FLOWER_Y 0
#define GEN_NPC_BUBBLE_FLOWER_Z 108
#define GEN_NPC_BUBBLE_FLOWER_DIR 270
#define GEN_NPC_BUBBLE_FLOWER_VEC 617,0,108
#define GEN_NPC_BUBBLE_FLOWER_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Bzzap
// anim: ANIM_Bzzap_Anim02
#define GEN_NPC_BZZAP_X -175
#define GEN_NPC_BZZAP_Y 55
#define GEN_NPC_BZZAP_Z 15
#define GEN_NPC_BZZAP_DIR 90
#define GEN_NPC_BZZAP_VEC -175,55,15
#define GEN_NPC_BZZAP_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { -175, 55, 15 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { -175, 55, 15 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 675
#define GEN_ITEM_1_Y 60
#define GEN_ITEM_1_Z -100
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 675,60,-100
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_STAR_PIECE
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_FLO14_Item_StarPiece

// type: Marker:Path
// name: Path_1
#define GEN_PATH_1_X -69
#define GEN_PATH_1_Y 75
#define GEN_PATH_1_Z 81
#define GEN_PATH_1_DIR 0
#define GEN_PATH_1_VEC -69,75,81
#define GEN_PATH_1_PATH \
    {  531,   75,   81 }, \
    {  481,   80,   81 }, \
    {  431,   75,   81 }, \
    {  381,   70,   81 }, \
    {  331,   75,   81 }, \
    {  281,   80,   81 }, \
    {  231,   75,   81 }, \
    {  181,   70,   81 }, \
    {  131,   75,   81 }, \
    {   81,   80,   81 }, \
    {   31,   75,   81 }, \
    {  -19,   70,   81 }, \
    {  -69,   75,   81 },

// type: Marker:Volume
// name: FlowerVolume_1
#define GEN_FLOWER_VOLUME_1_X -600
#define GEN_FLOWER_VOLUME_1_Y 25
#define GEN_FLOWER_VOLUME_1_Z -100
#define GEN_FLOWER_VOLUME_1_DIR 0
#define GEN_FLOWER_VOLUME_1_VEC -600,25,-100
#define GEN_FLOWER_VOLUME_1_MIN_X -730
#define GEN_FLOWER_VOLUME_1_MIN_Y 0
#define GEN_FLOWER_VOLUME_1_MIN_Z -130
#define GEN_FLOWER_VOLUME_1_MIN_XZ -730,-130
#define GEN_FLOWER_VOLUME_1_MIN_VEC -730,0,-130
#define GEN_FLOWER_VOLUME_1_MAX_X -470
#define GEN_FLOWER_VOLUME_1_MAX_Y 50
#define GEN_FLOWER_VOLUME_1_MAX_Z -70
#define GEN_FLOWER_VOLUME_1_MAX_XZ -470,-70
#define GEN_FLOWER_VOLUME_1_MAX_VEC -470,50,-70

// type: Marker:Volume
// name: FlowerVolume_2
#define GEN_FLOWER_VOLUME_2_X -600
#define GEN_FLOWER_VOLUME_2_Y 25
#define GEN_FLOWER_VOLUME_2_Z 105
#define GEN_FLOWER_VOLUME_2_DIR 0
#define GEN_FLOWER_VOLUME_2_VEC -600,25,105
#define GEN_FLOWER_VOLUME_2_MIN_X -730
#define GEN_FLOWER_VOLUME_2_MIN_Y 0
#define GEN_FLOWER_VOLUME_2_MIN_Z 70
#define GEN_FLOWER_VOLUME_2_MIN_XZ -730,70
#define GEN_FLOWER_VOLUME_2_MIN_VEC -730,0,70
#define GEN_FLOWER_VOLUME_2_MAX_X -470
#define GEN_FLOWER_VOLUME_2_MAX_Y 50
#define GEN_FLOWER_VOLUME_2_MAX_Z 140
#define GEN_FLOWER_VOLUME_2_MAX_XZ -470,140
#define GEN_FLOWER_VOLUME_2_MAX_VEC -470,50,140

// type: Marker:Volume
// name: FlowerVolume_3
#define GEN_FLOWER_VOLUME_3_X -195
#define GEN_FLOWER_VOLUME_3_Y 25
#define GEN_FLOWER_VOLUME_3_Z 30
#define GEN_FLOWER_VOLUME_3_DIR 0
#define GEN_FLOWER_VOLUME_3_VEC -195,25,30
#define GEN_FLOWER_VOLUME_3_MIN_X -280
#define GEN_FLOWER_VOLUME_3_MIN_Y 0
#define GEN_FLOWER_VOLUME_3_MIN_Z -70
#define GEN_FLOWER_VOLUME_3_MIN_XZ -280,-70
#define GEN_FLOWER_VOLUME_3_MIN_VEC -280,0,-70
#define GEN_FLOWER_VOLUME_3_MAX_X -110
#define GEN_FLOWER_VOLUME_3_MAX_Y 50
#define GEN_FLOWER_VOLUME_3_MAX_Z 130
#define GEN_FLOWER_VOLUME_3_MAX_XZ -110,130
#define GEN_FLOWER_VOLUME_3_MAX_VEC -110,50,130

// type: Marker:Volume
// name: FlowerVolume_4
#define GEN_FLOWER_VOLUME_4_X -145
#define GEN_FLOWER_VOLUME_4_Y 25
#define GEN_FLOWER_VOLUME_4_Z 105
#define GEN_FLOWER_VOLUME_4_DIR 0
#define GEN_FLOWER_VOLUME_4_VEC -145,25,105
#define GEN_FLOWER_VOLUME_4_MIN_X -280
#define GEN_FLOWER_VOLUME_4_MIN_Y 0
#define GEN_FLOWER_VOLUME_4_MIN_Z 70
#define GEN_FLOWER_VOLUME_4_MIN_XZ -280,70
#define GEN_FLOWER_VOLUME_4_MIN_VEC -280,0,70
#define GEN_FLOWER_VOLUME_4_MAX_X -10
#define GEN_FLOWER_VOLUME_4_MAX_Y 50
#define GEN_FLOWER_VOLUME_4_MAX_Z 140
#define GEN_FLOWER_VOLUME_4_MAX_XZ -10,140
#define GEN_FLOWER_VOLUME_4_MAX_VEC -10,50,140

// type: Marker:Position
// name: LavaReset_o129
#define GEN_LAVA_RESET_O129_X -500
#define GEN_LAVA_RESET_O129_Y 0
#define GEN_LAVA_RESET_O129_Z -90
#define GEN_LAVA_RESET_O129_DIR 0
#define GEN_LAVA_RESET_O129_VEC -500,0,-90

// type: Marker:Position
// name: LavaReset_o137
#define GEN_LAVA_RESET_O137_X -510
#define GEN_LAVA_RESET_O137_Y 0
#define GEN_LAVA_RESET_O137_Z 0
#define GEN_LAVA_RESET_O137_DIR 0
#define GEN_LAVA_RESET_O137_VEC -510,0,0

// type: Marker:Position
// name: LavaReset_o155
#define GEN_LAVA_RESET_O155_X -500
#define GEN_LAVA_RESET_O155_Y 0
#define GEN_LAVA_RESET_O155_Z 110
#define GEN_LAVA_RESET_O155_DIR 0
#define GEN_LAVA_RESET_O155_VEC -500,0,110

// type: Marker:Position
// name: LavaReset_o156
#define GEN_LAVA_RESET_O156_X -250
#define GEN_LAVA_RESET_O156_Y 0
#define GEN_LAVA_RESET_O156_Z -90
#define GEN_LAVA_RESET_O156_DIR 0
#define GEN_LAVA_RESET_O156_VEC -250,0,-90

// type: Marker:Position
// name: LavaReset_o140
#define GEN_LAVA_RESET_O140_X -240
#define GEN_LAVA_RESET_O140_Y 0
#define GEN_LAVA_RESET_O140_Z 0
#define GEN_LAVA_RESET_O140_DIR 0
#define GEN_LAVA_RESET_O140_VEC -240,0,0

// type: Marker:Position
// name: LavaReset_o157
#define GEN_LAVA_RESET_O157_X -250
#define GEN_LAVA_RESET_O157_Y 0
#define GEN_LAVA_RESET_O157_Z 110
#define GEN_LAVA_RESET_O157_DIR 0
#define GEN_LAVA_RESET_O157_VEC -250,0,110

// type: Marker:Position
// name: LavaReset_o151
#define GEN_LAVA_RESET_O151_X -50
#define GEN_LAVA_RESET_O151_Y 0
#define GEN_LAVA_RESET_O151_Z 25
#define GEN_LAVA_RESET_O151_DIR 0
#define GEN_LAVA_RESET_O151_VEC -50,0,25

// type: Marker:Position
// name: LavaReset_o152
#define GEN_LAVA_RESET_O152_X 70
#define GEN_LAVA_RESET_O152_Y 60
#define GEN_LAVA_RESET_O152_Z -95
#define GEN_LAVA_RESET_O152_DIR 0
#define GEN_LAVA_RESET_O152_VEC 70,60,-95

// type: Marker:Position
// name: LavaReset_o153
#define GEN_LAVA_RESET_O153_X 410
#define GEN_LAVA_RESET_O153_Y 60
#define GEN_LAVA_RESET_O153_Z -95
#define GEN_LAVA_RESET_O153_DIR 0
#define GEN_LAVA_RESET_O153_VEC 410,60,-95

// type: Marker:Position
// name: LavaReset_o154
#define GEN_LAVA_RESET_O154_X 550
#define GEN_LAVA_RESET_O154_Y 0
#define GEN_LAVA_RESET_O154_Z 50
#define GEN_LAVA_RESET_O154_DIR 0
#define GEN_LAVA_RESET_O154_VEC 550,0,50

// type: Marker:Position
// name: LavaReset_o158
#define GEN_LAVA_RESET_O158_X -50
#define GEN_LAVA_RESET_O158_Y 0
#define GEN_LAVA_RESET_O158_Z 110
#define GEN_LAVA_RESET_O158_DIR 0
#define GEN_LAVA_RESET_O158_VEC -50,0,110

