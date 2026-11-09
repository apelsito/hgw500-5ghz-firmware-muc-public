/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001679c4 */

void FUN_ram_001679c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 2;
  if (DAT_ram_0018c010 == 3) {
    uVar1 = *(undefined4 *)(DAT_ram_0018c2f0 * 0x10 + 0x193bbc);
  }
  uVar1 = FUN_ram_000f3c18(uVar1,5);
  uVar2 = FUN_ram_000eec28(param_1);
  FUN_ram_000f3cf0(uVar1,param_1,uVar2);
  FUN_ram_000f3cf8(uVar1);
  return;
}


