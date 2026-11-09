/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011acd0 */

void FUN_ram_0011acd0(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)param_2;
  switch(param_2 >> 0x10 & 0xffff) {
  case 1:
    DAT_ram_8002c92c = uVar1;
    return;
  case 2:
    DAT_ram_8002c92e = uVar1;
    return;
  case 3:
    DAT_ram_8002c930 = uVar1;
    return;
  case 4:
    DAT_ram_8002c932 = uVar1;
    return;
  default:
    return;
  }
}


