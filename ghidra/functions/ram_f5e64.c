/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f5e64 */

/* WARNING: Removing unreachable block (ram,0x000f5eca) */
/* WARNING: Removing unreachable block (ram,0x000f5ece) */

undefined8 FUN_ram_000f5e64(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  
  if (param_2 != 0) {
    uVar1 = 0;
    uVar2 = param_1;
    if ((int)param_1 < 0) {
      uVar2 = ~param_1;
    }
    iVar3 = LZCOUNT(uVar2) + -1;
    if ((int)param_1 < 0) {
      iVar3 = -1;
    }
    uVar2 = param_2;
    if ((int)param_2 < 0) {
      uVar2 = ~param_2;
    }
    iVar4 = LZCOUNT(uVar2) + -1;
    if ((int)param_2 < 0) {
      iVar4 = -1;
    }
    uVar2 = iVar4 - iVar3;
    bVar6 = (int)uVar2 < 0;
    if (bVar6) {
      uVar2 = 0;
    }
    uVar5 = uVar2 + 1;
    if (!bVar6) {
      param_2 = param_2 << (uVar2 & 0x1f);
    }
    LP_START = 0xf5eb2;
    LP_END = 0xf5ec2;
    do {
      uVar2 = param_1 - param_2;
      if (param_1 < param_2) {
        uVar2 = uVar2 + param_2;
      }
      else {
        uVar1 = uVar1 | 1 << (uVar5 & 0x1f);
      }
      param_2 = param_2 >> 1;
      uVar5 = uVar5 - 1;
      param_1 = uVar2;
    } while (uVar5 != 0);
    return CONCAT44(uVar2,uVar1 >> 1 | uVar1 << 0x1f);
  }
  uVar7 = FUN_ram_80030334();
  return uVar7;
}


