.include "macro.inc"

/* assembler directives */
.set noat      /* allow manual use of $at */
.set noreorder /* don't insert nops after branches */
.set gp=64     /* allow use of 64-bit general purpose registers */

.section .text, "ax"

/* Generated by spimdisasm 1.11.1 */

glabel osSpTaskYield
/* 3F1F0 80063DF0 27BDFFE8 */  addiu     $sp, $sp, -0x18
/* 3F1F4 80063DF4 AFBF0010 */  sw        $ra, 0x10($sp)
/* 3F1F8 80063DF8 0C01ADDC */  jal       __osSpSetStatus
/* 3F1FC 80063DFC 24040400 */   addiu    $a0, $zero, 0x400
/* 3F200 80063E00 8FBF0010 */  lw        $ra, 0x10($sp)
/* 3F204 80063E04 03E00008 */  jr        $ra
/* 3F208 80063E08 27BD0018 */   addiu    $sp, $sp, 0x18
/* 3F20C 80063E0C 00000000 */  nop