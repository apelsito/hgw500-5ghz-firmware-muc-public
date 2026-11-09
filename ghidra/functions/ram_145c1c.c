/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00145c1c */

void FUN_ram_00145c1c(ushort *param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  
  puVar7 = param_1 + 4;
  if (puVar7 == (ushort *)0x8) {
    FUN_ram_000ee260(s_RALG__Error_no_table_to_check_ram_001c5710);
    FUN_ram_80030314();
    uVar3 = (uint)uRam00000000;
    if (param_2 == 0) {
LAB_ram_00145cb0:
      puVar8 = &DAT_ram_001a8d18;
      puVar6 = &DAT_ram_001a8df0;
      if (uVar3 < 0x2f) goto LAB_ram_00145cc0;
    }
    else {
      puVar6 = &DAT_ram_001a8fb8;
      puVar8 = &DAT_ram_001a8ee0;
      if (uVar3 < 0x2f) {
        if (uVar3 == 0) {
          return;
        }
        iVar4 = 0;
        goto LAB_ram_00145ccc;
      }
    }
  }
  else {
    uVar3 = (uint)*param_1;
    if (param_2 == 0) goto LAB_ram_00145cb0;
    puVar6 = &DAT_ram_001a8fb8;
    puVar8 = &DAT_ram_001a8ee0;
    if (0x2e < uVar3) goto LAB_ram_00145cc8;
LAB_ram_00145cc0:
    if (uVar3 == 0) {
      return;
    }
  }
LAB_ram_00145cc8:
  iVar4 = 0;
LAB_ram_00145ccc:
  do {
    while (uVar1 = puVar7[iVar4], uVar1 == 0) {
LAB_ram_00145d64:
      iVar5 = iVar4 + 1;
      if (uVar3 < 0x2f) {
LAB_ram_00145dc4:
        iVar4 = iVar4 + 1;
        if ((int)uVar3 <= iVar4) {
          return;
        }
      }
      else {
        iVar4 = iVar5;
        if (0x2e < iVar5) {
          return;
        }
      }
    }
    if (param_4 == 0) {
      iVar5 = iVar4 * 6 + 0x47;
    }
    else {
      iVar5 = iVar4 * 6 + 0x1d9;
    }
    if (uVar1 < puVar7[(byte)puVar6[(byte)param_1[iVar5]]]) {
      if (param_4 == 0) {
        ppuVar2 = (undefined **)&DAT_ram_001c5788;
      }
      else {
        ppuVar2 = &PTR_DAT_ram_0020554d_ram_001c5784;
      }
      FUN_ram_000ee260(s_RALG__ERROR__s_adjacent__sMCS_ta_ram_001c5730,param_3,ppuVar2,iVar4,
                       puVar8[iVar4]);
      FUN_ram_80030314();
    }
    if (uVar1 <= puVar7[(byte)puVar6[*(byte *)((int)(param_1 + iVar5) + 0xb)]]) {
      uVar3 = (uint)*param_1;
      goto LAB_ram_00145d64;
    }
    if (param_4 == 0) {
      ppuVar2 = (undefined **)&DAT_ram_001c5788;
    }
    else {
      ppuVar2 = &PTR_DAT_ram_0020554d_ram_001c5784;
    }
    FUN_ram_000ee260(s_RALG__ERROR__s_adjacent__sMCS_ta_ram_001c578c,param_3,ppuVar2,iVar4,
                     puVar8[iVar4]);
    FUN_ram_80030314();
    uVar3 = (uint)*param_1;
    iVar5 = iVar4 + 1;
    if (uVar3 < 0x2f) goto LAB_ram_00145dc4;
    iVar4 = iVar5;
    if (0x2e < iVar5) {
      return;
    }
  } while( true );
}


