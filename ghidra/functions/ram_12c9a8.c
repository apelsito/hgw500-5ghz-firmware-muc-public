/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012c9a8 */

void FUN_ram_0012c9a8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(param_2 + 0x40c);
  if (((uVar1 & 1) == 0 && (uVar1 & 2) == 0) && (uVar1 & 8) == 0) {
    FUN_ram_0012c830(param_2,1);
    if (DAT_ram_80038ee0 - *(int *)(param_2 + 0x418) < 0) {
      uVar3 = FUN_ram_000f7c10(*(int *)(param_2 + 0x418) - DAT_ram_80038ee0,param_1,param_2,
                               &LAB_ram_001349bc,2);
      *(undefined4 *)(param_2 + 0x414) = uVar3;
      return;
    }
    iVar2 = FUN_ram_000ee73c(0x10,0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = 100;
      FUN_ram_0039fe00(iVar2,param_2 + 0x96,6);
      FUN_ram_000efe3c(0x12,100,**(undefined2 **)(param_1 + 0x3a04),iVar2);
      return;
    }
  }
  return;
}


