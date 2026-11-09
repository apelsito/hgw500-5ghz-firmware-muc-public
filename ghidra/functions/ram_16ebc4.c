/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ebc4 */

void FUN_ram_0016ebc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = param_2;
    if (param_2 < 0x18) goto LAB_ram_0016ec18;
  }
  else {
    iVar2 = 0;
    iVar1 = 0x74;
    LP_START = 0x16ec00;
    LP_END = 0x16ec10;
    do {
      if (param_2 != (&DAT_ram_00194be4)[iVar2]) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (iVar2 != 0x74) goto LAB_ram_0016ec18;
  }
  iVar2 = -1;
LAB_ram_0016ec18:
  iVar1 = FUN_ram_0016e268(param_2);
  DAT_ram_0018c364 = (undefined2)param_2;
  if (iVar1 < 0 || iVar2 < 0) {
    return;
  }
  DAT_ram_0018c363 = (undefined1)iVar1;
  DAT_ram_0018c360 = FUN_ram_0016e488(param_2,0);
  DAT_ram_0018c361 = FUN_ram_0016e488(param_2,1);
  DAT_ram_0018c362 = FUN_ram_0016e488(param_2,2);
  FUN_ram_00183f24(param_1,iVar2);
  FUN_ram_0016e9a4(param_1,param_2);
  FUN_ram_0017be1c(0);
  FUN_ram_0017c260(0);
  FUN_ram_0017c6d0(0);
  if ((&DAT_ram_00214398)[DAT_ram_0018c2f0 * 0x1c] != '\x05') {
    DAT_ram_0018c35c = 0xff;
    return;
  }
  FUN_ram_0017f09c(9);
  return;
}


