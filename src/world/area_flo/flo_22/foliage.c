#include "flo_22.h"

#include "common/foliage.inc.c"

FoliageModelList N(Tree1_TrunkModels) = FOLIAGE_MODEL_LIST(MODEL_o45, MODEL_o46, MODEL_o48);

ShakeTreeConfig N(ShakeTree_Tree1) = {
    .trunk = &N(Tree1_TrunkModels),
};

BombTrigger N(BombPos_Tree1) = {
    .pos = { GEN_BOMB_POS_1_VEC },
    .diameter = 2.0f * GEN_BOMB_POS_1_RAD,
};

FoliageModelList N(Tree2_TrunkModels) = FOLIAGE_MODEL_LIST(MODEL_o52, MODEL_o53, MODEL_o55);

ShakeTreeConfig N(ShakeTree_Tree2) = {
    .trunk = &N(Tree2_TrunkModels),
};

BombTrigger N(BombPos_Tree2) = {
    .pos = { GEN_BOMB_POS_2_VEC },
    .diameter = 2.0f * GEN_BOMB_POS_2_RAD,
};

EvtScript N(EVS_SetupFoliage) = {
    Set(LVar0, Ref(N(ShakeTree_Tree1)))
    BindTrigger(Ref(N(EVS_ShakeTree)), TRIGGER_WALL_HAMMER, COLLIDER_o27, 1, 0)
    BindTrigger(Ref(N(EVS_ShakeTree)), TRIGGER_POINT_BOMB, Ref(N(BombPos_Tree1)), 1, 0)
    Set(LVar0, Ref(N(ShakeTree_Tree2)))
    BindTrigger(Ref(N(EVS_ShakeTree)), TRIGGER_WALL_HAMMER, COLLIDER_o30, 1, 0)
    BindTrigger(Ref(N(EVS_ShakeTree)), TRIGGER_POINT_BOMB, Ref(N(BombPos_Tree2)), 1, 0)
    Return
    End
};
