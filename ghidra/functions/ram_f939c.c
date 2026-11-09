/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f939c */

bool FUN_ram_000f939c(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  switch(param_2) {
  case 1:
    return (bool)0x80;
  case 2:
    if (5 < param_3) {
      return false;
    }
    break;
  case 3:
  case 5:
    break;
  case 4:
    *param_4 = 0;
    if (param_3 < 2) {
      *param_4 = 4;
    }
    break;
  case 6:
    if (*(int *)(param_1 + 4) == 0) {
      return (bool)0xb;
    }
    return (bool)10;
  case 7:
    if (*(int *)(param_1 + 4) == 0) {
      return (bool)0xd;
    }
    return (bool)0x12;
  case 8:
    return (bool)0xc;
  case 9:
    if (*(int *)(param_1 + 4) == 0) {
      return (bool)0xe;
    }
    return (bool)0x10;
  case 10:
    if (*(int *)(param_1 + 4) == 0) {
      return (bool)0xf;
    }
    return (bool)3;
  case 0xb:
    return (bool)7;
  case 0xc:
    return *(char *)(param_1 + 8) == '\x01';
  case 0xd:
    return (bool)9;
  default:
    return false;
  }
  return true;
}


