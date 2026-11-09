/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013eaac */

/* WARNING: Removing unreachable block (ram,0x0013eb10) */
/* WARNING: Removing unreachable block (ram,0x0013eb54) */
/* WARNING: Removing unreachable block (ram,0x0013eb18) */
/* WARNING: Removing unreachable block (ram,0x0013eb12) */
/* WARNING: Removing unreachable block (ram,0x0013eb1c) */
/* WARNING: Removing unreachable block (ram,0x0013eb1e) */
/* WARNING: Removing unreachable block (ram,0x0013eb22) */

void FUN_ram_0013eaac(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  bVar1 = *(byte *)(param_2 + 0x1e);
  if (bVar1 != 0) {
    uVar2 = 0;
    iVar7 = 0x10;
    uVar3 = 0x40;
    LP_START = 0x13ead4;
    LP_END = 0x13eafc;
    do {
      if ((*(char *)(param_1 + 0x81f + uVar2 * 0x4c) == '\x01') &&
         (uVar4 = (uint)*(ushort *)(param_1 + 0x7fa + uVar2 * 0x4c), uVar4 < uVar3)) {
        uVar3 = uVar4;
      }
      uVar2 = uVar2 + 1 & 0xff;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (uVar3 != 0) {
      if (uVar3 == 0) {
        uVar2 = FUN_ram_000f5e6c(0x40,0);
      }
      else {
        uVar2 = LZCOUNT(uVar3) - 0x19;
        bVar8 = (int)uVar2 < 0;
        if (bVar8) {
          uVar2 = 0;
        }
        uVar4 = uVar2 + 1;
        if (!bVar8) {
          uVar3 = uVar3 << (uVar2 & 0x1f);
        }
        uVar2 = 0;
        LP_START = 0x13eb3c;
        LP_END = 0x13eb4c;
        uVar5 = 0x40;
        do {
          uVar6 = uVar5 - uVar3;
          if (uVar5 < uVar3) {
            uVar6 = uVar6 + uVar3;
          }
          else {
            uVar2 = uVar2 | 1 << (uVar4 & 0x1f);
          }
          uVar3 = uVar3 >> 1;
          uVar4 = uVar4 - 1;
          uVar5 = uVar6;
        } while (uVar4 != 0);
        uVar2 = uVar2 >> 1;
      }
      *(char *)(param_2 + 0x1e) = (char)((int)(uint)bVar1 >> (uVar2 & 0x1f));
    }
  }
  return;
}


