.include "macro.inc"

.section .data

glabel D_80242CB0_8746E0
.word 0x400CCCCD, 0x00000000, 0x00000000, 0x428C0000, 0x00000000, 0x00000001, 0x404CCCCD, 0x0000000F, 0x00000001, 0x42B40000, 0x00000000, 0x00000001

glabel D_80242CE0_874710
.word 0x00000043, 0x00000002, DoBasicAI, D_80242CB0_8746E0, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242D00_874730
.word 0x00000000, 0x00170017, 0x00000000, 0x00000000, D_80242CE0_874710, EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x000C0000

glabel D_80242D2C_87475C
.word 0x00000043, 0x00000002, GetEntryID, 0xFE363C80, 0x00000014, 0x00000001, 0xFE363C80, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0x00000118, 0xFFFFFFF6, 0x00000000, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000003, BindNpcAI, 0xFFFFFFFF, D_80242CE0_874710, 0x00000002, 0x00000000, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0x00000118, 0xFFFFFFF6, 0x00000000, 0x00000016, 0x00000001, 0x00000003, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0x00000168, 0xFFFFFFF6, 0x00000000, 0x00000023, 0x00000000, 0x00000003, 0x00000001, 0x00000064, 0x00000043, 0x00000004, GetPlayerPos, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x0000000C, 0x00000002, 0xFE363C80, 0xFFFFFFE2, 0x00000008, 0x00000001, 0x00000001, 0x00000004, 0x00000001, 0x00000064, 0x00000013, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00270103, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000028, 0x00000000, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000200, 0x00000001, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0x00000002, 0x00000043, 0x00000002, GetSelfNpcID, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0x00000037, 0x00000000, 0x00000000, 0x00000012, 0x00000000, 0x00000008, 0x00000001, 0x0000000E, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0x0000003C, 0x00000000, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00270101, 0x00000043, 0x00000003, BindNpcAI, 0xFFFFFFFF, D_80242CE0_874710, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242F48_874978
.word 0x00000043, 0x00000003, BindNpcIdle, 0xFFFFFFFF, D_80242D2C_87475C, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242F6C_87499C
.word 0x00000000, D_80242D00_874730, 0x42200000, 0xC3070000, 0x41200000, 0x00000400, D_80242F48_874978, 0x00000000, 0x00000000, 0x0000010E, 0x8014009A, 0x00050000, 0x008F0005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001999, 0x59980002, 0x3FFF2666, 0x4CCC0002, 0x3FFF3FFF, 0x3FFF0002, 0x33326665, 0x33320002, 0x33327FFF, 0x26660002, 0x26660000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001999, 0x3FFF0002, 0x33322666, 0x33320002, 0x33323FFF, 0x33320002, 0x33326665, 0x33320002, 0x33327FFF, 0x26660002, 0x33320000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00020000, 0x00000028, 0xFFFFFF79, 0x0000000A, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000028, 0xFFFFFF79, 0x0000000A, 0x000000C8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00270101, 0x00270103, 0x00270103, 0x00270103, 0x00270103, 0x00270101, 0x00270105, 0x00270105, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00000000, 0x00000000, 0x00000000, 0x00000000

glabel D_8024315C_874B8C
.word 0x00000001, D_80242D00_874730, 0x430D0000, 0xC3070000, 0x42AA0000, 0x00000400, D_80242F48_874978, 0x00000000, 0x00000000, 0x0000010E, 0x8014009A, 0x00050000, 0x008F0005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001999, 0x59980002, 0x3FFF2666, 0x4CCC0002, 0x3FFF3FFF, 0x3FFF0002, 0x33326665, 0x33320002, 0x33327FFF, 0x26660002, 0x26660000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001999, 0x3FFF0002, 0x33322666, 0x33320002, 0x33323FFF, 0x33320002, 0x33326665, 0x33320002, 0x33327FFF, 0x26660002, 0x33320000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00020000, 0x0000008D, 0xFFFFFF79, 0x00000055, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000008D, 0xFFFFFF79, 0x00000055, 0x000000C8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00270101, 0x00270103, 0x00270103, 0x00270103, 0x00270103, 0x00270101, 0x00270105, 0x00270105, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, D_80242F6C_87499C, 0x1A0F0002, 0x00000001, D_8024315C_874B8C, 0x1A0E0002, 0x00000000, 0x00000000, 0x00000000