.include "macro.inc"

.section .data

glabel D_80284070_7E4EF0
.word 0x00000043, 0x00000001, func_80282414, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8028408C_7E4F0C
.word 0x00000043, 0x00000004, GetPlayerPos, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0x00000024, 0x00000002, 0xFE363C8B, 0xFE363C83, 0x00000024, 0x00000002, 0xFE363C8D, 0xFE363C84, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C83, 0xFE363C84, 0xFE363C8E, 0x00000043, 0x00000004, func_802D2884, 0xFE363C85, 0xFE363C86, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80284104_7E4F84
.word 0x00000043, 0x00000001, func_80282314, 0x00000043, 0x00000001, func_802827CC, 0x00000043, 0x00000004, GetPlayerPos, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0x00000024, 0x00000002, 0xFE363C8B, 0xFE363C85, 0x00000024, 0x00000002, 0xFE363C8D, 0xFE363C86, 0x00000024, 0x00000002, 0xFE363C8E, 0x00000014, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C85, 0xFE363C86, 0xFE363C8E, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8028418C_7E500C
.word 0x00000043, 0x00000002, func_80282594, 0xF24A81B0, 0x00000043, 0x00000004, GetPlayerPos, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0x00000024, 0x00000002, 0xFE363C8B, 0xFE363C85, 0x00000024, 0x00000002, 0xFE363C8D, 0xFE363C86, 0x00000024, 0x00000002, 0xFE363C8E, 0x0000000A, 0x00000043, 0x00000007, func_802CB008, 0x00000000, 0x00000001, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0xFE363C8E, 0x00000043, 0x00000002, func_80282594, 0xFFFFFFFF, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80284228_7E50A8
.word 0x00000043, 0x00000004, GetPlayerPos, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0x00000024, 0x00000002, 0xFE363C8B, 0xFE363C87, 0x00000024, 0x00000002, 0xFE363C8D, 0xFE363C88, 0x00000024, 0x00000002, 0xFE363C8E, 0x0000000A, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C87, 0xFE363C88, 0xFE363C8E, 0x00000043, 0x00000004, func_802D2884, 0xFE363C89, 0xFE363C8A, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802842B0_7E5130
.word 0x00000043, 0x00000001, func_80282314, 0x00000043, 0x00000001, func_802827CC, 0x00000043, 0x00000004, GetPlayerPos, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0x00000024, 0x00000002, 0xFE363C8B, 0xFE363C89, 0x00000024, 0x00000002, 0xFE363C8D, 0xFE363C8A, 0x00000024, 0x00000002, 0xFE363C8E, 0x00000014, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C89, 0xFE363C8A, 0xFE363C8E, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80284338_7E51B8
.word 0x00000043, 0x00000002, func_80282594, 0xF24A81B0, 0x00000043, 0x00000004, GetPlayerPos, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0x00000024, 0x00000002, 0xFE363C8B, 0xFE363C89, 0x00000024, 0x00000002, 0xFE363C8D, 0xFE363C8A, 0x00000024, 0x00000002, 0xFE363C8E, 0x0000000A, 0x00000043, 0x00000007, func_802CB008, 0x00000000, 0x00000001, 0xFE363C8B, 0xFE363C8C, 0xFE363C8D, 0xFE363C8E, 0x00000043, 0x00000002, func_80282594, 0xFFFFFFFF, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802843D4_7E5254
.word 0x00000043, 0x00000001, func_80282314, 0x00000024, 0x00000002, 0xFE363C82, 0xFE363C8B, 0x00000024, 0x00000002, 0xFE363C83, 0xFE363C80, 0x00000014, 0x00000001, 0xFE363C80, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x0000005A, 0x0000000A, 0x00000005, 0x00000043, 0x00000002, func_802822A8, D_A0000000, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000005, MakeLerp, 0x0000005A, 0x00000000, 0x0000000A, 0x00000002, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x0000005A, 0x0000000A, 0x00000005, 0x00000043, 0x00000002, func_802822A8, D_A0000000, 0x00000016, 0x00000001, 0x00000003, 0x00000043, 0x00000005, MakeLerp, 0x0000005A, 0x00000000, 0x0000000A, 0x00000002, 0x00000023, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000044, 0x00000001, 0xFE363C82, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000014, 0x00000001, 0xFE363C83, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000002, func_802822A8, 0xA0000001, 0x00000016, 0x00000001, 0x00000003, 0x00000043, 0x00000002, func_802822A8, 0xA0000001, 0x00000023, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80284584_7E5404
.word 0x00000024, 0x00000002, 0xFE363C82, 0xFE363C8C, 0x00000014, 0x00000001, 0xFE363C80, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x0000005A, 0x00000014, 0x00000005, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000005, MakeLerp, 0x0000005A, 0x00000000, 0x00000014, 0x00000002, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x0000005A, 0x00000014, 0x00000005, 0x00000016, 0x00000001, 0x00000003, 0x00000043, 0x00000005, MakeLerp, 0x0000005A, 0x00000000, 0x00000014, 0x00000002, 0x00000023, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000044, 0x00000001, 0xFE363C82, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802846AC_7E552C
.word 0x00000024, 0x00000002, 0xFE363C82, 0xFE363C8D, 0x00000014, 0x00000001, 0xFE363C80, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x0000005A, 0x00000014, 0x00000002, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000005, MakeLerp, 0x0000005A, 0x00000000, 0x0000000A, 0x00000005, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x0000005A, 0x00000014, 0x00000002, 0x00000016, 0x00000001, 0x00000003, 0x00000043, 0x00000005, MakeLerp, 0x0000005A, 0x00000000, 0x0000000A, 0x00000005, 0x00000023, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000044, 0x00000001, 0xFE363C82, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802847D4_7E5654
.word 0x0000004D, 0x00000001, 0x00000000, 0x00000043, 0x00000002, GetPlayerActionState, 0xFE363C83, 0x00000024, 0x00000002, 0xFE363C84, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C83, 0x00000000, 0x00000027, 0x00000002, 0xFE363C84, 0x00000001, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C83, 0x00000001, 0x00000027, 0x00000002, 0xFE363C84, 0x00000001, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C83, 0x00000002, 0x00000027, 0x00000002, 0xFE363C84, 0x00000001, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C84, 0x00000000, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_80282314, 0x00000043, 0x00000001, func_80282324, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, func_80282338, 0x00000001, 0x00000043, 0x00000001, func_80282634, 0x00000043, 0x00000001, func_80282774, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000001, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000001, func_802827CC, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8E, 0x00000000, 0x00000046, 0x00000001, 0xFE363C8E, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C80, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000001, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_802827CC, 0x00000044, 0x00000001, D_8028418C_7E500C, 0x00000043, 0x00000001, func_802827CC, 0x00000040, 0x00000002, 0xFE363C82, 0x000000FF, 0x00000024, 0x00000002, 0xFE363C8E, 0x0000000A, 0x00000014, 0x00000001, 0xFE363C82, 0x00000016, 0x00000001, 0x00000000, 0x00000046, 0x00000001, D_8028408C_7E4F0C, 0x00000016, 0x00000001, 0x00000002, 0x00000046, 0x00000001, D_8028408C_7E4F0C, 0x00000016, 0x00000001, 0x00000004, 0x00000046, 0x00000001, D_8028408C_7E4F0C, 0x00000016, 0x00000001, 0x00000005, 0x00000024, 0x00000002, 0xFE363C8E, 0x00000014, 0x00000046, 0x00000001, D_8028408C_7E4F0C, 0x00000016, 0x00000001, 0x00000007, 0x00000024, 0x00000002, 0xFE363C8E, 0x00000014, 0x00000046, 0x00000001, D_8028408C_7E4F0C, 0x00000023, 0x00000000, 0x00000043, 0x00000001, func_802827CC, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000001, func_80282868, 0x0000000B, 0x00000002, 0xFE363C8F, 0x00000000, 0x00000045, 0x00000002, D_80284070_7E4EF0, 0xFE363C85, 0x00000043, 0x00000003, func_802823B0, 0x00000000, 0xFE363C85, 0x00000013, 0x00000000, 0x00000043, 0x00000001, SetEntityHideMode1, 0x0000000B, 0x00000002, 0xFE363C8F, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_802827CC, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000040, 0x00000002, 0xFE363C82, 0x00000200, 0x0000000B, 0x00000002, 0xFE363C8C, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8C, 0xFE363C85, 0x00000012, 0x00000000, 0x00000045, 0x00000002, D_80284584_7E5404, 0xFE363C85, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8C, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000000, 0xFE363C85, 0x00000013, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000040, 0x00000002, 0xFE363C82, 0x00000100, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8B, 0xFE363C85, 0x00000012, 0x00000000, 0x00000045, 0x00000002, D_802843D4_7E5254, 0xFE363C85, 0x00000013, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000003, 0xFE363C85, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFC, 0x00000040, 0x00000001, 0x00000043, 0x00000002, func_8028236C, 0x00000003, 0x00000043, 0x00000001, SetEntityHideMode2, 0x00000045, 0x00000002, D_80284104_7E4F84, 0xFE363C87, 0x00000043, 0x00000003, func_802823B0, 0x00000003, 0xFE363C87, 0x00000008, 0x00000001, 0x0000000A, 0x00000043, 0x00000001, func_80282314, 0x00000043, 0x00000001, func_802827CC, 0x00000043, 0x00000003, func_80281C20, 0xFE363C85, 0xFE363C86, 0x00000043, 0x00000002, func_8028236C, 0x00000003, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFC, 0x00000040, 0x00000000, 0x00000043, 0x00000001, func_80281C84, 0x00000024, 0x00000002, 0xFE363C80, 0x00000001, 0x00000040, 0x00000002, 0xFE363C82, 0x00000100, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8B, 0xFE363C85, 0x00000012, 0x00000000, 0x00000045, 0x00000002, D_802843D4_7E5254, 0xFE363C85, 0x00000013, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000003, 0xFE363C85, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000040, 0x00000002, 0xFE363C82, 0x00000400, 0x0000000B, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000003, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8D, 0xFE363C85, 0x00000012, 0x00000000, 0x00000045, 0x00000002, D_802846AC_7E552C, 0xFE363C85, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000001, 0xFE363C85, 0x00000013, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000001, 0x0000000B, 0x00000002, 0xFE363C8E, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8E, 0xFE363C85, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8E, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000002, 0xFE363C85, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8E, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000002, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8C, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000000, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000001, 0x00000013, 0x00000000, 0x00000043, 0x00000002, func_80282338, 0x00000000, 0x00000002, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000043, 0x00000002, func_80282338, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80284F80_7E5E00
.word 0x0000004D, 0x00000001, 0x00000000, 0x00000043, 0x00000002, GetPlayerActionState, 0xFE363C83, 0x00000024, 0x00000002, 0xFE363C84, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C83, 0x00000000, 0x00000027, 0x00000002, 0xFE363C84, 0x00000001, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C83, 0x00000001, 0x00000027, 0x00000002, 0xFE363C84, 0x00000001, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C83, 0x00000002, 0x00000027, 0x00000002, 0xFE363C84, 0x00000001, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C84, 0x00000000, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_80282314, 0x00000043, 0x00000001, func_80282324, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, func_80282338, 0x00000002, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000001, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000001, func_802827CC, 0x00000024, 0x00000002, 0xFE363C80, 0x00000002, 0x0000000B, 0x00000002, 0xFE363C8E, 0x00000000, 0x00000046, 0x00000001, 0xFE363C8E, 0x00000013, 0x00000000, 0x0000000A, 0x00000002, 0xFE363C80, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000001, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_802827CC, 0x00000044, 0x00000001, D_80284338_7E51B8, 0x00000043, 0x00000001, func_802827CC, 0x00000040, 0x00000002, 0xFE363C82, 0x000000FF, 0x00000014, 0x00000001, 0xFE363C82, 0x00000016, 0x00000001, 0x00000001, 0x00000046, 0x00000001, D_80284228_7E50A8, 0x00000016, 0x00000001, 0x00000006, 0x00000046, 0x00000001, D_80284228_7E50A8, 0x00000016, 0x00000001, 0x00000003, 0x00000046, 0x00000001, D_80284228_7E50A8, 0x00000023, 0x00000000, 0x00000043, 0x00000001, func_802827CC, 0x00000043, 0x00000001, func_80282868, 0x00000024, 0x00000002, 0xFE363C80, 0x00000003, 0x00000040, 0x00000002, 0xFE363C82, 0x00000200, 0x0000000B, 0x00000002, 0xFE363C8C, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8C, 0xFE363C85, 0x00000012, 0x00000000, 0x00000045, 0x00000002, D_80284584_7E5404, 0xFE363C85, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8C, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000000, 0xFE363C85, 0x00000013, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000003, 0x00000040, 0x00000002, 0xFE363C82, 0x00000400, 0x0000000B, 0x00000002, 0xFE363C8D, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8D, 0xFE363C85, 0x00000012, 0x00000000, 0x00000045, 0x00000002, D_802846AC_7E552C, 0xFE363C85, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000001, 0xFE363C85, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000001, 0x00000013, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000002, 0x00000040, 0x00000002, 0xFE363C82, 0x00000100, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000045, 0x00000002, 0xFE363C8B, 0xFE363C85, 0x00000012, 0x00000000, 0x00000045, 0x00000002, D_802843D4_7E5254, 0xFE363C85, 0x00000013, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000001, 0xFE363C85, 0x00000043, 0x00000002, func_8028236C, 0x00000001, 0x00000043, 0x00000001, func_80282868, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFC, 0x00000040, 0x00000001, 0x00000043, 0x00000001, func_80282314, 0x00000043, 0x00000001, func_802827CC, 0x00000043, 0x00000003, func_80281C20, 0xFE363C89, 0xFE363C8A, 0x00000045, 0x00000002, D_802842B0_7E5130, 0xFE363C85, 0x00000043, 0x00000003, func_802823B0, 0x00000001, 0xFE363C85, 0x00000043, 0x00000001, SetEntityHideMode0, 0x00000024, 0x00000002, 0xFE363C80, 0x00000003, 0x0000000B, 0x00000002, 0xFE363C8F, 0x00000000, 0x00000045, 0x00000002, D_80284070_7E4EF0, 0xFE363C85, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8F, 0x00000000, 0x00000043, 0x00000003, func_802823B0, 0x00000002, 0xFE363C85, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C8F, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000002, 0x00000013, 0x00000000, 0x00000043, 0x00000002, func_8028236C, 0x00000001, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFC, 0x00000040, 0x00000000, 0x00000043, 0x00000001, func_80281C84, 0x00000043, 0x00000001, func_802827CC, 0x00000024, 0x00000002, 0xFE363C80, 0x00000003, 0x00000040, 0x00000002, 0xFE363C82, 0x00000100, 0x0000000B, 0x00000002, 0xFE363C82, 0x00000000, 0x00000046, 0x00000001, 0xFE363C8B, 0x00000012, 0x00000000, 0x00000046, 0x00000001, D_802843D4_7E5254, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_802827CC, 0x00000024, 0x00000002, 0xFE363C80, 0x00000003, 0x0000000B, 0x00000002, 0xFE363C8E, 0x00000000, 0x00000046, 0x00000001, 0xFE363C8E, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_80282700, 0x00000043, 0x00000001, func_802827A8, 0x00000043, 0x00000002, func_80282338, 0x00000000, 0x00000002, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000043, 0x00000002, func_80282338, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000

