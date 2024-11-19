/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_CRYSTAL_PALACE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -128.0,    0.0,  157.0,    0.0 }, \
    {  237.0,    0.0,   78.0,  270.0 }, \
    {  237.0, -200.0,   78.0,  270.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -128
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 157
#define GEN_ENTRY_0_DIR 0
#define GEN_ENTRY_0_VEC -128,0,157

// type: Marker:Entry
// name: Entry_1
#define GEN_ENTRY_1_X 237
#define GEN_ENTRY_1_Y 0
#define GEN_ENTRY_1_Z 78
#define GEN_ENTRY_1_DIR 270
#define GEN_ENTRY_1_VEC 237,0,78

// type: Marker:Entry
// name: Entry_2
#define GEN_ENTRY_2_X 237
#define GEN_ENTRY_2_Y -200
#define GEN_ENTRY_2_Z 78
#define GEN_ENTRY_2_DIR 270
#define GEN_ENTRY_2_VEC 237,-200,78

// type: Marker:NPC
// name: NPC_Swoopula
// anim: ANIM_Swooper_Gray_Anim1B
#define GEN_NPC_SWOOPULA_X 50
#define GEN_NPC_SWOOPULA_Y 130
#define GEN_NPC_SWOOPULA_Z 75
#define GEN_NPC_SWOOPULA_DIR 90
#define GEN_NPC_SWOOPULA_VEC 50,130,75
#define GEN_NPC_SWOOPULA_TERRITORY \
{ \
    .wander = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .centerPos   = { 50, 130, 75 }, \
        .wanderSize  = { 0 }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 50, 130, 75 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:ScriptSpring
// name: ScriptSpring_1
#define GEN_SCRIPT_SPRING_1_X 124
#define GEN_SCRIPT_SPRING_1_Y -200
#define GEN_SCRIPT_SPRING_1_Z 80
#define GEN_SCRIPT_SPRING_1_DIR 0
#define GEN_SCRIPT_SPRING_1_VEC 124,-200,80
#define GEN_SCRIPT_SPRING_1_XYZA 124, -200, 80, 0
#define GEN_SCRIPT_SPRING_1_PARAMS GEN_SCRIPT_SPRING_1_XYZA
#define GEN_SCRIPT_SPRING_1_SCRIPT N(EVS_UseSpring)

// type: Marker:Entity:BoardedFloor
// name: BoardedFloor_1
#define GEN_BOARDED_FLOOR_1_X 124
#define GEN_BOARDED_FLOOR_1_Y 0
#define GEN_BOARDED_FLOOR_1_Z 80
#define GEN_BOARDED_FLOOR_1_DIR 0
#define GEN_BOARDED_FLOOR_1_VEC 124,0,80
#define GEN_BOARDED_FLOOR_1_XYZA 124, 0, 80, 0
#define GEN_BOARDED_FLOOR_1_PARAMS GEN_BOARDED_FLOOR_1_XYZA
#define GEN_BOARDED_FLOOR_1_SCRIPT N(EVS_BreakFloor)

// type: Marker:Entity:YellowBlock
// name: YellowBlock_1
#define GEN_YELLOW_BLOCK_1_X -200
#define GEN_YELLOW_BLOCK_1_Y 60
#define GEN_YELLOW_BLOCK_1_Z 75
#define GEN_YELLOW_BLOCK_1_DIR 0
#define GEN_YELLOW_BLOCK_1_VEC -200,60,75
#define GEN_YELLOW_BLOCK_1_XYZA -200, 60, 75, 0
#define GEN_YELLOW_BLOCK_1_ITEM ITEM_SUPER_SHROOM
#define GEN_YELLOW_BLOCK_1_PARAMS GEN_YELLOW_BLOCK_1_XYZA, GEN_YELLOW_BLOCK_1_ITEM
#define GEN_YELLOW_BLOCK_1_FLAG GF_PRA04_ItemBlock_SuperShroom

