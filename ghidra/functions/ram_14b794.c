/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014b794 */

undefined4 FUN_ram_0014b794(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x5b45) == '\0') && (*(char *)(param_1 + 0x5b15) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


