/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157328 */

void FUN_ram_00157328(int param_1,int param_2)

{
  FUN_ram_00156738(param_1 + 0x77,1,*(undefined1 *)(param_2 + 0x67e),2);
  FUN_ram_00156738(param_1 + 0x78,1,*(undefined1 *)(param_2 + 0x67f),2);
  FUN_ram_00156738(param_1 + 0x7e,1,*(undefined1 *)(param_2 + 0x680),2);
  FUN_ram_00156738(param_1 + 0x5a,2,(uint)(*(char *)(param_2 + 0x67e) != '\x06') << 0xe | 8,2);
  return;
}


