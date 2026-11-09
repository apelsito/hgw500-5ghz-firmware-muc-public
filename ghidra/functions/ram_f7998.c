/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f7998 */

void FUN_ram_000f7998(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  DAT_ram_8002c1f4 = 0;
  DAT_ram_8002c1f8 = &DAT_ram_8002c1f4;
  DAT_ram_8002c1fc = 0;
  DAT_ram_8002c200 = 0;
  DAT_ram_8002c204 = &DAT_ram_8002c200;
  DAT_ram_8002c208 = 0;
  DAT_ram_8002c20c = 0;
  DAT_ram_8002c210 = &DAT_ram_8002c20c;
  DAT_ram_8002c214 = 0;
  puVar2 = &DAT_ram_001fbebc;
  FUN_ram_000eea80(&DAT_ram_001fbebc,0,0x4800);
  iVar3 = 0x200;
  LP_START = 0xf7a04;
  LP_END = 0xf7a28;
  iVar1 = 0;
  do {
    (&DAT_ram_001fbed8)[iVar1 * 9] = 0;
    (&DAT_ram_001fbedc)[iVar1 * 9] = DAT_ram_8002c210;
    *DAT_ram_8002c210 = puVar2;
    DAT_ram_8002c210 = &DAT_ram_001fbed8 + iVar1 * 9;
    puVar2 = puVar2 + 0x24;
    DAT_ram_8002c214 = DAT_ram_8002c214 + 1;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 1;
  } while (iVar3 != 0);
  return;
}