glabel D_80285640_7E64C0
.float 0.04, 0.04, 0.08, 0.16, 0.21, 0.4, 0.6, 0.72, 0.84, 0.92, 0.96, 0.96, 1.0

glabel D_80285674_7E64F4
.word 0x00000024, 0x00000002, 0xFE363C8A, 0xFE363C80, 0x00000024, 0x00000002, 0xFE363C8B, 0xFE363C81, 0x00000043, 0x00000001, func_80282E30, 0x00000043, 0x00000004, func_802D2884, 0xFE363C83, 0xFE363C85, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C89, 0x00000002, 0x00000043, 0x00000001, func_80282880, 0x00000013, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000000, 0x00000043, 0x00000003, CheckActionState, 0xFE363C8D, 0x00000002, 0x0000000A, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000003, CheckActionState, 0xFE363C8D, 0x00000014, 0x0000000A, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C89, 0x00000000, 0x00000043, 0x00000002, SetPlayerActionState, 0x00000000, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000027, 0x00000002, 0xFE363C8C, 0x00000001, 0x00000043, 0x00000001, func_80283174, 0x0000000A, 0x00000002, 0xFE363C8D, 0x00000001, 0x00000004, 0x00000001, 0x00000001, 0x00000013, 0x00000000, 0x00000043, 0x00000002, GetPlayerActionState, 0xFE363C8D, 0x0000000A, 0x00000002, 0xFE363C8D, 0x00000003, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, SetPlayerActionState, 0x00000000, 0x00000002, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000043, 0x00000002, SetPlayerActionState, 0x00000014, 0x00000043, 0x00000001, func_80282880, 0x0000000C, 0x00000002, 0xFE363C8C, 0x00000008, 0x00000008, 0x00000001, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000001, func_80283080, 0x00000043, 0x00000002, PlaySound, 0x00002088, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000001, 0x00000043, 0x00000001, func_802828DC, 0x00000043, 0x00000001, func_80282C40, 0x00000056, 0x00000000, 0x00000008, 0x00000001, 0x00000002, 0x00000043, 0x00000003, CheckActionState, 0xFE363C8D, 0x00000014, 0x0000000B, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000003, func_80283240, 0xFE363C8D, D_80285674_7E64F4, 0x0000000A, 0x00000002, 0xFE363C8D, 0x00000000, 0x00000043, 0x00000002, SetPlayerActionState, 0x00000000, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000057, 0x00000000, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000043, 0x00000001, CheckRideScriptForEnterExit, 0x00000043, 0x00000003, UseEntryHeading, 0x0000003C, 0x0000000F, 0x0000000A, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000043, 0x00000001, TeleportPartnerToPlayer, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C81, 0xFE363C83, 0x0000000F, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8F, 0xFE363C80, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000001, 0x00000024, 0x00000002, 0xFE363C84, 0x0000000F, 0x00000046, 0x00000001, 0xFE363C8B, 0x00000024, 0x00000002, 0xFE363C80, 0xFE363C8F, 0x00000013, 0x00000000, 0x00000044, 0x00000001, 0xFE363C80, 0x00000043, 0x00000001, func_802D2148, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000043, 0x00000001, CheckRideScriptForEnterExit, 0x00000043, 0x00000003, UseEntryHeading, 0x00000028, 0x0000000F, 0x0000000A, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000043, 0x00000001, TeleportPartnerToPlayer, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C81, 0xFE363C83, 0x0000000F, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8F, 0xFE363C80, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000001, 0x00000024, 0x00000002, 0xFE363C84, 0x0000000F, 0x00000046, 0x00000001, 0xFE363C8B, 0x00000024, 0x00000002, 0xFE363C80, 0xFE363C8F, 0x00000013, 0x00000000, 0x00000044, 0x00000001, 0xFE363C80, 0x00000043, 0x00000001, func_802D2148, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000043, 0x00000001, CheckRideScriptForEnterExit, 0x00000043, 0x00000003, UseEntryHeading, 0xFE363C81, 0xFE363C84, 0x0000000A, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000043, 0x00000001, TeleportPartnerToPlayer, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C81, 0xFE363C83, 0xFE363C84, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8F, 0xFE363C80, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000001, 0x00000046, 0x00000001, 0xFE363C8B, 0x00000024, 0x00000002, 0xFE363C80, 0xFE363C8F, 0x00000013, 0x00000000, 0x00000044, 0x00000001, 0xFE363C80, 0x00000043, 0x00000001, func_802D2148, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000001, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000043, 0x00000001, CheckRideScriptForEnterExit, 0x00000043, 0x00000001, EnterPlayerPostPipe, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000043, 0x00000001, SetPlayerPositionFromSaveData, 0x00000043, 0x00000002, ClearPartnerMoveHistory, 0xFFFFFFFC, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000043, 0x00000001, CheckRideScriptForEnterExit, 0x0000000A, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C81, 0xFE363C83, 0x0000000F, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000000, 0x00000024, 0x00000002, 0xFE363C84, 0x0000000F, 0x00000046, 0x00000001, 0xFE363C8B, 0x00000013, 0x00000000, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupSingleDoor, 0x00000046, 0x00000001, D_80285EEC_7E6D6C, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupSingleDoor, 0x00000046, 0x00000001, D_802861B0_7E7030, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupSplitSingleDoor, 0x00000046, 0x00000001, D_80285EEC_7E6D6C, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupSplitSingleDoor, 0x00000046, 0x00000001, D_802861B0_7E7030, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupDoubleDoors, 0x00000046, 0x00000001, D_80285EEC_7E6D6C, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupDoubleDoors, 0x00000046, 0x00000001, D_802861B0_7E7030, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupSplitDoubleDoors, 0x00000046, 0x00000001, D_80285EEC_7E6D6C, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, SetupSplitDoubleDoors, 0x00000046, 0x00000001, D_802861B0_7E7030, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80285EEC_7E6D6C
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000001, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000024, 0x00000002, 0xFE363C89, 0xFE363C80, 0x00000043, 0x00000006, GetEntryCoords, 0xFE363C80, 0xFE363C8C, 0xFE363C8D, 0xFE363C8E, 0xFE363C8B, 0x00000027, 0x00000002, 0xFE363C8B, 0x000000B4, 0x00000043, 0x00000003, InterpPlayerYaw, 0xFE363C8B, 0x00000002, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0xFE363C81, 0x7FFFFE00, 0x00000043, 0x00000006, PlaySoundAt, 0x90000000, 0x00000000, 0xFE363C8C, 0xFE363C8D, 0xFE363C8E, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x00000050, 0x0000000A, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000030, 0x00000001, 0xFE363C82, 0x00000005, 0x00000001, 0x00000000, 0x00000031, 0x00000001, 0xFE363C8A, 0x0000000A, 0x00000002, 0xFE363C8A, 0xFFFFFFFF, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000006, RotateModel, 0xFE363C8A, 0xFE363C80, 0x00000000, 0x00000001, 0x00000000, 0x00000006, 0x00000000, 0x00000030, 0x00000001, 0xFE363C83, 0x00000005, 0x00000001, 0x00000000, 0x00000031, 0x00000001, 0xFE363C8A, 0x0000000A, 0x00000002, 0xFE363C8A, 0xFFFFFFFF, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000006, RotateModel, 0xFE363C8A, 0xFE363C80, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000006, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x0000000B, 0x00000002, 0xFE363C81, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, UseExitHeading, 0x00000028, 0xFE363C89, 0x00000043, 0x00000001, CheckRideScriptForEnterExit, 0x0000000A, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000043, 0x00000004, PlayerMoveTo, 0xFE363C81, 0xFE363C83, 0x0000000F, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000000, 0x00000024, 0x00000002, 0xFE363C84, 0x0000000F, 0x00000046, 0x00000001, 0xFE363C8B, 0x00000013, 0x00000000, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802861B0_7E7030
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000001, ShortenPartnerTetherDistance, 0x00000030, 0x00000001, 0xFE363C82, 0x00000005, 0x00000001, 0x00000000, 0x00000031, 0x00000001, 0xFE363C8A, 0x0000000A, 0x00000002, 0xFE363C8A, 0xFFFFFFFF, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000006, RotateModel, 0xFE363C8A, 0xFFFFFFB0, 0x00000000, 0x00000001, 0x00000000, 0x00000006, 0x00000000, 0x00000030, 0x00000001, 0xFE363C83, 0x00000005, 0x00000001, 0x00000000, 0x00000031, 0x00000001, 0xFE363C8A, 0x0000000A, 0x00000002, 0xFE363C8A, 0xFFFFFFFF, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000006, RotateModel, 0xFE363C8A, 0xFFFFFFB0, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000006, 0x00000000, 0x00000043, 0x00000006, GetEntryCoords, 0xFE363C80, 0xFE363C87, 0xFE363C88, 0xFE363C89, 0xFE363C8B, 0x00000043, 0x00000003, InterpPlayerYaw, 0xFE363C8B, 0x00000002, 0x00000043, 0x00000001, CheckRideScriptForEnterExit, 0x0000000A, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000043, 0x00000001, TeleportPartnerToPlayer, 0x00000043, 0x00000002, PlayerMoveToDoor, 0x0000000A, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000001, 0x00000024, 0x00000002, 0xFE363C8C, 0x00000001, 0x00000024, 0x00000002, 0xFE363C84, 0x0000000F, 0x00000046, 0x00000001, 0xFE363C8B, 0x00000013, 0x00000000, 0x00000056, 0x00000000, 0x00000008, 0x00000001, 0x00000008, 0x00000043, 0x00000006, PlaySoundAt, 0x90000001, 0x00000000, 0xFE363C87, 0xFE363C88, 0xFE363C89, 0x00000057, 0x00000000, 0x00000043, 0x00000005, MakeLerp, 0xFFFFFFB0, 0x00000000, 0x0000000A, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000030, 0x00000001, 0xFE363C82, 0x00000005, 0x00000001, 0x00000000, 0x00000031, 0x00000001, 0xFE363C8A, 0x0000000A, 0x00000002, 0xFE363C8A, 0xFFFFFFFF, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000006, RotateModel, 0xFE363C8A, 0xFE363C80, 0x00000000, 0x00000001, 0x00000000, 0x00000006, 0x00000000, 0x00000030, 0x00000001, 0xFE363C83, 0x00000005, 0x00000001, 0x00000000, 0x00000031, 0x00000001, 0xFE363C8A, 0x0000000A, 0x00000002, 0xFE363C8A, 0xFFFFFFFF, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000006, RotateModel, 0xFE363C8A, 0xFE363C80, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000006, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x0000000B, 0x00000002, 0xFE363C81, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000001, ResetPartnerTetherDistance, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000
