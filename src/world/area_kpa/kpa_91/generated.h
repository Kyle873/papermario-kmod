/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_BOWSERS_CASTLE

// type: EntryList
#define GEN_ENTRY_LIST \
    { -200.0,    0.0,  100.0,   90.0 },

// type: Marker:Entry
// name: Entry_0
#define GEN_ENTRY_0_X -200
#define GEN_ENTRY_0_Y 0
#define GEN_ENTRY_0_Z 100
#define GEN_ENTRY_0_DIR 90
#define GEN_ENTRY_0_VEC -200,0,100

// type: Marker:NPC
// name: NPC_Toad_01
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_01_X 0
#define GEN_NPC_TOAD_01_Y -1000
#define GEN_NPC_TOAD_01_Z 0
#define GEN_NPC_TOAD_01_DIR 0
#define GEN_NPC_TOAD_01_VEC 0,-1000,0
#define GEN_NPC_TOAD_01_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Toad_02
// anim: ANIM_Toad_Red_Idle
#define GEN_NPC_TOAD_02_X 0
#define GEN_NPC_TOAD_02_Y -1000
#define GEN_NPC_TOAD_02_Z 0
#define GEN_NPC_TOAD_02_DIR 0
#define GEN_NPC_TOAD_02_VEC 0,-1000,0
#define GEN_NPC_TOAD_02_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_ToadGuard
// anim: ANIM_ToadGuard_Red_Idle
#define GEN_NPC_TOAD_GUARD_X 0
#define GEN_NPC_TOAD_GUARD_Y -1000
#define GEN_NPC_TOAD_GUARD_Z 0
#define GEN_NPC_TOAD_GUARD_DIR 0
#define GEN_NPC_TOAD_GUARD_VEC 0,-1000,0
#define GEN_NPC_TOAD_GUARD_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Dryite
// anim: ANIM_Dryite_Green_Idle
#define GEN_NPC_DRYITE_X 0
#define GEN_NPC_DRYITE_Y -1000
#define GEN_NPC_DRYITE_Z 0
#define GEN_NPC_DRYITE_DIR 0
#define GEN_NPC_DRYITE_VEC 0,-1000,0
#define GEN_NPC_DRYITE_TERRITORY \
{}

// type: Marker:NPC
// name: NPC_Koopatrol
// anim: ANIM_WorldKoopatrol_Anim01
#define GEN_NPC_KOOPATROL_X 60
#define GEN_NPC_KOOPATROL_Y 0
#define GEN_NPC_KOOPATROL_Z 55
#define GEN_NPC_KOOPATROL_DIR 270
#define GEN_NPC_KOOPATROL_VEC 60,0,55
#define GEN_NPC_KOOPATROL_TERRITORY \
{ \
    .patrol = { \
        .isFlying = TRUE, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .numPoints = 2, \
        .points = { \
            { 60, 0, 55 }, \
            { 140, 0, 55 }, \
        }, \
        .detectShape = SHAPE_CYLINDER, \
        .detectPos   = { 60, 0, 55 }, \
        .detectSize  = { 200 }, \
    }, \
}

// type: Marker:Entity:Item
// name: Item_1
#define GEN_ITEM_1_X 60
#define GEN_ITEM_1_Y 0
#define GEN_ITEM_1_Z 55
#define GEN_ITEM_1_DIR 0
#define GEN_ITEM_1_VEC 60,0,55
#define GEN_ITEM_1_PARAMS GEN_ITEM_1_ITEM, GEN_ITEM_1_VEC, GEN_ITEM_1_SPAWN, GEN_ITEM_1_FLAG
#define GEN_ITEM_1_ITEM ITEM_PRISON_KEY
#define GEN_ITEM_1_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_ITEM_1_FLAG GF_KPA91_Item_PrisonKey1

// type: Marker:Entity:Padlock
// name: Padlock_1
#define GEN_PADLOCK_1_X -5
#define GEN_PADLOCK_1_Y 10
#define GEN_PADLOCK_1_Z 13
#define GEN_PADLOCK_1_DIR 0
#define GEN_PADLOCK_1_VEC -5,10,13
#define GEN_PADLOCK_1_XYZA -5, 10, 13, 0
#define GEN_PADLOCK_1_PARAMS GEN_PADLOCK_1_XYZA

