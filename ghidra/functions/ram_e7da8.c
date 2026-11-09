/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7da8 */

void FUN_ram_000e7da8(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      return;
    }
    uVar1 = *param_1;
  }
  else {
    if ((*param_1 & 2) == 0) {
      if ((uVar1 & 2) == 0 || (*param_1 & 4) == 0) {
        return;
      }
      goto LAB_ram_000e7e04;
    }
    uVar1 = STATUS32;
    STATUS32 = uVar1 | 2;
    if ((param_1[1] & 2) == 0) {
      return;
    }
    uVar1 = *param_1;
  }
  if ((uVar1 & 4) == 0) {
    return;
  }
LAB_ram_000e7e04:
  uVar1 = STATUS32;
  STATUS32 = uVar1 | 4;
  return;
}


