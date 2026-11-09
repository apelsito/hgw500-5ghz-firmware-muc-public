/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ff5dc */

void FUN_ram_000ff5dc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0x1fc);
  *puVar2 = 0x107;
  puVar2[1] = uVar1;
  puVar2[2] = 0x107;
  puVar2[3] = uVar1;
  puVar2[4] = 0x107;
  puVar2[5] = uVar1;
  puVar2[6] = 0x107;
  puVar2[7] = uVar1;
  return;
}


