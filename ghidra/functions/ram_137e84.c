/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137e84 */

uint FUN_ram_00137e84(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0xffff0000) != 0) {
      param_1 = param_1 >> 0x10;
      uVar1 = 0x10;
    }
    if ((param_1 & 0xff00) != 0) {
      param_1 = param_1 >> 8;
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 0xf0) != 0) {
      param_1 = param_1 >> 4;
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0xc) == 0) {
      param_1 = param_1 & 2;
    }
    else {
      param_1 = param_1 & 8;
      uVar1 = uVar1 | 2;
    }
    if (param_1 == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      uVar1 = (uVar1 | 1) + 1;
    }
  }
  return uVar1;
}


