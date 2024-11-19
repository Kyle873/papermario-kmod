#include "obk_05.h"

#include "world/common/npc/Boo.inc.c"

#define TRAFFIC_BOO_START_Y 40.0f
#define TRAFFIC_BOO_START_Z -430.0f
#include "../common/TrafficBoos.inc.c"

EvtScript N(EVS_NpcInit_TrafficBoo1) = {
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_TrafficBoo)))
    Return
    End
};

EvtScript N(EVS_NpcInit_TrafficBoo2) = {
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_TrafficBoo)))
    Return
    End
};

NpcData N(NpcData_Boo_01)[] = {
    {
        .id = NPC_Boo_01,
        .pos = { GEN_NPC_BOO_01_VEC },
        .yaw = GEN_NPC_BOO_01_DIR,
        .territory = GEN_NPC_BOO_01_TERRITORY,
        .init = &N(EVS_NpcInit_TrafficBoo1),
        .settings = &N(NpcSettings_Boo),
        .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_IGNORE_PLAYER_COLLISION,
        .drops = NO_DROPS,
        .animations = NORMAL_BOO_ANIMS,
    },
    {
        .id = NPC_Boo_02,
        .pos = { GEN_NPC_BOO_02_VEC },
        .yaw = GEN_NPC_BOO_02_DIR,
        .territory = GEN_NPC_BOO_02_TERRITORY,
        .init = &N(EVS_NpcInit_TrafficBoo2),
        .settings = &N(NpcSettings_Boo),
        .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_IGNORE_PLAYER_COLLISION,
        .drops = NO_DROPS,
        .animations = NORMAL_BOO_ANIMS,
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Boo_01)),
    {}
};
