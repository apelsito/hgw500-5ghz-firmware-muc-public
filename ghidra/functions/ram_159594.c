/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159594 */

void FUN_ram_00159594(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_00155e14(*(undefined1 *)(param_2 + 0x67c));
  if ((*(ushort *)(param_2 + 0xc) & 0x1000) == 0) {
    return;
  }
  if (((*(ushort *)(param_2 + 0xc) & 0x10) != 0) && (*(char *)(param_2 + 0x420) != '\0')) {
    *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) & 0xfffeffff | 0x10000;
    DAT_ram_800372e8 = DAT_ram_800372e8 + 1;
    return;
  }
  *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) & 0xfffefff0;
  DAT_ram_800372ec = DAT_ram_800372ec + 1;
  return;
}


