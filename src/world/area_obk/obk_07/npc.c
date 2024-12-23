#include "obk_07.h"

#include "world/common/npc/Boo.inc.c"

#define TRAFFIC_BOO_START_Y 80.0f
#define TRAFFIC_BOO_START_Z -300.0f
#include "../common/TrafficBoos.inc.c"

EvtScript N(EVS_NpcInit_TrafficBoo1) = {
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_TrafficBoo)))
    Return
    End
};

NpcData N(NpcData_TrafficBoo1) = {
    .id = NPC_TrafficBoo1,
    .pos = { GEN_NPC_TRAFFIC_BOO1_VEC },
    .yaw = GEN_NPC_TRAFFIC_BOO1_DIR,
    .territory = GEN_NPC_TRAFFIC_BOO1_TERRITORY,
    .init = &N(EVS_NpcInit_TrafficBoo1),
    .settings = &N(NpcSettings_Boo),
    .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_IGNORE_PLAYER_COLLISION,
    .drops = NO_DROPS,
    .animations = NORMAL_BOO_ANIMS,
};

EvtScript N(EVS_NpcInit_TrafficBoo2) = {
    Call(BindNpcIdle, NPC_SELF, Ref(N(EVS_NpcIdle_TrafficBoo)))
    Return
    End
};

NpcData N(NpcData_TrafficBoo2) = {
    .id = NPC_TrafficBoo2,
    .pos = { GEN_NPC_TRAFFIC_BOO2_VEC },
    .yaw = GEN_NPC_TRAFFIC_BOO2_DIR,
    .territory = GEN_NPC_TRAFFIC_BOO2_TERRITORY,
    .init = &N(EVS_NpcInit_TrafficBoo2),
    .settings = &N(NpcSettings_Boo),
    .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_IGNORE_PLAYER_COLLISION,
    .drops = NO_DROPS,
    .animations = NORMAL_BOO_ANIMS,
};

EvtScript N(EVS_NpcInit_GuardBoo) = {
    IfGe(GB_StoryProgress, STORY_CH3_GOT_WEIGHT)
        Set(MV_GuardDeparted, TRUE)
        Call(RemoveNpc, NPC_SELF)
    Else
        ExecWait(N(EVS_SetupGuardBoo))
    EndIf
    Return
    End
};

NpcData N(NpcData_GuardBoo) = {
    .id = NPC_GuardBoo,
    .pos = { GEN_NPC_GUARD_BOO_VEC },
    .yaw = GEN_NPC_GUARD_BOO_DIR,
    .territory = GEN_NPC_GUARD_BOO_TERRITORY,
    .init = &N(EVS_NpcInit_GuardBoo),
    .settings = &N(NpcSettings_Boo),
    .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
    .drops = NO_DROPS,
    .animations = NORMAL_BOO_ANIMS,
    .tattle = MSG_NpcTattle_OBK_GuardingChest,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_TrafficBoo1)),
    NPC_GROUP(N(NpcData_TrafficBoo2)),
    NPC_GROUP(N(NpcData_GuardBoo)),
    {}
};
