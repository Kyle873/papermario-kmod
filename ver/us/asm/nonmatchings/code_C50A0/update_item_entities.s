.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.section .rodata

glabel jtbl_80150BD8
.word L80131FD8_C86D8, L80131FE8_C86E8, L80131FE8_C86E8, L80131FF8_C86F8, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80131FF8_C86F8, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80131FF8_C86F8, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80131FF8_C86F8, L80132010_C8710, L80132010_C8710, L80131FF8_C86F8, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80132010_C8710, L80132008_C8708, 0

glabel jtbl_80150C50
.word L8013204C_C874C, L80132140_C8840, L80132140_C8840, L8013204C_C874C, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L8013204C_C874C, L80132140_C8840, L80132140_C8840, L80132140_C8840, L8013204C_C874C, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L80132140_C8840, L8013204C_C874C, 0

.section .text

glabel update_item_entities
/* C85EC 80131EEC 3C02800A */  lui       $v0, %hi(D_8009A650)
/* C85F0 80131EF0 8C42A650 */  lw        $v0, %lo(D_8009A650)($v0)
/* C85F4 80131EF4 27BDFFC0 */  addiu     $sp, $sp, -0x40
/* C85F8 80131EF8 AFBF0038 */  sw        $ra, 0x38($sp)
/* C85FC 80131EFC AFB30034 */  sw        $s3, 0x34($sp)
/* C8600 80131F00 AFB20030 */  sw        $s2, 0x30($sp)
/* C8604 80131F04 AFB1002C */  sw        $s1, 0x2c($sp)
/* C8608 80131F08 30420C00 */  andi      $v0, $v0, 0xc00
/* C860C 80131F0C 1440009E */  bnez      $v0, .L80132188
/* C8610 80131F10 AFB00028 */   sw       $s0, 0x28($sp)
/* C8614 80131F14 0000982D */  daddu     $s3, $zero, $zero
/* C8618 80131F18 0260902D */  daddu     $s2, $s3, $zero
.L80131F1C:
/* C861C 80131F1C 3C028015 */  lui       $v0, %hi(D_801565A0)
/* C8620 80131F20 8C4265A0 */  lw        $v0, %lo(D_801565A0)($v0)
/* C8624 80131F24 02421021 */  addu      $v0, $s2, $v0
/* C8628 80131F28 8C510000 */  lw        $s1, ($v0)
/* C862C 80131F2C 52200093 */  beql      $s1, $zero, .L8013217C
/* C8630 80131F30 26730001 */   addiu    $s3, $s3, 1
/* C8634 80131F34 8E220000 */  lw        $v0, ($s1)
/* C8638 80131F38 1040008F */  beqz      $v0, .L80132178
/* C863C 80131F3C 24020157 */   addiu    $v0, $zero, 0x157
/* C8640 80131F40 86230018 */  lh        $v1, 0x18($s1)
/* C8644 80131F44 14620019 */  bne       $v1, $v0, .L80131FAC
/* C8648 80131F48 00000000 */   nop
/* C864C 80131F4C 0C00A67F */  jal       rand_int
/* C8650 80131F50 24040064 */   addiu    $a0, $zero, 0x64
/* C8654 80131F54 2842005B */  slti      $v0, $v0, 0x5b
/* C8658 80131F58 14400012 */  bnez      $v0, .L80131FA4
/* C865C 80131F5C 00000000 */   nop
/* C8660 80131F60 3C058010 */  lui       $a1, %hi(D_80104AC0)
/* C8664 80131F64 24A54AC0 */  addiu     $a1, $a1, %lo(D_80104AC0)
/* C8668 80131F68 0C04C27C */  jal       func_801309F0
/* C866C 80131F6C 0220202D */   daddu    $a0, $s1, $zero
/* C8670 80131F70 0C00A67F */  jal       rand_int
/* C8674 80131F74 24040010 */   addiu    $a0, $zero, 0x10
/* C8678 80131F78 2442FFF8 */  addiu     $v0, $v0, -8
/* C867C 80131F7C 3C018015 */  lui       $at, %hi(D_80155D8C)
/* C8680 80131F80 A4225D8C */  sh        $v0, %lo(D_80155D8C)($at)
/* C8684 80131F84 0C00A67F */  jal       rand_int
/* C8688 80131F88 24040010 */   addiu    $a0, $zero, 0x10
/* C868C 80131F8C 2442FFF8 */  addiu     $v0, $v0, -8
/* C8690 80131F90 3C018015 */  lui       $at, %hi(D_80155D8E)
/* C8694 80131F94 A4225D8E */  sh        $v0, %lo(D_80155D8E)($at)
/* C8698 80131F98 24020005 */  addiu     $v0, $zero, 5
/* C869C 80131F9C 3C018015 */  lui       $at, %hi(D_80155D90)
/* C86A0 80131FA0 A4225D90 */  sh        $v0, %lo(D_80155D90)($at)
.L80131FA4:
/* C86A4 80131FA4 0C04C2B3 */  jal       func_80130ACC
/* C86A8 80131FA8 0220202D */   daddu    $a0, $s1, $zero
.L80131FAC:
/* C86AC 80131FAC 0C04C775 */  jal       func_80131DD4
/* C86B0 80131FB0 0220202D */   daddu    $a0, $s1, $zero
/* C86B4 80131FB4 8223001B */  lb        $v1, 0x1b($s1)
/* C86B8 80131FB8 2C62001D */  sltiu     $v0, $v1, 0x1d
/* C86BC 80131FBC 10400014 */  beqz      $v0, L80132010_C8710
/* C86C0 80131FC0 00031080 */   sll      $v0, $v1, 2
/* C86C4 80131FC4 3C018015 */  lui       $at, %hi(jtbl_80150BD8)
/* C86C8 80131FC8 00220821 */  addu      $at, $at, $v0
/* C86CC 80131FCC 8C220BD8 */  lw        $v0, %lo(jtbl_80150BD8)($at)
/* C86D0 80131FD0 00400008 */  jr        $v0
/* C86D4 80131FD4 00000000 */   nop
glabel L80131FD8_C86D8
/* C86D8 80131FD8 0C04D596 */  jal       update_item_entity_static
/* C86DC 80131FDC 0220202D */   daddu    $a0, $s1, $zero
/* C86E0 80131FE0 0804C804 */  j         L80132010_C8710
/* C86E4 80131FE4 00000000 */   nop
glabel L80131FE8_C86E8
/* C86E8 80131FE8 0C04D5B3 */  jal       func_801356CC
/* C86EC 80131FEC 0220202D */   daddu    $a0, $s1, $zero
/* C86F0 80131FF0 0804C804 */  j         L80132010_C8710
/* C86F4 80131FF4 00000000 */   nop
glabel L80131FF8_C86F8
/* C86F8 80131FF8 0C04D094 */  jal       update_item_entity_collectable
/* C86FC 80131FFC 0220202D */   daddu    $a0, $s1, $zero
/* C8700 80132000 0804C804 */  j         L80132010_C8710
/* C8704 80132004 00000000 */   nop
glabel L80132008_C8708
/* C8708 80132008 0C04D5B7 */  jal       update_item_entity_temp
/* C870C 8013200C 0220202D */   daddu    $a0, $s1, $zero
glabel L80132010_C8710
/* C8710 80132010 3C028015 */  lui       $v0, %hi(D_801565A0)
/* C8714 80132014 8C4265A0 */  lw        $v0, %lo(D_801565A0)($v0)
/* C8718 80132018 02421021 */  addu      $v0, $s2, $v0
/* C871C 8013201C 8C510000 */  lw        $s1, ($v0)
/* C8720 80132020 52200056 */  beql      $s1, $zero, .L8013217C
/* C8724 80132024 26730001 */   addiu    $s3, $s3, 1
/* C8728 80132028 8223001B */  lb        $v1, 0x1b($s1)
/* C872C 8013202C 2C62001D */  sltiu     $v0, $v1, 0x1d
/* C8730 80132030 10400043 */  beqz      $v0, L80132140_C8840
/* C8734 80132034 00031080 */   sll      $v0, $v1, 2
/* C8738 80132038 3C018015 */  lui       $at, %hi(jtbl_80150C50)
/* C873C 8013203C 00220821 */  addu      $at, $at, $v0
/* C8740 80132040 8C220C50 */  lw        $v0, %lo(jtbl_80150C50)($at)
/* C8744 80132044 00400008 */  jr        $v0
/* C8748 80132048 00000000 */   nop
glabel L8013204C_C874C
/* C874C 8013204C C6200008 */  lwc1      $f0, 8($s1)
/* C8750 80132050 C622000C */  lwc1      $f2, 0xc($s1)
/* C8754 80132054 86220034 */  lh        $v0, 0x34($s1)
/* C8758 80132058 4600020D */  trunc.w.s $f8, $f0
/* C875C 8013205C 44034000 */  mfc1      $v1, $f8
/* C8760 80132060 C6200010 */  lwc1      $f0, 0x10($s1)
/* C8764 80132064 4600120D */  trunc.w.s $f8, $f2
/* C8768 80132068 44054000 */  mfc1      $a1, $f8
/* C876C 8013206C 4600020D */  trunc.w.s $f8, $f0
/* C8770 80132070 44044000 */  mfc1      $a0, $f8
/* C8774 80132074 14620007 */  bne       $v1, $v0, .L80132094
/* C8778 80132078 00000000 */   nop
/* C877C 8013207C 86220036 */  lh        $v0, 0x36($s1)
/* C8780 80132080 14A20004 */  bne       $a1, $v0, .L80132094
/* C8784 80132084 00000000 */   nop
/* C8788 80132088 86220038 */  lh        $v0, 0x38($s1)
/* C878C 8013208C 1082002C */  beq       $a0, $v0, L80132140_C8840
/* C8790 80132090 00000000 */   nop
.L80132094:
/* C8794 80132094 0C044181 */  jal       get_shadow_by_index
/* C8798 80132098 86240020 */   lh       $a0, 0x20($s1)
/* C879C 8013209C 3C040002 */  lui       $a0, 2
/* C87A0 801320A0 27A50018 */  addiu     $a1, $sp, 0x18
/* C87A4 801320A4 27A30024 */  addiu     $v1, $sp, 0x24
/* C87A8 801320A8 0040802D */  daddu     $s0, $v0, $zero
/* C87AC 801320AC 27A6001C */  addiu     $a2, $sp, 0x1c
/* C87B0 801320B0 C6200008 */  lwc1      $f0, 8($s1)
/* C87B4 801320B4 3C014140 */  lui       $at, 0x4140
/* C87B8 801320B8 44811000 */  mtc1      $at, $f2
/* C87BC 801320BC 3C01447A */  lui       $at, 0x447a
/* C87C0 801320C0 44813000 */  mtc1      $at, $f6
/* C87C4 801320C4 27A70020 */  addiu     $a3, $sp, 0x20
/* C87C8 801320C8 E7A00018 */  swc1      $f0, 0x18($sp)
/* C87CC 801320CC C620000C */  lwc1      $f0, 0xc($s1)
/* C87D0 801320D0 C6240010 */  lwc1      $f4, 0x10($s1)
/* C87D4 801320D4 46020000 */  add.s     $f0, $f0, $f2
/* C87D8 801320D8 E7A60024 */  swc1      $f6, 0x24($sp)
/* C87DC 801320DC E7A40020 */  swc1      $f4, 0x20($sp)
/* C87E0 801320E0 E7A0001C */  swc1      $f0, 0x1c($sp)
/* C87E4 801320E4 0C0372DF */  jal       func_800DCB7C
/* C87E8 801320E8 AFA30010 */   sw       $v1, 0x10($sp)
/* C87EC 801320EC C7A00018 */  lwc1      $f0, 0x18($sp)
/* C87F0 801320F0 C7A2001C */  lwc1      $f2, 0x1c($sp)
/* C87F4 801320F4 C7A40020 */  lwc1      $f4, 0x20($sp)
/* C87F8 801320F8 3C028007 */  lui       $v0, %hi(gGameStatusPtr)
/* C87FC 801320FC 8C42419C */  lw        $v0, %lo(gGameStatusPtr)($v0)
/* C8800 80132100 E6000010 */  swc1      $f0, 0x10($s0)
/* C8804 80132104 E6020014 */  swc1      $f2, 0x14($s0)
/* C8808 80132108 E6040018 */  swc1      $f4, 0x18($s0)
/* C880C 8013210C C7A20024 */  lwc1      $f2, 0x24($sp)
/* C8810 80132110 3C013F00 */  lui       $at, 0x3f00
/* C8814 80132114 44810000 */  mtc1      $at, $f0
/* C8818 80132118 C444011C */  lwc1      $f4, 0x11c($v0)
/* C881C 8013211C 46001082 */  mul.s     $f2, $f2, $f0
/* C8820 80132120 00000000 */  nop
/* C8824 80132124 AE00002C */  sw        $zero, 0x2c($s0)
/* C8828 80132128 E6040028 */  swc1      $f4, 0x28($s0)
/* C882C 8013212C C4400124 */  lwc1      $f0, 0x124($v0)
/* C8830 80132130 44051000 */  mfc1      $a1, $f2
/* C8834 80132134 0200202D */  daddu     $a0, $s0, $zero
/* C8838 80132138 0C044A17 */  jal       set_standard_shadow_scale
/* C883C 8013213C E4800030 */   swc1     $f0, 0x30($a0)
glabel L80132140_C8840
/* C8840 80132140 C6200008 */  lwc1      $f0, 8($s1)
/* C8844 80132144 C6220010 */  lwc1      $f2, 0x10($s1)
/* C8848 80132148 4600020D */  trunc.w.s $f8, $f0
/* C884C 8013214C 44024000 */  mfc1      $v0, $f8
/* C8850 80132150 C620000C */  lwc1      $f0, 0xc($s1)
/* C8854 80132154 A6220034 */  sh        $v0, 0x34($s1)
/* C8858 80132158 4600020D */  trunc.w.s $f8, $f0
/* C885C 8013215C 44024000 */  mfc1      $v0, $f8
/* C8860 80132160 00000000 */  nop
/* C8864 80132164 A6220036 */  sh        $v0, 0x36($s1)
/* C8868 80132168 4600120D */  trunc.w.s $f8, $f2
/* C886C 8013216C 44024000 */  mfc1      $v0, $f8
/* C8870 80132170 00000000 */  nop
/* C8874 80132174 A6220038 */  sh        $v0, 0x38($s1)
.L80132178:
/* C8878 80132178 26730001 */  addiu     $s3, $s3, 1
.L8013217C:
/* C887C 8013217C 2A620100 */  slti      $v0, $s3, 0x100
/* C8880 80132180 1440FF66 */  bnez      $v0, .L80131F1C
/* C8884 80132184 26520004 */   addiu    $s2, $s2, 4
.L80132188:
/* C8888 80132188 8FBF0038 */  lw        $ra, 0x38($sp)
/* C888C 8013218C 8FB30034 */  lw        $s3, 0x34($sp)
/* C8890 80132190 8FB20030 */  lw        $s2, 0x30($sp)
/* C8894 80132194 8FB1002C */  lw        $s1, 0x2c($sp)
/* C8898 80132198 8FB00028 */  lw        $s0, 0x28($sp)
/* C889C 8013219C 03E00008 */  jr        $ra
/* C88A0 801321A0 27BD0040 */   addiu    $sp, $sp, 0x40
