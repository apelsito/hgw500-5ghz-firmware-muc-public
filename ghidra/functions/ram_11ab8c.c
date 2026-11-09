/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ab8c */

void FUN_ram_0011ab8c(int param_1,uint param_2)

{
  undefined2 uVar1;
  
  FUN_ram_000e6c98(0xd);
  uVar1 = (undefined2)param_2;
  switch((int)param_2 >> 0x10 & 0xff) {
  case 3:
    *(undefined2 *)(param_1 + 0x40c0) = uVar1;
    break;
  case 4:
    *(undefined2 *)(param_1 + 0x40c2) = uVar1;
    break;
  case 6:
    *(undefined2 *)(param_1 + 0x40c4) = uVar1;
    break;
  case 7:
    FUN_ram_0011a774(param_1,param_2 & 0xffff);
    break;
  case 9:
    *(undefined2 *)(param_1 + 0x40c6) = uVar1;
    break;
  case 0xd:
    *(char *)(param_1 + 0x40be) = (char)param_2;
    break;
  case 0x10:
    FUN_ram_0011a9c8(param_1,param_2 & 0xffff);
    break;
  case 0x11:
    *(undefined2 *)(param_1 + 0x40ca) = uVar1;
    break;
  case 0x12:
    *(undefined2 *)(param_1 + 0x40cc) = uVar1;
    break;
  case 0x13:
    *(undefined2 *)(param_1 + 0x40c8) = uVar1;
    break;
  case 0x15:
    *(undefined2 *)(param_1 + 0x40ce) = uVar1;
  }
  return;
}


