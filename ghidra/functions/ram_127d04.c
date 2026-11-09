/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00127d04 */

void FUN_ram_00127d04(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uStack_3c;
  uint uVar9;
  
  cVar4 = DAT_ram_8002c94c;
  iVar17 = *(int *)(param_1 + 0x3b20);
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar15 = (uint)bVar1;
  uStack_3c = 0;
  uVar5 = FUN_ram_0011bc70(0,0,0);
  uVar10 = *(uint *)(param_1 + 0x28);
  iVar11 = *(int *)(param_2 + 0x84);
  if (iVar11 == 0) {
    FUN_ram_000ee260(s_qtn_beacon_start_can_not_run_on_v_ram_001c3d5c,uVar15);
    FUN_ram_000eaac4(0,s_>>>>_WARNING_at__s__d___s__val_0_ram_001c3ccc,
                     s_qtn_if_qtn_beacon_c_ram_001c3cf8,0x2a5,s__Invalid_QTN_VAP_n__ram_001c3d9c);
    FUN_ram_000ec0ec();
    FUN_ram_000eaac4(0,s_<<<<_ram_001c3d50);
    return;
  }
  uVar12 = (uint)*(ushort *)(iVar11 + 0x14);
  uVar18 = *(undefined4 *)(iVar11 + 0x10);
  if ((uVar12 == 0) && (uVar12 = (uint)*(ushort *)(iVar11 + 0x16), uVar12 == 0)) {
    return;
  }
  *(short *)(iVar11 + 0x18) = (short)uVar12;
  uVar2 = *(undefined1 *)(param_1 + 0x474);
  piVar6 = (int *)FUN_ram_0010914c(param_1,0,0x8000);
  if (piVar6 == (int *)0x0) {
    FUN_ram_000ee260(s_qtn_beacon_start__could_not_allo_ram_001c3db0);
    return;
  }
  iVar11 = FUN_ram_000f9640(*(undefined4 *)(param_1 + 0x3b20),piVar6 + 1,0x8000);
  *piVar6 = iVar11;
  if (iVar11 == 0) {
    FUN_ram_000ee260(s_qtn_beacon_start__could_not_allo_ram_001c3de8,uVar15);
    goto LAB_ram_00127e60;
  }
  if (*(int *)(param_1 + 0x3d54) != 0) {
    iVar16 = param_1 + 0x3d60;
    FUN_ram_000e7d50(iVar16);
    puVar13 = *(undefined4 **)(param_1 + 0x3d54);
    iVar11 = puVar13[5];
    *(int *)(param_1 + 0x3d54) = iVar11;
    if (iVar11 == 0) {
      *(int *)(param_1 + 0x3d58) = param_1 + 0x3d54;
      FUN_ram_000e7da8(iVar16);
      puVar13[4] = 1;
    }
    else {
      FUN_ram_000e7da8(iVar16);
      puVar13[4] = 1;
    }
    if (puVar13 != (undefined4 *)0x0) {
      **(undefined4 **)(param_2 + 0x84) = piVar6;
      *(undefined4 **)(*(int *)(param_2 + 0x84) + 4) = puVar13;
      puVar14 = (undefined4 *)*piVar6;
      FUN_ram_000eea80(puVar14,0,0x6c);
      FUN_ram_000eea80(piVar6[2],0,0x38);
      uVar9 = (int)uVar15 >> 1;
      bVar8 = (byte)uVar9;
      if (cVar4 == '\0') {
        bVar8 = bVar1;
      }
      iVar11 = *(int *)(param_2 + 0x38);
      piVar6[5] = iVar11;
      iVar16 = *(int *)(iVar17 + 4);
      *puVar14 = 0x180a1150;
      puVar14[1] = uVar12;
      puVar14[2] = 0x1f0000;
      *puVar13 = uVar18;
      puVar13[1] = iVar16 << 4 | 3;
      puVar13[2] = 0;
      puVar13[3] = uVar12;
      uVar18 = *puVar13;
      piVar6[3] = (int)puVar13;
      puVar14[3] = uVar18;
      uVar18 = puVar13[2];
      *(byte *)(piVar6 + 0x12) = (bVar8 & 3) + 8;
      uVar3 = *(ushort *)(puVar13 + 3);
      puVar14[4] = uVar18;
      puVar14[5] = (uint)uVar3;
      puVar14[6] = 0x422;
      uVar12 = piVar6[2];
      puVar14[7] = 0x400;
      if ((uVar12 < 0x80000000) || (0x8007ffff < uVar12)) {
        if (uVar12 < 0x8000000) {
          uVar7 = uVar12 + 0x40000000;
          goto LAB_ram_00127ff4;
        }
        uVar7 = uVar12;
        if (0xbfffffff < uVar12) goto LAB_ram_00127ff4;
      }
      else {
        uVar7 = uVar12 + 0xe0000000;
LAB_ram_00127ff4:
        if (uVar7 != 0) goto LAB_ram_00127ffc;
      }
      if ((uVar12 < 0x60000000) || (0x6007ffff < uVar12)) {
        if ((uVar12 < 0x40000000) || (0x47ffffff < uVar12)) {
          if (uVar12 < 0xc0000000) {
            uVar12 = 0;
          }
        }
        else {
          uVar12 = uVar12 + 0xc0000000;
        }
      }
      else {
        uVar12 = uVar12 + 0x20000000;
      }
LAB_ram_00127ffc:
      iVar16 = *(int *)(iVar17 + 0x16c);
      puVar14[8] = uVar12;
      puVar14[9] = 0xffffffff;
      puVar14[10] = iVar16 << 0x10 | 0xffff;
      uVar18 = FUN_ram_000e433c(puVar14,iVar17,1,1,0,uVar2,0,0x80,&uStack_3c,
                                *(undefined1 *)(iVar11 + 0x67f),uVar10 >> 0x12 & 1);
      puVar14[0xb] = uVar18;
      uVar10 = (uint)*(ushort *)(param_1 + 0x43a) << 10;
      puVar14[0xd] = CONCAT22(*(undefined2 *)(iVar17 + 0x1fc),*(undefined2 *)(iVar17 + 0x1c4));
      puVar14[0xc] = (uVar5 & 7) << 8 | 0x100000;
      uVar5 = (uVar10 / 1000) * 2;
      iVar16 = *(int *)(param_2 + 0x84);
      iVar11 = DAT_ram_80038ee4 + (uint)CARRY4(DAT_ram_80038ee0,uVar5);
      *(uint *)(iVar16 + 8) = DAT_ram_80038ee0 + uVar5;
      *(int *)(iVar16 + 0xc) = iVar11;
      *(byte *)(iVar16 + 0x1a) = *(byte *)(iVar16 + 0x1a) | 1;
      if (param_3 == 0) {
        return;
      }
      if (cVar4 == '\0') {
        uVar9 = uVar15;
      }
      FUN_ram_00102e04(iVar17,uVar9 & 3,uVar10,0,0);
      return;
    }
  }
  FUN_ram_000ee260(s_qtn_beacon_start__could_not_allo_ram_001c3e2c);
LAB_ram_00127e60:
  FUN_ram_00109920(param_1,piVar6);
  return;
}


