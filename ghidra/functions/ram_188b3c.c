/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188b3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00188b3c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 local_30 [4];
  
  if (((param_1 != 0 && param_2 != 0) && param_3 != 0) && param_4 != 0) {
    local_30[0] = DAT_ram_001abad4;
    local_30[1] = DAT_ram_001abad8;
    local_30[2] = DAT_ram_001abadc;
    iVar4 = 0;
    iVar5 = 4;
    local_30[3] = DAT_ram_001abae0;
    do {
      iVar10 = 0;
      puVar9 = (uint *)local_30[iVar4];
      iVar2 = iVar4 * 0x70;
      do {
        iVar1 = iVar10 * 0xe;
        puVar6 = (ushort *)(param_1 + iVar2 + iVar1);
        puVar7 = (ushort *)(param_3 + iVar2 + iVar1);
        puVar8 = (ushort *)(param_2 + iVar2 + iVar1);
        puVar3 = (ushort *)(iVar1 + iVar2 + param_4);
        *puVar9 = (uint)*puVar7 << 0xc | (uint)*puVar6;
        puVar9[1] = (uint)*puVar8 | (uint)*puVar3 << 0xc;
        puVar9[2] = (uint)puVar7[1] << 0xc | (uint)puVar6[1];
        puVar9[3] = (uint)puVar8[1] | (uint)puVar3[1] << 0xc;
        puVar9[4] = (uint)puVar7[2] << 0xc | (uint)puVar6[2];
        puVar9[5] = (uint)puVar8[2] | (uint)puVar3[2] << 0xc;
        puVar9[6] = (uint)puVar7[3] << 0xc | (uint)puVar6[3];
        puVar9[7] = (uint)puVar8[3] | (uint)puVar3[3] << 0xc;
        puVar9[8] = (uint)puVar7[4] << 0xc | (uint)puVar6[4];
        puVar9[9] = (uint)puVar8[4] | (uint)puVar3[4] << 0xc;
        puVar9[10] = (uint)puVar7[5] << 0xc | (uint)puVar6[5];
        puVar9[0xb] = (uint)puVar8[5] | (uint)puVar3[5] << 0xc;
        puVar9[0xc] = (uint)puVar7[6] << 0xc | (uint)puVar6[6];
        puVar9[0xd] = (uint)puVar8[6] | (uint)puVar3[6] << 0xc;
        puVar9 = puVar9 + 0xe;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar5 != 0);
  }
  _DAT_ram_e60914ac = param_5;
  return;
}


