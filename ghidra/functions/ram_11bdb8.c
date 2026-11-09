/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011bdb8 */

void FUN_ram_0011bdb8(int param_1)

{
  if (DAT_ram_8002c8eb != '\0') {
    *(undefined4 *)(param_1 + 0x4ec) = 0xf500;
    *(undefined4 *)(param_1 + 0x4f4) = 0xf500;
    *(undefined4 *)(param_1 + 0x4f8) = 0xf540;
    *(undefined4 *)(param_1 + 0x4fc) = 0xf580;
    *(undefined4 *)(param_1 + 0x500) = 0xf5c0;
    *(undefined1 *)(param_1 + 0x4eb) = 1;
    *(undefined1 *)(param_1 + 0x4e8) = 1;
    DAT_ram_80037884 = 1;
    return;
  }
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x4e8) = 0;
  DAT_ram_80037884 = 0;
  *(undefined1 *)(param_1 + 0x4eb) = 0;
  return;
}


