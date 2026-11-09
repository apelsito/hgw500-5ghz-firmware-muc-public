/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f9328 */

void FUN_ram_000f9328(int param_1)

{
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_ram_000ee834();
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(int *)(param_1 + 0x100) = param_1 + 0xfc;
  }
  FUN_ram_000ee260(s_ERROR__hal_framedesc_free_unimpl_ram_001beda0);
  FUN_ram_000eea80(param_1,0,4);
  FUN_ram_000ee834(param_1);
  return;
}


