/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00171acc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00171acc(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_ram_00183c8c();
  iVar5 = 0x3f;
  iVar2 = 0;
  LP_START = 0x171b0c;
  LP_END = 0x171b2c;
  puVar4 = &DAT_ram_001aa688;
  do {
    uVar1 = *puVar4;
    *(undefined4 *)(iVar2 * 4 + -0x19fbff00) = uVar1;
    if (iVar2 == 0x1a) {
      DAT_ram_0018c3a0 = uVar1;
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar5 != 0);
  iVar2 = 0;
  iVar5 = 4;
  do {
    uVar3 = 0;
    do {
      *(undefined4 *)(iVar2 * 4 + -0x19fc0000) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    iVar5 = iVar5 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar5 != 0);
  DAT_ram_0018c384 = DAT_ram_0018c384 & 0xffffffbf;
  DAT_ram_0018c394 = 6;
  DAT_ram_0018c398 = DAT_ram_0018c384;
  DAT_ram_0018c39c = DAT_ram_0018c384;
  _DAT_ram_e6040168 = DAT_ram_0018c384;
  FUN_ram_00183cd0();
  return;
}


