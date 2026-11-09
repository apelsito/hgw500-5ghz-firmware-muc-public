/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103e90 */

/* WARNING: Removing unreachable block (ram,0x00103f60) */
/* WARNING: Removing unreachable block (ram,0x00103f1a) */
/* WARNING: Removing unreachable block (ram,0x00103f26) */
/* WARNING: Removing unreachable block (ram,0x00103f2a) */
/* WARNING: Removing unreachable block (ram,0x00103f1c) */
/* WARNING: Removing unreachable block (ram,0x00103f22) */
/* WARNING: Removing unreachable block (ram,0x00103f2e) */

undefined4
FUN_ram_00103e90(int param_1,int param_2,int param_3,int *param_4,uint *param_5,undefined4 *param_6,
                uint *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  *param_4 = -1;
  *param_5 = 0;
  *param_6 = 0;
  if (((param_3 == 0) && (-1 < param_2)) && (param_2 < 4)) {
    iVar4 = *(int *)(param_1 + 0xe8 + param_2 * 4);
    param_1 = param_1 + 0x46c;
    *param_4 = iVar4;
    iVar4 = iVar4 * 0x10;
    uVar2 = (uint)*(byte *)(param_1 + iVar4);
    uVar1 = *(undefined4 *)(param_1 + iVar4 + 8);
    uVar5 = (uint)*(ushort *)(iVar4 + param_1 + 2);
    *param_5 = uVar2;
    *param_6 = uVar1;
    if ((uVar2 == 0) || (0x3e < uVar5)) {
      if (uVar2 == 0) {
        uVar5 = FUN_ram_000f5e6c(uVar5);
      }
      else {
        uVar3 = (LZCOUNT(uVar2) + -1) - (LZCOUNT(uVar5) + -1);
        bVar8 = (int)uVar3 < 0;
        if (bVar8) {
          uVar3 = 0;
        }
        uVar7 = uVar3 + 1;
        if (!bVar8) {
          uVar2 = uVar2 << (uVar3 & 0x1f);
        }
        uVar3 = 0;
        LP_START = 0x103f48;
        LP_END = 0x103f58;
        do {
          uVar6 = uVar5 - uVar2;
          if (uVar5 < uVar2) {
            uVar6 = uVar6 + uVar2;
          }
          else {
            uVar3 = uVar3 | 1 << (uVar7 & 0x1f);
          }
          uVar2 = uVar2 >> 1;
          uVar7 = uVar7 - 1;
          uVar5 = uVar6;
        } while (uVar7 != 0);
        uVar5 = uVar3 >> 1 | uVar3 << 0x1f;
      }
      *param_7 = uVar5;
    }
    else {
      uVar3 = 0;
      do {
        uVar7 = uVar5 - uVar2;
        bVar8 = uVar2 <= uVar5;
        if (bVar8) {
          uVar3 = uVar3 + 1;
        }
        uVar5 = uVar7;
      } while (bVar8 && uVar7 != 0);
      *param_7 = uVar3;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}


