/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012bd84 */

int FUN_ram_0012bd84(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3fb4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) != 0)) {
    if ((*(int *)(iVar2 + 0x14) != 0) && ((*(byte *)(*(int *)(iVar2 + 0x14) + 0x458) & 1) != 0)) {
      *(undefined4 *)(iVar2 + 0x14) = 0;
      FUN_ram_0010b568();
      return 0;
    }
    if (DAT_ram_8002c93c != 0) {
      iVar1 = FUN_ram_0012af4c(param_1,iVar2);
      iVar2 = FUN_ram_0012b6c0(param_1,iVar2);
      return (iVar1 + iVar2) * 2;
    }
  }
  return 0;
}


