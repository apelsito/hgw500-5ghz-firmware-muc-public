/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014813c */

/* WARNING: Removing unreachable block (ram,0x00148208) */
/* WARNING: Removing unreachable block (ram,0x0014820e) */

void FUN_ram_0014813c(int param_1,char param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  FUN_ram_000e6c98(0x17);
  if (param_2 == '\0') {
    if (param_3 == 0) {
      if ((DAT_ram_8002c86c & 1) != 0) {
        DAT_ram_8002c86c = DAT_ram_8002c86c & 0xfffffffe;
        FUN_ram_000f7d60(*(undefined4 *)(param_1 + 0x4648));
        *(undefined4 *)(param_1 + 0x4648) = 0;
      }
      FUN_ram_0014f4e8(param_1,&LAB_ram_0014f454,1);
      return;
    }
    if ((DAT_ram_8002c86c & 1) != 0) {
      DAT_ram_8002c86c = DAT_ram_8002c86c & 0xfffffffe;
      FUN_ram_000f7d60(*(undefined4 *)(param_1 + 0x4648));
      *(undefined4 *)(param_1 + 0x4648) = 0;
      if ((DAT_ram_8002c86c & 1) != 0) {
        return;
      }
    }
    uVar1 = FUN_ram_000f7c10(DAT_ram_8002c870,param_1,0,&LAB_ram_00148e64,3);
    *(undefined4 *)(param_1 + 0x4648) = uVar1;
    DAT_ram_8002c86c = DAT_ram_8002c86c | 1;
    return;
  }
  if (param_2 != '\x06') {
    if ((param_2 == '\v') && (DAT_ram_0018c234 = (param_3 << 7) / 1000, DAT_ram_0018c234 == 0)) {
      DAT_ram_0018c234 = 1;
      return;
    }
    return;
  }
  if (param_3 < 0x7fffffff) {
    DAT_ram_8002c870 = param_3;
    if (param_3 < 0x3e9) {
      DAT_ram_8002c874 = 0;
      if (param_3 == 0) {
        DAT_ram_8002c878 = FUN_ram_000f5e64(1000,0);
      }
      else {
        uVar5 = param_3;
        if ((int)param_3 < 0) {
          uVar5 = ~param_3;
        }
        iVar2 = LZCOUNT(uVar5) + -1;
        if ((int)param_3 < 0) {
          iVar2 = -1;
        }
        uVar5 = iVar2 - 0x15;
        bVar7 = (int)uVar5 < 0;
        if (bVar7) {
          uVar5 = 0;
        }
        uVar6 = uVar5 + 1;
        if (!bVar7) {
          param_3 = param_3 << (uVar5 & 0x1f);
        }
        uVar5 = 0;
        LP_START = 0x148234;
        LP_END = 0x148244;
        uVar3 = 1000;
        do {
          uVar4 = uVar3 - param_3;
          if (uVar3 < param_3) {
            uVar4 = uVar4 + param_3;
          }
          else {
            uVar5 = uVar5 | 1 << (uVar6 & 0x1f);
          }
          param_3 = param_3 >> 1;
          uVar6 = uVar6 - 1;
          uVar3 = uVar4;
        } while (uVar6 != 0);
        DAT_ram_8002c878 = uVar5 >> 1 | uVar5 << 0x1f;
      }
      return;
    }
  }
  else {
    DAT_ram_8002c870 = 0x7ffffffe;
  }
  DAT_ram_8002c874 = 1;
  DAT_ram_8002c878 = DAT_ram_8002c870 / 1000;
  return;
}


