
.section .text80065820, "ax"

func_80065820:
/* 040C20 80065820 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 040C24 80065824 AFB00010 */  sw    $s0, 0x10($sp)
/* 040C28 80065828 00808021 */  move  $s0, $a0
/* 040C2C 8006582C AFB50024 */  sw    $s5, 0x24($sp)
/* 040C30 80065830 00A0A821 */  move  $s5, $a1
/* 040C34 80065834 AFB20018 */  sw    $s2, 0x18($sp)
/* 040C38 80065838 00C09021 */  move  $s2, $a2
/* 040C3C 8006583C AFBF0028 */  sw    $ra, 0x28($sp)
/* 040C40 80065840 AFB40020 */  sw    $s4, 0x20($sp)
/* 040C44 80065844 AFB3001C */  sw    $s3, 0x1c($sp)
/* 040C48 80065848 0C01ACD8 */  jal   func_8006B360
/* 040C4C 8006584C AFB10014 */   sw    $s1, 0x14($sp)
/* 040C50 80065850 8E030008 */  lw    $v1, 8($s0)
/* 040C54 80065854 8E040010 */  lw    $a0, 0x10($s0)
/* 040C58 80065858 0064182A */  slt   $v1, $v1, $a0
/* 040C5C 8006585C 14600012 */  bnez  $v1, .L800658A8
/* 040C60 80065860 00408821 */   move  $s1, $v0
/* 040C64 80065864 24140001 */  addiu $s4, $zero, 1
/* 040C68 80065868 24130008 */  addiu $s3, $zero, 8
.L8006586C:
/* 040C6C 8006586C 12540005 */  beq   $s2, $s4, .L80065884
/* 040C70 80065870 26040004 */   addiu $a0, $s0, 4
/* 040C74 80065874 0C01ACF4 */  jal   func_8006B3D0
/* 040C78 80065878 02202021 */   move  $a0, $s1
/* 040C7C 8006587C 0801964B */  j     func_8006592C
/* 040C80 80065880 2402FFFF */   addiu $v0, $zero, -1

.L80065884:
/* 040C84 80065884 3C028009 */  lui   $v0, 0x8009
/* 040C88 80065888 8C424660 */  lw    $v0, 0x4660($v0)
/* 040C8C 8006588C 0C01AC1B */  jal   func_8006B06C
/* 040C90 80065890 A4530010 */   sh    $s3, 0x10($v0)
/* 040C94 80065894 8E020008 */  lw    $v0, 8($s0)
/* 040C98 80065898 8E030010 */  lw    $v1, 0x10($s0)
/* 040C9C 8006589C 0043102A */  slt   $v0, $v0, $v1
/* 040CA0 800658A0 1040FFF2 */  beqz  $v0, .L8006586C
/* 040CA4 800658A4 00000000 */   nop   
.L800658A8:
/* 040CA8 800658A8 8E03000C */  lw    $v1, 0xc($s0)
/* 040CAC 800658AC 8E040008 */  lw    $a0, 8($s0)
/* 040CB0 800658B0 8E020010 */  lw    $v0, 0x10($s0)
/* 040CB4 800658B4 00641821 */  addu  $v1, $v1, $a0
/* 040CB8 800658B8 0062001A */  div   $zero, $v1, $v0
/* 040CBC 800658BC 14400002 */  bnez  $v0, .L800658C8
/* 040CC0 800658C0 00000000 */   nop   
/* 040CC4 800658C4 0007000D */  break 7
.L800658C8:
/* 040CC8 800658C8 2401FFFF */  addiu $at, $zero, -1
/* 040CCC 800658CC 14410004 */  bne   $v0, $at, .L800658E0
/* 040CD0 800658D0 3C018000 */   lui   $at, 0x8000
/* 040CD4 800658D4 14610002 */  bne   $v1, $at, .L800658E0
/* 040CD8 800658D8 00000000 */   nop   
/* 040CDC 800658DC 0006000D */  break 6
.L800658E0:
/* 040CE0 800658E0 00001010 */  mfhi  $v0
/* 040CE4 800658E4 8E030014 */  lw    $v1, 0x14($s0)
/* 040CE8 800658E8 00021080 */  sll   $v0, $v0, 2
/* 040CEC 800658EC 00431021 */  addu  $v0, $v0, $v1
/* 040CF0 800658F0 AC550000 */  sw    $s5, ($v0)
/* 040CF4 800658F4 8E020008 */  lw    $v0, 8($s0)
/* 040CF8 800658F8 8E030000 */  lw    $v1, ($s0)
/* 040CFC 800658FC 24420001 */  addiu $v0, $v0, 1
/* 040D00 80065900 AE020008 */  sw    $v0, 8($s0)
/* 040D04 80065904 8C620000 */  lw    $v0, ($v1)
/* 040D08 80065908 10400005 */  beqz  $v0, .L80065920
/* 040D0C 8006590C 00000000 */   nop   
/* 040D10 80065910 0C01AC6F */  jal   func_8006B1BC
/* 040D14 80065914 02002021 */   move  $a0, $s0
/* 040D18 80065918 0C019808 */  jal   func_80066020
/* 040D1C 8006591C 00402021 */   move  $a0, $v0
.L80065920:
/* 040D20 80065920 0C01ACF4 */  jal   func_8006B3D0
/* 040D24 80065924 02202021 */   move  $a0, $s1
/* 040D28 80065928 00001021 */  move  $v0, $zero
func_8006592C:
/* 040D2C 8006592C 8FBF0028 */  lw    $ra, 0x28($sp)
/* 040D30 80065930 8FB50024 */  lw    $s5, 0x24($sp)
/* 040D34 80065934 8FB40020 */  lw    $s4, 0x20($sp)
/* 040D38 80065938 8FB3001C */  lw    $s3, 0x1c($sp)
/* 040D3C 8006593C 8FB20018 */  lw    $s2, 0x18($sp)
/* 040D40 80065940 8FB10014 */  lw    $s1, 0x14($sp)
/* 040D44 80065944 8FB00010 */  lw    $s0, 0x10($sp)
/* 040D48 80065948 03E00008 */  jr    $ra
/* 040D4C 8006594C 27BD0030 */   addiu $sp, $sp, 0x30

