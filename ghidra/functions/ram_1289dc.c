/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001289dc */

undefined4 FUN_ram_001289dc(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar8 = (uint)DAT_ram_8002c94c;
  uVar9 = *(undefined4 *)(param_1 + 0x3b20);
  if (param_2 == uVar8) {
    return 0;
  }
  iVar1 = FUN_ram_001521c0();
  if (4 < iVar1) {
    DAT_ram_80037840 = DAT_ram_80037840 + 1;
    return 0xffffffff;
  }
  uVar6 = 0;
  iVar1 = 4;
  uVar10 = 0;
  uVar7 = 0;
  do {
    uVar4 = uVar6;
    uVar5 = uVar6;
    if ((uVar8 == 0) || (uVar4 = uVar6 * 2, (int)uVar4 < 8)) {
      do {
        while( true ) {
          if ((uVar4 < 8) &&
             (((iVar3 = *(int *)(param_1 + 0x3f94 + uVar4 * 4), iVar3 != 0 &&
               (piVar2 = *(int **)(iVar3 + 0x84), piVar2 != (int *)0x0)) && (*piVar2 != 0)))) {
            uVar10 = uVar10 | 1 << (uVar6 & 0x1f) & 0xffU;
            goto joined_r0x00128af0;
          }
          if (uVar8 == 0) break;
          if ((uVar4 & 1) == 0) {
            uVar4 = uVar4 + 1;
          }
          else {
            uVar4 = uVar4 + 7;
          }
          if (7 < (int)uVar4) goto joined_r0x00128af0;
        }
        uVar4 = uVar4 + 4;
      } while ((int)uVar4 < 8);
joined_r0x00128af0:
      if (param_2 != 0) {
        uVar5 = uVar6 * 2;
        goto joined_r0x00128af8;
      }
LAB_ram_00128b2c:
      do {
        while( true ) {
          if (((uVar5 < 8) && (iVar3 = *(int *)(param_1 + 0x3f94 + uVar5 * 4), iVar3 != 0)) &&
             ((piVar2 = *(int **)(iVar3 + 0x84), piVar2 != (int *)0x0 &&
              (iVar3 = *piVar2, iVar3 != 0)))) {
            uVar7 = uVar7 | 1 << (uVar6 & 0x1f) & 0xffU;
            *(char *)(iVar3 + 0x48) = (char)uVar6 + '\b';
          }
          if (param_2 != 0) break;
          uVar5 = uVar5 + 4;
joined_r0x00128af8:
          if (7 < (int)uVar5) goto LAB_ram_00128b88;
        }
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar5 + 1;
        }
        else {
          uVar5 = uVar5 + 7;
        }
      } while ((int)uVar5 < 8);
    }
    else if (param_2 == 0) goto LAB_ram_00128b2c;
LAB_ram_00128b88:
    iVar1 = iVar1 + -1;
    uVar6 = uVar6 + 1;
    if (iVar1 == 0) {
      DAT_ram_8002c94c = (byte)param_2;
      DAT_ram_80037844 = param_2;
      FUN_ram_000ee260(s_Beacon_scheme_updated_to__d_ram_001c3ea8,param_2);
      uVar8 = 0;
      iVar1 = 4;
      do {
        uVar6 = 1 << (uVar8 & 0x1f);
        if (((uVar10 ^ uVar7) & uVar6) != 0) {
          if ((uVar6 & uVar7) == 0) {
            *(undefined1 *)(param_1 + 0x4018) = 1;
          }
          else {
            FUN_ram_00102e04(uVar9,uVar8,(uint)*(ushort *)(param_1 + 0x43a) << 10,0,0);
          }
        }
        iVar1 = iVar1 + -1;
        uVar8 = uVar8 + 1;
      } while (iVar1 != 0);
      return 0;
    }
  } while( true );
}


