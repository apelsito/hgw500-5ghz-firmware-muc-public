/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158920 */

void FUN_ram_00158920(undefined4 param_1,int param_2)

{
  FUN_ram_00158524(param_1,*(undefined1 *)(*(int *)(param_2 + 0x38) + 0x67c),1,0,0);
  DAT_ram_80037960 = DAT_ram_80037960 + 1;
  return;
}


