.include "macro.inc"

.section .data

glabel D_80242540_B9FEA0
.word 0x3F800000, 0x0000001E, 0x0000000A, 0x42F00000, 0x00000000, 0x00000005, 0x40900000, 0x0000005A, 0x00000005, 0x43200000, 0x00000000, 0x00000001

glabel D_80242570_B9FED0
.word 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000040, 0x00000001, 0x00000043, 0x00000003, func_80240DF0_B9E750, D_80242540_B9FEA0, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802425AC_B9FF0C
.word 0x00000000, 0x00140016, 0x00000000, 0x00000000, D_80242570_B9FED0, EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x000B0000

glabel D_802425D8_B9FF38
.word 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802425E8_B9FF48
.word 0x00000000, 0x002A001A, D_802425D8_B9FF38, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_80242614_B9FF74
.word 0x00000000

glabel D_80242618_B9FF78
.word 0x00000043, 0x00000004, ShowGotItem, 0xFE363C80, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000004, ShowGotItem, 0xFE363C80, 0x00000001, 0x00000010, 0x00000002, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242678_B9FFD8
.word 0x0000000A, 0x00000002, 0xF8405F22, 0x00000000, 0x00000043, 0x00000004, PlaySoundAtNpc, 0xFFFFFFFF, 0x00000321, 0x00000000, 0x00000043, 0x00000004, PlaySoundAtNpc, 0xFFFFFFFF, 0x00000323, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00990205, 0x00000008, 0x00000001, 0x0000002D, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00990202, 0x00000043, 0x00000004, SetNpcCollisionSize, 0xFFFFFFFF, 0x0000002D, 0x0000001A, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00990203, 0x00990202, 0x00000000, 0x000E000F, 0x00000024, 0x00000002, 0xFE363C80, 0x0000002D, 0x00000024, 0x00000002, 0xFE363C81, 0x00000001, 0x00000046, 0x00000001, D_80242618_B9FF78, 0x00000043, 0x00000002, AddKeyItem, 0x0000002D, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00990203, 0x00990202, 0x00000000, 0x000E0010, 0x00000024, 0x00000002, 0xF8405F22, 0x00000001, 0x00000043, 0x00000003, SetTattleString, 0x00000000, 0x001A00A3, 0x00000012, 0x00000000, 0x00000014, 0x00000001, 0xF5DE0180, 0x00000018, 0x00000001, 0xFFFFFFF1, 0x00000024, 0x00000002, 0xFE363C80, 0x000E0011, 0x00000024, 0x00000002, 0xFE363C81, 0x000E0012, 0x00000018, 0x00000001, 0x00000027, 0x00000024, 0x00000002, 0xFE363C80, 0x000E0013, 0x00000024, 0x00000002, 0xFE363C81, 0x000E0014, 0x0000001C, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x000E0015, 0x00000024, 0x00000002, 0xFE363C81, 0x000E0016, 0x00000023, 0x00000000, 0x0000000A, 0x00000002, 0xF9718884, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0x00000000, 0x00990203, 0x00990202, 0x00000000, 0xFE363C80, 0x00000024, 0x00000002, 0xF9718884, 0x00000001, 0x00000012, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0x00000000, 0x00990203, 0x00990202, 0x00000000, 0xFE363C81, 0x00000024, 0x00000002, 0xF9718884, 0x00000000, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802428D8_BA0238
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_80242678_B9FFD8, 0x0000000A, 0x00000002, 0xF8405F22, 0x00000000, 0x00000043, 0x00000004, SetNpcCollisionSize, 0xFFFFFFFF, 0x00000019, 0x00000019, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00990207, 0x00000043, 0x00000003, SetTattleString, 0x00000000, 0x001A00A2, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242954_BA02B4
.word 0x00000001, D_802425AC_B9FF0C, 0x43700000, 0x00000000, 0xC3700000, 0x00400400, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80050084, 0x000A0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001999, 0x59980002, 0x3FFF2666, 0x4CCC0002, 0x3FFF3FFF, 0x3FFF0002, 0x33326665, 0x33320002, 0x33327FFF, 0x26660002, 0x26660000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001999, 0x3FFF0002, 0x33322666, 0x33320002, 0x33323FFF, 0x33320002, 0x33326665, 0x33320002, 0x33327FFF, 0x26660002, 0x33320000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020000, 0x000000F0, 0x00000000, 0xFFFFFF10, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000F0, 0x00000000, 0xFFFFFF10, 0x000000C8, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x002B0102, 0x002B0102, 0x002B0103, 0x002B0103, 0x002B0101, 0x002B0101, 0x002B0108, 0x002B0108, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x00000001, 0x00000000, 0x00000000, 0x00000000

glabel D_80242B44_BA04A4
.word 0x00000000, D_802425E8_B9FF48, 0x00000000, 0x42000000, 0x00000000, 0x00000801, D_802428D8_BA0238, 0x00000000, 0x00000000, 0x0000010E, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00990202, 0x0099020E, 0x0099020E, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00000000, 0x00000000, 0x00000000, 0x001A00A3, 0x00000001, D_80242954_BA02B4, 0x0D040001, 0x00000001, D_80242B44_BA04A4, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000