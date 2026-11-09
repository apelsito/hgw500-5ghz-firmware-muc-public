/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121d10 */

void FUN_ram_00121d10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  iVar1 = FUN_ram_0011c26c(iVar4,iVar3);
  if ((iVar1 != 0) && (iVar1 != *(int *)(iVar4 + 0x38))) {
    if (*(int *)(iVar3 + 8) != 3) {
      if (*(int *)(iVar3 + 8) != 4) {
        FUN_ram_000ee260(s_Unkown_TDLS_get_command___d_ram_001c372c);
        return;
      }
      uVar2 = FUN_ram_0012c900();
      *(undefined4 *)(iVar3 + 0xc) = uVar2;
      return;
    }
    iVar1 = FUN_ram_00155e14(*(undefined1 *)(iVar1 + 0x67c));
    *(undefined4 *)(iVar3 + 0xc) = 0;
    if (iVar1 + 0x18 != 0x18) {
      iVar4 = FUN_ram_000e2000(*(undefined4 *)(iVar1 + 0x18 + (uint)*(byte *)(iVar1 + 0x87) * 4));
      *(uint *)(iVar3 + 0xc) =
           (uint)CONCAT12(*(undefined1 *)(iVar1 + 0x87),*(undefined2 *)(iVar4 + 0x54));
      return;
    }
  }
  return;
}