func_80065950:
/* 040D50 80065950 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 040D54 80065954 AFB00010 */  sw    $s0, 0x10($sp)
/* 040D58 80065958 00808021 */  move  $s0, $a0
/* 040D5C 8006595C AFB10014 */  sw    $s1, 0x14($sp)
/* 040D60 80065960 00A08821 */  move  $s1, $a1
/* 040D64 80065964 AFB20018 */  sw    $s2, 0x18($sp)
/* 040D68 80065968 00C09021 */  move  $s2, $a2
/* 040D6C 8006596C AFBF0020 */  sw    $ra, 0x20($sp)
/* 040D70 80065970 0C01ACD8 */  jal   func_8006B360
/* 040D74 80065974 AFB3001C */   sw    $s3, 0x1c($sp)
/* 040D78 80065978 001018C0 */  sll   $v1, $s0, 3
/* 040D7C 8006597C 3C04800E */  lui   $a0, 0x800e
/* 040D80 80065980 24849F80 */  addiu $a0, $a0, -0x6080
/* 040D84 80065984 00641821 */  addu  $v1, $v1, $a0
/* 040D88 80065988 00409821 */  move  $s3, $v0
/* 040D8C 8006598C 2402000E */  addiu $v0, $zero, 0xe
/* 040D90 80065990 AC710000 */  sw    $s1, ($v1)
/* 040D94 80065994 16020010 */  bne   $s0, $v0, .L800659D8
/* 040D98 80065998 AC720004 */   sw    $s2, 4($v1)
/* 040D9C 8006599C 3C028009 */  lui   $v0, 0x8009
/* 040DA0 800659A0 8C4258FC */  lw    $v0, 0x58fc($v0)
/* 040DA4 800659A4 1040000A */  beqz  $v0, .L800659D0
/* 040DA8 800659A8 24020001 */   addiu $v0, $zero, 1
/* 040DAC 800659AC 3C028009 */  lui   $v0, 0x8009
/* 040DB0 800659B0 8C424630 */  lw    $v0, 0x4630($v0)
/* 040DB4 800659B4 14400006 */  bnez  $v0, .L800659D0
/* 040DB8 800659B8 24020001 */   addiu $v0, $zero, 1
/* 040DBC 800659BC 02202021 */  move  $a0, $s1
/* 040DC0 800659C0 02402821 */  move  $a1, $s2
/* 040DC4 800659C4 0C019608 */  jal   func_80065820
/* 040DC8 800659C8 00003021 */   move  $a2, $zero
/* 040DCC 800659CC 24020001 */  addiu $v0, $zero, 1
.L800659D0:
/* 040DD0 800659D0 3C018009 */  lui   $at, 0x8009
/* 040DD4 800659D4 AC224630 */  sw    $v0, 0x4630($at)
.L800659D8:
/* 040DD8 800659D8 0C01ACF4 */  jal   func_8006B3D0
/* 040DDC 800659DC 02602021 */   move  $a0, $s3
/* 040DE0 800659E0 8FBF0020 */  lw    $ra, 0x20($sp)
/* 040DE4 800659E4 8FB3001C */  lw    $s3, 0x1c($sp)
/* 040DE8 800659E8 8FB20018 */  lw    $s2, 0x18($sp)
/* 040DEC 800659EC 8FB10014 */  lw    $s1, 0x14($sp)
/* 040DF0 800659F0 8FB00010 */  lw    $s0, 0x10($sp)
/* 040DF4 800659F4 03E00008 */  jr    $ra
/* 040DF8 800659F8 27BD0028 */   addiu $sp, $sp, 0x28

/* 040DFC 800659FC 00000000 */  nop   
func_80065A00:
/* 040E00 80065A00 40024800 */  mfc0  $v0, $9
/* 040E04 80065A04 03E00008 */  jr    $ra
/* 040E08 80065A08 00000000 */   nop   

/* 040E0C 80065A0C 00000000 */  nop   