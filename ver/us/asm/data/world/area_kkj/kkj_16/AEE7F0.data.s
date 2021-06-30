.include "macro.inc"

.section .data

glabel D_802413E0_AEE7F0
.word 0x00000000, 0x00240018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x001B0000

glabel D_8024140C_AEE81C
.word 0x00000000, 0x00280018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00190000

glabel D_80241438_AEE848
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x0000004D, 0x00000001, 0x00000000, 0x00000043, 0x00000002, SetTimeFreezeMode, 0x00000001, 0x00000043, 0x00000004, PlaySoundAtNpc, 0xFFFFFFFF, 0x00000262, 0x00000000, 0x00000043, 0x0000000A, ShowEmote, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000014, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x00000003, NpcFacePlayer, 0xFFFFFFFF, 0x00000000, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000003, PlayerFaceNpc, 0xFFFFFFFF, 0x00000000, 0x00000043, 0x00000002, SetPlayerAnimation, 0x000C0005, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580001, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00580008, 0x00580001, 0x00000000, 0x00140174, 0x00000043, 0x00000005, func_802406D8_AEDAE8, 0xFFFFFFFF, 0xFE363C83, 0xFE363C80, 0xFE363C82, 0x0000000B, 0x00000002, 0xFE363C83, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580006, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0xF24A8E80, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFE363C80, 0xFE363C82, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580001, 0x00000013, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00580008, 0x00580001, 0x00000000, 0x00140175, 0x00000043, 0x00000002, SetPlayerAnimation, 0x000C0017, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000004, GotoMapSpecial, 0x80244828, 0x0000000B, 0x0000000D, 0x00000008, 0x00000001, 0x00000064, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241630_AEEA40
.word 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580004, 0x00000056, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000005, func_80240060_AED470, 0xFE363C80, 0x00000055, 0x0000003C, 0x00000026, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000003, BindNpcAI, 0xFFFFFFFF, D_80241438_AEE848, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0xF24A814D, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580001, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000005A, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0x00000118, 0x00000032, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580001, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000010E, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0x00000050, 0x00000032, 0x00000000, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802417CC_AEEBDC
.word 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580004, 0x00000056, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000005, func_80240060_AED470, 0xFE363C80, 0x00000055, 0x0000003C, 0x00000026, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000003, BindNpcAI, 0xFFFFFFFF, D_80241438_AEE848, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0xF24A8280, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFF08, 0xFFFFFFB0, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFFAC, 0xFFFFFFB0, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFFAC, 0xFFFFFFF1, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFFA8, 0xFFFFFFF1, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFFA8, 0x00000032, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFF04, 0x00000032, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFF04, 0xFFFFFFF1, 0x00000000, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFF08, 0xFFFFFFF1, 0x00000000, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241978_AEED88
.word 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580004, 0x00000056, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000005, func_80240060_AED470, 0xFE363C80, 0x00000055, 0x0000003C, 0x00000026, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000003, BindNpcAI, 0xFFFFFFFF, D_80241438_AEE848, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0xF24A814D, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580001, 0x00000008, 0x00000001, 0x0000001E, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000010E, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFDA8, 0x00000032, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580001, 0x00000008, 0x00000001, 0x0000001E, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000005A, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00580004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFE5C, 0x00000032, 0x00000000, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241B14_AEEF24
.word 0x0000000B, 0x00000002, 0xF5DE0180, 0xFFFFFFCA, 0x00000043, 0x00000002, RemoveNpc, 0xFFFFFFFF, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFD44, 0x00000000, 0x00000032, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000010E, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241B88_AEEF98
.word 0x0000000B, 0x00000002, 0xF5DE0180, 0xFFFFFFCA, 0x00000043, 0x00000002, RemoveNpc, 0xFFFFFFFF, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFD1C, 0x00000000, 0x00000032, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000005A, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241BFC_AEF00C
.word 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0x000000B4, 0x00000000, 0x00000032, 0x00000043, 0x00000003, BindNpcIdle, 0xFFFFFFFF, D_80241630_AEEA40, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241C3C_AEF04C
.word 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000200, 0x00000001, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFF06, 0x00000000, 0xFFFFFFF1, 0x00000043, 0x00000003, BindNpcIdle, 0xFFFFFFFF, D_802417CC_AEEBDC, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241CAC_AEF0BC
.word 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFE02, 0x00000000, 0x00000032, 0x00000043, 0x00000003, BindNpcIdle, 0xFFFFFFFF, D_80241978_AEED88, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241CEC_AEF0FC
.word 0x005A0000, 0x005A0002, 0x005A0004, 0x005A0008, 0x005A000A, 0x005A0013, 0xFFFFFFFF

