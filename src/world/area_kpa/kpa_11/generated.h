/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOWSERS_CASTLE

// type: EntryList
#define GEN_ENTRY_LIST \
    {   30.0,  100.0, -140.0,   90.0 }, \
    { 1402.0,   30.0, -1070.0,  180.0 }, \
    { 1378.0,   30.0, -724.0,   90.0 }, \
    {   15.0,  -20.0,  -20.0,   90.0 }, \
    { 1529.0,  -20.0, -1082.0,  180.0 },

// type: TexPanner
#define GEN_TEX_PANNER_0 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_0) \
    TEX_PAN_PARAMS_STEP(  -400,     0,  -800,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     0,     1,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X 30
#define GEN_ENTRY_0_Y 100
#define GEN_ENTRY_0_Z -140
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC 30,100,-140

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 1402
#define GEN_ENTRY_1_Y 30
#define GEN_ENTRY_1_Z -1070
#define GEN_ENTRY_1_DIR 180
#define GEN_ENTRY_1_VEC 1402,30,-1070

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 1378
#define GEN_ENTRY_2_Y 30
#define GEN_ENTRY_2_Z -724
#define GEN_ENTRY_2_DIR 90
#define GEN_ENTRY_2_VEC 1378,30,-724

// type: Marker:Entry
// name: Entry_3
#define GEN_ENTRY_3_X 15
#define GEN_ENTRY_3_Y -20
#define GEN_ENTRY_3_Z -20
#define GEN_ENTRY_3_DIR 90
#define GEN_ENTRY_3_VEC 15,-20,-20

// type: Marker:Entry
// name: Entry_4
#define GEN_ENTRY_4_X 1529
#define GEN_ENTRY_4_Y -20
#define GEN_ENTRY_4_Z -1082
#define GEN_ENTRY_4_DIR 180
#define GEN_ENTRY_4_VEC 1529,-20,-1082

// type: Marker:NPC
// name: NPC_Koopatrol
// anim: ANIM_WorldKoopatrol_Anim01
#define GEN_NPC_KOOPATROL_X 550
#define GEN_NPC_KOOPATROL_Y 30
#define GEN_NPC_KOOPATROL_Z -145
#define GEN_NPC_KOOPATROL_DIR 270
#define GEN_NPC_KOOPATROL_VEC 550,30,-145
#define GEN_NPC_KOOPATROL_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 550, 30, -145 }, \
        .wanderSize  = { 30 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 550, 30, -145 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 550
#define GEN_ITEM_1_Y 30
#define GEN_ITEM_1_Z -145
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 550,30,-145
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_BOWSER_CASTLE_KEY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_KPA11_Item_CastleKey2

// type: Marker:Entity:SavePoint
// name: SavePoint_1
#define GEN_SAVE_POINT_1_X 1400
#define GEN_SAVE_POINT_1_Y 90
#define GEN_SAVE_POINT_1_Z -875
#define GEN_SAVE_POINT_1_DIR 0
#define GEN_SAVE_POINT_1_VEC 1400,90,-875
#define GEN_SAVE_POINT_1_XYZA 1400, 90, -875, 0
#define GEN_SAVE_POINT_1_PARAMS GEN_SAVE_POINT_1_XYZA

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X 1400
#define GEN_YELLOW_BLOCK_1_Y 90
#define GEN_YELLOW_BLOCK_1_Z -375
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC 1400,90,-375
#define GEN_YELLOW_BLOCK_1_XYZA 1400, 90, -375, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_LIFE_SHROOM
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_KPA10_ItemBlock_LifeShroom

// type: Marker:Position
// name: LavaReset_o1234
#define GEN_LAVA_RESET_O1234_X 1400
#define GEN_LAVA_RESET_O1234_Y 30
#define GEN_LAVA_RESET_O1234_Z -325
#define GEN_LAVA_RESET_O1234_DIR 0
#define GEN_LAVA_RESET_O1234_VEC 1400,30,-325

