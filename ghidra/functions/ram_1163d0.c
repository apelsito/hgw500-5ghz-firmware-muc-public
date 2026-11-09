/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001163d0 */

void FUN_ram_001163d0(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_40;
  int local_3c;
  uint local_38;
  
  local_40 = 0;
  local_3c = 0;
  if (((char)param_2[0x24] == '\x02') || (DAT_ram_8002c934 != '\0')) {
    local_38 = 800000;
  }
  else {
    local_38 = DAT_ram_8002c22c;
  }
  uVar7 = (uint)param_2[6];
  if (param_2[7] == 0) {
    FUN_ram_80023d70();
  }
  else {
    iVar4 = uVar7 << 4;
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_2 + 4);
      iVar9 = 0;
      if (*(int *)(iVar3 + iVar4) == 0) {
        do {
          uVar7 = uVar7 + 1;
          if ((int)(uint)param_2[1] <= (int)uVar7) {
            uVar7 = 0;
          }
          iVar4 = uVar7 * 0x10;
          iVar9 = iVar9 + 1;
        } while (*(int *)(iVar3 + iVar4) == 0);
      }
      if ((uint)(*(int *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014) -
                *(int *)(iVar3 + iVar4 + 4)) <= local_38) break;
      DAT_ram_80037088 = DAT_ram_80037088 + iVar9;
      iVar3 = 0;
      iVar8 = *(int *)(*(int *)(param_2 + 4) + iVar4);
      puVar5 = (undefined4 *)(*(int *)(param_2 + 4) + iVar4);
      iVar2 = local_40;
      while (local_40 = iVar2, iVar8 != 0) {
        uVar1 = param_2[1];
        uVar7 = uVar7 + 1;
        *puVar5 = 0;
        if ((int)(uint)uVar1 <= (int)uVar7) {
          uVar7 = 0;
        }
        iVar4 = FUN_ram_80021434(param_1,iVar8);
        iVar3 = iVar3 + 1;
        if (iVar4 == 0) {
          local_40 = iVar8;
          if (iVar2 != 0) {
            *(undefined4 *)(local_3c + 0x8c) = *(undefined4 *)(iVar8 + 0x94);
            local_40 = iVar2;
          }
          *(int *)(param_1 + 0x3a10) = *(int *)(param_1 + 0x3a10) + 1;
          local_3c = iVar8;
        }
        iVar4 = uVar7 * 0x10;
        iVar8 = *(int *)(*(int *)(param_2 + 4) + iVar4);
        param_2[7] = param_2[7] - 1;
        puVar5 = (undefined4 *)(*(int *)(param_2 + 4) + iVar4);
        iVar2 = local_40;
      }
      DAT_ram_8003707c = DAT_ram_8003707c + iVar3;
      DAT_ram_80037008 = DAT_ram_80037008 + iVar3;
      iVar6 = iVar3 + iVar9 + iVar6;
    } while (param_2[7] != 0);
    FUN_ram_80023d70();
    if (iVar6 != 0) {
      *param_2 = *param_2 + (short)iVar6 & 0xfff;
      param_2[2] = param_2[2] + (short)iVar6 & 0xfff;
      param_2[6] = param_2[1] - 1 & *param_2;
      if (local_40 != 0) {
        FUN_ram_001146bc(param_1,local_40,local_3c);
      }
    }
  }
  return;
}


