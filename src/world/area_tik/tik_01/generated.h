/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_TOAD_TOWN_TUNNELS

// type: EntryList
#define GEN_ENTRY_LIST \
    {  320.0,  -10.0,    0.0,  270.0 }, \
    { -220.0,  -10.0,    0.0,   90.0 }, \
    {  150.0,   25.0,  -82.0,  180.0 }, \
    {   50.0,   25.0,  -82.0,  180.0 }, \
    {  -50.0,   25.0,  -82.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(    50,   200,   110,   500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(     0,  -200,  -100,  -500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_3 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_3) \
    TEX_PAN_PARAMS_STEP(     0,  -250,  -100,  -500) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     1,     1) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 320
#define GEN_ENTRY_0_Y -10
#define GEN_ENTRY_0_Z 0
#define GEN_ENTRY_0_DIR 270
#define GEN_ENTRY_0_VEC 320,-10,0

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X -220
#define GEN_ENTRY_1_Y -10
#define GEN_ENTRY_1_Z 0
#define GEN_ENTRY_1_DIR 90
#define GEN_ENTRY_1_VEC -220,-10,0

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 150
#define GEN_ENTRY_2_Y 25
#define GEN_ENTRY_2_Z -82
#define GEN_ENTRY_2_DIR 180
#define GEN_ENTRY_2_VEC 150,25,-82

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 50
#define GEN_ENTRY_3_Y 25
#define GEN_ENTRY_3_Z -82
#define GEN_ENTRY_3_DIR 180
#define GEN_ENTRY_3_VEC 50,25,-82

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X -50
#define GEN_ENTRY_4_Y 25
#define GEN_ENTRY_4_Z -82
#define GEN_ENTRY_4_DIR 180
#define GEN_ENTRY_4_VEC -50,25,-82

// type: Marker:NPC
// name: NPC_Blooper
// anim: ANIM_Blooper_Anim0C
#define GEN_NPC_BLOOPER_X 0
#define GEN_NPC_BLOOPER_Y -1000
#define GEN_NPC_BLOOPER_Z 0
#define GEN_NPC_BLOOPER_DIR 90
#define GEN_NPC_BLOOPER_VEC 0,-1000,0
#define GEN_NPC_BLOOPER_TERRITORY \
{}

// type: Marker:Entity:Hammer2Block
// name: Hammer2Block_1
#define GEN_HAMMER2_BLOCK_1_X -240
#define GEN_HAMMER2_BLOCK_1_Y -10
#define GEN_HAMMER2_BLOCK_1_Z 0
#define GEN_HAMMER2_BLOCK_1_DIR 0
#define GEN_HAMMER2_BLOCK_1_VEC -240,-10,0
#define GEN_HAMMER2_BLOCK_1_XYZA -240, -10, 0, 0
#define GEN_HAMMER2_BLOCK_1_PARAMS GEN_HAMMER2_BLOCK_1_XYZA
#define GEN_HAMMER2_BLOCK_1_SCRIPT N(EVS_SmashBlock)

// type: Marker:Entity:BlueWarpPipe
// name: BlueWarpPipe_1
#define GEN_BLUE_WARP_PIPE_1_X 150
#define GEN_BLUE_WARP_PIPE_1_Y -10
#define GEN_BLUE_WARP_PIPE_1_Z -82
#define GEN_BLUE_WARP_PIPE_1_DIR 0
#define GEN_BLUE_WARP_PIPE_1_VEC 150,-10,-82
#define GEN_BLUE_WARP_PIPE_1_XYZA 150, -10, -82, 0
#define GEN_BLUE_WARP_PIPE_1_ENTRY tik_01_ENTRY_2
#define GEN_BLUE_WARP_PIPE_1_SCRIPT N(EVS_GotoMap_kmr_02_3)
#define GEN_BLUE_WARP_PIPE_1_FLAG GF_TIK01_WarpPipes
#define GEN_BLUE_WARP_PIPE_1_PARAMS GEN_BLUE_WARP_PIPE_1_XYZA, GEN_BLUE_WARP_PIPE_1_ENTRY, Ref(GEN_BLUE_WARP_PIPE_1_SCRIPT), EVT_INDEX_OF_GAME_FLAG(GEN_BLUE_WARP_PIPE_1_FLAG)

// type: Marker:Entity:BlueWarpPipe
// name: BlueWarpPipe_2
#define GEN_BLUE_WARP_PIPE_2_X 50
#define GEN_BLUE_WARP_PIPE_2_Y -10
#define GEN_BLUE_WARP_PIPE_2_Z -82
#define GEN_BLUE_WARP_PIPE_2_DIR 0
#define GEN_BLUE_WARP_PIPE_2_VEC 50,-10,-82
#define GEN_BLUE_WARP_PIPE_2_XYZA 50, -10, -82, 0
#define GEN_BLUE_WARP_PIPE_2_ENTRY tik_01_ENTRY_3
#define GEN_BLUE_WARP_PIPE_2_SCRIPT N(EVS_GotoMap_nok_02_2)
#define GEN_BLUE_WARP_PIPE_2_FLAG GF_TIK01_WarpPipes
#define GEN_BLUE_WARP_PIPE_2_PARAMS GEN_BLUE_WARP_PIPE_2_XYZA, GEN_BLUE_WARP_PIPE_2_ENTRY, Ref(GEN_BLUE_WARP_PIPE_2_SCRIPT), EVT_INDEX_OF_GAME_FLAG(GEN_BLUE_WARP_PIPE_2_FLAG)

// type: Marker:Entity:BlueWarpPipe
// name: BlueWarpPipe_3
#define GEN_BLUE_WARP_PIPE_3_X -50
#define GEN_BLUE_WARP_PIPE_3_Y -10
#define GEN_BLUE_WARP_PIPE_3_Z -82
#define GEN_BLUE_WARP_PIPE_3_DIR 0
#define GEN_BLUE_WARP_PIPE_3_VEC -50,-10,-82
#define GEN_BLUE_WARP_PIPE_3_XYZA -50, -10, -82, 0
#define GEN_BLUE_WARP_PIPE_3_ENTRY tik_01_ENTRY_4
#define GEN_BLUE_WARP_PIPE_3_SCRIPT N(EVS_GotoMap_dro_01_2)
#define GEN_BLUE_WARP_PIPE_3_FLAG GF_TIK01_WarpPipes
#define GEN_BLUE_WARP_PIPE_3_PARAMS GEN_BLUE_WARP_PIPE_3_XYZA, GEN_BLUE_WARP_PIPE_3_ENTRY, Ref(GEN_BLUE_WARP_PIPE_3_SCRIPT), EVT_INDEX_OF_GAME_FLAG(GEN_BLUE_WARP_PIPE_3_FLAG)

// type: Marker:Volume
// name: DripVolume_1
#define GEN_DRIP_VOLUME_1_X 155
#define GEN_DRIP_VOLUME_1_Y 95
#define GEN_DRIP_VOLUME_1_Z 37
#define GEN_DRIP_VOLUME_1_DIR 0
#define GEN_DRIP_VOLUME_1_VEC 155,95,37
#define GEN_DRIP_VOLUME_1_MIN_X -175
#define GEN_DRIP_VOLUME_1_MIN_Y -10
#define GEN_DRIP_VOLUME_1_MIN_Z -65
#define GEN_DRIP_VOLUME_1_MIN_XZ -175,-65
#define GEN_DRIP_VOLUME_1_MIN_VEC -175,-10,-65
#define GEN_DRIP_VOLUME_1_MAX_X 485
#define GEN_DRIP_VOLUME_1_MAX_Y 200
#define GEN_DRIP_VOLUME_1_MAX_Z 140
#define GEN_DRIP_VOLUME_1_MAX_XZ 485,140
#define GEN_DRIP_VOLUME_1_MAX_VEC 485,200,140