glabel D_80241D08_AEF118
.word 0x00580000, 0x00580001, 0x00580004, 0x00580006, 0x00580008, 0x00580012, 0x00580014, 0xFFFFFFFF

glabel D_80241D28_AEF138
.word 0x00000000, D_802413E0_AEE7F0, 0x00000000, 0xC3FA0000, 0x00000000, 0x00000F0D, D_80241B14_AEEF24, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x00000000, 0x00000000, D_80241CEC_AEF0FC, 0x00000000, 0x00000001, D_8024140C_AEE81C, 0x00000000, 0xC3FA0000, 0x00000000, 0x00000F0D, D_80241B88_AEEF98, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00000000, 0x00000000, D_80241D08_AEF118, 0x00000000, 0x00000002, D_8024140C_AEE81C, 0x00000000, 0xC3FA0000, 0x00000000, 0x00000F0D, D_80241BFC_AEF00C, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00000000, 0x00000000, D_80241D08_AEF118, 0x00000000, 0x00000003, D_8024140C_AEE81C, 0x00000000, 0xC3FA0000, 0x00000000, 0x00000F0D, D_80241C3C_AEF04C, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00000000, 0x00000000, D_80241D08_AEF118, 0x00000000, 0x00000004, D_8024140C_AEE81C, 0x00000000, 0xC3FA0000, 0x00000000, 0x00000F0D, D_80241CAC_AEF0BC, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00000000, 0x00000000, D_80241D08_AEF118, 0x00000000, 0x00000005, D_80241D28_AEF138, 0x00000000, 0x00000000, 0x00000000, 0x00000000

glabel D_802426F0_AEFB00
.word 0x00000000, 0x00240018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x001B0000

glabel D_8024271C_AEFB2C
.word 0x005A0000, 0x005A0002, 0x005A0003, 0x005A0004, 0x005A0006, 0x005A0007, 0x005A0009, 0x005A000A, 0x005A000B, 0x005A001A, 0xFFFFFFFF

