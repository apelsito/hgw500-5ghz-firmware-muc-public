/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015659c */

undefined4 FUN_ram_0015659c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(ushort *)(iVar1 + 0xe) & 0x40) == 0) break;
    iVar1 = *(int *)(iVar1 + 0x60);
  }
  return *(undefined4 *)(iVar1 + 0x1c);
}


