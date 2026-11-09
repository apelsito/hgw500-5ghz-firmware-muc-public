/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159750 */

void FUN_ram_00159750(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(char *)(param_2 + 0x20) != '\0') &&
      (iVar1 = FUN_ram_00155e44(*(undefined1 *)(param_2 + 0x58),*(undefined1 *)(param_2 + 0x59)),
      iVar1 != 0)) && (*(int *)(param_1 + 0x388) != 0)) {
    iVar1 = *(int *)(param_1 + 0x388) + (uint)*(byte *)(iVar1 + 4) * 4;
    *(uint *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + (uint)*(ushort *)(param_2 + 0x1e);
  }
  return;
}


