/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e9110 */

undefined4 FUN_ram_000e9110(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  DAT_ram_001cb27c = 0;
  DAT_ram_001cb280 = &DAT_ram_001cb27c;
  puVar2 = &DAT_ram_001cb324;
  iVar5 = 0x400;
  LP_START = 0xe913c;
  LP_END = 0xe9160;
  iVar3 = 0;
  do {
    (&DAT_ram_001cb344)[iVar3 * 9] = 0;
    *DAT_ram_001cb280 = puVar2;
    DAT_ram_001cb280 = &DAT_ram_001cb344 + iVar3 * 9;
    puVar2 = puVar2 + 0x24;
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar5 != 0);
  DAT_ram_001cb274 = 0;
  DAT_ram_001cb278 = &DAT_ram_001cb274;
  puVar4 = &DAT_ram_0019de3c;
  puVar2 = &DAT_ram_0019fe3c;
  puVar1 = &DAT_ram_001a2e3c;
  iVar5 = 0x100;
  LP_START = 0xe9194;
  LP_END = 0xe91c8;
  iVar3 = 0;
  do {
    (&DAT_ram_001a2e48)[iVar3 * 9] = puVar4;
    (&DAT_ram_001a2e4c)[iVar3 * 9] = puVar2;
    (&DAT_ram_001a2e3c)[iVar3 * 9] = 1;
    (&DAT_ram_001a2e5c)[iVar3 * 9] = 0;
    *DAT_ram_001cb278 = puVar1;
    DAT_ram_001cb278 = &DAT_ram_001a2e5c + iVar3 * 9;
    puVar4 = puVar4 + 0x20;
    puVar2 = puVar2 + 0x30;
    puVar1 = puVar1 + 9;
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar5 != 0);
  DAT_ram_001cb288 = 1;
  DAT_ram_001cb284 = 0;
  return 0;
}


