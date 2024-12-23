#include "tst_12.h"
#include "effects.h"

extern EvtScript N(EVS_Main);

EntryList N(Entrances) = {
    GEN_ENTRY_LIST
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
};

EvtScript N(D_80240050_B1D340) = {
    SetGroup(EVT_GROUP_HOSTILE_NPC)
    Set(LVarA, LVar0)
    Set(LVarB, LVar1)
    Set(LVarC, LVar2)
    Set(LVarD, LVar3)
    Set(LVarE, LVar4)
    Sub(LVarC, LVar0)
    Sub(LVarD, LVar1)
    SetF(LVar0, LVarC)
    DivF(LVar0, Float(100.0))
    SetF(LVarF, Float(100.0))
    DivF(LVarF, LVar0)
    Add(LVarF, 11)
    Set(LVar5, 200)
    Div(LVar5, LVarF)
    Add(LVar5, 1)
    Loop(LVar5)
        Call(RandInt, LVarC, LVar0)
        Call(RandInt, LVarD, LVar1)
        Call(RandInt, 199, LVar2)
        Set(LVar3, 210)
        Sub(LVar3, LVar2)
        Add(LVar0, LVarA)
        Add(LVar1, LVarB)
        Add(LVar2, LVarE)
        PlayEffect(EFFECT_FLOATING_FLOWER, LVar0, LVar2, LVar1, LVar3)
    EndLoop
    Wait(LVarF)
    Label(0)
    Call(RandInt, LVarC, LVar0)
    Call(RandInt, LVarD, LVar1)
    Add(LVar0, LVarA)
    Add(LVar1, LVarB)
    PlayEffect(EFFECT_FLOATING_FLOWER, LVar0, LVarE, LVar1, 200)
    Wait(LVarF)
    Goto(0)
    Return
    End
};

EvtScript N(EVS_Main) = {
    Set(GB_WorldLocation, GEN_MAP_LOCATION)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_SURFACE, COLLIDER_o92, SURFACE_TYPE_FLOWERS)
    Set(LVar0, 544)
    Set(LVar1, 0)
    Set(LVar2, 100)
    Set(LVar3, 386)
    Set(LVar4, 174)
    Set(LVar5, 40)
    Exec(N(D_80240050_B1D340))
    Set(LVar0, 327)
    Set(LVar1, 0)
    Set(LVar2, 24)
    Set(LVar3, 89)
    Set(LVar4, 252)
    Set(LVar5, 40)
    Exec(N(D_80240050_B1D340))
    Return
    End
};
