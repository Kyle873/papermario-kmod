.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_802402D0_BB30D0
/* BB30D0 802402D0 27BDFFA0 */  addiu     $sp, $sp, -0x60
/* BB30D4 802402D4 AFB3004C */  sw        $s3, 0x4c($sp)
/* BB30D8 802402D8 0080982D */  daddu     $s3, $a0, $zero
/* BB30DC 802402DC AFBF0054 */  sw        $ra, 0x54($sp)
/* BB30E0 802402E0 AFB40050 */  sw        $s4, 0x50($sp)
/* BB30E4 802402E4 AFB20048 */  sw        $s2, 0x48($sp)
/* BB30E8 802402E8 AFB10044 */  sw        $s1, 0x44($sp)
/* BB30EC 802402EC AFB00040 */  sw        $s0, 0x40($sp)
/* BB30F0 802402F0 F7B40058 */  sdc1      $f20, 0x58($sp)
/* BB30F4 802402F4 8E710148 */  lw        $s1, 0x148($s3)
/* BB30F8 802402F8 00A0A02D */  daddu     $s4, $a1, $zero
/* BB30FC 802402FC 86240008 */  lh        $a0, 8($s1)
/* BB3100 80240300 0C00EABB */  jal       get_npc_unsafe
/* BB3104 80240304 00C0902D */   daddu    $s2, $a2, $zero
/* BB3108 80240308 8E830014 */  lw        $v1, 0x14($s4)
/* BB310C 8024030C 04600034 */  bltz      $v1, .L802403E0
/* BB3110 80240310 0040802D */   daddu    $s0, $v0, $zero
/* BB3114 80240314 8E620074 */  lw        $v0, 0x74($s3)
/* BB3118 80240318 1C400030 */  bgtz      $v0, .L802403DC
/* BB311C 8024031C 2442FFFF */   addiu    $v0, $v0, -1
/* BB3120 80240320 0240202D */  daddu     $a0, $s2, $zero
/* BB3124 80240324 AE630074 */  sw        $v1, 0x74($s3)
/* BB3128 80240328 AFA00010 */  sw        $zero, 0x10($sp)
/* BB312C 8024032C 8E86000C */  lw        $a2, 0xc($s4)
/* BB3130 80240330 8E870010 */  lw        $a3, 0x10($s4)
/* BB3134 80240334 0C01242D */  jal       func_800490B4
/* BB3138 80240338 0220282D */   daddu    $a1, $s1, $zero
/* BB313C 8024033C 10400025 */  beqz      $v0, .L802403D4
/* BB3140 80240340 0000202D */   daddu    $a0, $zero, $zero
/* BB3144 80240344 0200282D */  daddu     $a1, $s0, $zero
/* BB3148 80240348 0000302D */  daddu     $a2, $zero, $zero
/* BB314C 8024034C 860300A8 */  lh        $v1, 0xa8($s0)
/* BB3150 80240350 3C013F80 */  lui       $at, 0x3f80
/* BB3154 80240354 44810000 */  mtc1      $at, $f0
/* BB3158 80240358 3C014000 */  lui       $at, 0x4000
/* BB315C 8024035C 44811000 */  mtc1      $at, $f2
/* BB3160 80240360 3C01C1A0 */  lui       $at, 0xc1a0
/* BB3164 80240364 44812000 */  mtc1      $at, $f4
/* BB3168 80240368 2402000F */  addiu     $v0, $zero, 0xf
/* BB316C 8024036C AFA2001C */  sw        $v0, 0x1c($sp)
/* BB3170 80240370 44835000 */  mtc1      $v1, $f10
/* BB3174 80240374 00000000 */  nop
/* BB3178 80240378 468052A0 */  cvt.s.w   $f10, $f10
/* BB317C 8024037C 44075000 */  mfc1      $a3, $f10
/* BB3180 80240380 27A20028 */  addiu     $v0, $sp, 0x28
/* BB3184 80240384 AFA20020 */  sw        $v0, 0x20($sp)
/* BB3188 80240388 E7A00010 */  swc1      $f0, 0x10($sp)
/* BB318C 8024038C E7A20014 */  swc1      $f2, 0x14($sp)
/* BB3190 80240390 0C01BFA4 */  jal       fx_emote
/* BB3194 80240394 E7A40018 */   swc1     $f4, 0x18($sp)
/* BB3198 80240398 0200202D */  daddu     $a0, $s0, $zero
/* BB319C 8024039C 240502F4 */  addiu     $a1, $zero, 0x2f4
/* BB31A0 802403A0 0C012530 */  jal       ai_enemy_play_sound
/* BB31A4 802403A4 3C060020 */   lui      $a2, 0x20
/* BB31A8 802403A8 3C02800F */  lui       $v0, %hi(gPlayerStatusPtr)
/* BB31AC 802403AC 8C427B30 */  lw        $v0, %lo(gPlayerStatusPtr)($v0)
/* BB31B0 802403B0 C60C0038 */  lwc1      $f12, 0x38($s0)
/* BB31B4 802403B4 C60E0040 */  lwc1      $f14, 0x40($s0)
/* BB31B8 802403B8 8C460028 */  lw        $a2, 0x28($v0)
/* BB31BC 802403BC 0C00A720 */  jal       atan2
/* BB31C0 802403C0 8C470030 */   lw       $a3, 0x30($v0)
/* BB31C4 802403C4 2402000C */  addiu     $v0, $zero, 0xc
/* BB31C8 802403C8 E600000C */  swc1      $f0, 0xc($s0)
/* BB31CC 802403CC 08090179 */  j         .L802405E4
/* BB31D0 802403D0 AE620070 */   sw       $v0, 0x70($s3)
.L802403D4:
/* BB31D4 802403D4 8E620074 */  lw        $v0, 0x74($s3)
/* BB31D8 802403D8 2442FFFF */  addiu     $v0, $v0, -1
.L802403DC:
/* BB31DC 802403DC AE620074 */  sw        $v0, 0x74($s3)
.L802403E0:
/* BB31E0 802403E0 C6000018 */  lwc1      $f0, 0x18($s0)
/* BB31E4 802403E4 44801000 */  mtc1      $zero, $f2
/* BB31E8 802403E8 44801800 */  mtc1      $zero, $f3
/* BB31EC 802403EC 46000021 */  cvt.d.s   $f0, $f0
/* BB31F0 802403F0 4620103C */  c.lt.d    $f2, $f0
/* BB31F4 802403F4 00000000 */  nop
/* BB31F8 802403F8 45000025 */  bc1f      .L80240490
/* BB31FC 802403FC 27A5002C */   addiu    $a1, $sp, 0x2c
/* BB3200 80240400 C6000038 */  lwc1      $f0, 0x38($s0)
/* BB3204 80240404 860200A6 */  lh        $v0, 0xa6($s0)
/* BB3208 80240408 3C018024 */  lui       $at, %hi(D_80242B90_BB5990)
/* BB320C 8024040C D4222B90 */  ldc1      $f2, %lo(D_80242B90_BB5990)($at)
/* BB3210 80240410 27A60030 */  addiu     $a2, $sp, 0x30
/* BB3214 80240414 E7A0002C */  swc1      $f0, 0x2c($sp)
/* BB3218 80240418 44820000 */  mtc1      $v0, $f0
/* BB321C 8024041C 00000000 */  nop
/* BB3220 80240420 46800020 */  cvt.s.w   $f0, $f0
/* BB3224 80240424 46000021 */  cvt.d.s   $f0, $f0
/* BB3228 80240428 C604003C */  lwc1      $f4, 0x3c($s0)
/* BB322C 8024042C C6060040 */  lwc1      $f6, 0x40($s0)
/* BB3230 80240430 C6080018 */  lwc1      $f8, 0x18($s0)
/* BB3234 80240434 860200A8 */  lh        $v0, 0xa8($s0)
/* BB3238 80240438 46220002 */  mul.d     $f0, $f0, $f2
/* BB323C 8024043C 00000000 */  nop
/* BB3240 80240440 E7A40030 */  swc1      $f4, 0x30($sp)
/* BB3244 80240444 E7A60034 */  swc1      $f6, 0x34($sp)
/* BB3248 80240448 E7A80010 */  swc1      $f8, 0x10($sp)
/* BB324C 8024044C C604000C */  lwc1      $f4, 0xc($s0)
/* BB3250 80240450 44821000 */  mtc1      $v0, $f2
/* BB3254 80240454 00000000 */  nop
/* BB3258 80240458 468010A0 */  cvt.s.w   $f2, $f2
/* BB325C 8024045C E7A20018 */  swc1      $f2, 0x18($sp)
/* BB3260 80240460 E7A40014 */  swc1      $f4, 0x14($sp)
/* BB3264 80240464 46200020 */  cvt.s.d   $f0, $f0
/* BB3268 80240468 E7A0001C */  swc1      $f0, 0x1c($sp)
/* BB326C 8024046C 8E040080 */  lw        $a0, 0x80($s0)
/* BB3270 80240470 0C037711 */  jal       npc_test_move_simple_with_slipping
/* BB3274 80240474 27A70034 */   addiu    $a3, $sp, 0x34
/* BB3278 80240478 54400005 */  bnel      $v0, $zero, .L80240490
/* BB327C 8024047C AE000018 */   sw       $zero, 0x18($s0)
/* BB3280 80240480 8E050018 */  lw        $a1, 0x18($s0)
/* BB3284 80240484 8E06000C */  lw        $a2, 0xc($s0)
/* BB3288 80240488 0C00EA95 */  jal       npc_move_heading
/* BB328C 8024048C 0200202D */   daddu    $a0, $s0, $zero
.L80240490:
/* BB3290 80240490 C600001C */  lwc1      $f0, 0x1c($s0)
/* BB3294 80240494 44801000 */  mtc1      $zero, $f2
/* BB3298 80240498 44801800 */  mtc1      $zero, $f3
/* BB329C 8024049C 46000021 */  cvt.d.s   $f0, $f0
/* BB32A0 802404A0 4622003C */  c.lt.d    $f0, $f2
/* BB32A4 802404A4 00000000 */  nop
/* BB32A8 802404A8 45000047 */  bc1f      .L802405C8
/* BB32AC 802404AC 27A5002C */   addiu    $a1, $sp, 0x2c
/* BB32B0 802404B0 27A60030 */  addiu     $a2, $sp, 0x30
/* BB32B4 802404B4 27A20038 */  addiu     $v0, $sp, 0x38
/* BB32B8 802404B8 C602003C */  lwc1      $f2, 0x3c($s0)
/* BB32BC 802404BC C6060038 */  lwc1      $f6, 0x38($s0)
/* BB32C0 802404C0 3C01402A */  lui       $at, 0x402a
/* BB32C4 802404C4 4481A800 */  mtc1      $at, $f21
/* BB32C8 802404C8 4480A000 */  mtc1      $zero, $f20
/* BB32CC 802404CC 460010A1 */  cvt.d.s   $f2, $f2
/* BB32D0 802404D0 46341080 */  add.d     $f2, $f2, $f20
/* BB32D4 802404D4 C600001C */  lwc1      $f0, 0x1c($s0)
/* BB32D8 802404D8 C6040040 */  lwc1      $f4, 0x40($s0)
/* BB32DC 802404DC 46000005 */  abs.s     $f0, $f0
/* BB32E0 802404E0 E7A40034 */  swc1      $f4, 0x34($sp)
/* BB32E4 802404E4 3C014030 */  lui       $at, 0x4030
/* BB32E8 802404E8 44812800 */  mtc1      $at, $f5
/* BB32EC 802404EC 44802000 */  mtc1      $zero, $f4
/* BB32F0 802404F0 46000021 */  cvt.d.s   $f0, $f0
/* BB32F4 802404F4 E7A6002C */  swc1      $f6, 0x2c($sp)
/* BB32F8 802404F8 46240000 */  add.d     $f0, $f0, $f4
/* BB32FC 802404FC 462010A0 */  cvt.s.d   $f2, $f2
/* BB3300 80240500 E7A20030 */  swc1      $f2, 0x30($sp)
/* BB3304 80240504 46200020 */  cvt.s.d   $f0, $f0
/* BB3308 80240508 E7A00038 */  swc1      $f0, 0x38($sp)
/* BB330C 8024050C AFA20010 */  sw        $v0, 0x10($sp)
/* BB3310 80240510 8E040080 */  lw        $a0, 0x80($s0)
/* BB3314 80240514 0C0372DF */  jal       npc_raycast_down_sides
/* BB3318 80240518 27A70034 */   addiu    $a3, $sp, 0x34
/* BB331C 8024051C 1040002A */  beqz      $v0, .L802405C8
/* BB3320 80240520 00000000 */   nop
/* BB3324 80240524 C600001C */  lwc1      $f0, 0x1c($s0)
/* BB3328 80240528 C7A20038 */  lwc1      $f2, 0x38($sp)
/* BB332C 8024052C 46000005 */  abs.s     $f0, $f0
/* BB3330 80240530 46000021 */  cvt.d.s   $f0, $f0
/* BB3334 80240534 46340000 */  add.d     $f0, $f0, $f20
/* BB3338 80240538 460010A1 */  cvt.d.s   $f2, $f2
/* BB333C 8024053C 4620103E */  c.le.d    $f2, $f0
/* BB3340 80240540 00000000 */  nop
/* BB3344 80240544 45000020 */  bc1f      .L802405C8
/* BB3348 80240548 240403E8 */   addiu    $a0, $zero, 0x3e8
/* BB334C 8024054C C7A00030 */  lwc1      $f0, 0x30($sp)
/* BB3350 80240550 8E020000 */  lw        $v0, ($s0)
/* BB3354 80240554 2403F7FF */  addiu     $v1, $zero, -0x801
/* BB3358 80240558 AE00001C */  sw        $zero, 0x1c($s0)
/* BB335C 8024055C 00431024 */  and       $v0, $v0, $v1
/* BB3360 80240560 AE020000 */  sw        $v0, ($s0)
/* BB3364 80240564 24020002 */  addiu     $v0, $zero, 2
/* BB3368 80240568 E600003C */  swc1      $f0, 0x3c($s0)
/* BB336C 8024056C 0C00A67F */  jal       rand_int
/* BB3370 80240570 AE620070 */   sw       $v0, 0x70($s3)
/* BB3374 80240574 3C035555 */  lui       $v1, 0x5555
/* BB3378 80240578 34635556 */  ori       $v1, $v1, 0x5556
/* BB337C 8024057C 00430018 */  mult      $v0, $v1
/* BB3380 80240580 000227C3 */  sra       $a0, $v0, 0x1f
/* BB3384 80240584 00004010 */  mfhi      $t0
/* BB3388 80240588 01042023 */  subu      $a0, $t0, $a0
/* BB338C 8024058C 00041840 */  sll       $v1, $a0, 1
/* BB3390 80240590 00641821 */  addu      $v1, $v1, $a0
/* BB3394 80240594 00431023 */  subu      $v0, $v0, $v1
/* BB3398 80240598 24430002 */  addiu     $v1, $v0, 2
/* BB339C 8024059C AE630074 */  sw        $v1, 0x74($s3)
/* BB33A0 802405A0 8E82002C */  lw        $v0, 0x2c($s4)
/* BB33A4 802405A4 5840000F */  blezl     $v0, .L802405E4
/* BB33A8 802405A8 AE600070 */   sw       $zero, 0x70($s3)
/* BB33AC 802405AC 8E820004 */  lw        $v0, 4($s4)
/* BB33B0 802405B0 5840000C */  blezl     $v0, .L802405E4
/* BB33B4 802405B4 AE600070 */   sw       $zero, 0x70($s3)
/* BB33B8 802405B8 1460000A */  bnez      $v1, .L802405E4
/* BB33BC 802405BC 00000000 */   nop
/* BB33C0 802405C0 08090179 */  j         .L802405E4
/* BB33C4 802405C4 AE600070 */   sw       $zero, 0x70($s3)
.L802405C8:
/* BB33C8 802405C8 C604003C */  lwc1      $f4, 0x3c($s0)
/* BB33CC 802405CC C600001C */  lwc1      $f0, 0x1c($s0)
/* BB33D0 802405D0 46002100 */  add.s     $f4, $f4, $f0
/* BB33D4 802405D4 C6020014 */  lwc1      $f2, 0x14($s0)
/* BB33D8 802405D8 46020001 */  sub.s     $f0, $f0, $f2
/* BB33DC 802405DC E604003C */  swc1      $f4, 0x3c($s0)
/* BB33E0 802405E0 E600001C */  swc1      $f0, 0x1c($s0)
.L802405E4:
/* BB33E4 802405E4 8FBF0054 */  lw        $ra, 0x54($sp)
/* BB33E8 802405E8 8FB40050 */  lw        $s4, 0x50($sp)
/* BB33EC 802405EC 8FB3004C */  lw        $s3, 0x4c($sp)
/* BB33F0 802405F0 8FB20048 */  lw        $s2, 0x48($sp)
/* BB33F4 802405F4 8FB10044 */  lw        $s1, 0x44($sp)
/* BB33F8 802405F8 8FB00040 */  lw        $s0, 0x40($sp)
/* BB33FC 802405FC D7B40058 */  ldc1      $f20, 0x58($sp)
/* BB3400 80240600 03E00008 */  jr        $ra
/* BB3404 80240604 27BD0060 */   addiu    $sp, $sp, 0x60
