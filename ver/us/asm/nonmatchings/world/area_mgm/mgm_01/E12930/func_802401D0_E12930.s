.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_802401D0_E12930
/* E12930 802401D0 27BDFFA0 */  addiu     $sp, $sp, -0x60
/* E12934 802401D4 0000202D */  daddu     $a0, $zero, $zero
/* E12938 802401D8 AFBF0058 */  sw        $ra, 0x58($sp)
/* E1293C 802401DC AFB10054 */  sw        $s1, 0x54($sp)
/* E12940 802401E0 0C00FB3A */  jal       get_enemy
/* E12944 802401E4 AFB00050 */   sw       $s0, 0x50($sp)
/* E12948 802401E8 2404FFFF */  addiu     $a0, $zero, -1
/* E1294C 802401EC 8C430074 */  lw        $v1, 0x74($v0)
/* E12950 802401F0 1464000B */  bne       $v1, $a0, .L80240220
/* E12954 802401F4 8C510080 */   lw       $s1, 0x80($v0)
/* E12958 802401F8 8E230014 */  lw        $v1, 0x14($s1)
/* E1295C 802401FC 28620141 */  slti      $v0, $v1, 0x141
/* E12960 80240200 1040006B */  beqz      $v0, .L802403B0
/* E12964 80240204 2462000A */   addiu    $v0, $v1, 0xa
/* E12968 80240208 AE220014 */  sw        $v0, 0x14($s1)
/* E1296C 8024020C 28420142 */  slti      $v0, $v0, 0x142
/* E12970 80240210 1440000C */  bnez      $v0, .L80240244
/* E12974 80240214 24020141 */   addiu    $v0, $zero, 0x141
/* E12978 80240218 08090091 */  j         .L80240244
/* E1297C 8024021C AE220014 */   sw       $v0, 0x14($s1)
.L80240220:
/* E12980 80240220 8E230014 */  lw        $v1, 0x14($s1)
/* E12984 80240224 286200DD */  slti      $v0, $v1, 0xdd
/* E12988 80240228 14400006 */  bnez      $v0, .L80240244
/* E1298C 8024022C 2462FFF6 */   addiu    $v0, $v1, -0xa
/* E12990 80240230 AE220014 */  sw        $v0, 0x14($s1)
/* E12994 80240234 284200DC */  slti      $v0, $v0, 0xdc
/* E12998 80240238 10400002 */  beqz      $v0, .L80240244
/* E1299C 8024023C 240200DC */   addiu    $v0, $zero, 0xdc
/* E129A0 80240240 AE220014 */  sw        $v0, 0x14($s1)
.L80240244:
/* E129A4 80240244 8E220014 */  lw        $v0, 0x14($s1)
/* E129A8 80240248 28420141 */  slti      $v0, $v0, 0x141
/* E129AC 8024024C 10400058 */  beqz      $v0, .L802403B0
/* E129B0 80240250 0000202D */   daddu    $a0, $zero, $zero
/* E129B4 80240254 24050009 */  addiu     $a1, $zero, 9
/* E129B8 80240258 24020048 */  addiu     $v0, $zero, 0x48
/* E129BC 8024025C AFA20014 */  sw        $v0, 0x14($sp)
/* E129C0 80240260 24020014 */  addiu     $v0, $zero, 0x14
/* E129C4 80240264 AFA20018 */  sw        $v0, 0x18($sp)
/* E129C8 80240268 240200FF */  addiu     $v0, $zero, 0xff
/* E129CC 8024026C AFA2001C */  sw        $v0, 0x1c($sp)
/* E129D0 80240270 24020140 */  addiu     $v0, $zero, 0x140
/* E129D4 80240274 AFA20044 */  sw        $v0, 0x44($sp)
/* E129D8 80240278 240200F0 */  addiu     $v0, $zero, 0xf0
/* E129DC 8024027C AFA00010 */  sw        $zero, 0x10($sp)
/* E129E0 80240280 AFA00020 */  sw        $zero, 0x20($sp)
/* E129E4 80240284 AFA00024 */  sw        $zero, 0x24($sp)
/* E129E8 80240288 AFA00028 */  sw        $zero, 0x28($sp)
/* E129EC 8024028C AFA0002C */  sw        $zero, 0x2c($sp)
/* E129F0 80240290 AFA00030 */  sw        $zero, 0x30($sp)
/* E129F4 80240294 AFA00034 */  sw        $zero, 0x34($sp)
/* E129F8 80240298 AFA00038 */  sw        $zero, 0x38($sp)
/* E129FC 8024029C AFA0003C */  sw        $zero, 0x3c($sp)
/* E12A00 802402A0 AFA00040 */  sw        $zero, 0x40($sp)
/* E12A04 802402A4 AFA20048 */  sw        $v0, 0x48($sp)
/* E12A08 802402A8 AFA0004C */  sw        $zero, 0x4c($sp)
/* E12A0C 802402AC 8E260014 */  lw        $a2, 0x14($s1)
/* E12A10 802402B0 0C03D4B8 */  jal       draw_box
/* E12A14 802402B4 2407001C */   addiu    $a3, $zero, 0x1c
/* E12A18 802402B8 24060027 */  addiu     $a2, $zero, 0x27
/* E12A1C 802402BC 8E300004 */  lw        $s0, 4($s1)
/* E12A20 802402C0 8E250014 */  lw        $a1, 0x14($s1)
/* E12A24 802402C4 0200202D */  daddu     $a0, $s0, $zero
/* E12A28 802402C8 0C051261 */  jal       set_hud_element_render_pos
/* E12A2C 802402CC 24A5000F */   addiu    $a1, $a1, 0xf
/* E12A30 802402D0 0C0511EA */  jal       draw_hud_element_clipped
/* E12A34 802402D4 0200202D */   daddu    $a0, $s0, $zero
/* E12A38 802402D8 8E24000C */  lw        $a0, 0xc($s1)
/* E12A3C 802402DC 8E230010 */  lw        $v1, 0x10($s1)
/* E12A40 802402E0 0064102A */  slt       $v0, $v1, $a0
/* E12A44 802402E4 10400003 */  beqz      $v0, .L802402F4
/* E12A48 802402E8 0083102A */   slt      $v0, $a0, $v1
/* E12A4C 802402EC 080900E1 */  j         .L80240384
/* E12A50 802402F0 AE23000C */   sw       $v1, 0xc($s1)
.L802402F4:
/* E12A54 802402F4 10400023 */  beqz      $v0, .L80240384
/* E12A58 802402F8 00641823 */   subu     $v1, $v1, $a0
/* E12A5C 802402FC 28620065 */  slti      $v0, $v1, 0x65
/* E12A60 80240300 14400003 */  bnez      $v0, .L80240310
/* E12A64 80240304 2862004C */   slti     $v0, $v1, 0x4c
/* E12A68 80240308 080900DB */  j         .L8024036C
/* E12A6C 8024030C 24820028 */   addiu    $v0, $a0, 0x28
.L80240310:
/* E12A70 80240310 14400003 */  bnez      $v0, .L80240320
/* E12A74 80240314 28620033 */   slti     $v0, $v1, 0x33
/* E12A78 80240318 080900DB */  j         .L8024036C
/* E12A7C 8024031C 24820023 */   addiu    $v0, $a0, 0x23
.L80240320:
/* E12A80 80240320 14400003 */  bnez      $v0, .L80240330
/* E12A84 80240324 2862001F */   slti     $v0, $v1, 0x1f
/* E12A88 80240328 080900DB */  j         .L8024036C
/* E12A8C 8024032C 2482001E */   addiu    $v0, $a0, 0x1e
.L80240330:
/* E12A90 80240330 14400003 */  bnez      $v0, .L80240340
/* E12A94 80240334 28620015 */   slti     $v0, $v1, 0x15
/* E12A98 80240338 080900DB */  j         .L8024036C
/* E12A9C 8024033C 24820014 */   addiu    $v0, $a0, 0x14
.L80240340:
/* E12AA0 80240340 14400003 */  bnez      $v0, .L80240350
/* E12AA4 80240344 2862000B */   slti     $v0, $v1, 0xb
/* E12AA8 80240348 080900DB */  j         .L8024036C
/* E12AAC 8024034C 2482000A */   addiu    $v0, $a0, 0xa
.L80240350:
/* E12AB0 80240350 14400003 */  bnez      $v0, .L80240360
/* E12AB4 80240354 28620006 */   slti     $v0, $v1, 6
/* E12AB8 80240358 080900DB */  j         .L8024036C
/* E12ABC 8024035C 24820005 */   addiu    $v0, $a0, 5
.L80240360:
/* E12AC0 80240360 14400002 */  bnez      $v0, .L8024036C
/* E12AC4 80240364 24820001 */   addiu    $v0, $a0, 1
/* E12AC8 80240368 24820002 */  addiu     $v0, $a0, 2
.L8024036C:
/* E12ACC 8024036C AE22000C */  sw        $v0, 0xc($s1)
/* E12AD0 80240370 24040211 */  addiu     $a0, $zero, 0x211
/* E12AD4 80240374 0000282D */  daddu     $a1, $zero, $zero
/* E12AD8 80240378 24060040 */  addiu     $a2, $zero, 0x40
/* E12ADC 8024037C 0C0526AE */  jal       sfx_play_sound_with_params
/* E12AE0 80240380 24070032 */   addiu    $a3, $zero, 0x32
.L80240384:
/* E12AE4 80240384 24060020 */  addiu     $a2, $zero, 0x20
/* E12AE8 80240388 24070001 */  addiu     $a3, $zero, 1
/* E12AEC 8024038C 8E250014 */  lw        $a1, 0x14($s1)
/* E12AF0 80240390 240200FF */  addiu     $v0, $zero, 0xff
/* E12AF4 80240394 AFA20014 */  sw        $v0, 0x14($sp)
/* E12AF8 80240398 24020003 */  addiu     $v0, $zero, 3
/* E12AFC 8024039C AFA00010 */  sw        $zero, 0x10($sp)
/* E12B00 802403A0 AFA20018 */  sw        $v0, 0x18($sp)
/* E12B04 802403A4 8E24000C */  lw        $a0, 0xc($s1)
/* E12B08 802403A8 0C049DA7 */  jal       draw_number
/* E12B0C 802403AC 24A5003F */   addiu    $a1, $a1, 0x3f
.L802403B0:
/* E12B10 802403B0 8FBF0058 */  lw        $ra, 0x58($sp)
/* E12B14 802403B4 8FB10054 */  lw        $s1, 0x54($sp)
/* E12B18 802403B8 8FB00050 */  lw        $s0, 0x50($sp)
/* E12B1C 802403BC 03E00008 */  jr        $ra
/* E12B20 802403C0 27BD0060 */   addiu    $sp, $sp, 0x60
