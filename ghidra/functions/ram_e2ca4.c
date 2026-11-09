/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e2ca4 */

void FUN_ram_000e2ca4(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = &stack0xfffffff0;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar3 = DC_CTRL;
  uVar3 = (uVar3 ^ 1) & 1;
  if ((&stack0xfffffff0 < (undefined1 *)0x80000000) || ((undefined1 *)0x8007ffff < &stack0xfffffff0)
     ) {
    if (&stack0xfffffff0 < (undefined1 *)0x8000000) {
      puVar2 = &stack0x3ffffff0;
    }
    else if (&stack0xfffffff0 < (undefined1 *)0xc0000000) {
      puVar2 = (undefined1 *)0x0;
    }
  }
  else {
    puVar2 = &stack0xdffffff0;
  }
  if (puVar2 == (undefined1 *)0x0) {
    if (uVar3 != 0) {
      FUN_ram_000ed2b4();
    }
  }
  else if (uVar3 != 0) {
    FUN_ram_000ed2b4();
  }
  if (uVar3 != 0) {
    FUN_ram_000ed374();
  }
  STATUS32 = uVar1;
  return;
}


