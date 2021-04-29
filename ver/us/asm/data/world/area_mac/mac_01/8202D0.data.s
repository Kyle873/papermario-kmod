.include "macro.inc"

.section .data

glabel D_8025FA50_8202D0
.word 0x00000000, 0x00180018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_8025FA7C_8202FC
.word 0x00000000, 0x001E0018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_8025FAD4_820354
.word 0x00000000, 0x00280018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_8025FB00_820380
.word 0x00000000, 0x00260018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_8025FB2C_8203AC
.word 0x00000000, 0x00200018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_8025FB58_8203D8
.word 0x00000000, 0x00230018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630010

glabel D_8025FB84_820404
.word 0x00000000, 0x00170014, 0x00000000, 0x00000000, 0x00000000, EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x00060000

glabel D_8025FBB0_820430
.word 0x00000000, 0x001A0017, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000

glabel D_8025FBDC_82045C
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00B60008, 0x00B60001, 0x00000000, 0x0001003C, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FC0C_82048C
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FBDC_82045C, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FC30_8204B0
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00B40004, 0x00B40001, 0x00000000, 0x0001003D, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FC60_8204E0
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FC30_8204B0, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FC84_820504
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00B50004, 0x00B50001, 0x00000000, 0x0001003E, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FCB4_820534
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FC84_820504, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FCD8_820558
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00910204, 0x00910201, 0x00000000, 0x0001004E, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FD08_820588
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FCD8_820558, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FD2C_8205AC
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x008F0007, 0x008F0002, 0x00000000, 0x0001004F, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FD5C_8205DC
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FD2C_8205AC, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FD80_820600
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00A70004, 0x00A70001, 0x00000000, 0x00010040, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FDB0_820630
.word 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFF1F, 0x00000000, 0x00000140, 0x00000043, 0x00000003, SetNpcYaw, 0xFFFFFFFF, 0x0000010E, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FD80_820600, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FE04_820684
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00A70004, 0x00A70001, 0x00000000, 0x00010041, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FE34_8206B4
.word 0x00000043, 0x00000005, SetNpcScale, 0xFFFFFFFF, 0xF24A7D80, 0xF24A7D80, 0xF24A7D80, 0x00000043, 0x00000005, SetNpcPos, 0xFFFFFFFF, 0xFFFFFF06, 0x00000000, 0x00000127, 0x00000043, 0x00000003, SetNpcYaw, 0xFFFFFFFF, 0x0000010E, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FE04_820684, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FEA4_820724
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00930004, 0x00930001, 0x00000000, 0x00010050, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FED4_820754
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FEA4_820724, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FEF8_820778
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00930004, 0x00930001, 0x00000000, 0x00010051, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FF28_8207A8
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FEF8_820778, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FF4C_8207CC
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x00AD0004, 0x00AD0001, 0x00000010, 0x00010052, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FF7C_8207FC
.word 0x00000043, 0x00000003, SetNpcAnimation, 0xFFFFFFFF, 0x00AD0005, 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FF4C_8207CC, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FFB4_820834
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x008E0002, 0x008E0001, 0x00000010, 0x00010053, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8025FFE4_820864
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_8025FFB4_820834, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80260008_820888
.word 0x00000043, 0x00000006, SpeakToPlayer, 0xFFFFFFFF, 0x008E0102, 0x008E0101, 0x00000010, 0x00010054, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_80260038_8208B8
.word 0x00000043, 0x00000003, BindNpcInteract, 0xFFFFFFFF, D_80260008_820888, 0x00000002, 0x00000000, 0x00000001, 0x00000000

glabel D_8026005C_8208DC
.word 0x00B60000, 0x00B60001, 0x00B60008, 0xFFFFFFFF

glabel D_8026006C_8208EC
.word 0x00B40000, 0x00B40001, 0x00B40004, 0xFFFFFFFF

glabel D_8026007C_8208FC
.word 0x00B50000, 0x00B50001, 0x00B50004, 0xFFFFFFFF

glabel D_8026008C_82090C
.word 0x008F0000, 0x008F0002, 0x008F0007, 0xFFFFFFFF

glabel D_8026009C_82091C
.word 0x00910000, 0x00910001, 0x00910004, 0xFFFFFFFF

