.include "macro.inc"

.section .data

glabel D_80241800_8765C0
.word 0x00000000

glabel D_80241804_8765C4
.word 0x0000004D, 0x00000001, 0x00000000, 0x00000043, 0x00000002, func_802D5830, 0x00000002, 0x00000008, 0x00000001, 0x00000028, 0x00000043, 0x00000004, ShowGotItem, 0xFE363C80, 0x00000000, 0x00000000, 0x00000043, 0x00000002, func_802D5830, 0x00000000, 0x00000002, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8024186C_87662C
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000024, 0x00000002, 0xFE363C80, 0xFE363C8A, 0x0000000B, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000046, 0x00000001, D_80241804_8765C4, 0x00000013, 0x00000000, 0x00000014, 0x00000001, 0xFE363C8B, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000003, AddItem, 0xFE363C8A, 0xFE363C80, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000002, AddKeyItem, 0xFE363C8A, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000003, AddBadge, 0xFE363C8A, 0xFE363C80, 0x00000023, 0x00000000, 0x00000008, 0x00000001, 0x0000000F, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8024194C_87670C
.word 0x0000000A, 0x00000002, 0xF8405D28, 0x00000001, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000024, 0x00000002, 0xF8405D28, 0x00000001, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000024, 0x00000002, 0xFE363C85, 0x00000019, 0x00000043, 0x00000005, MakeLerp, 0x0000004B, 0x00000069, 0x00000008, 0x00000004, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000005, tik_05_SetEntityPosition, 0xFD050F80, 0xFE363C85, 0xFE363C80, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000028, 0x00000002, 0xFE363C85, 0x00000002, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0xFE363C80, 0xFFFFFFF6, 0x00000016, 0x00000001, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000005, tik_05_SetEntityPosition, 0xFD050F80, 0xFE363C85, 0xFE363C80, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000028, 0x00000002, 0xFE363C85, 0x00000002, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000043, 0x00000006, PlaySoundAt, 0x00000048, 0x00000000, 0xFE363C85, 0xFE363C80, 0x00000000, 0x00000043, 0x00000006, PlaySoundAt, 0x00002086, 0x00000000, 0xFE363C85, 0xFE363C80, 0x00000000, 0x00000043, 0x00000002, func_8024093C_8756FC, 0xFD050F80, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241B34_8768F4
.word 0x00000024, 0x00000002, 0xFE363C8A, 0x00000124, 0x00000024, 0x00000002, 0xFE363C8B, 0x00000002, 0x00000024, 0x00000002, 0xF8405D13, 0x00000001, 0x00000046, 0x00000001, D_8024186C_87662C, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000008, MakeEntity, 0x802EAE30, 0xFFFFFF47, 0x0000003C, 0xFFFFFFE7, 0x00000000, 0x00000000, D_80000000, 0x00000043, 0x00000002, AssignFlag, 0xF8405D13, 0x00000043, 0x00000002, AssignScript, D_80241B34_8768F4, 0x00000043, 0x00000007, MakeEntity, D_802EA0C4, 0x00000019, 0x00000032, 0x00000000, 0x00000000, D_80000000, 0x00000043, 0x00000002, AssignScript, D_8024194C_87670C, 0x0000000A, 0x00000002, 0xF8405D28, 0x00000000, 0x00000043, 0x00000008, MakeEntity, 0x802EAA54, 0x00000019, 0x0000004B, 0x00000000, 0x00000000, 0x00000064, D_80000000, 0x00000024, 0x00000002, 0xFD050F80, 0xFE363C80, 0x00000012, 0x00000000, 0x00000043, 0x00000008, MakeEntity, 0x802EAA54, 0xFFFFFFDD, 0xFFFFFFF6, 0x00000000, 0x00000000, 0x00000064, D_80000000, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000