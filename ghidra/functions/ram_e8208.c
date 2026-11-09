/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e8208 */

void FUN_ram_000e8208(int param_1)

{
  if ((*(ushort *)(param_1 + 0xe) & 0x24) == 0x24) {
    FUN_ram_000ee260(s_Did_not_open_parent__s_ram_001bc93c,param_1 + 4);
    return;
  }
  FUN_ram_000f12ec(param_1);
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    (**(code **)(param_1 + 0x68))(param_1);
    return;
  }
  return;
}


