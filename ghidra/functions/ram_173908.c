/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00173908 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00173908(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  _DAT_ram_e6091000 = 0xc;
  _DAT_ram_e609104c = 0;
  _DAT_ram_e6091058 = 0;
  _DAT_ram_e6091048 = 0;
  puVar4 = (uint *)&DAT_ram_e60a6000;
  _DAT_ram_e6090488 = DAT_ram_0018c3a4;
  _DAT_ram_e6090490 = 0;
  FUN_ram_000ee260(s_Capture_samples__I__Q___ram_001c98cc);
  iVar3 = 0x100;
  do {
    uVar1 = (*puVar4 & 0xfff000) >> 0xc;
    uVar2 = *puVar4 & 0xfff;
    if (0x7ff < uVar1) {
      uVar1 = uVar1 - 0x1000;
    }
    if (0x7ff < uVar2) {
      uVar2 = uVar2 - 0x1000;
    }
    FUN_ram_000ee260(s__d___d_ram_001c98e8,uVar1,uVar2);
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
  FUN_ram_00183a40();
  return;
}


