/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f0ba4 */

void FUN_ram_000f0ba4(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_2 * 0x20 + *(int *)(param_1 + 0x18));
  *puVar1 = param_4;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(int *)(puVar1 + 4) = param_1;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined1 **)(puVar1 + 0x14) = puVar1 + 0x10;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined1 **)(puVar1 + 0x1c) = puVar1 + 0x18;
  return;
}


