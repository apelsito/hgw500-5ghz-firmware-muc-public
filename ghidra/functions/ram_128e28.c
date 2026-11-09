/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128e28 */

void FUN_ram_00128e28(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x84) + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    FUN_ram_000ee834(*puVar1);
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}


