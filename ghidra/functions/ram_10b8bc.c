/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010b8bc */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_ram_0010b8bc(int param_1,uint param_2,uint param_3,undefined1 *param_4,undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  
  uVar6 = (param_2 & 0xff00) >> 8;
  iVar5 = FUN_ram_0011bda4();
  FUN_ram_000eea80(local_58,0,0x20);
  cVar8 = DAT_ram_0018c3b8;
  if ((DAT_ram_8002c8d7 != '\0') && ((param_3 == 0x50 || param_3 == 0x28) || param_3 == 0x14)) {
    uVar14 = 0;
    uVar12 = 0xff;
    iVar10 = param_1 + 0x47c + (param_2 & 0xff) * 0x34;
    iVar17 = 2;
    uVar11 = 0;
    do {
      uVar16 = 0;
      do {
        while( true ) {
          iVar9 = uVar16 * 3 + uVar14 * 0xc;
          bVar1 = *(byte *)(iVar10 + iVar9 + 0xe);
          iVar13 = (int)(char)bVar1;
          bVar2 = *(byte *)(iVar10 + iVar9 + 0xf);
          iVar15 = (int)(char)bVar2;
          bVar3 = *(byte *)(iVar9 + iVar10 + 0x10);
          iVar9 = (int)(char)bVar3;
          if (cVar8 == '\x05') {
            FUN_ram_000ee260(s_bw_power___u__u__u_ram_001c0890,iVar9,iVar15,iVar13);
            cVar8 = DAT_ram_0018c3b8;
          }
          if (((iVar13 < 1) || ((iVar15 < 1 && (0x27 < param_3)))) ||
             ((iVar9 < 1 && (0x4f < param_3)))) {
            if (uVar14 != 0 || uVar16 != 0) goto joined_r0x0010ba88;
            goto joined_r0x0010bc88;
          }
          if (param_3 == 0x50) break;
          if (param_3 == 0x28) {
            iVar9 = iVar15;
            if (iVar13 < iVar15) {
              if (iVar13 <= (int)uVar12) {
                uVar12 = (uint)bVar1;
              }
            }
            else {
              if (iVar15 <= (int)uVar12) {
                uVar12 = (uint)bVar2;
              }
              if (iVar15 < iVar13) {
                iVar9 = iVar13;
              }
            }
            if ((int)uVar11 <= iVar9) {
              if (iVar15 < iVar13) goto joined_r0x0010bab0;
LAB_ram_0010baf8:
              uVar11 = (uint)bVar2;
            }
          }
          else if ((int)uVar12 < iVar13) {
            if ((int)uVar11 <= iVar13) goto joined_r0x0010bab0;
          }
          else {
            uVar12 = (uint)bVar1;
            if ((int)uVar11 <= iVar13) {
              uVar11 = uVar12;
            }
          }
joined_r0x0010ba88:
          uVar16 = uVar16 + 1 & 0xff;
          if (3 < uVar16) goto LAB_ram_0010bb4c;
        }
        if (iVar15 < iVar9) {
          iVar7 = iVar15;
          if (iVar13 < iVar15) {
LAB_ram_0010ba08:
            iVar7 = iVar13;
          }
          if ((int)uVar12 < iVar7) goto LAB_ram_0010ba14;
LAB_ram_0010ba20:
          if (iVar9 <= iVar15) {
            if (iVar13 < iVar9) {
              uVar12 = (uint)bVar1;
            }
            else {
              uVar12 = (uint)bVar3;
            }
            goto LAB_ram_0010ba14;
          }
          if (iVar13 < iVar15) {
            uVar12 = (uint)bVar1;
          }
          else {
            uVar12 = (uint)bVar2;
          }
LAB_ram_0010ba48:
          iVar7 = iVar9;
        }
        else {
          if (iVar13 < iVar9) goto LAB_ram_0010ba08;
          if (iVar9 <= (int)uVar12) goto LAB_ram_0010ba20;
LAB_ram_0010ba14:
          iVar7 = iVar15;
          if (iVar15 <= iVar9) goto LAB_ram_0010ba48;
        }
        iVar4 = iVar13;
        if ((iVar13 <= iVar7) && (iVar4 = iVar15, iVar15 <= iVar9)) {
          iVar4 = iVar9;
        }
        if (iVar4 < (int)uVar11) goto joined_r0x0010ba88;
        if (iVar15 <= iVar9) {
          if (iVar9 < iVar13) goto joined_r0x0010bab0;
LAB_ram_0010ba9c:
          bVar1 = bVar3;
          if (iVar9 < iVar15) goto LAB_ram_0010baf8;
joined_r0x0010bab0:
          uVar11 = (uint)bVar1;
          goto joined_r0x0010ba88;
        }
        if (iVar13 <= iVar15) goto LAB_ram_0010ba9c;
        uVar11 = (uint)bVar1;
        uVar16 = uVar16 + 1 & 0xff;
      } while (uVar16 < 4);
LAB_ram_0010bb4c:
      iVar17 = iVar17 + -1;
      uVar14 = uVar14 + 1 & 0xff;
    } while (iVar17 != 0);
    uVar12 = uVar12 + iVar5 * 2;
    if ((int)uVar12 < (int)uVar11) {
      uVar11 = uVar12 & 0xff;
    }
    uVar12 = 0;
    iVar5 = 2;
    do {
      uVar6 = 0;
      do {
        while( true ) {
          iVar17 = uVar6 * 3 + uVar12 * 0xc;
          iVar9 = (int)*(char *)(iVar10 + iVar17 + 0xe);
          iVar15 = (int)*(char *)(iVar10 + iVar17 + 0xf);
          iVar13 = (int)*(char *)(iVar10 + iVar17 + 0x10);
          if (((0 < iVar9) && ((0 < iVar15 || (param_3 < 0x28)))) &&
             ((0 < iVar13 || (param_3 < 0x50)))) break;
          local_58[iVar17] = local_58[0];
          local_58[iVar17 + 1] = local_58[1];
          local_58[iVar17 + 2] = local_58[2];
          local_40[uVar6 + uVar12 * 4] = 1;
joined_r0x0010bc70:
          uVar6 = uVar6 + 1 & 0xff;
          if (3 < uVar6) goto LAB_ram_0010bc74;
        }
        if (iVar9 < (int)uVar11) {
          iVar7 = (uVar11 - iVar9) + 1;
          if (iVar7 < 0) {
            iVar7 = (uVar11 - iVar9) + 2;
          }
          local_58[iVar17] = (char)(iVar7 >> 1);
        }
        else {
          local_58[iVar17] = 0;
        }
        if (0x27 < param_3) {
          if (iVar15 < (int)uVar11) {
            iVar9 = (uVar11 - iVar15) + 1;
            if (iVar9 < 0) {
              iVar9 = (uVar11 - iVar15) + 2;
            }
            local_58[iVar17 + 1] = (char)(iVar9 >> 1);
          }
          else {
            local_58[iVar17 + 1] = 0;
          }
        }
        if (param_3 < 0x50) goto joined_r0x0010bc70;
        if ((int)uVar11 <= iVar13) {
          local_58[iVar17 + 2] = 0;
          goto joined_r0x0010bc70;
        }
        iVar9 = (uVar11 - iVar13) + 1;
        if (iVar9 < 0) {
          iVar9 = (uVar11 - iVar13) + 2;
        }
        local_58[iVar17 + 2] = (char)(iVar9 >> 1);
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
LAB_ram_0010bc74:
      iVar5 = iVar5 + -1;
      uVar12 = uVar12 + 1 & 0xff;
      uVar6 = uVar11;
    } while (iVar5 != 0);
  }
joined_r0x0010bc88:
  if (cVar8 == '\x05') {
    FUN_ram_000ee260(s_bss_power___u_ram_001c08a4,uVar6);
    uVar12 = 0;
    iVar5 = 2;
    do {
      uVar11 = 0;
      do {
        iVar10 = uVar11 * 3 + uVar12 * 0xc;
        FUN_ram_000ee260(s_scale_base___u__u__u_ram_001c08b4,local_58[iVar10 + 2],
                         local_58[iVar10 + 1],local_58[iVar10]);
        uVar11 = uVar11 + 1 & 0xff;
      } while (uVar11 < 4);
      iVar5 = iVar5 + -1;
      uVar12 = uVar12 + 1 & 0xff;
    } while (iVar5 != 0);
  }
  *param_4 = (char)uVar6;
  FUN_ram_0039fe00(param_5,local_58,0x20);
  return 1;
}


