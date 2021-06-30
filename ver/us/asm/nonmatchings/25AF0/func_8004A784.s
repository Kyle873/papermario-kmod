.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_8004A784
/* 25B84 8004A784 27BDFF68 */  addiu     $sp, $sp, -0x98
/* 25B88 8004A788 F7BC0088 */  sdc1      $f28, 0x88($sp)
/* 25B8C 8004A78C 4485E000 */  mtc1      $a1, $f28
/* 25B90 8004A790 AFB40058 */  sw        $s4, 0x58($sp)
/* 25B94 8004A794 8FB400A8 */  lw        $s4, 0xa8($sp)
/* 25B98 8004A798 AFB00048 */  sw        $s0, 0x48($sp)
/* 25B9C 8004A79C 0080802D */  daddu     $s0, $a0, $zero
/* 25BA0 8004A7A0 AFB1004C */  sw        $s1, 0x4c($sp)
/* 25BA4 8004A7A4 00C0882D */  daddu     $s1, $a2, $zero
/* 25BA8 8004A7A8 AFB30054 */  sw        $s3, 0x54($sp)
/* 25BAC 8004A7AC 00E0982D */  daddu     $s3, $a3, $zero
/* 25BB0 8004A7B0 AFB5005C */  sw        $s5, 0x5c($sp)
/* 25BB4 8004A7B4 8FB500AC */  lw        $s5, 0xac($sp)
/* 25BB8 8004A7B8 27A50020 */  addiu     $a1, $sp, 0x20
/* 25BBC 8004A7BC AFBF0060 */  sw        $ra, 0x60($sp)
/* 25BC0 8004A7C0 AFB20050 */  sw        $s2, 0x50($sp)
/* 25BC4 8004A7C4 F7BE0090 */  sdc1      $f30, 0x90($sp)
/* 25BC8 8004A7C8 F7BA0080 */  sdc1      $f26, 0x80($sp)
/* 25BCC 8004A7CC F7B80078 */  sdc1      $f24, 0x78($sp)
/* 25BD0 8004A7D0 F7B60070 */  sdc1      $f22, 0x70($sp)
/* 25BD4 8004A7D4 F7B40068 */  sdc1      $f20, 0x68($sp)
/* 25BD8 8004A7D8 C6000038 */  lwc1      $f0, 0x38($s0)
/* 25BDC 8004A7DC C602003C */  lwc1      $f2, 0x3c($s0)
/* 25BE0 8004A7E0 27A60024 */  addiu     $a2, $sp, 0x24
/* 25BE4 8004A7E4 E7A00020 */  swc1      $f0, 0x20($sp)
/* 25BE8 8004A7E8 E7A20024 */  swc1      $f2, 0x24($sp)
/* 25BEC 8004A7EC C6000018 */  lwc1      $f0, 0x18($s0)
/* 25BF0 8004A7F0 C6020040 */  lwc1      $f2, 0x40($s0)
/* 25BF4 8004A7F4 461C0002 */  mul.s     $f0, $f0, $f28
/* 25BF8 8004A7F8 00000000 */  nop
/* 25BFC 8004A7FC E7A20028 */  swc1      $f2, 0x28($sp)
/* 25C00 8004A800 C63A0000 */  lwc1      $f26, ($s1)
/* 25C04 8004A804 27A70028 */  addiu     $a3, $sp, 0x28
/* 25C08 8004A808 E7BA0014 */  swc1      $f26, 0x14($sp)
/* 25C0C 8004A80C E7A00010 */  swc1      $f0, 0x10($sp)
/* 25C10 8004A810 860200A8 */  lh        $v0, 0xa8($s0)
/* 25C14 8004A814 3C01BF80 */  lui       $at, 0xbf80
/* 25C18 8004A818 4481A000 */  mtc1      $at, $f20
/* 25C1C 8004A81C 44820000 */  mtc1      $v0, $f0
/* 25C20 8004A820 00000000 */  nop
/* 25C24 8004A824 46800020 */  cvt.s.w   $f0, $f0
/* 25C28 8004A828 E7A00018 */  swc1      $f0, 0x18($sp)
/* 25C2C 8004A82C 860200A6 */  lh        $v0, 0xa6($s0)
/* 25C30 8004A830 4600A586 */  mov.s     $f22, $f20
/* 25C34 8004A834 44820000 */  mtc1      $v0, $f0
/* 25C38 8004A838 00000000 */  nop
/* 25C3C 8004A83C 46800020 */  cvt.s.w   $f0, $f0
/* 25C40 8004A840 E7A0001C */  swc1      $f0, 0x1c($sp)
/* 25C44 8004A844 8E040080 */  lw        $a0, 0x80($s0)
/* 25C48 8004A848 0C037711 */  jal       npc_test_move_simple_with_slipping
/* 25C4C 8004A84C 4600A606 */   mov.s    $f24, $f20
/* 25C50 8004A850 0040902D */  daddu     $s2, $v0, $zero
/* 25C54 8004A854 1240008D */  beqz      $s2, .L8004AA8C
/* 25C58 8004A858 00000000 */   nop
/* 25C5C 8004A85C C60C0038 */  lwc1      $f12, 0x38($s0)
/* 25C60 8004A860 C60E0040 */  lwc1      $f14, 0x40($s0)
/* 25C64 8004A864 8FA60020 */  lw        $a2, 0x20($sp)
/* 25C68 8004A868 0C00A7B5 */  jal       dist2D
/* 25C6C 8004A86C 8FA70028 */   lw       $a3, 0x28($sp)
/* 25C70 8004A870 46000586 */  mov.s     $f22, $f0
/* 25C74 8004A874 C6020038 */  lwc1      $f2, 0x38($s0)
/* 25C78 8004A878 C604003C */  lwc1      $f4, 0x3c($s0)
/* 25C7C 8004A87C 3C01420C */  lui       $at, 0x420c
/* 25C80 8004A880 4481F000 */  mtc1      $at, $f30
/* 25C84 8004A884 C6000040 */  lwc1      $f0, 0x40($s0)
/* 25C88 8004A888 461ED300 */  add.s     $f12, $f26, $f30
/* 25C8C 8004A88C E7A2002C */  swc1      $f2, 0x2c($sp)
/* 25C90 8004A890 E7A40030 */  swc1      $f4, 0x30($sp)
/* 25C94 8004A894 0C00A6C9 */  jal       clamp_angle
/* 25C98 8004A898 E7A00034 */   swc1     $f0, 0x34($sp)
/* 25C9C 8004A89C C6020018 */  lwc1      $f2, 0x18($s0)
/* 25CA0 8004A8A0 461C1082 */  mul.s     $f2, $f2, $f28
/* 25CA4 8004A8A4 00000000 */  nop
/* 25CA8 8004A8A8 E7A00014 */  swc1      $f0, 0x14($sp)
/* 25CAC 8004A8AC E7A20010 */  swc1      $f2, 0x10($sp)
/* 25CB0 8004A8B0 860200A8 */  lh        $v0, 0xa8($s0)
/* 25CB4 8004A8B4 27A5002C */  addiu     $a1, $sp, 0x2c
/* 25CB8 8004A8B8 44820000 */  mtc1      $v0, $f0
/* 25CBC 8004A8BC 00000000 */  nop
/* 25CC0 8004A8C0 46800020 */  cvt.s.w   $f0, $f0
/* 25CC4 8004A8C4 E7A00018 */  swc1      $f0, 0x18($sp)
/* 25CC8 8004A8C8 860200A6 */  lh        $v0, 0xa6($s0)
/* 25CCC 8004A8CC 27A60030 */  addiu     $a2, $sp, 0x30
/* 25CD0 8004A8D0 44820000 */  mtc1      $v0, $f0
/* 25CD4 8004A8D4 00000000 */  nop
/* 25CD8 8004A8D8 46800020 */  cvt.s.w   $f0, $f0
/* 25CDC 8004A8DC E7A0001C */  swc1      $f0, 0x1c($sp)
/* 25CE0 8004A8E0 8E040080 */  lw        $a0, 0x80($s0)
/* 25CE4 8004A8E4 0C037711 */  jal       npc_test_move_simple_with_slipping
/* 25CE8 8004A8E8 27A70034 */   addiu    $a3, $sp, 0x34
/* 25CEC 8004A8EC 10400007 */  beqz      $v0, .L8004A90C
/* 25CF0 8004A8F0 00000000 */   nop
/* 25CF4 8004A8F4 C60C0038 */  lwc1      $f12, 0x38($s0)
/* 25CF8 8004A8F8 C60E0040 */  lwc1      $f14, 0x40($s0)
/* 25CFC 8004A8FC 8FA6002C */  lw        $a2, 0x2c($sp)
/* 25D00 8004A900 0C00A7B5 */  jal       dist2D
/* 25D04 8004A904 8FA70034 */   lw       $a3, 0x34($sp)
/* 25D08 8004A908 46000506 */  mov.s     $f20, $f0
.L8004A90C:
/* 25D0C 8004A90C C6000038 */  lwc1      $f0, 0x38($s0)
/* 25D10 8004A910 C602003C */  lwc1      $f2, 0x3c($s0)
/* 25D14 8004A914 C6040040 */  lwc1      $f4, 0x40($s0)
/* 25D18 8004A918 461ED301 */  sub.s     $f12, $f26, $f30
/* 25D1C 8004A91C E7A00038 */  swc1      $f0, 0x38($sp)
/* 25D20 8004A920 E7A2003C */  swc1      $f2, 0x3c($sp)
/* 25D24 8004A924 0C00A6C9 */  jal       clamp_angle
/* 25D28 8004A928 E7A40040 */   swc1     $f4, 0x40($sp)
/* 25D2C 8004A92C C6020018 */  lwc1      $f2, 0x18($s0)
/* 25D30 8004A930 461C1082 */  mul.s     $f2, $f2, $f28
/* 25D34 8004A934 00000000 */  nop
/* 25D38 8004A938 E7A00014 */  swc1      $f0, 0x14($sp)
/* 25D3C 8004A93C E7A20010 */  swc1      $f2, 0x10($sp)
/* 25D40 8004A940 860200A8 */  lh        $v0, 0xa8($s0)
/* 25D44 8004A944 27A50038 */  addiu     $a1, $sp, 0x38
/* 25D48 8004A948 44820000 */  mtc1      $v0, $f0
/* 25D4C 8004A94C 00000000 */  nop
/* 25D50 8004A950 46800020 */  cvt.s.w   $f0, $f0
/* 25D54 8004A954 E7A00018 */  swc1      $f0, 0x18($sp)
/* 25D58 8004A958 860200A6 */  lh        $v0, 0xa6($s0)
/* 25D5C 8004A95C 27A6003C */  addiu     $a2, $sp, 0x3c
/* 25D60 8004A960 44820000 */  mtc1      $v0, $f0
/* 25D64 8004A964 00000000 */  nop
/* 25D68 8004A968 46800020 */  cvt.s.w   $f0, $f0
/* 25D6C 8004A96C E7A0001C */  swc1      $f0, 0x1c($sp)
/* 25D70 8004A970 8E040080 */  lw        $a0, 0x80($s0)
/* 25D74 8004A974 0C037711 */  jal       npc_test_move_simple_with_slipping
/* 25D78 8004A978 27A70040 */   addiu    $a3, $sp, 0x40
/* 25D7C 8004A97C 10400007 */  beqz      $v0, .L8004A99C
/* 25D80 8004A980 00000000 */   nop
/* 25D84 8004A984 C60C0038 */  lwc1      $f12, 0x38($s0)
/* 25D88 8004A988 C60E0040 */  lwc1      $f14, 0x40($s0)
/* 25D8C 8004A98C 8FA60038 */  lw        $a2, 0x38($sp)
/* 25D90 8004A990 0C00A7B5 */  jal       dist2D
/* 25D94 8004A994 8FA70040 */   lw       $a3, 0x40($sp)
/* 25D98 8004A998 46000606 */  mov.s     $f24, $f0
.L8004A99C:
/* 25D9C 8004A99C 4616A03C */  c.lt.s    $f20, $f22
/* 25DA0 8004A9A0 00000000 */  nop
/* 25DA4 8004A9A4 45000005 */  bc1f      .L8004A9BC
/* 25DA8 8004A9A8 00000000 */   nop
/* 25DAC 8004A9AC 4614C03C */  c.lt.s    $f24, $f20
/* 25DB0 8004A9B0 00000000 */  nop
/* 25DB4 8004A9B4 45010009 */  bc1t      .L8004A9DC
/* 25DB8 8004A9B8 00000000 */   nop
.L8004A9BC:
/* 25DBC 8004A9BC 4616C03C */  c.lt.s    $f24, $f22
/* 25DC0 8004A9C0 00000000 */  nop
/* 25DC4 8004A9C4 45000007 */  bc1f      .L8004A9E4
/* 25DC8 8004A9C8 00000000 */   nop
/* 25DCC 8004A9CC 4618A03C */  c.lt.s    $f20, $f24
/* 25DD0 8004A9D0 00000000 */  nop
/* 25DD4 8004A9D4 45000003 */  bc1f      .L8004A9E4
/* 25DD8 8004A9D8 00000000 */   nop
.L8004A9DC:
/* 25DDC 8004A9DC 08012AA3 */  j         .L8004AA8C
/* 25DE0 8004A9E0 C61A000C */   lwc1     $f26, 0xc($s0)
.L8004A9E4:
/* 25DE4 8004A9E4 4614B03C */  c.lt.s    $f22, $f20
/* 25DE8 8004A9E8 00000000 */  nop
/* 25DEC 8004A9EC 45000005 */  bc1f      .L8004AA04
/* 25DF0 8004A9F0 00000000 */   nop
/* 25DF4 8004A9F4 4616C03C */  c.lt.s    $f24, $f22
/* 25DF8 8004A9F8 00000000 */  nop
/* 25DFC 8004A9FC 45010009 */  bc1t      .L8004AA24
/* 25E00 8004AA00 00000000 */   nop
.L8004AA04:
/* 25E04 8004AA04 4614C03C */  c.lt.s    $f24, $f20
/* 25E08 8004AA08 00000000 */  nop
/* 25E0C 8004AA0C 4500000A */  bc1f      .L8004AA38
/* 25E10 8004AA10 00000000 */   nop
/* 25E14 8004AA14 4618B03C */  c.lt.s    $f22, $f24
/* 25E18 8004AA18 00000000 */  nop
/* 25E1C 8004AA1C 45000008 */  bc1f      .L8004AA40
/* 25E20 8004AA20 00000000 */   nop
.L8004AA24:
/* 25E24 8004AA24 C602000C */  lwc1      $f2, 0xc($s0)
/* 25E28 8004AA28 3C01420C */  lui       $at, 0x420c
/* 25E2C 8004AA2C 44810000 */  mtc1      $at, $f0
/* 25E30 8004AA30 08012AA3 */  j         .L8004AA8C
/* 25E34 8004AA34 46001680 */   add.s    $f26, $f2, $f0
.L8004AA38:
/* 25E38 8004AA38 4618B03C */  c.lt.s    $f22, $f24
/* 25E3C 8004AA3C 00000000 */  nop
.L8004AA40:
/* 25E40 8004AA40 45000005 */  bc1f      .L8004AA58
/* 25E44 8004AA44 00000000 */   nop
/* 25E48 8004AA48 4616A03C */  c.lt.s    $f20, $f22
/* 25E4C 8004AA4C 00000000 */  nop
/* 25E50 8004AA50 45010009 */  bc1t      .L8004AA78
/* 25E54 8004AA54 00000000 */   nop
.L8004AA58:
/* 25E58 8004AA58 4618A03C */  c.lt.s    $f20, $f24
/* 25E5C 8004AA5C 00000000 */  nop
/* 25E60 8004AA60 4500000A */  bc1f      .L8004AA8C
/* 25E64 8004AA64 00000000 */   nop
/* 25E68 8004AA68 4614B03C */  c.lt.s    $f22, $f20
/* 25E6C 8004AA6C 00000000 */  nop
/* 25E70 8004AA70 45000006 */  bc1f      .L8004AA8C
/* 25E74 8004AA74 00000000 */   nop
.L8004AA78:
/* 25E78 8004AA78 C602000C */  lwc1      $f2, 0xc($s0)
/* 25E7C 8004AA7C 3C01420C */  lui       $at, 0x420c
/* 25E80 8004AA80 44810000 */  mtc1      $at, $f0
/* 25E84 8004AA84 00000000 */  nop
/* 25E88 8004AA88 46001681 */  sub.s     $f26, $f2, $f0
.L8004AA8C:
/* 25E8C 8004AA8C 12200004 */  beqz      $s1, .L8004AAA0
/* 25E90 8004AA90 00000000 */   nop
/* 25E94 8004AA94 0C00A6C9 */  jal       clamp_angle
/* 25E98 8004AA98 4600D306 */   mov.s    $f12, $f26
/* 25E9C 8004AA9C E6200000 */  swc1      $f0, ($s1)
.L8004AAA0:
/* 25EA0 8004AAA0 56600001 */  bnel      $s3, $zero, .L8004AAA8
/* 25EA4 8004AAA4 E6760000 */   swc1     $f22, ($s3)
.L8004AAA8:
/* 25EA8 8004AAA8 56800001 */  bnel      $s4, $zero, .L8004AAB0
/* 25EAC 8004AAAC E6940000 */   swc1     $f20, ($s4)
.L8004AAB0:
/* 25EB0 8004AAB0 56A00001 */  bnel      $s5, $zero, .L8004AAB8
/* 25EB4 8004AAB4 E6B80000 */   swc1     $f24, ($s5)
.L8004AAB8:
/* 25EB8 8004AAB8 0240102D */  daddu     $v0, $s2, $zero
/* 25EBC 8004AABC 8FBF0060 */  lw        $ra, 0x60($sp)
/* 25EC0 8004AAC0 8FB5005C */  lw        $s5, 0x5c($sp)
/* 25EC4 8004AAC4 8FB40058 */  lw        $s4, 0x58($sp)
/* 25EC8 8004AAC8 8FB30054 */  lw        $s3, 0x54($sp)
/* 25ECC 8004AACC 8FB20050 */  lw        $s2, 0x50($sp)
/* 25ED0 8004AAD0 8FB1004C */  lw        $s1, 0x4c($sp)
/* 25ED4 8004AAD4 8FB00048 */  lw        $s0, 0x48($sp)
/* 25ED8 8004AAD8 D7BE0090 */  ldc1      $f30, 0x90($sp)
/* 25EDC 8004AADC D7BC0088 */  ldc1      $f28, 0x88($sp)
/* 25EE0 8004AAE0 D7BA0080 */  ldc1      $f26, 0x80($sp)
/* 25EE4 8004AAE4 D7B80078 */  ldc1      $f24, 0x78($sp)
/* 25EE8 8004AAE8 D7B60070 */  ldc1      $f22, 0x70($sp)
/* 25EEC 8004AAEC D7B40068 */  ldc1      $f20, 0x68($sp)
/* 25EF0 8004AAF0 03E00008 */  jr        $ra
/* 25EF4 8004AAF4 27BD0098 */   addiu    $sp, $sp, 0x98
/* 25EF8 8004AAF8 00000000 */  nop
/* 25EFC 8004AAFC 00000000 */  nop
