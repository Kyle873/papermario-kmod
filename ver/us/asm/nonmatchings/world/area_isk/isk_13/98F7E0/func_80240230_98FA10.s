.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_80240230_98FA10
/* 98FA10 80240230 27BDFFA0 */  addiu     $sp, $sp, -0x60
/* 98FA14 80240234 AFB3004C */  sw        $s3, 0x4c($sp)
/* 98FA18 80240238 0080982D */  daddu     $s3, $a0, $zero
/* 98FA1C 8024023C AFBF0054 */  sw        $ra, 0x54($sp)
/* 98FA20 80240240 AFB40050 */  sw        $s4, 0x50($sp)
/* 98FA24 80240244 AFB20048 */  sw        $s2, 0x48($sp)
/* 98FA28 80240248 AFB10044 */  sw        $s1, 0x44($sp)
/* 98FA2C 8024024C AFB00040 */  sw        $s0, 0x40($sp)
/* 98FA30 80240250 F7B40058 */  sdc1      $f20, 0x58($sp)
/* 98FA34 80240254 8E710148 */  lw        $s1, 0x148($s3)
/* 98FA38 80240258 00A0A02D */  daddu     $s4, $a1, $zero
/* 98FA3C 8024025C 86240008 */  lh        $a0, 8($s1)
/* 98FA40 80240260 0C00EABB */  jal       get_npc_unsafe
/* 98FA44 80240264 00C0902D */   daddu    $s2, $a2, $zero
/* 98FA48 80240268 8E830014 */  lw        $v1, 0x14($s4)
/* 98FA4C 8024026C 04600034 */  bltz      $v1, .L80240340
/* 98FA50 80240270 0040802D */   daddu    $s0, $v0, $zero
/* 98FA54 80240274 8E620074 */  lw        $v0, 0x74($s3)
/* 98FA58 80240278 1C400030 */  bgtz      $v0, .L8024033C
/* 98FA5C 8024027C 2442FFFF */   addiu    $v0, $v0, -1
/* 98FA60 80240280 0240202D */  daddu     $a0, $s2, $zero
/* 98FA64 80240284 AE630074 */  sw        $v1, 0x74($s3)
/* 98FA68 80240288 AFA00010 */  sw        $zero, 0x10($sp)
/* 98FA6C 8024028C 8E86000C */  lw        $a2, 0xc($s4)
/* 98FA70 80240290 8E870010 */  lw        $a3, 0x10($s4)
/* 98FA74 80240294 0C01242D */  jal       func_800490B4
/* 98FA78 80240298 0220282D */   daddu    $a1, $s1, $zero
/* 98FA7C 8024029C 10400025 */  beqz      $v0, .L80240334
/* 98FA80 802402A0 0000202D */   daddu    $a0, $zero, $zero
/* 98FA84 802402A4 0200282D */  daddu     $a1, $s0, $zero
/* 98FA88 802402A8 0000302D */  daddu     $a2, $zero, $zero
/* 98FA8C 802402AC 860300A8 */  lh        $v1, 0xa8($s0)
/* 98FA90 802402B0 3C013F80 */  lui       $at, 0x3f80
/* 98FA94 802402B4 44810000 */  mtc1      $at, $f0
/* 98FA98 802402B8 3C014000 */  lui       $at, 0x4000
/* 98FA9C 802402BC 44811000 */  mtc1      $at, $f2
/* 98FAA0 802402C0 3C01C1A0 */  lui       $at, 0xc1a0
/* 98FAA4 802402C4 44812000 */  mtc1      $at, $f4
/* 98FAA8 802402C8 2402000F */  addiu     $v0, $zero, 0xf
/* 98FAAC 802402CC AFA2001C */  sw        $v0, 0x1c($sp)
/* 98FAB0 802402D0 44835000 */  mtc1      $v1, $f10
/* 98FAB4 802402D4 00000000 */  nop
/* 98FAB8 802402D8 468052A0 */  cvt.s.w   $f10, $f10
/* 98FABC 802402DC 44075000 */  mfc1      $a3, $f10
/* 98FAC0 802402E0 27A20028 */  addiu     $v0, $sp, 0x28
/* 98FAC4 802402E4 AFA20020 */  sw        $v0, 0x20($sp)
/* 98FAC8 802402E8 E7A00010 */  swc1      $f0, 0x10($sp)
/* 98FACC 802402EC E7A20014 */  swc1      $f2, 0x14($sp)
/* 98FAD0 802402F0 0C01BFA4 */  jal       fx_emote
/* 98FAD4 802402F4 E7A40018 */   swc1     $f4, 0x18($sp)
/* 98FAD8 802402F8 0200202D */  daddu     $a0, $s0, $zero
/* 98FADC 802402FC 240502F4 */  addiu     $a1, $zero, 0x2f4
/* 98FAE0 80240300 0C012530 */  jal       ai_enemy_play_sound
/* 98FAE4 80240304 3C060020 */   lui      $a2, 0x20
/* 98FAE8 80240308 3C02800F */  lui       $v0, %hi(gPlayerStatusPtr)
/* 98FAEC 8024030C 8C427B30 */  lw        $v0, %lo(gPlayerStatusPtr)($v0)
/* 98FAF0 80240310 C60C0038 */  lwc1      $f12, 0x38($s0)
/* 98FAF4 80240314 C60E0040 */  lwc1      $f14, 0x40($s0)
/* 98FAF8 80240318 8C460028 */  lw        $a2, 0x28($v0)
/* 98FAFC 8024031C 0C00A720 */  jal       atan2
/* 98FB00 80240320 8C470030 */   lw       $a3, 0x30($v0)
/* 98FB04 80240324 2402000C */  addiu     $v0, $zero, 0xc
/* 98FB08 80240328 E600000C */  swc1      $f0, 0xc($s0)
/* 98FB0C 8024032C 08090151 */  j         .L80240544
/* 98FB10 80240330 AE620070 */   sw       $v0, 0x70($s3)
.L80240334:
/* 98FB14 80240334 8E620074 */  lw        $v0, 0x74($s3)
/* 98FB18 80240338 2442FFFF */  addiu     $v0, $v0, -1
.L8024033C:
/* 98FB1C 8024033C AE620074 */  sw        $v0, 0x74($s3)
.L80240340:
/* 98FB20 80240340 C6000018 */  lwc1      $f0, 0x18($s0)
/* 98FB24 80240344 44801000 */  mtc1      $zero, $f2
/* 98FB28 80240348 44801800 */  mtc1      $zero, $f3
/* 98FB2C 8024034C 46000021 */  cvt.d.s   $f0, $f0
/* 98FB30 80240350 4620103C */  c.lt.d    $f2, $f0
/* 98FB34 80240354 00000000 */  nop
/* 98FB38 80240358 45000025 */  bc1f      .L802403F0
/* 98FB3C 8024035C 27A5002C */   addiu    $a1, $sp, 0x2c
/* 98FB40 80240360 C6000038 */  lwc1      $f0, 0x38($s0)
/* 98FB44 80240364 860200A6 */  lh        $v0, 0xa6($s0)
/* 98FB48 80240368 3C018024 */  lui       $at, %hi(D_80242EB0_992690)
/* 98FB4C 8024036C D4222EB0 */  ldc1      $f2, %lo(D_80242EB0_992690)($at)
/* 98FB50 80240370 27A60030 */  addiu     $a2, $sp, 0x30
/* 98FB54 80240374 E7A0002C */  swc1      $f0, 0x2c($sp)
/* 98FB58 80240378 44820000 */  mtc1      $v0, $f0
/* 98FB5C 8024037C 00000000 */  nop
/* 98FB60 80240380 46800020 */  cvt.s.w   $f0, $f0
/* 98FB64 80240384 46000021 */  cvt.d.s   $f0, $f0
/* 98FB68 80240388 C604003C */  lwc1      $f4, 0x3c($s0)
/* 98FB6C 8024038C C6060040 */  lwc1      $f6, 0x40($s0)
/* 98FB70 80240390 C6080018 */  lwc1      $f8, 0x18($s0)
/* 98FB74 80240394 860200A8 */  lh        $v0, 0xa8($s0)
/* 98FB78 80240398 46220002 */  mul.d     $f0, $f0, $f2
/* 98FB7C 8024039C 00000000 */  nop
/* 98FB80 802403A0 E7A40030 */  swc1      $f4, 0x30($sp)
/* 98FB84 802403A4 E7A60034 */  swc1      $f6, 0x34($sp)
/* 98FB88 802403A8 E7A80010 */  swc1      $f8, 0x10($sp)
/* 98FB8C 802403AC C604000C */  lwc1      $f4, 0xc($s0)
/* 98FB90 802403B0 44821000 */  mtc1      $v0, $f2
/* 98FB94 802403B4 00000000 */  nop
/* 98FB98 802403B8 468010A0 */  cvt.s.w   $f2, $f2
/* 98FB9C 802403BC E7A20018 */  swc1      $f2, 0x18($sp)
/* 98FBA0 802403C0 E7A40014 */  swc1      $f4, 0x14($sp)
/* 98FBA4 802403C4 46200020 */  cvt.s.d   $f0, $f0
/* 98FBA8 802403C8 E7A0001C */  swc1      $f0, 0x1c($sp)
/* 98FBAC 802403CC 8E040080 */  lw        $a0, 0x80($s0)
/* 98FBB0 802403D0 0C037711 */  jal       npc_test_move_simple_with_slipping
/* 98FBB4 802403D4 27A70034 */   addiu    $a3, $sp, 0x34
/* 98FBB8 802403D8 54400005 */  bnel      $v0, $zero, .L802403F0
/* 98FBBC 802403DC AE000018 */   sw       $zero, 0x18($s0)
/* 98FBC0 802403E0 8E050018 */  lw        $a1, 0x18($s0)
/* 98FBC4 802403E4 8E06000C */  lw        $a2, 0xc($s0)
/* 98FBC8 802403E8 0C00EA95 */  jal       npc_move_heading
/* 98FBCC 802403EC 0200202D */   daddu    $a0, $s0, $zero
.L802403F0:
/* 98FBD0 802403F0 C600001C */  lwc1      $f0, 0x1c($s0)
/* 98FBD4 802403F4 44801000 */  mtc1      $zero, $f2
/* 98FBD8 802403F8 44801800 */  mtc1      $zero, $f3
/* 98FBDC 802403FC 46000021 */  cvt.d.s   $f0, $f0
/* 98FBE0 80240400 4622003C */  c.lt.d    $f0, $f2
/* 98FBE4 80240404 00000000 */  nop
/* 98FBE8 80240408 45000047 */  bc1f      .L80240528
/* 98FBEC 8024040C 27A5002C */   addiu    $a1, $sp, 0x2c
/* 98FBF0 80240410 27A60030 */  addiu     $a2, $sp, 0x30
/* 98FBF4 80240414 27A20038 */  addiu     $v0, $sp, 0x38
/* 98FBF8 80240418 C602003C */  lwc1      $f2, 0x3c($s0)
/* 98FBFC 8024041C C6060038 */  lwc1      $f6, 0x38($s0)
/* 98FC00 80240420 3C01402A */  lui       $at, 0x402a
/* 98FC04 80240424 4481A800 */  mtc1      $at, $f21
/* 98FC08 80240428 4480A000 */  mtc1      $zero, $f20
/* 98FC0C 8024042C 460010A1 */  cvt.d.s   $f2, $f2
/* 98FC10 80240430 46341080 */  add.d     $f2, $f2, $f20
/* 98FC14 80240434 C600001C */  lwc1      $f0, 0x1c($s0)
/* 98FC18 80240438 C6040040 */  lwc1      $f4, 0x40($s0)
/* 98FC1C 8024043C 46000005 */  abs.s     $f0, $f0
/* 98FC20 80240440 E7A40034 */  swc1      $f4, 0x34($sp)
/* 98FC24 80240444 3C014030 */  lui       $at, 0x4030
/* 98FC28 80240448 44812800 */  mtc1      $at, $f5
/* 98FC2C 8024044C 44802000 */  mtc1      $zero, $f4
/* 98FC30 80240450 46000021 */  cvt.d.s   $f0, $f0
/* 98FC34 80240454 E7A6002C */  swc1      $f6, 0x2c($sp)
/* 98FC38 80240458 46240000 */  add.d     $f0, $f0, $f4
/* 98FC3C 8024045C 462010A0 */  cvt.s.d   $f2, $f2
/* 98FC40 80240460 E7A20030 */  swc1      $f2, 0x30($sp)
/* 98FC44 80240464 46200020 */  cvt.s.d   $f0, $f0
/* 98FC48 80240468 E7A00038 */  swc1      $f0, 0x38($sp)
/* 98FC4C 8024046C AFA20010 */  sw        $v0, 0x10($sp)
/* 98FC50 80240470 8E040080 */  lw        $a0, 0x80($s0)
/* 98FC54 80240474 0C0372DF */  jal       npc_raycast_down_sides
/* 98FC58 80240478 27A70034 */   addiu    $a3, $sp, 0x34
/* 98FC5C 8024047C 1040002A */  beqz      $v0, .L80240528
/* 98FC60 80240480 00000000 */   nop
/* 98FC64 80240484 C600001C */  lwc1      $f0, 0x1c($s0)
/* 98FC68 80240488 C7A20038 */  lwc1      $f2, 0x38($sp)
/* 98FC6C 8024048C 46000005 */  abs.s     $f0, $f0
/* 98FC70 80240490 46000021 */  cvt.d.s   $f0, $f0
/* 98FC74 80240494 46340000 */  add.d     $f0, $f0, $f20
/* 98FC78 80240498 460010A1 */  cvt.d.s   $f2, $f2
/* 98FC7C 8024049C 4620103E */  c.le.d    $f2, $f0
/* 98FC80 802404A0 00000000 */  nop
/* 98FC84 802404A4 45000020 */  bc1f      .L80240528
/* 98FC88 802404A8 240403E8 */   addiu    $a0, $zero, 0x3e8
/* 98FC8C 802404AC C7A00030 */  lwc1      $f0, 0x30($sp)
/* 98FC90 802404B0 8E020000 */  lw        $v0, ($s0)
/* 98FC94 802404B4 2403F7FF */  addiu     $v1, $zero, -0x801
/* 98FC98 802404B8 AE00001C */  sw        $zero, 0x1c($s0)
/* 98FC9C 802404BC 00431024 */  and       $v0, $v0, $v1
/* 98FCA0 802404C0 AE020000 */  sw        $v0, ($s0)
/* 98FCA4 802404C4 24020002 */  addiu     $v0, $zero, 2
/* 98FCA8 802404C8 E600003C */  swc1      $f0, 0x3c($s0)
/* 98FCAC 802404CC 0C00A67F */  jal       rand_int
/* 98FCB0 802404D0 AE620070 */   sw       $v0, 0x70($s3)
/* 98FCB4 802404D4 3C035555 */  lui       $v1, 0x5555
/* 98FCB8 802404D8 34635556 */  ori       $v1, $v1, 0x5556
/* 98FCBC 802404DC 00430018 */  mult      $v0, $v1
/* 98FCC0 802404E0 000227C3 */  sra       $a0, $v0, 0x1f
/* 98FCC4 802404E4 00004010 */  mfhi      $t0
/* 98FCC8 802404E8 01042023 */  subu      $a0, $t0, $a0
/* 98FCCC 802404EC 00041840 */  sll       $v1, $a0, 1
/* 98FCD0 802404F0 00641821 */  addu      $v1, $v1, $a0
/* 98FCD4 802404F4 00431023 */  subu      $v0, $v0, $v1
/* 98FCD8 802404F8 24430002 */  addiu     $v1, $v0, 2
/* 98FCDC 802404FC AE630074 */  sw        $v1, 0x74($s3)
/* 98FCE0 80240500 8E82002C */  lw        $v0, 0x2c($s4)
/* 98FCE4 80240504 5840000F */  blezl     $v0, .L80240544
/* 98FCE8 80240508 AE600070 */   sw       $zero, 0x70($s3)
/* 98FCEC 8024050C 8E820004 */  lw        $v0, 4($s4)
/* 98FCF0 80240510 5840000C */  blezl     $v0, .L80240544
/* 98FCF4 80240514 AE600070 */   sw       $zero, 0x70($s3)
/* 98FCF8 80240518 1460000A */  bnez      $v1, .L80240544
/* 98FCFC 8024051C 00000000 */   nop
/* 98FD00 80240520 08090151 */  j         .L80240544
/* 98FD04 80240524 AE600070 */   sw       $zero, 0x70($s3)
.L80240528:
/* 98FD08 80240528 C604003C */  lwc1      $f4, 0x3c($s0)
/* 98FD0C 8024052C C600001C */  lwc1      $f0, 0x1c($s0)
/* 98FD10 80240530 46002100 */  add.s     $f4, $f4, $f0
/* 98FD14 80240534 C6020014 */  lwc1      $f2, 0x14($s0)
/* 98FD18 80240538 46020001 */  sub.s     $f0, $f0, $f2
/* 98FD1C 8024053C E604003C */  swc1      $f4, 0x3c($s0)
/* 98FD20 80240540 E600001C */  swc1      $f0, 0x1c($s0)
.L80240544:
/* 98FD24 80240544 8FBF0054 */  lw        $ra, 0x54($sp)
/* 98FD28 80240548 8FB40050 */  lw        $s4, 0x50($sp)
/* 98FD2C 8024054C 8FB3004C */  lw        $s3, 0x4c($sp)
/* 98FD30 80240550 8FB20048 */  lw        $s2, 0x48($sp)
/* 98FD34 80240554 8FB10044 */  lw        $s1, 0x44($sp)
/* 98FD38 80240558 8FB00040 */  lw        $s0, 0x40($sp)
/* 98FD3C 8024055C D7B40058 */  ldc1      $f20, 0x58($sp)
/* 98FD40 80240560 03E00008 */  jr        $ra
/* 98FD44 80240564 27BD0060 */   addiu    $sp, $sp, 0x60
