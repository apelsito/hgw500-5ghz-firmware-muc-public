/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001746b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001746b8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int local_a0;
  int aiStack_58 [4];
  int aiStack_48 [4];
  
  FUN_ram_0018291c();
  _DAT_ram_e609101c = 0xfe;
  FUN_ram_00183358(0x80);
  _DAT_ram_e6090490 = 2;
  FUN_ram_00183438(param_1);
  uVar1 = _DAT_ram_e6090488;
  _DAT_ram_e6090488 = 0x1000;
  uVar2 = FUN_ram_001711e0(0x300,0x1f,0);
  uVar3 = FUN_ram_001711e0(0x300,0xfe0,5);
  uVar4 = FUN_ram_001711e0(0x300,0x1f000,0xc);
  uVar5 = FUN_ram_001711e0(0x300,0xfe0000,0x11);
  uVar6 = FUN_ram_001711e0(0x340,0x1f,0);
  uVar7 = FUN_ram_001711e0(0x340,0xfe0,5);
  uVar8 = FUN_ram_001711e0(0x340,0x1f000,0xc);
  uVar9 = FUN_ram_001711e0(0x340,0xfe0000,0x11);
  uVar10 = FUN_ram_001711e0(0x380,0x1f,0);
  uVar11 = FUN_ram_001711e0(0x380,0xfe0,5);
  uVar12 = FUN_ram_001711e0(0x380,0x1f000,0xc);
  uVar13 = FUN_ram_001711e0(0x380,0xfe0000,0x11);
  uVar14 = FUN_ram_001711e0(0x3c0,0x1f,0);
  uVar15 = FUN_ram_001711e0(0x3c0,0xfe0,5);
  uVar16 = FUN_ram_001711e0(0x3c0,0x1f000,0xc);
  uVar17 = FUN_ram_001711e0(0x3c0,0xfe0000,0x11);
  FUN_ram_00173130(param_1,1);
  FUN_ram_001811bc(0);
  FUN_ram_00173130(param_1,2);
  uVar24 = 0x800000;
  local_a0 = 0x7f;
  iVar27 = 0;
  iVar28 = 0;
  iVar22 = 0;
  do {
    uVar21 = 0x800000;
    uVar25 = 0;
    iVar23 = iVar22 + -0x3f;
LAB_ram_001748d0:
    do {
      if (iVar23 < 0) {
        if ((0x3f < iVar22 + 1) || (0 < iVar22 + 1)) {
          iVar26 = 0;
          goto LAB_ram_00174904;
        }
      }
      else {
        iVar26 = iVar23;
        if (iVar22 + 1 < 0x40) {
          if (iVar22 + 1 <= iVar23) {
            uVar25 = uVar25 + 1;
            if (3 < (int)uVar25) break;
            goto LAB_ram_001748d0;
          }
        }
        else if (0x3f < iVar23) goto LAB_ram_001749c0;
LAB_ram_00174904:
        do {
          iVar20 = (uVar25 & 1) * 0x40 + iVar26;
          FUN_ram_00173074(param_1,iVar20);
          iVar19 = ((uVar25 & 2) * 0x20 + iVar22) - iVar26;
          FUN_ram_001730d0(param_1,iVar19);
          FUN_ram_001831a8(aiStack_58,aiStack_48,0xb);
          uVar18 = aiStack_58[param_1] * aiStack_58[param_1] +
                   aiStack_48[param_1] * aiStack_48[param_1];
          if (uVar18 < uVar24) {
            uVar24 = uVar18;
            iVar27 = iVar19;
            iVar28 = iVar20;
          }
          if (uVar18 < uVar21) {
            uVar21 = uVar18;
          }
          iVar19 = iVar22 + 1;
          if (0x3f < iVar19) {
            iVar19 = 0x40;
          }
          iVar26 = iVar26 + 1;
        } while (iVar26 < iVar19);
      }
LAB_ram_001749c0:
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < 4);
    if (uVar24 < uVar21 >> 1) break;
    iVar22 = iVar22 + 1;
    local_a0 = local_a0 + -1;
  } while (local_a0 != 0);
  FUN_ram_00173074(param_1,iVar28);
  FUN_ram_001730d0(param_1,iVar27);
  FUN_ram_00173130(param_1,0);
  FUN_ram_001710d0(0x300,0x1f,0,uVar2);
  FUN_ram_001710d0(0x300,0xfe0,5,uVar3);
  FUN_ram_001710d0(0x300,0x1f000,0xc,uVar4);
  FUN_ram_001710d0(0x300,0xfe0000,0x11,uVar5);
  FUN_ram_001710d0(0x340,0x1f,0,uVar6);
  FUN_ram_001710d0(0x340,0xfe0,5,uVar7);
  FUN_ram_001710d0(0x340,0x1f000,0xc,uVar8);
  FUN_ram_001710d0(0x340,0xfe0000,0x11,uVar9);
  FUN_ram_001710d0(0x380,0x1f,0,uVar10);
  FUN_ram_001710d0(0x380,0xfe0,5,uVar11);
  FUN_ram_001710d0(0x380,0x1f000,0xc,uVar12);
  FUN_ram_001710d0(0x380,0xfe0000,0x11,uVar13);
  FUN_ram_001710d0(0x3c0,0x1f,0,uVar14);
  FUN_ram_001710d0(0x3c0,0xfe0,5,uVar15);
  FUN_ram_001710d0(0x3c0,0x1f000,0xc,uVar16);
  FUN_ram_001710d0(0x3c0,0xfe0000,0x11,uVar17);
  _DAT_ram_e6090490 = 0;
  _DAT_ram_e6090488 = uVar1;
  FUN_ram_00183a40();
  return;
}


