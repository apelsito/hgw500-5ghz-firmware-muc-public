/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001487f0 */

/* WARNING: Removing unreachable block (ram,0x001488e8) */
/* WARNING: Removing unreachable block (ram,0x001488f0) */
/* WARNING: Removing unreachable block (ram,0x0014888e) */
/* WARNING: Removing unreachable block (ram,0x00148892) */

void FUN_ram_001487f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar7 = *(uint *)(param_1 + 0x7bc);
  uVar1 = *(uint *)(param_1 + 0x7b4) / 1000;
  if (((uVar1 != 0) && (uVar1 <= uVar7)) && ((uint)(DAT_ram_0018c234 * DAT_ram_8002c870) <= uVar7))
  {
    if ((uVar1 == 0) || (0x3e < uVar7)) {
      if (uVar1 == 0) {
        uVar3 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar3 = uVar7;
        if ((int)uVar7 < 0) {
          uVar3 = ~uVar7;
        }
        iVar5 = LZCOUNT(uVar3) + -1;
        if ((int)uVar7 < 0) {
          iVar5 = -1;
        }
        uVar3 = (LZCOUNT(uVar1) + -1) - iVar5;
        bVar9 = (int)uVar3 < 0;
        if (bVar9) {
          uVar3 = 0;
        }
        uVar8 = uVar3 + 1;
        uVar2 = uVar1;
        if (!bVar9) {
          uVar2 = uVar1 << (uVar3 & 0x1f);
        }
        uVar3 = 0;
        LP_START = 0x1488b0;
        LP_END = 0x1488c0;
        uVar4 = uVar7;
        do {
          uVar6 = uVar4 - uVar2;
          if (uVar4 < uVar2) {
            uVar6 = uVar6 + uVar2;
          }
          else {
            uVar3 = uVar3 | 1 << (uVar8 & 0x1f);
          }
          uVar2 = uVar2 >> 1;
          uVar8 = uVar8 - 1;
          uVar4 = uVar6;
        } while (uVar8 != 0);
        uVar3 = uVar3 >> 1 | uVar3 << 0x1f;
      }
    }
    else {
      uVar3 = 0;
      uVar2 = uVar7;
      do {
        uVar8 = uVar2 - uVar1;
        bVar9 = uVar1 <= uVar2;
        if (bVar9) {
          uVar3 = uVar3 + 1;
        }
        uVar2 = uVar8;
      } while (bVar9 && uVar8 != 0);
    }
    if (uVar3 == 0) {
      uVar3 = FUN_ram_000f5e64(0x800000,0);
    }
    else {
      uVar2 = uVar3;
      if ((int)uVar3 < 0) {
        uVar2 = ~uVar3;
      }
      iVar5 = LZCOUNT(uVar2) + -1;
      if ((int)uVar3 < 0) {
        iVar5 = -1;
      }
      uVar2 = iVar5 - 7;
      bVar9 = (int)uVar2 < 0;
      if (bVar9) {
        uVar2 = 0;
      }
      uVar8 = uVar2 + 1;
      if (!bVar9) {
        uVar3 = uVar3 << (uVar2 & 0x1f);
      }
      uVar2 = 0;
      LP_START = 0x148914;
      LP_END = 0x148924;
      uVar4 = 0x800000;
      do {
        uVar6 = uVar4 - uVar3;
        if (uVar4 < uVar3) {
          uVar6 = uVar6 + uVar3;
        }
        else {
          uVar2 = uVar2 | 1 << (uVar8 & 0x1f);
        }
        uVar3 = uVar3 >> 1;
        uVar8 = uVar8 - 1;
        uVar4 = uVar6;
      } while (uVar8 != 0);
      uVar3 = uVar2 >> 1 | uVar2 << 0x1f;
    }
    if ((uVar3 != 0) &&
       (*(uint *)(*(int *)(param_1 + 0x388) + 0x130) = uVar3, (DAT_ram_8002c86c & 4) != 0)) {
      FUN_ram_000ee260(s_VSPNOD__rx__pM_b__u_raw__u_ms__u_ram_001c5f48,param_1 + 0x96,uVar7,
                       *(undefined4 *)(param_1 + 0x7b8),uVar1);
    }
  }
  return;
}


