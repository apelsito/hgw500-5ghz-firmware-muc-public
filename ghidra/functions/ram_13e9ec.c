/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013e9ec */

void FUN_ram_0013e9ec(int param_1,byte param_2,int param_3)

{
  if (param_3 != 0) {
    *(byte *)(param_1 + 3) = (&DAT_ram_001a9058)[*(byte *)(param_1 + 3)] & param_2;
    *(byte *)(param_1 + 4) = (&DAT_ram_001a9058)[*(byte *)(param_1 + 4)] & param_2;
    *(byte *)(param_1 + 5) = (&DAT_ram_001a9058)[*(byte *)(param_1 + 5)] & param_2;
    *(byte *)(param_1 + 6) = (&DAT_ram_001a9058)[*(byte *)(param_1 + 6)] & param_2;
    return;
  }
  *(byte *)(param_1 + 3) = (*(byte *)(param_1 + 3) | 0x80) & param_2;
  *(byte *)(param_1 + 4) = (*(byte *)(param_1 + 4) | 0x80) & param_2;
  *(byte *)(param_1 + 5) = (*(byte *)(param_1 + 5) | 0x80) & param_2;
  *(byte *)(param_1 + 6) = param_2 & (*(byte *)(param_1 + 6) | 0x80);
  return;
}