glabel D_80242748_AEFB58
.word 0x0000000A, 0x00000002, 0xF8405D65, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000010, 0x0014013A, 0x00000043, 0x00000004, ShowGotItem, 0x00000083, 0x00000001, 0x00000002, 0x00000024, 0x00000002, 0xF8405D65, 0x00000001, 0x00000012, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000010, 0x0014013B, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802427E0_AEFBF0
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000003, GetSelfVar, 0x00000000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000000, 0x00140136, 0x00000043, 0x00000003, SetSelfVar, 0x00000000, 0x00000001, 0x00000012, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000000, 0x00140137, 0x00000043, 0x00000003, SetSelfVar, 0x00000000, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802428AC_AEFCBC
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000003, GetSelfVar, 0x00000000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000000, 0x00140138, 0x00000043, 0x00000003, SetSelfVar, 0x00000000, 0x00000001, 0x00000012, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000000, 0x00140139, 0x00000043, 0x00000003, SetSelfVar, 0x00000000, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242978_AEFD88
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000001, func_80240EF4_AEE304, 0x0000004D, 0x00000001, 0x00000000, 0x00000043, 0x00000002, SetTimeFreezeMode, 0x00000001, 0x00000043, 0x00000004, PlaySoundAtNpc, 0xFFFFFFFF, 0x00000262, 0x00000000, 0x00000043, 0x0000000A, ShowEmote, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000014, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x00000003, NpcFacePlayer, 0xFFFFFFFF, 0x00000000, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000003, PlayerFaceNpc, 0xFFFFFFFF, 0x00000000, 0x00000043, 0x00000002, SetPlayerAnimation, 0x000C0005, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0002, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000000, 0x00140174, 0x00000043, 0x00000005, func_80240F10_AEE320, 0xFFFFFFFF, 0xFE363C83, 0xFE363C80, 0xFE363C82, 0x0000000B, 0x00000002, 0xFE363C83, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0007, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0xF24A8E80, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFE363C80, 0xFE363C82, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0002, 0x00000013, 0x00000000, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x005A000A, 0x005A0002, 0x00000000, 0x00140175, 0x00000043, 0x00000002, SetPlayerAnimation, 0x000C0017, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000004, GotoMapSpecial, 0x80244848, 0x0000000B, 0x0000000D, 0x00000008, 0x00000001, 0x00000064, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242B7C_AEFF8C
.word 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000002, func_80240EC8_AEE2D8, 0xFE363C81, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000043, 0x00000003, SetSelfEnemyFlagBits, 0x08000000, 0x00000001, 0x00000043, 0x00000005, func_80240850_AEDC60, 0xFE363C80, 0x00000055, 0x0000003C, 0x00000026, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000003, BindNpcAI, 0xFFFFFFFF, D_80242978_AEFD88, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000012, 0x00000000, 0x00000043, 0x00000003, SetSelfEnemyFlagBits, 0x08000000, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242C54_AF0064
.word 0x00000044, 0x00000001, D_80242B7C_AEFF8C, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242C70_AF0080
.word 0x00000044, 0x00000001, D_80242B7C_AEFF8C, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0004, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0xF24A814D, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0002, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000005A, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0x00000118, 0x00000032, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0002, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000010E, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0x00000050, 0x00000032, 0x00000000, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242D98_AF01A8
.word 0x00000044, 0x00000001, D_80242B7C_AEFF8C, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0004, 0x00000043, 0x00000003, SetNpcSpeed, 0xFFFFFFFF, 0xF24A814D, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0002, 0x00000008, 0x00000001, 0x0000001E, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000010E, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFDA8, 0x00000032, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0002, 0x00000008, 0x00000001, 0x0000001E, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000005A, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x005A0004, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0xFFFFFE5C, 0x00000032, 0x00000000, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242EC0_AF02D0
.word 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFD44, 0x00000000, 0x00000032, 0x00000043, 0x00000003, SetNpcYaw, 0xFFFFFFFF, 0x0000005A, 0x00000043, 0x00000003, BindNpcIdle, 0xFFFFFFFF, D_80242C54_AF0064, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_80242748_AEFB58, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242F28_AF0338
.word 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0x000000B4, 0x00000000, 0x00000032, 0x00000043, 0x00000003, BindNpcIdle, 0xFFFFFFFF, D_80242C70_AF0080, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_802427E0_AEFBF0, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242F7C_AF038C
.word 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFE02, 0x00000000, 0x00000032, 0x00000043, 0x00000003, BindNpcIdle, 0xFFFFFFFF, D_80242D98_AF01A8, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_802428AC_AEFCBC, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80242FD0_AF03E0
.word 0x00000000, D_802426F0_AEFB00, 0x00000000, 0xC3FA0000, 0x00000000, 0x00400D0D, D_80242EC0_AF02D0, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x00000000, 0x00000000, D_8024271C_AEFB2C, 0x00000000, 0x00000001, D_802426F0_AEFB00, 0x00000000, 0xC3FA0000, 0x00000000, 0x00000D0D, D_80242F28_AF0338, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x00000000, 0x00000000, D_8024271C_AEFB2C, 0x00000000, 0x00000002, D_802426F0_AEFB00, 0x00000000, 0xC3FA0000, 0x00000000, 0x00000D0D, D_80242F7C_AF038C, 0x00000000, 0x00000000, 0x00000000, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x00000000, 0x00000000, D_8024271C_AEFB2C, 0x00000000, 0x00000003, D_80242FD0_AF03E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
