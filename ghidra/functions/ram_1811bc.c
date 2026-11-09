/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001811bc */

void FUN_ram_001811bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  int local_40 [4];
  int local_30 [4];
  
  iVar5 = 0;
  local_40[0] = DAT_ram_001ab684;
  local_40[1] = DAT_ram_001ab688;
  local_40[2] = DAT_ram_001ab68c;
  local_40[3] = DAT_ram_001ab690;
  local_30[0] = DAT_ram_001ab694;
  local_30[1] = DAT_ram_001ab698;
  local_30[2] = DAT_ram_001ab69c;
  local_30[3] = DAT_ram_001ab6a0;
  iVar6 = 0x80;
  do {
    iVar7 = 0;
    do {
      FUN_ram_00172bfc(iVar7,param_1,iVar5,iVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    FUN_ram_001831a8(local_60,local_50,0xb);
    iVar8 = 4;
    iVar7 = 0;
    LP_START = 0x181268;
    LP_END = 0x1812ec;
    do {
      iVar1 = local_60[iVar7];
      iVar3 = local_40[iVar7];
      iVar4 = local_50[iVar7];
      iVar2 = local_30[iVar7];
      if (iVar1 < 0) {
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (-iVar1 < iVar3) {
LAB_ram_001812b4:
          local_40[iVar7] = iVar1;
          local_80[iVar7] = iVar5;
        }
      }
      else {
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar1 < iVar3) goto LAB_ram_001812b4;
      }
      if (iVar4 < 0) {
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (-iVar4 < iVar2) {
LAB_ram_001812e0:
          local_30[iVar7] = iVar4;
          local_70[iVar7] = iVar5;
        }
      }
      else {
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar4 < iVar2) goto LAB_ram_001812e0;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar6 = iVar6 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar6 != 0);
  iVar5 = 0;
  iVar6 = 4;
  do {
    FUN_ram_00172bfc(iVar5,param_1,local_80[iVar5],local_70[iVar5]);
    local_40[iVar5] = 0x800;
    local_30[iVar5] = 0x800;
    iVar6 = iVar6 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar6 != 0);
  iVar5 = 0;
  iVar6 = 0x20;
  do {
    iVar7 = 0;
    do {
      FUN_ram_00172e38(iVar7,param_1,iVar5,iVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    FUN_ram_001831a8(local_60,local_50,0xb);
    iVar8 = 4;
    iVar7 = 0;
    LP_START = 0x18137c;
    LP_END = 0x1813fc;
    do {
      iVar1 = local_60[iVar7];
      iVar3 = local_40[iVar7];
      iVar2 = local_50[iVar7];
      iVar4 = local_30[iVar7];
      if (iVar1 < 0) {
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (-iVar1 < iVar3) {
LAB_ram_001813c4:
          local_40[iVar7] = iVar1;
          local_80[iVar7] = iVar5;
        }
      }
      else {
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar1 < iVar3) goto LAB_ram_001813c4;
      }
      if (iVar2 < 0) {
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (-iVar2 < iVar4) {
LAB_ram_001813f0:
          local_30[iVar7] = iVar2;
          local_70[iVar7] = iVar5;
        }
      }
      else {
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar2 < iVar4) goto LAB_ram_001813f0;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar6 = iVar6 + -1;
    iVar5 = iVar5 + 1;
    if (iVar6 == 0) {
      iVar5 = 0;
      iVar6 = 4;
      do {
        FUN_ram_00172e38(iVar5,param_1,local_80[iVar5],local_70[iVar5]);
        iVar6 = iVar6 + -1;
        iVar5 = iVar5 + 1;
      } while (iVar6 != 0);
      return;
    }
  } while( true );
}


