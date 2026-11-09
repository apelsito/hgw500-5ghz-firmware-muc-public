/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f5e6c */

undefined8 FUN_ram_000f5e6c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  iVar3 = (int)param_2 >> 0x1f;
  if (-iVar3 != 0) {
    param_2 = -param_2;
  }
  uVar5 = (int)param_1 >> 0x1f;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  uVar5 = -iVar3 ^ uVar5;
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
    bVar7 = (int)uVar2 < 0;
    if (bVar7) {
      uVar2 = 0;
    }
    uVar6 = uVar2 + 1;
    if (!bVar7) {
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
        uVar1 = uVar1 | 1 << (uVar6 & 0x1f);
      }
      param_2 = param_2 >> 1;
      uVar6 = uVar6 - 1;
      param_1 = uVar2;
    } while (uVar6 != 0);
    uVar1 = uVar1 >> 1 | uVar1 << 0x1f;
    if ((uVar5 & 1) != 0) {
      uVar1 = -uVar1;
    }
    if (uVar5 >> 1 != 0) {
      uVar2 = -uVar2;
    }
    return CONCAT44(uVar2,uVar1);
  }
  uVar8 = FUN_ram_80030334();
  return uVar8;
}


