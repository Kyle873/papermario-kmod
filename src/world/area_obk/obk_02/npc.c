#include "obk_02.h"

#include "world/common/npc/Boo.inc.c"

#define TRAFFIC_BOO_START_Y 80.0f
#define TRAFFIC_BOO_START_Z -300.0f
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

NpcData N(NpcData_TrafficBoos)[] = {
    {
        .id = NPC_TrafficBoo1,
        .pos = { GEN_NPC_TRAFFIC_BOO1_VEC },
        .yaw = GEN_NPC_TRAFFIC_BOO1_DIR,
        .territory = GEN_NPC_TRAFFIC_BOO1_TERRITORY,
        .init = &N(EVS_NpcInit_TrafficBoo1),
        .settings = &N(NpcSettings_Boo),
        .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_IGNORE_PLAYER_COLLISION,
        .drops = NO_DROPS,
        .animations = NORMAL_BOO_ANIMS,
    },
    {
        .id = NPC_TrafficBoo2,
        .pos = { GEN_NPC_TRAFFIC_BOO2_VEC },
        .yaw = GEN_NPC_TRAFFIC_BOO2_DIR,
        .territory = GEN_NPC_TRAFFIC_BOO2_TERRITORY,
        .init = &N(EVS_NpcInit_TrafficBoo2),
        .settings = &N(NpcSettings_Boo),
        .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_IGNORE_PLAYER_COLLISION,
        .drops = NO_DROPS,
        .animations = NORMAL_BOO_ANIMS,
    },
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_TrafficBoos)),
    {}
};
