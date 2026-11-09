/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013db80 */

void FUN_ram_0013db80(int param_1)

{
  code *pcVar1;
  
  if ((*(int *)(param_1 + 0x4c0) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  return;
}


