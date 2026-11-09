/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001573a4 */

byte FUN_ram_001573a4(int *param_1)

{
  if (*(char *)(*param_1 + 0x2c) != '\x01') {
    return DAT_ram_8002c8e0;
  }
  if (*(char *)((int)param_1 + 0x40e) == '\0') {
    return DAT_ram_8002c8e0;
  }
  if ((*(ushort *)(param_1 + 3) & 0x4000) == 0) {
    return DAT_ram_8002c8e0;
  }
  if (1 < DAT_ram_8002c8e0) {
    return DAT_ram_8002c8e0;
  }
  return 1;
}


