/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7d50 */

void FUN_ram_000e7d50(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = STATUS32;
  *param_1 = uVar1;
  uVar2 = param_1[1];
  if ((uVar2 & 1) != 0) {
    uVar2 = STATUS32;
    STATUS32 = uVar2 & 0xfffffffd;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 2) != 0) {
    uVar2 = STATUS32;
    STATUS32 = uVar2 & 0xfffffffb;
  }
  return;
}


