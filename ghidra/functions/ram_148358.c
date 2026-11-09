/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00148358 */

undefined * FUN_ram_00148358(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = DAT_ram_001aa2e0;
  uStack_10 = DAT_ram_001aa2e4;
  if (*(char *)((int)&local_14 + param_2) < 0) {
    return (undefined *)0x0;
  }
  puVar1 = &UNK_ram_6003b410 + *(char *)((int)&local_14 + param_2) * 0x10 + param_1 * 0x40;
  FUN_ram_000eea80(puVar1,0,0x10);
  if ((puVar1 < (undefined *)0x80000000) || ((undefined *)0x8007ffff < puVar1)) {
    if (puVar1 < (undefined *)0x8000000) {
      puVar2 = puVar1 + 0x40000000;
    }
    else {
      puVar2 = (undefined *)0x0;
      if ((undefined *)0xbfffffff < puVar1) {
        puVar2 = puVar1;
      }
    }
  }
  else {
    puVar2 = puVar1 + -0x20000000;
  }
  if (puVar2 == (undefined *)0x0) {
    if (((undefined *)0x5fffffff < puVar1) && (puVar1 < (undefined *)0x60080000)) {
      return puVar1 + 0x20000000;
    }
    if (((undefined *)0x3fffffff < puVar1) && (puVar1 < (undefined *)0x48000000)) {
      return puVar1 + -0x40000000;
    }
    if (puVar1 < (undefined *)0xc0000000) {
      return (undefined *)0x0;
    }
  }
  return puVar1;
}


