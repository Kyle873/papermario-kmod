#include "tik_05.h"
#include "entity.h"

#include "world/common/entity/Chest.inc.c"

extern s16 Entity_ScriptSpring_AnimLaunch[];

API_CALLABLE(N(PlaySpringAnimation)) {
    Bytecode* args = script->ptrReadPos;
    Entity* entity = get_entity_by_index(evt_get_variable(script, *args++));

    if (entity == NULL) {
        return ApiStatus_BLOCK;
    }

    play_model_animation(entity->virtualModelIndex, Entity_ScriptSpring_AnimLaunch);
    return ApiStatus_DONE2;
}

#include "world/common/todo/SetEntityPosition.inc.c"

EvtScript N(EVS_BreakBlock_DropSpring) = {
    IfEq(GF_TIK05_SpringBrick, TRUE)
        Return
    EndIf
    Set(GF_TIK05_SpringBrick, TRUE)
    Call(DisablePlayerInput, TRUE)
    Set(LVar5, 25)
    Call(MakeLerp, 75, 105, 8, EASING_QUADRATIC_OUT)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_Unk_00, LVar5, LVar0, 0)
        Wait(1)
        Sub(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(MakeLerp, LVar0, -10, 22, EASING_QUADRATIC_IN)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_Unk_00, LVar5, LVar0, 0)
        Wait(1)
        Sub(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(PlaySoundAt, SOUND_OBJECT_LAND, SOUND_SPACE_DEFAULT, LVar5, LVar0, 0)
    Call(PlaySoundAt, SOUND_SPRING, SOUND_SPACE_DEFAULT, LVar5, LVar0, 0)
    Call(N(PlaySpringAnimation), MV_Unk_00)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_OpenChest) = EVT_OPEN_CHEST(ITEM_POWER_SMASH, GF_TIK05_Chest_PowerSmash);

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(Chest, GEN_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_CHEST_1_FLAG)
    Call(AssignScript, Ref(GEN_CHEST_1_SCRIPT))
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    Call(AssignScript, Ref(GEN_BRICK_BLOCK_1_SCRIPT))
    IfEq(GF_TIK05_SpringBrick, FALSE)
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_1_PARAMS)
        Set(MV_Unk_00, LVar0)
    Else
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_2_PARAMS)
    EndIf
    Return
    End
};
