/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f131c */

void FUN_ram_000f131c(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_ram_000f1bd8(*(undefined1 *)(*(int *)(param_1 + 0x38) + 4));
    piVar1 = *(int **)(param_1 + 0x38);
    if (*piVar1 != 0) {
      FUN_ram_000ee834();
      piVar1 = *(int **)(param_1 + 0x38);
    }
    FUN_ram_000ee834(piVar1);
  }
  FUN_ram_000f1d08(*(undefined1 *)(param_1 + 0x3d),*(undefined1 *)(param_1 + 0x3c));
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_ram_000f1bd8(*(undefined1 *)(*(int *)(param_1 + 0x40) + 8));
    FUN_ram_000f1bd8(*(undefined1 *)(*(int *)(param_1 + 0x40) + 9));
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x40));
  }
  FUN_ram_000f1d08(*(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49));
  FUN_ram_000f1d08(*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x35));
  FUN_ram_000f17c8(param_1);
  return;
}


