/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001393e4 */

void FUN_ram_001393e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x130 + param_5 * 0x118;
  iVar3 = param_5 * 0xac + *(int *)(param_1 + 0x388) + 0x90;
  iVar1 = FUN_ram_00137440(iVar2,param_2,param_3,param_4);
  if (iVar1 == 0) {
    FUN_ram_001393ac(iVar2,4);
  }
  FUN_ram_0039fe00(iVar3,iVar2 + 0x10,0x14);
  FUN_ram_0039fe00(iVar3 + 0x14,iVar2 + 0x24,0x14);
  iVar1 = FUN_ram_00137440(iVar2 + 0x38,param_2,param_3,param_4);
  if (iVar1 == 0) {
    FUN_ram_001393ac(iVar2 + 0x38,4);
  }
  FUN_ram_0039fe00(iVar3 + 0x28,iVar2 + 0x48,0x14);
  FUN_ram_0039fe00(iVar3 + 0x3c,iVar2 + 0x5c,0x14);
  return;
}


