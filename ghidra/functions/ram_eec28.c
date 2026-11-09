/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eec28 */

int FUN_ram_000eec28(char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
    } while (*param_1 != '\0');
    return iVar1;
  }
  return iVar1;
}


