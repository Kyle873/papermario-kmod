.include "macro.inc"

.section .data

glabel D_80240690_B1BC00
.word 0xC3F20000, 0x00000000, 0x00000000, 0x00000000, 0x43F20000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x43B10000, 0x00000000, 0x43930000, 0x42EA0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, D_80240B1C_B1C08C, D_80240690_B1BC00, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000

glabel D_80240780_B1BCF0
.word 0x00000043, 0x00000003, GotoMap, 0x80240FC0, 0x00000001, 0x00000008, 0x00000001, 0x00000064, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802407B0_B1BD20
.word 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x00000064, 0x00000032, 0x0000000A, 0x00000003, 0x00000001, 0x0000000A, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000005, TranslateModel, 0x00000008, 0x00000000, 0xFE363C80, 0x00000000, 0x00000043, 0x00000002, UpdateColliderTransform, 0x00000008, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x0000000A, 0x00000013, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000064, 0x00000000, 0x00000032, 0x0000000A, 0x00000003, 0x00000001, 0x00000014, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000005, TranslateModel, 0x00000008, 0x00000000, 0xFE363C80, 0x00000000, 0x00000043, 0x00000002, UpdateColliderTransform, 0x00000008, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x00000014, 0x00000013, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802408F8_B1BE68
.word 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x00000168, 0x00000168, 0x00000000, 0x00000003, 0x00000001, 0x0000000A, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000006, RotateModel, 0x00000005, 0xFE363C80, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000002, UpdateColliderTransform, 0x00000005, 0x00000043, 0x00000001, func_80240000_B1B570, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x0000000A, 0x00000013, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000014, 0xFFFFFFEC, 0x00000028, 0x0000000A, 0x00000003, 0x00000001, 0x00000014, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000006, RotateModel, 0x00000005, 0xFE363C80, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000002, UpdateColliderTransform, 0x00000005, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x00000014, 0x00000013, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80240A60_B1BFD0
.word 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x00000168, 0x00000168, 0x00000000, 0x00000003, 0x00000001, 0x0000000A, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000006, RotateModel, 0x00000000, 0xFE363C80, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000002, UpdateColliderTransform, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x0000000A, 0x00000013, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80240B1C_B1C08C
.word 0x00000024, 0x00000002, 0xF5DE0329, 0x00000017, 0x00000043, 0x00000002, SetSpriteShading, 0xFFFFFFFF, 0x00000043, 0x00000006, SetCamPerspective, 0x00000000, 0x00000003, 0x00000019, 0x00000010, 0x00001000, 0x00000043, 0x00000005, SetCamBGColor, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x00000003, SetCamEnabled, 0x00000000, 0x00000001, 0x00000043, 0x00000003, MakeNpcs, 0x00000000, 0x80240FA0, 0x00000046, 0x00000001, 0x80240C70, 0x00000047, 0x00000005, D_80240780_B1BCF0, 0x00000040, 0x0000000C, 0x00000001, 0x00000000, 0x00000043, 0x00000003, ParentColliderToModel, 0x00000008, 0x00000008, 0x00000043, 0x00000003, ParentColliderToModel, 0x00000005, 0x00000005, 0x00000043, 0x00000003, ParentColliderToModel, 0x00000000, 0x00000000, 0x00000043, 0x00000003, ParentColliderToModel, 0x00000001, 0x00000001, 0x00000043, 0x00000003, ParentColliderToModel, 0x00000002, 0x00000002, 0x00000044, 0x00000001, D_802407B0_B1BD20, 0x00000044, 0x00000001, D_802408F8_B1BE68, 0x00000044, 0x00000001, D_80240A60_B1BFD0, 0x00000044, 0x00000001, 0x80240CB0, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000