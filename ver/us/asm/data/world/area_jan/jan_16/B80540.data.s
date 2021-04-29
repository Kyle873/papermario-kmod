.include "macro.inc"

.section .data

glabel D_80240540_B80540
.word 0xC3F00000, 0x00000000, 0x00000000, 0x42B40000, 0x43F00000, 0x00000000, 0x00000000, 0x43870000, 0xC3770000, 0x00000000, 0x00000000, 0x43610000, 0xC3C30000, 0x00000000, 0x41A00000, 0x42C80000, 0x420C0000, 0x44160000, 0x43A50000, 0x43340000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, D_80241074_B81074, D_80240540_B80540, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, func_80200000, 0x001900FE

glabel D_802405D0_B805D0
.word 0x00000043, 0x00000002, GetEntryID, 0xFE363C80, 0x00000014, 0x00000001, 0xFE363C80, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000005, SetMusicTrack, 0x00000000, 0x00000028, 0x00000000, 0x00000008, 0x00000024, 0x00000002, 0xF9718883, 0x00000000, 0x00000016, 0x00000001, 0x00000003, 0x00000043, 0x00000005, SetMusicTrack, 0x00000000, 0x00000028, 0x00000001, 0x00000008, 0x00000024, 0x00000002, 0xF9718883, 0x00000001, 0x0000001C, 0x00000000, 0x0000000A, 0x00000002, 0xF9718883, 0x00000000, 0x00000043, 0x00000005, SetMusicTrack, 0x00000000, 0x00000028, 0x00000000, 0x00000008, 0x00000013, 0x00000000, 0x00000023, 0x00000000, 0x00000043, 0x00000002, PlayAmbientSounds, 0x00000003, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802406C0_B806C0
.word 0x0000004D, 0x00000001, 0x0000001B, 0x00000043, 0x00000003, UseExitHeading, 0x0000003C, 0x00000000, 0x00000044, 0x00000001, ExitWalk, 0x00000043, 0x00000003, GotoMap, 0x802437A0, 0x00000001, 0x00000008, 0x00000001, 0x00000064, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8024071C_B8071C
.word 0x0000004D, 0x00000001, 0x0000001B, 0x00000043, 0x00000003, UseExitHeading, 0x0000003C, 0x00000001, 0x00000044, 0x00000001, ExitWalk, 0x00000043, 0x00000003, GotoMap, 0x802437A8, 0x00000001, 0x00000008, 0x00000001, 0x00000064, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80240778_B80778
.word 0x0000004D, 0x00000001, 0x0000001B, 0x00000043, 0x00000003, UseExitHeading, 0x0000003C, 0x00000002, 0x00000044, 0x00000001, ExitWalk, 0x00000043, 0x00000003, GotoMap, 0x802437B0, 0x00000000, 0x00000008, 0x00000001, 0x00000064, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802407D4_B807D4
.word 0x00000047, 0x00000005, D_802406C0_B806C0, 0x00080000, 0x00000000, 0x00000001, 0x00000000, 0x00000047, 0x00000005, D_8024071C_B8071C, 0x00080000, 0x00000004, 0x00000001, 0x00000000, 0x00000047, 0x00000005, D_80240778_B80778, 0x00080000, 0x00000009, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80240838_B80838
.word 0x0000000B, 0x00000002, 0xF5DE0180, 0x00000015, 0x00000043, 0x0000000F, PlayEffect, 0x00000055, 0x00000005, 0xFFFFFECA, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000055, 0x00000005, 0xFFFFFF2E, 0x0000000A, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000055, 0x00000005, 0x0000014A, 0x0000000A, 0x00000104, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000055, 0x00000005, 0xFFFFFED4, 0x0000000A, 0x0000010E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000055, 0x00000005, 0xFFFFFFB0, 0x0000000A, 0x00000186, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000055, 0x00000005, 0x000001AE, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802409F8_B809F8
.word 0x00000024, 0x00000002, 0xFE363C8F, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000026, 0x00000002, 0xFE363C80, 0xFD050F8A, 0x00000026, 0x00000002, 0xFE363C81, 0xFD050F8A, 0x0000002E, 0x00000002, 0xFE363C80, 0xF24A7A6C, 0x0000002E, 0x00000002, 0xFE363C81, 0xF24A7AA9, 0x0000002C, 0x00000002, 0xFE363C80, 0x00000001, 0x0000002C, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000005, ScaleGroup, 0x00000015, 0xFE363C80, 0xFE363C81, 0x00000001, 0x00000027, 0x00000002, 0xFE363C8F, 0x00000001, 0x0000000F, 0x00000002, 0xFE363C8F, 0x00000258, 0x00000024, 0x00000002, 0xFE363C8F, 0x00000000, 0x00000013, 0x00000000, 0x00000026, 0x00000002, 0xFE363C80, 0xFE363C8A, 0x0000002E, 0x00000002, 0xFE363C80, 0xF24A7A50, 0x0000002C, 0x00000002, 0xFD050F8A, 0xFE363C80, 0x0000002E, 0x00000002, 0xFD050F8A, 0xF24A7DE0, 0x0000002C, 0x00000002, 0xFE363C8A, 0xFD050F8A, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80240B3C_B80B3C
.word 0x00000044, 0x00000001, D_802409F8_B809F8, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000001, 0x00000043, 0x00000002, SetPlayerActionState, 0x0000000A, 0x00000043, 0x00000002, DisablePartnerAI, 0x00000000, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFC, 0x00000200, 0x00000000, 0x00000043, 0x00000005, UseSettingsFrom, 0x00000000, 0x00000023, 0x00000064, 0x0000014A, 0x00000043, 0x00000005, SetPanTarget, 0x00000000, 0x00000023, 0x00000064, 0x0000014A, 0x00000043, 0x00000003, SetCamSpeed, 0x00000000, 0xF24BE280, 0x00000043, 0x00000004, PanToTarget, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000003, WaitForCam, 0x00000000, 0xF24A7E80, 0x00000043, 0x00000002, GetCurrentPartner, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000001, func_802D2B6C, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x0000000F, 0x00000056, 0x00000000, 0x00000008, 0x00000001, 0x0000001E, 0x00000043, 0x00000005, SetPanTarget, 0x00000000, 0x00000023, 0x00000000, 0x0000014A, 0x00000043, 0x00000003, SetCamSpeed, 0x00000000, 0xF24A7DB4, 0x00000043, 0x00000004, PanToTarget, 0x00000000, 0x00000000, 0x00000001, 0x00000057, 0x00000000, 0x00000043, 0x00000002, DisablePlayerPhysics, 0x00000000, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFC, 0x00000200, 0x00000001, 0x00000043, 0x00000004, SetPlayerPos, 0x00000023, 0x00000258, 0x00000154, 0x00000043, 0x00000005, MakeLerp, 0x00000258, 0x00000082, 0x0000000F, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000004, SetPlayerPos, 0x00000023, 0xFE363C80, 0x00000154, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000014, 0x00000000, 0x00000023, 0x00000078, 0x00000154, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000014, 0x00000000, 0x00000037, 0x00000078, 0x0000014A, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000002C, 0x00000002, 0xFD050F8A, 0xF24A5C80, 0x00000043, 0x00000005, SetPanTarget, 0x00000000, 0x00000000, 0x000000BE, 0x0000015E, 0x00000043, 0x00000003, SetCamSpeed, 0x00000000, 0xF24A7F4D, 0x00000043, 0x00000004, PanToTarget, 0x00000000, 0x00000000, 0x00000001, 0x00000056, 0x00000000, 0x00000043, 0x00000002, SetPlayerJumpscale, 0xF24A8280, 0x00000043, 0x00000003, PlaySoundAtPlayer, 0x00000166, 0x00000000, 0x00000043, 0x00000005, PlayerJump, 0xFFFFFFDD, 0x00000000, 0x00000181, 0x0000001E, 0x00000043, 0x00000002, SetPlayerActionState, 0x0000000A, 0x00000057, 0x00000000, 0x00000043, 0x00000003, SetNpcJumpscale, 0xFFFFFFFC, 0x00000000, 0x00000043, 0x00000006, NpcJump0, 0xFFFFFFFC, 0x00000023, 0x00000082, 0x0000014A, 0x0000000F, 0x00000056, 0x00000000, 0x00000005, 0x00000001, 0x00000003, 0x00000043, 0x0000000F, PlayEffect, 0x00000014, 0x00000000, 0x00000023, 0x00000078, 0x00000154, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000014, 0x00000000, 0x00000037, 0x00000078, 0x00000154, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000001, 0x00000005, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x0000002C, 0x00000002, 0xFD050F8A, 0xF24A5C80, 0x00000043, 0x00000005, SetPanTarget, 0x00000000, 0xFFFFFFDD, 0x00000000, 0x00000181, 0x00000043, 0x00000003, SetCamSpeed, 0x00000000, 0xF24A81B4, 0x00000043, 0x00000004, PanToTarget, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000003, SetNpcJumpscale, 0xFFFFFFFC, 0xF24A8280, 0x00000043, 0x00000006, NpcJump0, 0xFFFFFFFC, 0xFFFFFFF6, 0x00000000, 0x0000018B, 0x00000014, 0x00000043, 0x00000001, EnablePartnerAI, 0x00000043, 0x00000003, ResetCam, 0x00000000, 0xF24A8A80, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241074_B81074
.word 0x00000024, 0x00000002, 0xF5DE0329, 0x00000024, 0x00000043, 0x00000002, SetSpriteShading, 0xFFFFFFFF, 0x00000043, 0x00000006, SetCamPerspective, 0x00000000, 0x00000003, 0x00000019, 0x00000010, 0x00001000, 0x00000043, 0x00000005, SetCamBGColor, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x00000003, SetCamLeadPlayer, 0x00000000, 0x00000000, 0x00000043, 0x00000003, SetCamEnabled, 0x00000000, 0x00000001, 0x00000043, 0x00000003, MakeNpcs, 0x00000000, D_80242C50_B82C50, 0x00000046, 0x00000001, 0x80242C70, 0x00000044, 0x00000001, D_802412D4_B812D4, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0x00000001, 0x7FFFFE00, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0x00000005, 0x7FFFFE00, 0x00000043, 0x00000002, GetEntryID, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000004, 0x00000044, 0x00000001, D_80240B3C_B80B3C, 0x00000044, 0x00000001, D_802407D4_B807D4, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, D_802407D4_B807D4, 0x00000044, 0x00000001, EnterWalk, 0x00000013, 0x00000000, 0x00000046, 0x00000001, D_802405D0_B805D0, 0x00000044, 0x00000001, 0x802436D4, 0x00000044, 0x00000001, D_80240838_B80838, 0x00000043, 0x00000004, jan_16_UnkFunc27, 0x00000000, 0xFFFFFFFF, 0x00000003, 0x00000043, 0x00000004, jan_16_UnkFunc27, 0x00000002, 0x00000000, 0x00000003, 0x00000043, 0x0000000B, jan_16_UnkFunc26, 0x00000003, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000, 0x00000019, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241250_B81250
.word 0x00000043, 0x00000005, SetNpcScale, 0xFFFFFFFF, 0xF24A8080, 0xF24A8080, 0xF24A8080, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8024127C_B8127C
.word 0x00000000, 0x00620050, D_80241250_B81250, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_802412A8_B812A8
.word 0x00000000, 0x001A0018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_802412D4_B812D4
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x0000000C, 0x00000002, 0xF5DE0180, 0x00000014, 0x00000043, 0x00000003, EnableGroup, 0x00000016, 0x00000000, 0x00000043, 0x00000003, EnableGroup, 0x0000002C, 0x00000000, 0x00000043, 0x00000004, PanToTarget, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x00000004, SetCamType, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000005, UseSettingsFrom, 0x00000000, 0xFFFFFEF3, 0x0000005E, 0xFFFFFFF8, 0x00000043, 0x00000005, SetPanTarget, 0x00000000, 0xFFFFFEF3, 0x0000005E, 0xFFFFFFF8, 0x00000043, 0x00000003, SetCamDistance, 0x00000000, 0x000003E8, 0x00000043, 0x00000004, SetCamPitch, 0x00000000, 0x00000014, 0x00000000, 0x00000043, 0x00000004, SetCamPosA, 0x00000000, 0xFFFFFE66, 0xFFFFFFAB, 0x00000043, 0x00000003, SetCamSpeed, 0x00000000, 0xF24BE280, 0x00000043, 0x00000004, PanToTarget, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000003, WaitForCam, 0x00000000, 0xF24A7E80, 0x00000008, 0x00000001, 0x0000000A, 0x00000043, 0x00000003, SetCamDistance, 0x00000000, 0x00000190, 0x00000043, 0x00000004, SetCamPitch, 0x00000000, 0xFFFFFFF3, 0x00000001, 0x00000043, 0x00000003, SetCamSpeed, 0x00000000, 0xF24A7C4D, 0x00000043, 0x00000004, SetCamPosA, 0x00000000, 0xFFFFFF31, 0xFFFFFFAB, 0x00000043, 0x00000004, PanToTarget, 0x00000000, 0xF24A7DB4, 0x00000001, 0x00000043, 0x00000003, WaitForCam, 0x00000000, 0xF24A7E80, 0x00000008, 0x00000001, 0x0000001E, 0x00000043, 0x00000003, ResetCam, 0x00000000, 0xF24BE280, 0x00000024, 0x00000002, 0xF5DE0180, 0x00000014, 0x00000013, 0x00000000, 0x00000043, 0x00000003, EnableGroup, 0x00000016, 0x00000001, 0x00000043, 0x00000003, EnableGroup, 0x0000002C, 0x00000001, 0x00000043, 0x00000003, EnableGroup, 0x0000001A, 0x00000000, 0x00000043, 0x00000003, EnableGroup, 0x00000035, 0x00000000, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241540_B81540
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00980005, 0x00980001, 0x00000000, 0x001000E3, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241570_B81570
.word 0x00000014, 0x00000001, 0xF5DE0180, 0x00000018, 0x00000001, 0x00000015, 0x00000004, 0x00000001, 0x00000014, 0x00000021, 0x00000002, 0x00000015, 0x00000016, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_80241540_B81540, 0x00000043, 0x00000002, GetSelfNpcID, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000005, SetNpcPos, 0x00000001, 0xFFFFFE3E, 0x00000000, 0x0000001A, 0x00000043, 0x00000005, SetNpcPos, 0x00000002, 0xFFFFFE52, 0x00000000, 0x00000004, 0x00000043, 0x00000005, SetNpcPos, 0x00000003, 0xFFFFFE66, 0x00000000, 0xFFFFFFEE, 0x00000043, 0x00000005, SetNpcPos, 0x00000004, 0xFFFFFE7A, 0x00000000, 0xFFFFFFD8, 0x00000043, 0x00000005, SetNpcPos, 0x00000005, 0xFFFFFE65, 0x0000005D, 0xFFFFFFF0, 0x00000013, 0x00000000, 0x00000019, 0x00000001, 0x00000016, 0x00000003, 0x00000001, 0x00000014, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0x00000020, 0x7FFFFE00, 0x00000043, 0x00000002, RemoveNpc, 0xFFFFFFFF, 0x00000023, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802416C4_B816C4
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0x00000021, 0x7FFFFE00, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000140, 0x00000001, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00C40002, 0x00000043, 0x00000003, NpcFacePlayer, 0xFFFFFFFF, 0x00000004, 0x00000008, 0x00000001, 0x00000005, 0x00000043, 0x00000003, PlayerFaceNpc, 0xFFFFFFFF, 0x00000000, 0x00000043, 0x00000005, GetNpcPos, 0xFFFFFFFF, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000009, SetCamProperties, 0x00000000, 0xF24A8C80, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x000001C2, 0xF24ACA80, 0xF24A5480, 0x00000043, 0x00000004, InterpNpcYaw, 0xFFFFFFFF, 0x0000005A, 0x00000000, 0x00000008, 0x00000001, 0x0000000A, 0x00000043, 0x00000003, InterpPlayerYaw, 0x0000005A, 0x00000000, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000005, GetNpcPos, 0xFFFFFFFF, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000056, 0x00000000, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00C4000C, 0x00000008, 0x00000001, 0x00000008, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00C4000D, 0x00000008, 0x00000001, 0x0000000F, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00C40008, 0x00000008, 0x00000001, 0x0000000A, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00C40008, 0x00C40008, 0x00000005, 0x001000E1, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00C40003, 0x00000008, 0x00000001, 0x0000000A, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00C40002, 0x00000057, 0x00000000, 0x00000043, 0x00000003, SetNpcJumpscale, 0xFFFFFFFF, 0x00000002, 0x00000043, 0x00000006, NpcJump1, 0xFFFFFFFF, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x0000001E, 0x00000043, 0x00000004, PlaySoundAtNpc, 0xFFFFFFFF, 0x0000018A, 0x00000000, 0x00000056, 0x00000000, 0x00000043, 0x00000005, ShakeCam, 0x00000000, 0x00000000, 0x00000032, 0xF24A7E80, 0x00000043, 0x00000002, SetPlayerAnimation, 0x00010002, 0x00000057, 0x00000000, 0x00000043, 0x00000002, SetPlayerAnimation, 0x0001002B, 0x00000056, 0x00000000, 0x00000008, 0x00000001, 0x00000014, 0x00000005, 0x00000001, 0x0000000A, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x00000073, 0x00000000, 0x00000163, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x000000CD, 0x00000000, 0x000001DB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000001, 0x00000002, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x000000BE, 0x00000000, 0x000001BD, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000001, 0x00000002, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x0000008C, 0x00000000, 0x0000017C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x000000AA, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000001, 0x00000002, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000005, 0x00000001, 0x0000000F, 0x00000043, 0x00000005, ScaleGroup, 0x00000054, 0x00000001, 0xF24A7EB4, 0x00000001, 0x00000008, 0x00000001, 0x00000002, 0x00000043, 0x00000005, ScaleGroup, 0x00000054, 0x00000001, 0xF24A7E4D, 0x00000001, 0x00000008, 0x00000001, 0x00000002, 0x00000006, 0x00000000, 0x00000056, 0x00000000, 0x00000008, 0x00000001, 0x0000000F, 0x00000043, 0x00000005, MakeLerp, 0x00000000, 0x00000064, 0x00000064, 0x00000001, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000001, UpdateLerp, 0x00000043, 0x00000005, TranslateGroup, 0x00000054, 0x00000000, 0xFE363C80, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000056, 0x00000000, 0x00000024, 0x00000002, 0xFE363C80, 0x00000001, 0x00000005, 0x00000001, 0x00000006, 0x00000014, 0x00000001, 0xFE363C80, 0x00000021, 0x00000002, 0x00000001, 0x00000004, 0x00000043, 0x00000004, PlaySoundAtCollider, 0x0000001E, 0x0000018C, 0x00000000, 0x00000016, 0x00000001, 0x00000005, 0x00000043, 0x00000004, PlaySoundAtCollider, 0x0000001E, 0x0000018D, 0x00000000, 0x00000016, 0x00000001, 0x00000006, 0x00000043, 0x00000004, PlaySoundAtCollider, 0x0000001E, 0x0000018E, 0x00000000, 0x00000023, 0x00000000, 0x00000027, 0x00000002, 0xFE363C80, 0x00000001, 0x00000008, 0x00000001, 0x00000014, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000026, 0x00000002, 0xFE363C82, 0xF24A7E80, 0x00000026, 0x00000002, 0xFE363C83, 0xF24A7B80, 0x00000005, 0x00000001, 0x00000005, 0x00000005, 0x00000001, 0x0000000A, 0x0000002C, 0x00000002, 0xFE363C82, 0xFE363C83, 0x00000043, 0x00000005, ScaleGroup, 0x00000054, 0x00000001, 0xFE363C82, 0x00000001, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x0000007B, 0x00000000, 0x00000160, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x000000C1, 0x00000000, 0x000001C2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000005, 0x00000001, 0x0000000A, 0x0000002D, 0x00000002, 0xFE363C82, 0xFE363C83, 0x00000043, 0x00000005, ScaleGroup, 0x00000054, 0x00000001, 0xFE363C82, 0x00000001, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x00000073, 0x00000000, 0x00000163, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, PlayEffect, 0x00000006, 0x00000001, 0x000000CD, 0x00000000, 0x000001DB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000002D, 0x00000002, 0xFE363C83, 0xF24A7AB4, 0x00000006, 0x00000000, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0x0000001E, 0x7FFFFE00, 0x00000008, 0x00000001, 0x0000000A, 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00C40009, 0x00C40002, 0x00000000, 0x001000E2, 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00C40004, 0x00000043, 0x00000003, SetNpcSpeed, 0x00000000, 0xF24A8A80, 0x00000043, 0x00000005, NpcMoveTo, 0xFFFFFFFF, 0x00000154, 0x0000010E, 0x00000000, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000200, 0x00000000, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000043, 0x00000003, ResetCam, 0x00000000, 0x00000005, 0x00000024, 0x00000002, 0xF5DE0180, 0x00000016, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80241FBC_B81FBC
.word 0x0000000A, 0x00000002, 0xF5DE0180, 0x00000015, 0x00000043, 0x00000004, SetNpcFlagBits, 0xFFFFFFFF, 0x00000100, 0x00000000, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0x00000055, 0x00000000, 0x0000019A, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_802416C4_B816C4, 0x00000002, 0x00000000, 0x00000012, 0x00000000, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0x00000021, 0x7FFFFE00, 0x0000000F, 0x00000002, 0xF5DE0180, 0x00000016, 0x00000043, 0x00000004, ModifyColliderFlags, 0x00000000, 0x0000001E, 0x7FFFFE00, 0x00000043, 0x00000005, TranslateGroup, 0x00000054, 0x00000000, 0x00000064, 0x00000000, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, RemoveNpc, 0xFFFFFFFF, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_802420B0_B820B0
.word 0x00000000, D_8024127C_B8127C, 0x00000000, 0xC47A0000, 0x00000000, 0x00401505, D_80241FBC_B81FBC, 0x00000000, 0x00000000, 0x0000010E, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00000000, 0x00000000, 0x00000000, 0x001A00D0, 0x00000001, D_802412A8_B812A8, 0x00000000, 0xC47A0000, 0x00000000, 0x00000505, D_80241570_B81570, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00000000, 0x00000000, 0x00000000, 0x001A00C9, 0x00000002, D_802412A8_B812A8, 0x00000000, 0xC47A0000, 0x00000000, 0x00000505, D_80241570_B81570, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00000000, 0x00000000, 0x00000000, 0x001A00CA, 0x00000003, D_802412A8_B812A8, 0x00000000, 0xC47A0000, 0x00000000, 0x00000505, D_80241570_B81570, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00000000, 0x00000000, 0x00000000, 0x001A00CB, 0x00000004, D_802412A8_B812A8, 0x00000000, 0xC47A0000, 0x00000000, 0x00000505, D_80241570_B81570, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00000000, 0x00000000, 0x00000000, 0x001A00CC, 0x00000005, D_802412A8_B812A8, 0x00000000, 0xC47A0000, 0x00000000, 0x00000505, D_80241570_B81570, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00000000, 0x00000000, 0x00000000, 0x001A00CD

glabel D_80242C50_B82C50
.word 0x00000006, D_802420B0_B820B0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000