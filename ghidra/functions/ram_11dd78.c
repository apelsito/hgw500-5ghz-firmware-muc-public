/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011dd78 */

undefined4 FUN_ram_0011dd78(int param_1)

{
  int iVar1;
  
  if ((((*(char *)(param_1 + 0x2c) == '\x01') && (*(char *)(param_1 + 0x2d) == '\x04')) &&
      (iVar1 = *(int *)(param_1 + 0x38), iVar1 != *(int *)(param_1 + 0x3c))) &&
     (((*(char *)(iVar1 + 100) == '\0' && (*(char *)(iVar1 + 0x683) == '\0')) &&
      (*(byte *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1c) + 0x3b29) < 9)))) {
    return 1;
  }
  return 0;
}


