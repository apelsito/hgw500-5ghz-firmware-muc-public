/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ff5fc */

void FUN_ram_000ff5fc(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x17c);
  *puVar1 = 0xaaabaaab;
  puVar1[1] = 0x71c771c7;
  puVar1[2] = 0x55555555;
  puVar1[3] = 0x38e438e4;
  puVar1[4] = 0x2aab2aab;
  puVar1[5] = 0x1c721c72;
  puVar1[6] = 0x15551555;
  puVar1[7] = 0x12f712f7;
  puVar1[8] = 0x80008000;
  puVar1[9] = 0x40004000;
  puVar1[10] = 0x17461746;
  puVar1[0xb] = 0xba30ba3;
  *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x460) = puVar1;
  return;
}


