/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d2a8 */

void FUN_ram_0013d2a8(undefined4 param_1,uint param_2)

{
  if ((int)param_2 < 0x10000) {
    if (((param_2 >> 7 ^ 1) & 1) != 0) {
      param_2 = param_2 & 0x7fff;
      if (param_2 == 0x24) {
        FUN_ram_0013d170(param_1,1,3);
        return;
      }
      if (param_2 < 0x25) {
        if (param_2 != 0xc) {
          if (param_2 == 0x12) {
            FUN_ram_0013d170(param_1,1,1);
            return;
          }
          if (param_2 == 0x18) {
            FUN_ram_0013d170(param_1,1,2);
            return;
          }
        }
      }
      else {
        if (param_2 == 0x48) {
          FUN_ram_0013d170(param_1,1,5);
          return;
        }
        if (param_2 < 0x49) {
          if (param_2 == 0x30) {
            FUN_ram_0013d170(param_1,1,4);
            return;
          }
        }
        else {
          if (param_2 == 0x60) {
            FUN_ram_0013d170(param_1,1,6);
            return;
          }
          if (param_2 == 0x6c) {
            FUN_ram_0013d170(param_1,1,7);
            return;
          }
        }
      }
      FUN_ram_0013d170(param_1,1,0,0);
      return;
    }
    if ((0xf < (param_2 & 0x7f)) || ((int)param_2 < 0)) {
      FUN_ram_0013d170(param_1,0);
      return;
    }
  }
  else if ((param_2 & 0xff000000) == 0x7e000000) {
    FUN_ram_0013d170(param_1,1,param_2 & 0xff,1);
    return;
  }
  FUN_ram_0013d170(param_1,1,param_2,0);
  return;
}


