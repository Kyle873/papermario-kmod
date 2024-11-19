#include "tik_06.h"
#include "entity.h"

EvtScript N(EVS_MonitorPlayerFallDown) = {
    Label(0)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Wait(1)
        IfGt(LVar0, -230)
            Goto(0)
        EndIf
        IfGe(LVar1, -10)
            Goto(0)
        EndIf
    Call(GrabCamera, CAM_DEFAULT, LVar2, LVar3, LVar4, LVar5)
    Label(1)
        Call(GetPlayerPos, LVar0, LVar1, LVar2)
        Wait(1)
        IfGt(LVar1, -70)
            Goto(1)
        EndIf
    Call(GotoMap, Ref("tik_08"), tik_08_ENTRY_2)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_OnPound_BoardedFloor) = {
    Set(GF_TIK02_BoardedFloor, TRUE)
    Exec(N(EVS_MonitorPlayerFallDown))
    Return
    End
};

EvtScript N(EVS_OnSmash_Block1) = {
    Set(GF_TIK02_Hammer1Block, TRUE)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o93, COLLIDER_FLAGS_UPPER_MASK)
    Return
    End
};

EvtScript N(EVS_OnSmash_Block2) = {
    Set(GF_TIK02_Hammer2Block, TRUE)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o90, COLLIDER_FLAGS_UPPER_MASK)
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    EVT_MAKE_ENTITY(SavePoint, GEN_SAVE_POINT_1_PARAMS)
    Call(EnableModel, MODEL_o49, FALSE)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o49, COLLIDER_FLAGS_UPPER_MASK)
    IfEq(GF_TIK02_BoardedFloor, FALSE)
        EVT_MAKE_ENTITY(BoardedFloor, GEN_BOARDED_FLOOR_1_PARAMS)
        Call(AssignScript, Ref(GEN_BOARDED_FLOOR_1_SCRIPT))
    Else
        Exec(N(EVS_MonitorPlayerFallDown))
    EndIf
    IfEq(GF_TIK02_Hammer1Block, FALSE)
        EVT_MAKE_ENTITY(Hammer1Block, GEN_HAMMER1_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER1_BLOCK_1_SCRIPT))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o93, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    IfEq(GF_TIK02_Hammer2Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2Block, GEN_HAMMER2_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_1_SCRIPT))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o90, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Return
    End
};
