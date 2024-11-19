#include "kpa_133.h"
#include "entity.h"
#include "effects.h"
#include "sprite/player.h"

extern EvtScript N(EVS_TriggerSwitch);
extern EvtScript N(EVS_SetupHiddenSpring);

API_CALLABLE(N(SetSpringRotation)) {
    Bytecode* args = script->ptrReadPos;
    Entity* entity = get_entity_by_index(evt_get_variable(NULL, MV_SpringEntityID));

    entity->rot.x = evt_get_variable(script, *args++);
    entity->rot.y = evt_get_variable(script, *args++);
    entity->rot.z = evt_get_variable(script, *args++);
    return ApiStatus_DONE2;
}

API_CALLABLE(N(SetSpringPosition)) {
    Bytecode* args = script->ptrReadPos;
    Entity* entity = get_entity_by_index(evt_get_variable(NULL, MV_SpringEntityID));

    entity->pos.x = evt_get_variable(script, *args++);
    entity->pos.y = evt_get_variable(script, *args++);
    entity->pos.z = evt_get_variable(script, *args++);
    return ApiStatus_DONE2;
}

EvtScript N(EVS_MakeEntities) = {
    IfEq(GF_KPA133_BlueSwitch, FALSE)
        EVT_MAKE_ENTITY(BlueSwitch, GEN_BLUE_SWITCH_1_PARAMS)
        Call(AssignSwitchFlag, EVT_INDEX_OF_AREA_FLAG(GEN_BLUE_SWITCH_1_FLAG))
        Call(AssignScript, Ref(N(EVS_TriggerSwitch)))
    EndIf
    IfEq(GF_KPA133_BlueSwitch, TRUE)
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_1_PARAMS)
    Else
        EVT_MAKE_ENTITY(SimpleSpring, GEN_SIMPLE_SPRING_2_PARAMS)
        Set(MV_SpringEntityID, LVar0)
        Call(N(SetSpringRotation), -90, 0, 0)
        Exec(N(EVS_SetupHiddenSpring))
    EndIf
    EVT_MAKE_ITEM_ENTITY(GEN_ITEM_1_PARAMS)
    Return
    End
};

EvtScript N(EVS_SetupHiddenSpring) = {
    Loop(0)
        Wait(1)
        IfEq(MV_RevealHiddenSpring, TRUE)
            BreakLoop
        EndIf
    EndLoop
    Call(DisablePlayerInput, TRUE)
    Set(GF_KPA133_BlueSwitch, TRUE)
    Call(GetPlayerPos, LVar0, LVar1, LVar2)
    IfGe(LVar0, 115)
        IfLe(LVar0, 180)
            Set(LVar3, LVar0)
            IfLt(LVar0, 150)
                Add(LVar3, -40)
                Set(LVar4, 90)
            Else
                Add(LVar3, 40)
                Set(LVar4, 270)
            EndIf
            Thread
                Wait(2)
                Call(InterpPlayerYaw, LVar4, 0)
                Wait(2)
                Call(SetPlayerJumpscale, Float(2.0))
                Call(SetPlayerAnimation, ANIM_Mario1_Flail)
                Call(PlayerJump1, LVar3, LVar1, LVar2, 10)
                Call(SetPlayerAnimation, ANIM_Mario1_Idle)
                Wait(5)
            EndThread
        EndIf
    EndIf
    Thread
        Call(MakeLerp, 0, 80, 15, EASING_QUADRATIC_IN)
        Loop(0)
            Call(UpdateLerp)
            Call(RotateModel, MODEL_kakusitobira, LVar0, 1, 0, 0)
            Wait(1)
            IfEq(LVar1, 0)
                BreakLoop
            EndIf
        EndLoop
        PlayEffect(EFFECT_LANDING_DUST, 1, 135, 115, -70, 0)
        PlayEffect(EFFECT_LANDING_DUST, 1, 180, 115, -70, 0)
        PlayEffect(EFFECT_LANDING_DUST, 1, 135, 115, -55, 0)
        PlayEffect(EFFECT_LANDING_DUST, 1, 180, 115, -55, 0)
        PlayEffect(EFFECT_LANDING_DUST, 1, 135, 115, -40, 0)
        PlayEffect(EFFECT_LANDING_DUST, 1, 180, 115, -40, 0)
        Wait(20)
        Call(EnableModel, MODEL_kakusitobira, FALSE)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_123, COLLIDER_FLAGS_UPPER_MASK)
    EndThread
    Thread
        Wait(18)
        Call(PlaySoundAtNpc, NPC_Dummy, SOUND_KPA_DROP_WALL, SOUND_SPACE_DEFAULT)
    EndThread
    Thread
        Call(MakeLerp, -90, 0, 15, EASING_QUADRATIC_IN)
        Loop(0)
            Call(UpdateLerp)
            Call(N(SetSpringRotation), LVar0, 0, 0)
            Wait(1)
            IfEq(LVar1, 0)
                BreakLoop
            EndIf
        EndLoop
    EndThread
    Thread
        Loop(23)
            Call(GetNpcPos, NPC_Dummy, LVar0, LVar1, LVar2)
            Call(N(SetSpringPosition), LVar0, LVar1, LVar2)
            Wait(1)
        EndLoop
        Call(SetNpcPos, NPC_Dummy, NPC_DISPOSE_LOCATION)
    EndThread
    Wait(3)
    Call(SetNpcPos, NPC_Dummy, 150, 150, -105)
    Call(SetNpcJumpscale, NPC_Dummy, Float(1.0))
    Call(NpcJump0, NPC_Dummy, 150, 115, 0, 17)
    Call(GetNpcPos, NPC_Dummy, LVar0, LVar1, LVar2)
    Wait(20)
    Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript N(EVS_TriggerSwitch) = {
    Set(MV_RevealHiddenSpring, TRUE)
    Return
    End
};
