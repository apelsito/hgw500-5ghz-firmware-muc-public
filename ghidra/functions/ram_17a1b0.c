/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017a1b0 */

int FUN_ram_0017a1b0(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (param_1 < 4) {
    switch(param_1) {
    case 0:
      uVar2 = 6;
      break;
    case 1:
      uVar2 = 7;
      break;
    case 2:
      uVar2 = 8;
      break;
    case 3:
      uVar2 = 9;
    }
    FUN_ram_000f4d18(DAT_ram_0018c2cc,uVar2,(uint)DAT_ram_0018c363 * 7,7,&DAT_ram_0018c2c0);
    iVar1 = (uint)DAT_ram_0018c2c5 + (param_2 - DAT_ram_0018c2c6) * 2;
  }
  return iVar1;
}


