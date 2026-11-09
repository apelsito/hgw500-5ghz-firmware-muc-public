/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e4890 */

uint * FUN_ram_000e4890(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_2 + 0x210);
  uVar5 = 0;
  if (param_4 == 0) {
    iVar1 = FUN_ram_000e5c84();
    if (iVar1 != 2) {
      uVar3 = 0;
      iVar1 = 0;
      uVar7 = 0;
      goto LAB_ram_000e4904;
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
    iVar1 = FUN_ram_000e5c84();
    if (iVar1 != 2) {
      uVar3 = 0;
      iVar1 = 0;
      goto LAB_ram_000e4904;
    }
  }
  iVar1 = 2;
  uVar3 = 0x704;
LAB_ram_000e4904:
  uVar4 = 0;
  if (param_4 == 0) {
    if (uVar7 < 0x6d) {
      uVar4 = (uint)(byte)(&DAT_ram_0018c430)[param_3 + uVar7 * 3];
    }
    iVar2 = 1;
    uVar5 = uVar4;
  }
  else {
    iVar2 = 0;
  }
  *(uint *)(param_1 + 0x4c) = iVar1 << 0x1d | (param_3 & 3) << 9 | uVar7 | 0x6000000 | 0x8000000;
  *(uint *)(param_1 + 0x50) =
       iVar2 << 0xf | uVar6 & 0x7fff | (uVar3 & 0x3ff) << 0x10 | (uVar5 & 7) << 0x1c | 0x80000000;
  return (uint *)(param_1 + 0x4c);
}


