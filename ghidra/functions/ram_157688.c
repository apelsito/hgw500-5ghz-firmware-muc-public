/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157688 */

void FUN_ram_00157688(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
  if (iVar1 == 0) {
    FUN_ram_000ee260(s_update_tdls_stats__failed_to_get_ram_001c74c8,
                     *(undefined1 *)(param_1 + 0x67c));
  }
  else {
    FUN_ram_00156738(iVar1 + 0x86,1,*(undefined1 *)(param_1 + 0x40e),2);
  }
  return;
}


