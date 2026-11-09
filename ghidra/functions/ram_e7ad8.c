/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7ad8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000e7ad8(int param_1)

{
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 1;
  }
  if (**(int **)(param_1 + 0x40) == 0) {
    **(int **)(param_1 + 0x40) = *(int *)(*(int *)(param_1 + 0x4c) + 0x28);
    sync();
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    _DAT_ram_e000002c =
         1 << (*(byte *)(param_1 + 0x48) & 0x1f) | 1 << (*(byte *)(param_1 + 0x48) + 0x10 & 0x1f);
    sync();
    return 1;
  }
  return 0;
}


