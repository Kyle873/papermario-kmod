#include "omo_16.h"

#include "world/common/npc/TrainToad.inc.c"

NpcData N(NpcData_TrainToad) = {
    .id = NPC_Conductor,
    .pos = { GEN_NPC_CONDUCTOR_VEC },
    .yaw = GEN_NPC_CONDUCTOR_DIR,
    .territory = GEN_NPC_CONDUCTOR_TERRITORY,
    .settings = &N(NpcSettings_TrainToad),
    .flags = BASE_PASSIVE_FLAGS | ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
    .drops = NO_DROPS,
    .animations = TRAIN_CONDUCTOR_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_TrainToad)),
    {}
};
