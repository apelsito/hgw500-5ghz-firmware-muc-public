/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016fdd8 */

void FUN_ram_0016fdd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_0016ab30(1,0,0x40);
  FUN_ram_0016fd88(param_1,param_2,param_3,param_4,param_5);
  iVar1 = FUN_ram_000e5c84();
  if (iVar1 == 2) {
    uVar2 = 3;
  }
  else {
    iVar1 = FUN_ram_000e5c84(iVar1);
    if (iVar1 != 3) goto LAB_ram_0016fe40;
    uVar2 = 7;
  }
  FUN_ram_0017f0e8(uVar2);
LAB_ram_0016fe40:
  FUN_ram_000f7c10(5000,0,0,&LAB_ram_0016edf4,3);
  return;
}


