/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ff594 */

void FUN_ram_000ff594(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x16c);
  *puVar1 = 0x6000000;
  puVar1[1] = 0x80000000;
  puVar1[2] = 0x6000000;
  puVar1[3] = 0x80000000;
  puVar1[4] = 0x6000000;
  puVar1[5] = 0x80000000;
  puVar1[6] = 0x6000000;
  puVar1[7] = 0x80000000;
  return;
}


