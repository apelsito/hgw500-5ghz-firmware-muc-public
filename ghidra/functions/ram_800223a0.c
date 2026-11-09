/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:800223a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_800223a0(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  
  iVar7 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar5 = param_2[6];
  uVar6 = (uint)uVar5;
  iVar3 = _DAT_ram_0046e000;
  iVar4 = _DAT_ram_0046e000;
  if (param_2[7] != 0) {
    iVar7 = 0;
    do {
      iVar4 = uVar6 * 0x10;
      iVar3 = *(int *)(param_2 + 4);
      iVar8 = *(int *)(iVar3 + iVar4);
      if (iVar8 == 0) break;
      iVar2 = FUN_ram_80021434(param_1,iVar8);
      if (iVar2 == 0) {
        iVar2 = iVar8;
        if (local_30 != 0) {
          *(undefined4 *)(local_2c + 0x8c) = *(undefined4 *)(iVar8 + 0x94);
          iVar2 = local_30;
        }
        local_30 = iVar2;
        *(int *)(param_1 + 0x3a10) = *(int *)(param_1 + 0x3a10) + 1;
        local_2c = iVar8;
      }
      uVar5 = param_2[7];
      uVar1 = param_2[1];
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar4 + iVar3) = 0;
      param_2[7] = uVar5 - 1;
      if ((int)(uint)uVar1 <= (int)uVar6) {
        uVar6 = 0;
      }
      iVar7 = iVar7 + 1;
    } while ((ushort)(uVar5 - 1) != 0);
    uVar5 = (ushort)uVar6;
    iVar3 = _DAT_ram_0046e000;
    if (_DAT_ram_0046e000 != 0) goto LAB_ram_80022498;
    _DAT_ram_0046e000 = 0;
    iVar4 = iVar7;
  }
  if (iVar4 == 0) {
    FUN_ram_001163d0(param_1,param_2);
    return;
  }
LAB_ram_80022498:
  _DAT_ram_0046e000 = iVar3;
  param_2[6] = uVar5;
  *param_2 = *param_2 + (short)iVar7 & 0xfff;
  param_2[2] = param_2[2] + (short)iVar7 & 0xfff;
  DAT_ram_80037008 = DAT_ram_80037008 + iVar7;
  DAT_ram_8003707c = iVar7 + DAT_ram_8003707c;
  if (_DAT_ram_0046e000 == 0) {
    FUN_ram_80023d70();
  }
  if (local_30 == 0) {
    return;
  }
  FUN_ram_001146bc(param_1,local_30,local_2c);
  return;
}


