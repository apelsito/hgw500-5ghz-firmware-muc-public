/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001380ac */

void FUN_ram_001380ac(uint *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5,
                     undefined4 param_6,undefined *param_7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_74 [4];
  uint local_64 [4];
  undefined *local_54 [4];
  int local_44 [4];
  
  iVar10 = 0;
  local_44[0] = DAT_ram_001a8738;
  local_44[1] = DAT_ram_001a873c;
  local_44[2] = DAT_ram_001a8740;
  local_44[3] = DAT_ram_001a8744;
  if (2 < param_2) {
    iVar8 = 0;
    iVar11 = 4;
    iVar7 = 0;
    LP_START = 0x138120;
    LP_END = 0x138174;
    do {
      uVar5 = *param_1;
      if (uVar5 != 0xffffffff) {
        iVar7 = iVar7 + 1;
        local_74[iVar8] = uVar5 >> 5;
        uVar6 = uVar5 - (uVar5 & 0xffffffe0);
        local_64[iVar8] = uVar6;
        uVar5 = (uVar5 >> 5) + 0x800;
        local_74[iVar8] = uVar5;
        if ((int)uVar6 < 0x11) {
          iVar9 = (int)uVar5 >> (0x10 - uVar6 & 0x1f);
        }
        else {
          iVar9 = uVar5 << (uVar6 - 0x10 & 0x1f);
        }
        local_44[iVar8] = iVar9;
        local_64[iVar8] = uVar6 - 0x10;
      }
      iVar2 = local_44[1];
      iVar9 = local_44[0];
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + -1;
      param_1 = param_1 + 1;
    } while (iVar11 != 0);
    if (iVar7 == 1) {
      iVar10 = FUN_ram_00137ef8(local_74[0],0,4);
      iVar7 = FUN_ram_00137ef8(2,0,4);
      iVar10 = iVar10 + (local_64[0] - 0xb) * iVar7;
    }
    else {
      if (iVar7 == 2) {
        iVar11 = FUN_ram_00137e84(local_44[1] + local_44[0]);
        iVar10 = FUN_ram_00138060(iVar2 + iVar9,(int)(short)iVar11);
        iVar7 = (int)(local_74[1] * local_74[0]) >> 0xc;
        iVar11 = iVar11 + -0xc;
        iVar8 = FUN_ram_00137e84(iVar7);
        iVar7 = FUN_ram_00138060(iVar7,(int)(short)iVar8);
        iVar8 = local_64[1] + local_64[0] + iVar8 + -0xb;
      }
      else if (iVar7 == 3) {
        local_54[0] = (undefined *)(local_64[2] + local_64[1] + 1);
        if ((int)local_54[0] < 0) {
          param_7 = local_54[0];
        }
        local_44[0] = (int)(local_74[2] * local_74[1]) >> 0xc;
        if (local_54[0] < (undefined *)0x80000000) {
          param_7 = (undefined *)0x0;
        }
        local_54[1] = (undefined *)(local_64[2] + local_64[0] + 1);
        puVar4 = local_54[1];
        if ((int)param_7 < (int)local_54[1]) {
          puVar4 = param_7;
        }
        local_44[1] = (int)(local_74[2] * local_74[0]) >> 0xc;
        iVar7 = (int)(local_74[1] * local_74[0]) >> 0xc;
        local_54[2] = (undefined *)(local_64[1] + local_64[0] + 1);
        puVar1 = local_54[2];
        if ((int)puVar4 < (int)local_54[2]) {
          puVar1 = puVar4;
        }
        local_44[2] = iVar7;
        if ((int)(puVar1 + 0xc) < 7) {
          uVar6 = -(int)puVar1 - 5;
          if (0x11 < (int)uVar6) {
            uVar6 = 0x12;
          }
          uVar5 = 0;
        }
        else {
          uVar6 = 0;
          uVar5 = uVar6;
        }
        do {
          while( true ) {
            puVar4 = local_54[uVar5];
            iVar10 = local_44[uVar5] << (uVar6 & 0x1f);
            local_44[uVar5] = iVar10;
            if ((int)puVar4 < 0) break;
            uVar3 = uVar5 + 1;
            local_44[uVar5] = iVar10 << ((uint)puVar4 & 0x1f);
            uVar5 = uVar3;
            if (2 < (int)uVar3) goto LAB_ram_001382f0;
          }
          uVar3 = uVar5 + 1;
          local_44[uVar5] = iVar10 >> (-(int)puVar4 & 0x1fU);
          uVar5 = uVar3;
        } while ((int)uVar3 < 3);
LAB_ram_001382f0:
        iVar10 = local_44[2];
        iVar8 = local_44[0] + local_44[1];
        iVar11 = FUN_ram_00137e84(local_44[2] + iVar8);
        iVar10 = FUN_ram_00138060(iVar10 + iVar8,(int)(short)iVar11);
        iVar7 = (int)(local_74[2] * iVar7) >> 0xc;
        iVar11 = iVar11 - (uVar6 + 0xc);
        iVar8 = FUN_ram_00137e84(iVar7);
        iVar7 = FUN_ram_00138060(iVar7,(int)(short)iVar8);
        iVar8 = local_64[2] + local_64[1] + local_64[0] + iVar8 + -10;
      }
      else if (iVar7 == 4) {
        local_54[0] = (undefined *)(local_64[2] + local_64[1] + local_64[3] + 2);
        local_44[0] = (int)(local_74[3] * ((int)(local_74[2] * local_74[1]) >> 0xc)) >> 0xc;
        puVar4 = &DAT_ram_001a8668;
        if ((int)local_54[0] < 0) {
          puVar4 = local_54[0];
        }
        if (local_54[0] < (undefined *)0x80000000) {
          puVar4 = (undefined *)0x0;
        }
        local_54[1] = (undefined *)(local_64[2] + local_64[0] + local_64[3] + 2);
        local_44[1] = (int)(local_74[3] * ((int)(local_74[2] * local_74[0]) >> 0xc)) >> 0xc;
        iVar7 = (int)(local_74[1] * local_74[0]) >> 0xc;
        puVar1 = local_54[1];
        if ((int)puVar4 < (int)local_54[1]) {
          puVar1 = puVar4;
        }
        local_54[2] = (undefined *)(local_64[3] + local_64[1] + local_64[0] + 2);
        puVar4 = local_54[2];
        if ((int)puVar1 < (int)local_54[2]) {
          puVar4 = puVar1;
        }
        local_44[2] = (int)(local_74[3] * iVar7) >> 0xc;
        iVar8 = local_64[2] + local_64[1] + local_64[0];
        local_54[3] = (undefined *)(iVar8 + 2);
        puVar1 = local_54[3];
        if ((int)puVar4 < (int)local_54[3]) {
          puVar1 = puVar4;
        }
        local_44[3] = (int)(local_74[2] * iVar7) >> 0xc;
        if ((int)(puVar1 + 0xc) < 7) {
          uVar5 = -(int)puVar1 - 5;
          if (0x12 < (int)uVar5) {
            uVar5 = 0x12;
          }
        }
        else {
          uVar5 = 0;
        }
        iVar11 = 4;
        iVar10 = 0;
        LP_START = 0x13841c;
        LP_END = 0x138458;
        do {
          iVar9 = local_44[iVar10] << (uVar5 & 0x1f);
          puVar4 = local_54[iVar10];
          local_44[iVar10] = iVar9;
          if ((int)puVar4 < 0) {
            iVar9 = iVar9 >> (-(int)puVar4 & 0x1fU);
          }
          else {
            iVar9 = iVar9 << ((uint)puVar4 & 0x1f);
          }
          local_44[iVar10] = iVar9;
          iVar9 = local_44[3];
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        iVar10 = local_44[2] + local_44[1] + local_44[0];
        iVar11 = FUN_ram_00137e84(local_44[3] + iVar10);
        iVar10 = FUN_ram_00138060(iVar9 + iVar10,(int)(short)iVar11);
        iVar7 = (int)(local_74[3] * ((int)(local_74[2] * iVar7) >> 0xc)) >> 0xc;
        iVar11 = iVar11 - (uVar5 + 0xc);
        iVar9 = FUN_ram_00137e84(iVar7);
        iVar7 = FUN_ram_00138060(iVar7,(int)(short)iVar9);
        iVar8 = iVar9 + -9 + iVar8 + local_64[3];
      }
      else {
        iVar8 = 0;
        iVar11 = 0;
        iVar7 = 0;
      }
      iVar10 = FUN_ram_00137ef8(iVar10 + 0x800,0,4);
      iVar9 = FUN_ram_00137ef8(2,0,4);
      iVar7 = FUN_ram_00137ef8(iVar7 + 0x800,0,4);
      iVar2 = FUN_ram_00137ef8(2,0,4);
      iVar10 = (-(iVar9 * iVar11) - iVar10) + iVar7 + iVar2 * iVar8;
    }
    iVar7 = FUN_ram_00137ef8(param_2 + -3,0,4);
    uVar5 = iVar10 - iVar7;
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
      iVar10 = uVar5 - (uVar5 & 0xfffffff0);
      *param_3 = -((int)uVar5 >> 4);
    }
    else {
      iVar10 = uVar5 - (uVar5 & 0xfffffff0);
      *param_3 = (int)uVar5 >> 4;
    }
    *param_4 = iVar10 * 0x271;
  }
  return;
}


