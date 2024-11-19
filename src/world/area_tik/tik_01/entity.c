#include "tik_01.h"
#include "entity.h"

#include "world/common/todo/SetEntityPosition.inc.c"

EvtScript N(EVS_SpawnSwitch) = {
    Call(GetPlayerPos, LVar2, LVar3, LVar4)
    Add(LVar2, -75)
    Call(PlaySoundAt, SOUND_FALL_QUICK, SOUND_SPACE_DEFAULT, LVar2, 200, 25)
    Call(MakeLerp, 200, -10, 25, EASING_QUADRATIC_IN)
    Loop(0)
        Call(UpdateLerp)
        Call(N(SetEntityPosition), MV_Unk_01, LVar2, LVar0, 25)
        IfEq(LVar1, 0)
            BreakLoop
        EndIf
        Wait(1)
    EndLoop
    Call(PlaySoundAt, SOUND_OBJECT_LAND, SOUND_SPACE_DEFAULT, LVar2, LVar0, 25)
    Call(ShakeCam, CAM_DEFAULT, 0, 5, Float(1.0))
    Wait(10)
    Return
    End
};

EvtScript N(EVS_SmashBlock) = {
    Set(GF_TIK01_Hammer2Block, TRUE)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o64, COLLIDER_FLAGS_UPPER_MASK)
    Return
    End
};

EvtScript N(EVS_GotoMap_kmr_02_3) = {
    Call(GotoMap, Ref("kmr_02"), kmr_02_ENTRY_3)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_GotoMap_nok_02_2) = {
    Call(GotoMap, Ref("nok_02"), nok_02_ENTRY_2)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_GotoMap_dro_01_2) = {
    Call(GotoMap, Ref("dro_01"), dro_01_ENTRY_2)
    Wait(100)
    Return
    End
};

EvtScript N(EVS_OnSwitchActivate) = {
    Wait(10)
    Call(PlaySound, SOUND_GROW)
    Set(GF_TIK01_WarpPipes, TRUE)
    Unbind
    Return
    End
};

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_TIK01_Hammer2Block, FALSE)
        EVT_MAKE_ENTITY(Hammer2Block, GEN_HAMMER2_BLOCK_1_PARAMS)
        Call(AssignScript, Ref(GEN_HAMMER2_BLOCK_1_SCRIPT))
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o64, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_o63, COLLIDER_FLAGS_UPPER_MASK)
    IfEq(GF_TIK01_WarpPipes, FALSE)
        Call(MakeEntity, Ref(Entity_BlueSwitch), NPC_DISPOSE_LOCATION, 0, MAKE_ENTITY_END)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(AF_TIK_03))
        Set(MV_Unk_01, LVar0)
        BindTrigger(Ref(N(EVS_OnSwitchActivate)), TRIGGER_AREA_FLAG_SET, AF_TIK_03, 1, 0)
        IfEq(GF_TIK01_Defeated_Blooper, TRUE)
            Call(N(SetEntityPosition), MV_Unk_01, 125, -10, 25)
        EndIf
    EndIf
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_1_PARAMS)
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_2_PARAMS)
    EVT_MAKE_ENTITY(BlueWarpPipe, GEN_BLUE_WARP_PIPE_3_PARAMS)
    Return
    End
};
