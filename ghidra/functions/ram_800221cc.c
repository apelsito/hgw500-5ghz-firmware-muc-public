/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:800221cc */

void FUN_ram_800221cc(int param_1,ushort *param_2,ushort param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_38;
  int local_34;
  
  local_38 = 0;
  local_34 = 0;
  uVar2 = param_2[1];
  uVar5 = (uint)uVar2;
  if ((int)param_4 < (int)uVar5) {
    *param_2 = param_3;
    uVar5 = param_4 & 0xffff;
    uVar1 = param_2[6];
    param_2[2] = (uVar2 - 1) + param_3 & 0xfff;
  }
  else {
    param_2[2] = param_3;
    uVar9 = (param_4 - uVar5) + 1;
    *param_2 = (param_3 - uVar2) + 0x1001 & 0xfff;
    if ((int)uVar9 < (int)uVar5) {
      uVar5 = uVar9 & 0xffff;
    }
    uVar1 = param_2[6];
  }
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      iVar7 = (uint)uVar1 * 0x10;
      iVar4 = *(int *)(param_2 + 4);
      iVar8 = *(int *)(iVar4 + iVar7);
      if (iVar8 == 0) {
        DAT_ram_80037084 = DAT_ram_80037084 + 1;
      }
      else {
        if (param_2[7] == 0) {
          FUN_ram_000ee260(s_reorder_buffer_fullness_underflo_ram_001c1e44);
          FUN_ram_000ee260(&DAT_ram_001c1d78);
          iVar4 = *(int *)(param_2 + 4);
        }
        *(undefined4 *)(iVar4 + iVar7) = 0;
        iVar4 = FUN_ram_80021434(param_1,iVar8);
        if (iVar4 == 0) {
          iVar4 = iVar8;
          if (local_38 != 0) {
            *(undefined4 *)(local_34 + 0x8c) = *(undefined4 *)(iVar8 + 0x94);
            iVar4 = local_38;
          }
          local_38 = iVar4;
          *(int *)(param_1 + 0x3a10) = *(int *)(param_1 + 0x3a10) + 1;
          local_34 = iVar8;
        }
        param_2[7] = param_2[7] - 1;
        DAT_ram_80037080 = DAT_ram_80037080 + 1;
        DAT_ram_80037008 = DAT_ram_80037008 + 1;
      }
      uVar3 = uVar1 + 1;
      uVar6 = 0;
      if (uVar3 < param_2[1]) {
        uVar6 = uVar3;
      }
      uVar9 = uVar9 + 1 & 0xffff;
      uVar1 = (ushort)uVar6;
    } while (uVar9 < uVar5);
  }
  if (local_38 != 0) {
    FUN_ram_001146bc(param_1,local_38,local_34);
  }
  return;
}


