/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159970 */

void FUN_ram_00159970(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(char *)(param_2 + 0x20) != '\0') && (iVar2 = FUN_ram_00155e14(), iVar2 != 0)) {
    iVar3 = 0;
    if (DAT_ram_0018c26c != 0) {
      iVar3 = param_1 * 0x38 + DAT_ram_0018c26c;
    }
    if ((DAT_ram_0018c270 != 0) &&
       (iVar2 = DAT_ram_0018c270 + (uint)*(byte *)(iVar2 + 0x84) * 0x2c, iVar3 != 0 && iVar2 != 0))
    {
      uVar1 = *(ushort *)(param_2 + 0x1e);
      *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + (uint)uVar1;
      *(int *)(iVar3 + 0x18) = *(int *)(param_2 + 0x24) + *(int *)(iVar3 + 0x18);
      *(uint *)(iVar2 + 0x18) = (uint)uVar1 + *(int *)(iVar2 + 0x18);
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + *(int *)(param_2 + 0x24);
    }
  }
  return;
}


