/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001101c8 */

void FUN_ram_001101c8(int param_1)

{
  if (*(int *)(param_1 + 0x40dc) != 0) {
    FUN_ram_00110004();
    *(int *)(param_1 + 0x413c) = *(int *)(param_1 + 0x413c) + 1;
  }
  *(undefined4 *)(param_1 + 0x40dc) = *(undefined4 *)(param_1 + 0x40e8);
  *(undefined4 *)(param_1 + 0x40e0) = *(undefined4 *)(param_1 + 0x40ec);
  *(undefined4 *)(param_1 + 0x40e4) = *(undefined4 *)(param_1 + 0x40f0);
  *(undefined4 *)(param_1 + 0x40e8) = 0;
  *(int *)(param_1 + 0x4138) = *(int *)(param_1 + 0x4138) + 1;
  *(undefined1 *)(param_1 + 0x40bd) = 0;
  return;
}


