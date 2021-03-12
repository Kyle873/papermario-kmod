.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.section .rodata

glabel jtbl_802EB2B0
.word L802E663C_107EBC, L802E66F4_107F74, L802E67E8_108068, L802E685C_1080DC, L802E697C_1081FC, L802E698C_10820C, L802E6AD4_108354, L802E6AD4_108354, L802E6AD4_108354, L802E6AD4_108354, L802E69A8_108228, L802E69E0_108260, L802E6A48_1082C8, 0, 0, 0

.section .text

glabel func_802E6574
/* 107DF4 802E6574 3C01800B */  lui       $at, %hi(gCameras+0x6C)
/* 107DF8 802E6578 C4201DEC */  lwc1      $f0, %lo(gCameras+0x6C)($at)
/* 107DFC 802E657C 3C014234 */  lui       $at, 0x4234
/* 107E00 802E6580 44816000 */  mtc1      $at, $f12
/* 107E04 802E6584 27BDFFC8 */  addiu     $sp, $sp, -0x38
/* 107E08 802E6588 AFB1001C */  sw        $s1, 0x1c($sp)
/* 107E0C 802E658C 0080882D */  daddu     $s1, $a0, $zero
/* 107E10 802E6590 AFBF0024 */  sw        $ra, 0x24($sp)
/* 107E14 802E6594 AFB20020 */  sw        $s2, 0x20($sp)
/* 107E18 802E6598 AFB00018 */  sw        $s0, 0x18($sp)
/* 107E1C 802E659C F7B60030 */  sdc1      $f22, 0x30($sp)
/* 107E20 802E65A0 F7B40028 */  sdc1      $f20, 0x28($sp)
/* 107E24 802E65A4 8E300040 */  lw        $s0, 0x40($s1)
/* 107E28 802E65A8 0C00A6C9 */  jal       clamp_angle
/* 107E2C 802E65AC 460C0300 */   add.s    $f12, $f0, $f12
/* 107E30 802E65B0 3C0142B4 */  lui       $at, 0x42b4
/* 107E34 802E65B4 44811000 */  mtc1      $at, $f2
/* 107E38 802E65B8 46000106 */  mov.s     $f4, $f0
/* 107E3C 802E65BC 4602203C */  c.lt.s    $f4, $f2
/* 107E40 802E65C0 00000000 */  nop
/* 107E44 802E65C4 4501000F */  bc1t      .L802E6604
/* 107E48 802E65C8 00000000 */   nop
/* 107E4C 802E65CC 3C014334 */  lui       $at, 0x4334
/* 107E50 802E65D0 44810000 */  mtc1      $at, $f0
/* 107E54 802E65D4 00000000 */  nop
/* 107E58 802E65D8 4604003E */  c.le.s    $f0, $f4
/* 107E5C 802E65DC 00000000 */  nop
/* 107E60 802E65E0 4500000B */  bc1f      .L802E6610
/* 107E64 802E65E4 00000000 */   nop
/* 107E68 802E65E8 3C014387 */  lui       $at, 0x4387
/* 107E6C 802E65EC 44810000 */  mtc1      $at, $f0
/* 107E70 802E65F0 00000000 */  nop
/* 107E74 802E65F4 4600203C */  c.lt.s    $f4, $f0
/* 107E78 802E65F8 00000000 */  nop
/* 107E7C 802E65FC 45000004 */  bc1f      .L802E6610
/* 107E80 802E6600 00000000 */   nop
.L802E6604:
/* 107E84 802E6604 C6340068 */  lwc1      $f20, 0x68($s1)
/* 107E88 802E6608 080B9986 */  j         .L802E6618
/* 107E8C 802E660C 24120001 */   addiu    $s2, $zero, 1
.L802E6610:
/* 107E90 802E6610 C6340060 */  lwc1      $f20, 0x60($s1)
/* 107E94 802E6614 0000902D */  daddu     $s2, $zero, $zero
.L802E6618:
/* 107E98 802E6618 82030000 */  lb        $v1, ($s0)
/* 107E9C 802E661C 2C62000D */  sltiu     $v0, $v1, 0xd
/* 107EA0 802E6620 1040012C */  beqz      $v0, L802E6AD4_108354
/* 107EA4 802E6624 00031080 */   sll      $v0, $v1, 2
/* 107EA8 802E6628 3C01802F */  lui       $at, %hi(jtbl_802EB2B0)
/* 107EAC 802E662C 00220821 */  addu      $at, $at, $v0
/* 107EB0 802E6630 8C22B2B0 */  lw        $v0, %lo(jtbl_802EB2B0)($at)
/* 107EB4 802E6634 00400008 */  jr        $v0
/* 107EB8 802E6638 00000000 */   nop
glabel L802E663C_107EBC
/* 107EBC 802E663C 0C05272D */  jal       play_sound
/* 107EC0 802E6640 240420AB */   addiu    $a0, $zero, 0x20ab
/* 107EC4 802E6644 24040001 */  addiu     $a0, $zero, 1
/* 107EC8 802E6648 3C0142B4 */  lui       $at, 0x42b4
/* 107ECC 802E664C 44810000 */  mtc1      $at, $f0
/* 107ED0 802E6650 3C014282 */  lui       $at, 0x4282
/* 107ED4 802E6654 44811000 */  mtc1      $at, $f2
/* 107ED8 802E6658 0080102D */  daddu     $v0, $a0, $zero
/* 107EDC 802E665C A2020000 */  sb        $v0, ($s0)
/* 107EE0 802E6660 A2020002 */  sb        $v0, 2($s0)
/* 107EE4 802E6664 E600002C */  swc1      $f0, 0x2c($s0)
/* 107EE8 802E6668 0C009C22 */  jal       func_80027088
/* 107EEC 802E666C E6020030 */   swc1     $f2, 0x30($s0)
/* 107EF0 802E6670 0C038045 */  jal       disable_player_static_collisions
/* 107EF4 802E6674 00000000 */   nop
/* 107EF8 802E6678 3C03800F */  lui       $v1, %hi(gPlayerStatusPtr)
/* 107EFC 802E667C 8C637B30 */  lw        $v1, %lo(gPlayerStatusPtr)($v1)
/* 107F00 802E6680 8C620004 */  lw        $v0, 4($v1)
/* 107F04 802E6684 34420800 */  ori       $v0, $v0, 0x800
/* 107F08 802E6688 AC620004 */  sw        $v0, 4($v1)
/* 107F0C 802E668C 82020003 */  lb        $v0, 3($s0)
/* 107F10 802E6690 10400013 */  beqz      $v0, .L802E66E0
/* 107F14 802E6694 24020005 */   addiu    $v0, $zero, 5
/* 107F18 802E6698 A2000003 */  sb        $zero, 3($s0)
/* 107F1C 802E669C C620004C */  lwc1      $f0, 0x4c($s1)
/* 107F20 802E66A0 AFA20010 */  sw        $v0, 0x10($sp)
/* 107F24 802E66A4 96020006 */  lhu       $v0, 6($s0)
/* 107F28 802E66A8 3C014000 */  lui       $at, 0x4000
/* 107F2C 802E66AC 44811800 */  mtc1      $at, $f3
/* 107F30 802E66B0 44801000 */  mtc1      $zero, $f2
/* 107F34 802E66B4 46000021 */  cvt.d.s   $f0, $f0
/* 107F38 802E66B8 46220000 */  add.d     $f0, $f0, $f2
/* 107F3C 802E66BC AFA20014 */  sw        $v0, 0x14($sp)
/* 107F40 802E66C0 8E040010 */  lw        $a0, 0x10($s0)
/* 107F44 802E66C4 8E250048 */  lw        $a1, 0x48($s1)
/* 107F48 802E66C8 8E270050 */  lw        $a3, 0x50($s1)
/* 107F4C 802E66CC 46200020 */  cvt.s.d   $f0, $f0
/* 107F50 802E66D0 44060000 */  mfc1      $a2, $f0
/* 107F54 802E66D4 0C04C6A5 */  jal       make_item_entity_nodelay
/* 107F58 802E66D8 00000000 */   nop
/* 107F5C 802E66DC AE020014 */  sw        $v0, 0x14($s0)
.L802E66E0:
/* 107F60 802E66E0 8E220000 */  lw        $v0, ($s1)
/* 107F64 802E66E4 2403FFFE */  addiu     $v1, $zero, -2
/* 107F68 802E66E8 00431024 */  and       $v0, $v0, $v1
/* 107F6C 802E66EC 080B9AB5 */  j         L802E6AD4_108354
/* 107F70 802E66F0 AE220000 */   sw       $v0, ($s1)
glabel L802E66F4_107F74
/* 107F74 802E66F4 C60C002C */  lwc1      $f12, 0x2c($s0)
/* 107F78 802E66F8 3C0140C9 */  lui       $at, 0x40c9
/* 107F7C 802E66FC 34210FD0 */  ori       $at, $at, 0xfd0
/* 107F80 802E6700 44810000 */  mtc1      $at, $f0
/* 107F84 802E6704 00000000 */  nop
/* 107F88 802E6708 46006302 */  mul.s     $f12, $f12, $f0
/* 107F8C 802E670C 00000000 */  nop
/* 107F90 802E6710 3C0143B4 */  lui       $at, 0x43b4
/* 107F94 802E6714 4481B000 */  mtc1      $at, $f22
/* 107F98 802E6718 0C00A85B */  jal       sin_rad
/* 107F9C 802E671C 46166303 */   div.s    $f12, $f12, $f22
/* 107FA0 802E6720 C6020028 */  lwc1      $f2, 0x28($s0)
/* 107FA4 802E6724 46001082 */  mul.s     $f2, $f2, $f0
/* 107FA8 802E6728 00000000 */  nop
/* 107FAC 802E672C C620004C */  lwc1      $f0, 0x4c($s1)
/* 107FB0 802E6730 46020000 */  add.s     $f0, $f0, $f2
/* 107FB4 802E6734 E620004C */  swc1      $f0, 0x4c($s1)
/* 107FB8 802E6738 C6020024 */  lwc1      $f2, 0x24($s0)
/* 107FBC 802E673C 4602003E */  c.le.s    $f0, $f2
/* 107FC0 802E6740 00000000 */  nop
/* 107FC4 802E6744 45000006 */  bc1f      .L802E6760
/* 107FC8 802E6748 2402000A */   addiu    $v0, $zero, 0xa
/* 107FCC 802E674C AE200068 */  sw        $zero, 0x68($s1)
/* 107FD0 802E6750 C6340068 */  lwc1      $f20, 0x68($s1)
/* 107FD4 802E6754 E622004C */  swc1      $f2, 0x4c($s1)
/* 107FD8 802E6758 AE200060 */  sw        $zero, 0x60($s1)
/* 107FDC 802E675C A2020001 */  sb        $v0, 1($s0)
.L802E6760:
/* 107FE0 802E6760 C600002C */  lwc1      $f0, 0x2c($s0)
/* 107FE4 802E6764 3C014120 */  lui       $at, 0x4120
/* 107FE8 802E6768 44811000 */  mtc1      $at, $f2
/* 107FEC 802E676C 00000000 */  nop
/* 107FF0 802E6770 46020000 */  add.s     $f0, $f0, $f2
/* 107FF4 802E6774 3C014334 */  lui       $at, 0x4334
/* 107FF8 802E6778 44811000 */  mtc1      $at, $f2
/* 107FFC 802E677C 00000000 */  nop
/* 108000 802E6780 4600103E */  c.le.s    $f2, $f0
/* 108004 802E6784 00000000 */  nop
/* 108008 802E6788 45000007 */  bc1f      .L802E67A8
/* 10800C 802E678C E600002C */   swc1     $f0, 0x2c($s0)
/* 108010 802E6790 92020000 */  lbu       $v0, ($s0)
/* 108014 802E6794 24030007 */  addiu     $v1, $zero, 7
/* 108018 802E6798 E602002C */  swc1      $f2, 0x2c($s0)
/* 10801C 802E679C A2030001 */  sb        $v1, 1($s0)
/* 108020 802E67A0 24420001 */  addiu     $v0, $v0, 1
/* 108024 802E67A4 A2020000 */  sb        $v0, ($s0)
.L802E67A8:
/* 108028 802E67A8 C602002C */  lwc1      $f2, 0x2c($s0)
/* 10802C 802E67AC 3C0142DC */  lui       $at, 0x42dc
/* 108030 802E67B0 44810000 */  mtc1      $at, $f0
/* 108034 802E67B4 00000000 */  nop
/* 108038 802E67B8 4602003C */  c.lt.s    $f0, $f2
/* 10803C 802E67BC 00000000 */  nop
/* 108040 802E67C0 450000C4 */  bc1f      L802E6AD4_108354
/* 108044 802E67C4 00000000 */   nop
/* 108048 802E67C8 C6000030 */  lwc1      $f0, 0x30($s0)
/* 10804C 802E67CC 4600A500 */  add.s     $f20, $f20, $f0
/* 108050 802E67D0 4614B03E */  c.le.s    $f22, $f20
/* 108054 802E67D4 00000000 */  nop
/* 108058 802E67D8 450300BE */  bc1tl     L802E6AD4_108354
/* 10805C 802E67DC 4616A501 */   sub.s    $f20, $f20, $f22
/* 108060 802E67E0 080B9AB5 */  j         L802E6AD4_108354
/* 108064 802E67E4 00000000 */   nop
glabel L802E67E8_108068
/* 108068 802E67E8 C6000030 */  lwc1      $f0, 0x30($s0)
/* 10806C 802E67EC 3C014000 */  lui       $at, 0x4000
/* 108070 802E67F0 44811000 */  mtc1      $at, $f2
/* 108074 802E67F4 00000000 */  nop
/* 108078 802E67F8 46020001 */  sub.s     $f0, $f0, $f2
/* 10807C 802E67FC 44801000 */  mtc1      $zero, $f2
/* 108080 802E6800 00000000 */  nop
/* 108084 802E6804 4602003E */  c.le.s    $f0, $f2
/* 108088 802E6808 00000000 */  nop
/* 10808C 802E680C 45000002 */  bc1f      .L802E6818
/* 108090 802E6810 E6000030 */   swc1     $f0, 0x30($s0)
/* 108094 802E6814 E6020030 */  swc1      $f2, 0x30($s0)
.L802E6818:
/* 108098 802E6818 C6000030 */  lwc1      $f0, 0x30($s0)
/* 10809C 802E681C 4600A500 */  add.s     $f20, $f20, $f0
/* 1080A0 802E6820 3C0143B4 */  lui       $at, 0x43b4
/* 1080A4 802E6824 44810000 */  mtc1      $at, $f0
/* 1080A8 802E6828 00000000 */  nop
/* 1080AC 802E682C 4614003E */  c.le.s    $f0, $f20
/* 1080B0 802E6830 00000000 */  nop
/* 1080B4 802E6834 45030001 */  bc1tl     .L802E683C
/* 1080B8 802E6838 4600A501 */   sub.s    $f20, $f20, $f0
.L802E683C:
/* 1080BC 802E683C 92020001 */  lbu       $v0, 1($s0)
/* 1080C0 802E6840 2442FFFF */  addiu     $v0, $v0, -1
/* 1080C4 802E6844 A2020001 */  sb        $v0, 1($s0)
/* 1080C8 802E6848 00021600 */  sll       $v0, $v0, 0x18
/* 1080CC 802E684C 1840004B */  blez      $v0, L802E697C_1081FC
/* 1080D0 802E6850 00000000 */   nop
/* 1080D4 802E6854 080B9AB5 */  j         L802E6AD4_108354
/* 1080D8 802E6858 00000000 */   nop
glabel L802E685C_1080DC
/* 1080DC 802E685C C6000030 */  lwc1      $f0, 0x30($s0)
/* 1080E0 802E6860 3C0140A0 */  lui       $at, 0x40a0
/* 1080E4 802E6864 44811000 */  mtc1      $at, $f2
/* 1080E8 802E6868 00000000 */  nop
/* 1080EC 802E686C 46020001 */  sub.s     $f0, $f0, $f2
/* 1080F0 802E6870 4480B000 */  mtc1      $zero, $f22
/* 1080F4 802E6874 00000000 */  nop
/* 1080F8 802E6878 4616003E */  c.le.s    $f0, $f22
/* 1080FC 802E687C 00000000 */  nop
/* 108100 802E6880 45000002 */  bc1f      .L802E688C
/* 108104 802E6884 E6000030 */   swc1     $f0, 0x30($s0)
/* 108108 802E6888 E6160030 */  swc1      $f22, 0x30($s0)
.L802E688C:
/* 10810C 802E688C C6000030 */  lwc1      $f0, 0x30($s0)
/* 108110 802E6890 4600A500 */  add.s     $f20, $f20, $f0
/* 108114 802E6894 3C0143B4 */  lui       $at, 0x43b4
/* 108118 802E6898 44811000 */  mtc1      $at, $f2
/* 10811C 802E689C 00000000 */  nop
/* 108120 802E68A0 4614103E */  c.le.s    $f2, $f20
/* 108124 802E68A4 00000000 */  nop
/* 108128 802E68A8 45030001 */  bc1tl     .L802E68B0
/* 10812C 802E68AC 46001506 */   mov.s    $f20, $f2
.L802E68B0:
/* 108130 802E68B0 C60C002C */  lwc1      $f12, 0x2c($s0)
/* 108134 802E68B4 3C0140C9 */  lui       $at, 0x40c9
/* 108138 802E68B8 34210FD0 */  ori       $at, $at, 0xfd0
/* 10813C 802E68BC 44810000 */  mtc1      $at, $f0
/* 108140 802E68C0 00000000 */  nop
/* 108144 802E68C4 46006302 */  mul.s     $f12, $f12, $f0
/* 108148 802E68C8 00000000 */  nop
/* 10814C 802E68CC 0C00A85B */  jal       sin_rad
/* 108150 802E68D0 46026303 */   div.s    $f12, $f12, $f2
/* 108154 802E68D4 C6020028 */  lwc1      $f2, 0x28($s0)
/* 108158 802E68D8 46001082 */  mul.s     $f2, $f2, $f0
/* 10815C 802E68DC 00000000 */  nop
/* 108160 802E68E0 C620004C */  lwc1      $f0, 0x4c($s1)
/* 108164 802E68E4 46020000 */  add.s     $f0, $f0, $f2
/* 108168 802E68E8 3C014120 */  lui       $at, 0x4120
/* 10816C 802E68EC 44811000 */  mtc1      $at, $f2
/* 108170 802E68F0 E620004C */  swc1      $f0, 0x4c($s1)
/* 108174 802E68F4 C600002C */  lwc1      $f0, 0x2c($s0)
/* 108178 802E68F8 46020000 */  add.s     $f0, $f0, $f2
/* 10817C 802E68FC 3C014387 */  lui       $at, 0x4387
/* 108180 802E6900 44811000 */  mtc1      $at, $f2
/* 108184 802E6904 00000000 */  nop
/* 108188 802E6908 4600103C */  c.lt.s    $f2, $f0
/* 10818C 802E690C 00000000 */  nop
/* 108190 802E6910 45000002 */  bc1f      .L802E691C
/* 108194 802E6914 E600002C */   swc1     $f0, 0x2c($s0)
/* 108198 802E6918 E602002C */  swc1      $f2, 0x2c($s0)
.L802E691C:
/* 10819C 802E691C C622004C */  lwc1      $f2, 0x4c($s1)
/* 1081A0 802E6920 C6000024 */  lwc1      $f0, 0x24($s0)
/* 1081A4 802E6924 4600103E */  c.le.s    $f2, $f0
/* 1081A8 802E6928 00000000 */  nop
/* 1081AC 802E692C 45000069 */  bc1f      L802E6AD4_108354
/* 1081B0 802E6930 0000202D */   daddu    $a0, $zero, $zero
/* 1081B4 802E6934 4600B506 */  mov.s     $f20, $f22
/* 1081B8 802E6938 24050002 */  addiu     $a1, $zero, 2
/* 1081BC 802E693C 24060001 */  addiu     $a2, $zero, 1
/* 1081C0 802E6940 92020000 */  lbu       $v0, ($s0)
/* 1081C4 802E6944 3C073E4C */  lui       $a3, 0x3e4c
/* 1081C8 802E6948 34E7CCCD */  ori       $a3, $a3, 0xcccd
/* 1081CC 802E694C 00461021 */  addu      $v0, $v0, $a2
/* 1081D0 802E6950 A2020000 */  sb        $v0, ($s0)
/* 1081D4 802E6954 2402000A */  addiu     $v0, $zero, 0xa
/* 1081D8 802E6958 E620004C */  swc1      $f0, 0x4c($s1)
/* 1081DC 802E695C E6340060 */  swc1      $f20, 0x60($s1)
/* 1081E0 802E6960 E6340068 */  swc1      $f20, 0x68($s1)
/* 1081E4 802E6964 0C0B2D72 */  jal       exec_ShakeCamX
/* 1081E8 802E6968 A2020001 */   sb       $v0, 1($s0)
/* 1081EC 802E696C 0C05272D */  jal       play_sound
/* 1081F0 802E6970 240420AC */   addiu    $a0, $zero, 0x20ac
/* 1081F4 802E6974 080B9AB5 */  j         L802E6AD4_108354
/* 1081F8 802E6978 00000000 */   nop
glabel L802E697C_1081FC
/* 1081FC 802E697C 92020000 */  lbu       $v0, ($s0)
/* 108200 802E6980 24420001 */  addiu     $v0, $v0, 1
/* 108204 802E6984 080B9AB5 */  j         L802E6AD4_108354
/* 108208 802E6988 A2020000 */   sb       $v0, ($s0)
glabel L802E698C_10820C
/* 10820C 802E698C 2402000B */  addiu     $v0, $zero, 0xb
/* 108210 802E6990 A2020000 */  sb        $v0, ($s0)
/* 108214 802E6994 C620004C */  lwc1      $f0, 0x4c($s1)
/* 108218 802E6998 3C014000 */  lui       $at, 0x4000
/* 10821C 802E699C 44811000 */  mtc1      $at, $f2
/* 108220 802E69A0 080B9A76 */  j         .L802E69D8
/* 108224 802E69A4 46020000 */   add.s    $f0, $f0, $f2
glabel L802E69A8_108228
/* 108228 802E69A8 2403FFFE */  addiu     $v1, $zero, -2
/* 10822C 802E69AC 8E220000 */  lw        $v0, ($s1)
/* 108230 802E69B0 3C0140C0 */  lui       $at, 0x40c0
/* 108234 802E69B4 44811000 */  mtc1      $at, $f2
/* 108238 802E69B8 00431024 */  and       $v0, $v0, $v1
/* 10823C 802E69BC AE220000 */  sw        $v0, ($s1)
/* 108240 802E69C0 92020000 */  lbu       $v0, ($s0)
/* 108244 802E69C4 A2000002 */  sb        $zero, 2($s0)
/* 108248 802E69C8 24420001 */  addiu     $v0, $v0, 1
/* 10824C 802E69CC A2020000 */  sb        $v0, ($s0)
/* 108250 802E69D0 C620004C */  lwc1      $f0, 0x4c($s1)
/* 108254 802E69D4 46020000 */  add.s     $f0, $f0, $f2
.L802E69D8:
/* 108258 802E69D8 080B9AB5 */  j         L802E6AD4_108354
/* 10825C 802E69DC E620004C */   swc1     $f0, 0x4c($s1)
glabel L802E69E0_108260
/* 108260 802E69E0 C620004C */  lwc1      $f0, 0x4c($s1)
/* 108264 802E69E4 3C013F80 */  lui       $at, 0x3f80
/* 108268 802E69E8 44811000 */  mtc1      $at, $f2
/* 10826C 802E69EC 00000000 */  nop
/* 108270 802E69F0 46020001 */  sub.s     $f0, $f0, $f2
/* 108274 802E69F4 E620004C */  swc1      $f0, 0x4c($s1)
/* 108278 802E69F8 C6020024 */  lwc1      $f2, 0x24($s0)
/* 10827C 802E69FC 4602003E */  c.le.s    $f0, $f2
/* 108280 802E6A00 00000000 */  nop
/* 108284 802E6A04 45000033 */  bc1f      L802E6AD4_108354
/* 108288 802E6A08 24030001 */   addiu    $v1, $zero, 1
/* 10828C 802E6A0C E622004C */  swc1      $f2, 0x4c($s1)
/* 108290 802E6A10 92020000 */  lbu       $v0, ($s0)
/* 108294 802E6A14 A2030001 */  sb        $v1, 1($s0)
/* 108298 802E6A18 24420001 */  addiu     $v0, $v0, 1
/* 10829C 802E6A1C A2020000 */  sb        $v0, ($s0)
/* 1082A0 802E6A20 8E220000 */  lw        $v0, ($s1)
/* 1082A4 802E6A24 34420021 */  ori       $v0, $v0, 0x21
/* 1082A8 802E6A28 AE220000 */  sw        $v0, ($s1)
/* 1082AC 802E6A2C 82020002 */  lb        $v0, 2($s0)
/* 1082B0 802E6A30 10400028 */  beqz      $v0, L802E6AD4_108354
/* 1082B4 802E6A34 00000000 */   nop
/* 1082B8 802E6A38 0C038050 */  jal       enable_player_static_collisions
/* 1082BC 802E6A3C 00000000 */   nop
/* 1082C0 802E6A40 080B9AB5 */  j         L802E6AD4_108354
/* 1082C4 802E6A44 00000000 */   nop
glabel L802E6A48_1082C8
/* 1082C8 802E6A48 92020001 */  lbu       $v0, 1($s0)
/* 1082CC 802E6A4C 2442FFFF */  addiu     $v0, $v0, -1
/* 1082D0 802E6A50 A2020001 */  sb        $v0, 1($s0)
/* 1082D4 802E6A54 00021600 */  sll       $v0, $v0, 0x18
/* 1082D8 802E6A58 0441001E */  bgez      $v0, L802E6AD4_108354
/* 1082DC 802E6A5C 0220202D */   daddu    $a0, $s1, $zero
/* 1082E0 802E6A60 0C043F5A */  jal       exec_entity_updatecmd
/* 1082E4 802E6A64 A2000000 */   sb       $zero, ($s0)
/* 1082E8 802E6A68 82020002 */  lb        $v0, 2($s0)
/* 1082EC 802E6A6C 10400009 */  beqz      $v0, .L802E6A94
/* 1082F0 802E6A70 00000000 */   nop
/* 1082F4 802E6A74 0C009C22 */  jal       func_80027088
/* 1082F8 802E6A78 0000202D */   daddu    $a0, $zero, $zero
/* 1082FC 802E6A7C 3C02800F */  lui       $v0, %hi(gPlayerStatusPtr)
/* 108300 802E6A80 8C427B30 */  lw        $v0, %lo(gPlayerStatusPtr)($v0)
/* 108304 802E6A84 8C430004 */  lw        $v1, 4($v0)
/* 108308 802E6A88 2404F7FF */  addiu     $a0, $zero, -0x801
/* 10830C 802E6A8C 00641824 */  and       $v1, $v1, $a0
/* 108310 802E6A90 AC430004 */  sw        $v1, 4($v0)
.L802E6A94:
/* 108314 802E6A94 8E220000 */  lw        $v0, ($s1)
/* 108318 802E6A98 2403FFDF */  addiu     $v1, $zero, -0x21
/* 10831C 802E6A9C 00431024 */  and       $v0, $v0, $v1
/* 108320 802E6AA0 AE220000 */  sw        $v0, ($s1)
/* 108324 802E6AA4 8E040008 */  lw        $a0, 8($s0)
/* 108328 802E6AA8 0480000A */  bltz      $a0, L802E6AD4_108354
/* 10832C 802E6AAC 00000000 */   nop
/* 108330 802E6AB0 0C00E2B7 */  jal       get_npc_by_index
/* 108334 802E6AB4 00000000 */   nop
/* 108338 802E6AB8 8C430000 */  lw        $v1, ($v0)
/* 10833C 802E6ABC 2404FDF7 */  addiu     $a0, $zero, -0x209
/* 108340 802E6AC0 00641824 */  and       $v1, $v1, $a0
/* 108344 802E6AC4 AC430000 */  sw        $v1, ($v0)
/* 108348 802E6AC8 8E04000C */  lw        $a0, 0xc($s0)
/* 10834C 802E6ACC 00641825 */  or        $v1, $v1, $a0
/* 108350 802E6AD0 AC430000 */  sw        $v1, ($v0)
glabel L802E6AD4_108354
/* 108354 802E6AD4 56400002 */  bnel      $s2, $zero, .L802E6AE0
/* 108358 802E6AD8 E6340068 */   swc1     $f20, 0x68($s1)
/* 10835C 802E6ADC E6340060 */  swc1      $f20, 0x60($s1)
.L802E6AE0:
/* 108360 802E6AE0 8E040014 */  lw        $a0, 0x14($s0)
/* 108364 802E6AE4 04800019 */  bltz      $a0, .L802E6B4C
/* 108368 802E6AE8 00000000 */   nop
/* 10836C 802E6AEC 0C04C3D6 */  jal       get_item_entity
/* 108370 802E6AF0 00000000 */   nop
/* 108374 802E6AF4 0040182D */  daddu     $v1, $v0, $zero
/* 108378 802E6AF8 10600013 */  beqz      $v1, .L802E6B48
/* 10837C 802E6AFC 2402FFFF */   addiu    $v0, $zero, -1
/* 108380 802E6B00 8C620000 */  lw        $v0, ($v1)
/* 108384 802E6B04 30420010 */  andi      $v0, $v0, 0x10
/* 108388 802E6B08 1040000B */  beqz      $v0, .L802E6B38
/* 10838C 802E6B0C 34028000 */   ori      $v0, $zero, 0x8000
/* 108390 802E6B10 C4600008 */  lwc1      $f0, 8($v1)
/* 108394 802E6B14 4600018D */  trunc.w.s $f6, $f0
/* 108398 802E6B18 E6060018 */  swc1      $f6, 0x18($s0)
/* 10839C 802E6B1C C460000C */  lwc1      $f0, 0xc($v1)
/* 1083A0 802E6B20 4600018D */  trunc.w.s $f6, $f0
/* 1083A4 802E6B24 E606001C */  swc1      $f6, 0x1c($s0)
/* 1083A8 802E6B28 C4600010 */  lwc1      $f0, 0x10($v1)
/* 1083AC 802E6B2C 4600018D */  trunc.w.s $f6, $f0
/* 1083B0 802E6B30 080B9AD3 */  j         .L802E6B4C
/* 1083B4 802E6B34 E6060020 */   swc1     $f6, 0x20($s0)
.L802E6B38:
/* 1083B8 802E6B38 AE020018 */  sw        $v0, 0x18($s0)
/* 1083BC 802E6B3C AE02001C */  sw        $v0, 0x1c($s0)
/* 1083C0 802E6B40 080B9AD3 */  j         .L802E6B4C
/* 1083C4 802E6B44 AE020020 */   sw       $v0, 0x20($s0)
.L802E6B48:
/* 1083C8 802E6B48 AE020014 */  sw        $v0, 0x14($s0)
.L802E6B4C:
/* 1083CC 802E6B4C 8FBF0024 */  lw        $ra, 0x24($sp)
/* 1083D0 802E6B50 8FB20020 */  lw        $s2, 0x20($sp)
/* 1083D4 802E6B54 8FB1001C */  lw        $s1, 0x1c($sp)
/* 1083D8 802E6B58 8FB00018 */  lw        $s0, 0x18($sp)
/* 1083DC 802E6B5C D7B60030 */  ldc1      $f22, 0x30($sp)
/* 1083E0 802E6B60 D7B40028 */  ldc1      $f20, 0x28($sp)
/* 1083E4 802E6B64 03E00008 */  jr        $ra
/* 1083E8 802E6B68 27BD0038 */   addiu    $sp, $sp, 0x38
