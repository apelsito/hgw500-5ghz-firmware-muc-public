/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d37c */

void FUN_ram_0013d37c(int param_1)

{
  code *pcVar1;
  
  if (((*(int *)(param_1 + 0x4c0) != 0) && (*(char *)(param_1 + 0x4e5) != '\0')) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x34), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  return;
}


