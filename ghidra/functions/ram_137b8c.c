/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137b8c */

void FUN_ram_00137b8c(int param_1)

{
  *(undefined **)(param_1 + 0x3a08) = &DAT_ram_80038f00;
  DAT_ram_80039624 = &DAT_ram_80037000;
  *(undefined **)(*(int *)(param_1 + 0x3a08) + 0x728) = &DAT_ram_800373ec;
  *(undefined4 **)(*(int *)(param_1 + 0x3a08) + 0x72c) = &DAT_ram_800375c0;
  *(undefined4 **)(*(int *)(param_1 + 0x3a08) + 0x730) = &DAT_ram_800377f4;
  *(undefined **)(*(int *)(param_1 + 0x3a08) + 0x734) = &DAT_ram_800379e0;
  *(undefined4 **)(*(int *)(param_1 + 0x3a08) + 0x738) = &DAT_ram_6003b400;
  *(undefined4 **)(*(int *)(param_1 + 0x3a08) + 0x73c) = &DAT_ram_6003b404;
  *(int *)(*(int *)(param_1 + 0x3a08) + 0x740) = param_1 + 0x4030;
  DAT_ram_0018c1cc = FUN_ram_001711e0(0x298,0x1c000,0xe);
  DAT_ram_0018c1cd = FUN_ram_001711e0(0x2a0,0xc,2);
  DAT_ram_0018c1ce = 0;
  DAT_ram_0018c1d0 = 0;
  DAT_ram_0020fcf8 = 2;
  FUN_ram_000eea80(&DAT_ram_0020fd4c,0,0x20);
  FUN_ram_000f7c10(1000,param_1,0,&LAB_ram_00139a08,3);
  FUN_ram_000f7c10(1,param_1,0,&LAB_ram_0013a6fc,3);
  return;
}