glabel D_802600AC_82092C
.word 0x00000013, D_8025FAD4_820354, 0x42700000, 0x00000000, 0xC2F00000, 0x00002D09, D_8025FC0C_82048C, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00000000, 0x00000000, D_8026005C_8208DC, 0x00000000, 0x0000001E, D_8025FB00_820380, 0x42C80000, 0x00000000, 0xC2DC0000, 0x00002D09, D_8025FC60_8204E0, 0x00000000, 0x00000000, 0x0000010E, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00B40001, 0x00B40002, 0x00B40003, 0x00B40003, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00B40001, 0x00000000, 0x00000000, D_8026006C_8208EC, 0x00000000, 0x0000001F, D_8025FB2C_8203AC, 0xC3A50000, 0x00000000, 0x43A50000, 0x00002D09, D_8025FCB4_820534, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00000000, 0x00000000, D_8026007C_8208FC, 0x00000000, 0x00000020, D_8025FB58_8203D8, 0x43960000, 0x41A00000, 0xC2C80000, 0x00002D09, D_8025FD5C_8205DC, 0x00000000, 0x00000000, 0x0000010E, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x008F0002, 0x008F0005, 0x008F0006, 0x008F0006, 0x008F0002, 0x008F0002, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x00000000, 0x00000000, D_8026008C_82090C, 0x00000000, 0x00000021, D_8025FB84_820404, 0x437C0000, 0x41A00000, 0xC2C80000, 0x00002D09, D_8025FD08_820588, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00910201, 0x00910202, 0x00910203, 0x00910203, 0x00910201, 0x00910201, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00000000, 0x00000000, D_8026009C_82091C, 0x00000000

glabel D_80260A5C_8212DC
.word 0x00A70000, 0x00A70001, 0x00A70004, 0xFFFFFFFF

glabel D_80260A6C_8212EC
.word 0x00000001, D_8025FA50_8202D0, 0xC3550000, 0xC2580000, 0x43800000, 0x00002D09, D_8025FDB0_820630, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00A70001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, D_80260A5C_8212DC, 0x001A0024, 0x00000002, D_8025FA50_8202D0, 0xC37A0000, 0x00000000, 0x43838000, 0x00002D09, D_8025FE34_8206B4, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00A70001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, D_80260A5C_8212DC, 0x001A0025

glabel D_80260E4C_8216CC
.word 0x00930000, 0x00930001, 0x00930004, 0xFFFFFFFF

glabel D_80260E5C_8216DC
.word 0x00000022, D_8025FBB0_820430, 0xC1200000, 0x00000000, 0x43B40000, 0x00002D01, D_8025FED4_820754, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00930001, 0x00930002, 0x00930003, 0x00930003, 0x00930001, 0x00930001, 0x00930000, 0x00930000, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00000000, 0x00000000, D_80260E4C_8216CC, 0x00000000, 0x00000023, D_8025FBB0_820430, 0x41C80000, 0x00000000, 0x43960000, 0x00002D01, D_8025FF28_8207A8, 0x00000000, 0x00000000, 0x0000010E, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00930001, 0x00930002, 0x00930003, 0x00930003, 0x00930001, 0x00930001, 0x00930000, 0x00930000, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00000000, 0x00000000, D_80260E4C_8216CC, 0x00000000

glabel D_8026123C_821ABC
.word 0x00AD0000, 0x00AD0001, 0x00AD0005, 0x00AD0004, 0xFFFFFFFF

glabel D_80261250_821AD0
.word 0x008E0000, 0x008E0001, 0x008E0002, 0xFFFFFFFF

glabel D_80261260_821AE0
.word 0x00000024, D_8025FA7C_8202FC, 0x43820000, 0x41A00000, 0x440C0000, 0x00402D09, D_8025FF7C_8207FC, 0x00000000, 0x00000000, 0x0000010E, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00AD0001, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00AD0000, 0x00000000, 0x00000000, D_8026123C_821ABC, 0x001A0057, 0x00000025, D_8025FA7C_8202FC, 0x43660000, 0x41A00000, 0x43FA0000, 0x00402D09, D_8025FFE4_820864, 0x00000000, 0x00000000, 0x0000005A, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x008E0001, 0x00000000, 0x00000000, D_80261250_821AD0, 0x001A0059, 0x00000026, D_8025FA7C_8202FC, 0x43960000, 0x41A00000, 0x43FA0000, 0x00402D09, D_80260038_8208B8, 0x00000000, 0x00000000, 0x0000010E, D_80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x008E0101, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x008E0100, 0x00000000, 0x00000000, D_80261250_821AD0, 0x001A0095, 0x00000005, D_802600AC_82092C, 0x00000000, 0x00000002, D_80260A6C_8212EC, 0x00000000, 0x00000002, D_80260E5C_8216DC, 0x00000000, 0x00000003, D_80261260_821AE0, 0x00000000, 0x0000000A, D_8025CCA8_81D528, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000