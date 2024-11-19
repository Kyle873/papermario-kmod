#include "nok_13.h"

#include "world/common/enemy/Fuzzy_Wander.inc.c"

NpcData N(NpcData_Fuzzy) = {
    .id = NPC_UnusedFuzzy,
    .pos = { GEN_NPC_UNUSED_FUZZY_VEC },
    .yaw = GEN_NPC_UNUSED_FUZZY_DIR,
    .territory = GEN_NPC_UNUSED_FUZZY_TERRITORY,
    .settings = &N(NpcSettings_Fuzzy_Wander),
    .drops = FUZZY_DROPS,
    .animations = FUZZY_ANIMS,
};

NpcGroupList N(DefaultNPCs) = {
    {}
};
