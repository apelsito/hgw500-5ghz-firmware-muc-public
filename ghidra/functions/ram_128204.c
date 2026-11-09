/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128204 */

void FUN_ram_00128204(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x4644) != '\x01') {
    iVar1 = *(int *)(param_2 + 0x38);
    *(char *)(iVar1 + 6) = *(char *)(param_1 + 0x4644);
    *(undefined1 *)(iVar1 + 7) = *(undefined1 *)(param_1 + 0x4645);
    return;
  }
  if (*(char *)(param_1 + 0x4645) != '\0') {
    iVar1 = *(int *)(param_2 + 0x38);
    *(char *)(param_1 + 0x4645) = *(char *)(param_1 + 0x4645) + -1;
    *(undefined1 *)(iVar1 + 6) = 1;
    *(undefined1 *)(iVar1 + 7) = *(undefined1 *)(param_1 + 0x4645);
    return;
  }
  *(undefined1 *)(param_1 + 0x4644) = 0;
  FUN_ram_000efe3c(0x15,**(undefined2 **)(param_1 + 0x3a04),0,0);
  iVar1 = *(int *)(param_2 + 0x38);
  *(undefined1 *)(iVar1 + 6) = *(undefined1 *)(param_1 + 0x4644);
  *(undefined1 *)(iVar1 + 7) = *(undefined1 *)(param_1 + 0x4645);
  return;
}


