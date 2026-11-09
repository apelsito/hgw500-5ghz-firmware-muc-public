/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e5c94 */

void FUN_ram_000e5c94(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_ram_0039fe00(&DAT_ram_001cb240,param_1 + 10,6);
  FUN_ram_0039fe00(&DAT_ram_001cb246,param_1 + 0x10,6);
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    DAT_ram_8002c8b0 = 0;
    DAT_ram_0018c020 = 0;
    if (*(char *)(param_1 + 0x45) != '\x01') goto LAB_ram_000e5d38;
  }
  else {
    DAT_ram_0018c020 = 1;
    if (*(char *)(param_1 + 0x45) != '\x01') {
      DAT_ram_8002c8b0 = 0;
      goto LAB_ram_000e5d38;
    }
  }
  DAT_ram_8002c8b0 = 1;
LAB_ram_000e5d38:
  if ((*(char *)(param_1 + 0x46) == '\x01') || (*(char *)(param_1 + 0x46) == '\x03')) {
    DAT_ram_8002c8bc = *(undefined1 *)(param_1 + 0x46);
  }
  DAT_ram_8002c8d6 = (char)*(undefined4 *)(param_1 + 0xf0);
  DAT_ram_8002c8d5 = (char)*(undefined4 *)(param_1 + 0xec);
  DAT_ram_8002c8d4 = (char)*(undefined4 *)(param_1 + 0xe4);
  DAT_ram_8002c8b8 = *(undefined4 *)(param_1 + 0x48);
  DAT_ram_0018c029 = *(undefined1 *)(param_1 + 8);
  DAT_ram_0018c024 = *(uint *)(param_1 + 0x18) >> 1 & 1;
  DAT_ram_0018c01c = *(undefined2 *)(param_1 + 4);
  DAT_ram_0018c018 = (uint)*(byte *)(param_1 + 9);
  return;
}


