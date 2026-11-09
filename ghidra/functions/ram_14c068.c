/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014c068 */

void FUN_ram_0014c068(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x5b50) = 5;
    return;
  }
  *(undefined1 *)(param_1 + 0x5b50) = 0;
  if (*(char *)(param_1 + 0x5b75) != '\0') {
    *(undefined1 *)(param_1 + 0x5b75) = 0;
    FUN_ram_000efe3c(0x11,**(undefined2 **)(param_1 + 0x3a04),0,0);
    DAT_ram_8003797c = 0;
    return;
  }
  return;
}


