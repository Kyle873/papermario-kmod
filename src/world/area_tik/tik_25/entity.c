#include "tik_25.h"
#include "entity.h"

API_CALLABLE(N(DismissGotItem)) {
    Entity* bigChest = get_entity_by_index(script->varTable[0]);
    bigChest->dataBuf.chest->gotItemDone = TRUE;
    return ApiStatus_DONE2;
}

#include "world/common/todo/SetEntityPosition.inc.c"
#include "world/common/util/PlaySpringReboundAnimation.inc.c"

EvtScript N(EVS_SetupGiantChest_UltraBoots) = {
    IfEq(GF_TIK25_GiantChest, FALSE)
        Label(10)
        IfEq(GF_TIK25_GiantChest, FALSE)
            Wait(1)
            Goto(10)
        EndIf
        Wait(60)
        Exec(N(EVS_PlayUpgradeSong))
        Call(ShowMessageAtScreenPos, MSG_Menus_0187, 160, 40)
        Call(N(DismissGotItem))
    EndIf
    Return
    End
};

EvtScript N(EVS_OnBreakBlock_SpringR) = {
    IfEq(GF_TIK25_SpringBrickA, TRUE)
        Return
    EndIf
    Set(GF_TIK25_SpringBrickA, TRUE)
    Call(DisablePlayerInput, TRUE)
    Set(LVar5, 210)
    Call(MakeLerp, -50, -20, 8, EASING_QUADRATIC_OUT)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_EntityID_SpringR, LVar5, LVar0, 0)
        Wait(1)
        Sub(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(MakeLerp, LVar0, -135, 22, EASING_QUADRATIC_IN)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_EntityID_SpringR, LVar5, LVar0, 0)
        Wait(1)
        Sub(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(PlaySoundAt, SOUND_OBJECT_LAND, SOUND_SPACE_DEFAULT, LVar5, LVar0, 0)
    Call(PlaySoundAt, SOUND_SPRING, SOUND_SPACE_DEFAULT, LVar5, LVar0, 0)
    Call(N(PlaySpringReboundAnimation), MV_EntityID_SpringR)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_OnBreakBlock_SpringL) = {
    IfEq(GF_TIK25_SpringBrickB, TRUE)
        Return
    EndIf
    Set(GF_TIK25_SpringBrickB, TRUE)
    Call(DisablePlayerInput, TRUE)
    Set(LVar5, -120)
    Call(MakeLerp, -20, 10, 8, EASING_QUADRATIC_OUT)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_EntityID_SpringL, LVar5, LVar0, 0)
        Wait(1)
        Add(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(MakeLerp, LVar0, -135, 22, EASING_QUADRATIC_IN)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_EntityID_SpringL, LVar5, LVar0, 0)
        Wait(1)
        Add(LVar5, 2)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
    EndLoop
    Call(PlaySoundAt, SOUND_OBJECT_LAND, SOUND_SPACE_DEFAULT, LVar5, LVar0, 0)
    Call(PlaySoundAt, SOUND_SPRING, SOUND_SPACE_DEFAULT, LVar5, LVar0, 0)
    Call(N(PlaySpringReboundAnimation), MV_EntityID_SpringL)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(GiantChest, GEN_GIANT_CHEST_1_PARAMS)
    Call(AssignChestFlag, GEN_GIANT_CHEST_1_FLAG)
    Exec(N(EVS_SetupGiantChest_UltraBoots))
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_1_PARAMS)
    Call(AssignScript, Ref(GEN_BRICK_BLOCK_1_SCRIPT))
    IfEq(GF_TIK25_SpringBrickA, FALSE)
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_1_PARAMS)
        Set(MV_EntityID_SpringR, LVar0)
    Else
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_2_PARAMS)
    EndIf
    EVT_MAKE_ENTITY(BrickBlock, GEN_BRICK_BLOCK_2_PARAMS)
    Call(AssignScript, Ref(GEN_BRICK_BLOCK_2_SCRIPT))
    IfEq(GF_TIK25_SpringBrickB, FALSE)
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_3_PARAMS)
        Set(MV_EntityID_SpringL, LVar0)
    Else
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_4_PARAMS)
    EndIf
    Return
    End
};
