.include "macro.inc"

.section .data

glabel D_802456C0_DBCFD0
.word 0x00000000

glabel D_802456C4_DBCFD4
.word 0x0000004D, 0x00000001, 0x00000000, 0x00000043, 0x00000002, SetTimeFreezeMode, 0x00000002, 0x00000008, 0x00000001, 0x00000028, 0x00000043, 0x00000004, ShowGotItem, 0xFE363C80, 0x00000000, 0x00000000, 0x00000043, 0x00000002, SetTimeFreezeMode, 0x00000000, 0x00000002, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8024572C_DBD03C
.word 0x00000043, 0x00000002, DisablePlayerInput, 0x00000001, 0x00000024, 0x00000002, 0xFE363C80, 0xFE363C8A, 0x0000000B, 0x00000002, 0xFE363C8A, 0x00000000, 0x00000046, 0x00000001, D_802456C4_DBCFD4, 0x00000013, 0x00000000, 0x00000014, 0x00000001, 0xFE363C8B, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000003, AddItem, 0xFE363C8A, 0xFE363C80, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000002, AddKeyItem, 0xFE363C8A, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000003, AddBadge, 0xFE363C8A, 0xFE363C80, 0x00000023, 0x00000000, 0x00000008, 0x00000001, 0x0000000F, 0x00000043, 0x00000002, DisablePlayerInput, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8024580C_DBD11C
.word 0x00000024, 0x00000002, 0xFE363C8A, 0x00000069, 0x00000024, 0x00000002, 0xFE363C8B, 0x00000001, 0x00000024, 0x00000002, 0xF8405FF2, 0x00000001, 0x00000046, 0x00000001, D_8024572C_DBD03C, 0x00000024, 0x00000002, 0xF8405C8D, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000007, MakeEntity, D_802E9A18, 0xFFFFFF38, 0x0000003C, 0x0000012C, 0x00000000, D_80000000, 0x00000043, 0x00000008, MakeEntity, 0x802EA588, 0xFFFFFEE8, 0x0000003C, 0xFFFFFEDE, 0x00000000, 0x00000082, D_80000000, 0x00000043, 0x00000002, AssignBlockFlag, 0xF8405FF3, 0x00000043, 0x00000008, MakeEntity, 0x802EAE30, 0x00000190, 0x00000000, 0x0000003C, 0x00000000, 0x00000000, D_80000000, 0x00000043, 0x00000002, AssignFlag, 0xF8405FF2, 0x00000043, 0x00000002, AssignScript, D_8024580C_DBD11C, 0x00000043, 0x00000008, MakeEntity, 0x802EAB04, 0x00000064, 0x00000000, 0x00000190, 0x00000000, 0x00000028, D_80000000, 0x00000043, 0x00000002, AssignPanelFlag, 0xF8406027, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000
