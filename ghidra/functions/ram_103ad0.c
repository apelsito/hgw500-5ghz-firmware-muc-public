/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103ad0 */

void FUN_ram_00103ad0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = *(uint **)(param_1 + 0x16c);
  uVar4 = (uint)DAT_ram_0018c000;
  uVar2 = param_2 << 0x10;
  uVar1 = *puVar3 & 0xfff0e080 | uVar2 | uVar4;
  *puVar3 = uVar1;
  if (uVar4 == 8) {
    *puVar3 = uVar1 | 0x80;
  }
  puVar3[1] = 0x80000000;
  puVar3[2] = puVar3[2] & 0xfff0e080 | uVar4;
  uVar5 = puVar3[3];
  uVar1 = FUN_ram_000e3a74(0);
  puVar3[3] = (uVar1 & 0x3ff) << 0x10 | uVar5 & 0xfc00ffff | 0x80000000;
  uVar1 = puVar3[4] & 0xfff0e080 | 0x200 | uVar2 | uVar4;
  puVar3[4] = uVar1;
  if (uVar4 == 8) {
    puVar3[4] = uVar1 | 0x80;
  }
  puVar3[5] = 0x80000000;
  uVar1 = puVar3[6] & 0xfff0e080 | 0x400 | uVar2 | uVar4;
  puVar3[6] = uVar1;
  if (uVar4 == 8) {
    puVar3[6] = uVar1 | 0x80;
  }
  puVar3[7] = 0x80000000;
  return;
}


