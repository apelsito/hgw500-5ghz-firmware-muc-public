/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010a230 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0010a230(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  int iVar18;
  undefined1 auStack_d0 [6];
  undefined1 auStack_ca [146];
  
  iVar5 = *param_1;
  iVar16 = *(int *)(*(int *)param_1[1] + 0x1c);
  bVar3 = *(byte *)((int)param_1 + 0x4e9);
  if (*(short *)(iVar16 + 0x5aa4) == 0) {
    uVar1 = *(ushort *)(param_1 + 3);
  }
  else {
    if (param_3 == 0) {
      puVar7 = (undefined *)0x1c0600;
    }
    else {
      puVar7 = &DAT_ram_001c05fc;
    }
    if ((*(ushort *)(param_1 + 3) & 0x4000) == 0) {
      pcVar11 = s_not_vht_ram_001c0608;
    }
    else {
      pcVar11 = &DAT_ram_001c0604;
    }
    FUN_ram_000ee260(s_qtn_node_update_mu_grp__s___AID__ram_001c05ac,puVar7,
                     *(ushort *)(param_1 + 6) & 0x3fff,*(undefined1 *)((int)param_1 + 0x96),
                     *(undefined1 *)((int)param_1 + 0x97),(char)param_1[0x26],
                     *(undefined1 *)((int)param_1 + 0x99),*(undefined1 *)((int)param_1 + 0x9a),
                     *(undefined1 *)((int)param_1 + 0x9b),pcVar11);
    uVar1 = *(ushort *)(param_1 + 3);
  }
  if ((uVar1 & 0x4000) != 0) {
    FUN_ram_0039fe00(param_1 + 0xfc,param_2,0x18);
    uVar13 = 1;
    iVar10 = 0x3e;
    do {
      iVar15 = uVar13 * 0x50;
      iVar18 = iVar16 + 0x4770 + iVar15;
      if (((uint)*(byte *)((int)param_1 + ((int)uVar13 >> 3) + 0x3f0) & 1 << (uVar13 & 7)) == 0) {
        if (*(char *)(iVar18 + -0xcc) != '\0') {
          cVar14 = '\0';
          iVar15 = iVar16 + iVar15 + 0x47dc;
          iVar8 = 4;
          cVar17 = '\0';
          do {
            piVar9 = *(int **)(iVar15 + -0x134);
            if (param_1 == piVar9) {
              iVar6 = (uint)bVar3 * 4;
              *(int *)(&DAT_ram_800377c8 + iVar6) = *(int *)(&DAT_ram_800377c8 + iVar6) + 1;
              *(undefined4 *)(iVar15 + -0x134) = 0;
              if (param_3 == 0) {
                *(undefined4 *)(iVar16 + 0x5ab4) = 0;
                iVar6 = *param_1;
                *(undefined2 *)(iVar16 + 0x5ab2) = 0;
                FUN_ram_0012e7ec(iVar6,0);
                if (*(int *)(iVar15 + -0x124) == 0) {
                  sVar2 = *(short *)(iVar16 + 0x5aa4);
                }
                else {
                  FUN_ram_000ee834();
                  sVar2 = *(short *)(iVar16 + 0x5aa4);
                  *(undefined4 *)(iVar15 + -0x124) = 0;
                }
joined_r0x0010a630:
                if (sVar2 != 0) {
                  FUN_ram_000ee260(s_qtn_node_update_mu_grp__del_from_ram_001c06e4,uVar13,cVar14);
                  piVar9 = *(int **)(iVar15 + -0x134);
                  goto joined_r0x0010a64a;
                }
              }
              else {
                FUN_ram_0018aeb0(uVar13,0,1);
                if (*(short *)(iVar16 + 0x5ab0) == 0) {
                  sVar2 = *(short *)(iVar16 + 0x5aa4);
                  goto joined_r0x0010a630;
                }
                FUN_ram_0018af8c(*(short *)(iVar16 + 0x5ab0),0);
                *(undefined2 *)(iVar16 + 0x5ab0) = 0;
                if (*(short *)(iVar16 + 0x5aa4) != 0) {
                  FUN_ram_000ee260(s_qtn_node_update_mu_grp__bb_paid__ram_001c06b4);
                  sVar2 = *(short *)(iVar16 + 0x5aa4);
                  goto joined_r0x0010a630;
                }
              }
              piVar9 = *(int **)(iVar15 + -0x134);
            }
joined_r0x0010a64a:
            if (piVar9 != (int *)0x0) {
              cVar17 = cVar17 + '\x01';
            }
            iVar15 = iVar15 + 4;
            cVar14 = cVar14 + '\x01';
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (cVar17 == '\0') {
            if (*(short *)(iVar16 + 0x5aa4) != 0) {
              FUN_ram_000ee260(s_qtn_node_update_mu_grp__Empty_gr_ram_001c0714,uVar13);
            }
            cVar14 = *(char *)(iVar16 + 0x46a0);
            *(undefined1 *)(iVar18 + -0xcc) = 0;
            *(char *)(iVar16 + 0x46a0) = cVar14 + -1;
          }
        }
      }
      else {
        iVar8 = (uint)bVar3 * 4;
        *(int *)(&DAT_ram_800377a0 + iVar8) = *(int *)(&DAT_ram_800377a0 + iVar8) + 1;
        uVar12 = (int)(uint)*(byte *)((int)param_1 + ((int)uVar13 >> 2) + 0x3f8) >> (uVar13 & 3) * 2
                 & 3;
        if (*(char *)(iVar18 + -0xcc) == '\0') {
          *(char *)(iVar16 + 0x46a0) = *(char *)(iVar16 + 0x46a0) + '\x01';
        }
        iVar15 = iVar16 + iVar15 + 0x47dc + uVar12 * 4;
        *(char *)(iVar18 + -0xcc) = (char)uVar13;
        if (param_1 != *(int **)(iVar15 + -0x134)) {
          if (*(int **)(iVar15 + -0x134) == (int *)0x0) {
            *(int **)(iVar15 + -0x134) = param_1;
            if (param_3 == 0) {
              if (uVar12 == 0) {
LAB_ram_0010a428:
                sVar2 = *(short *)(iVar16 + 0x5aa4);
              }
              else {
                iVar18 = *param_1;
                *(undefined2 *)(iVar16 + 0x5ab2) = *(undefined2 *)((int)param_1 + 0x422);
                uVar4 = *(undefined2 *)((int)param_1 + 0x422);
                *(int *)(iVar16 + 0x5ab4) = iVar18;
                FUN_ram_0012e7ec(iVar18,uVar4);
                sVar2 = *(short *)(iVar16 + 0x5aa4);
              }
            }
            else {
              if (DAT_ram_0018c160 == 0) {
                FUN_ram_0018aeb0(uVar13,uVar12,0);
                if (uVar12 == 0) goto LAB_ram_0010a428;
              }
              else if (uVar12 == 0) {
                sVar2 = *(short *)(iVar16 + 0x5aa4);
                goto joined_r0x0010a500;
              }
              iVar18 = FUN_ram_000e2000(_DAT_ram_e00000bc);
              iVar8 = 0;
              if (iVar18 != 0) {
                iVar8 = *(int *)(iVar18 + 0x38);
              }
              uVar4 = *(undefined2 *)(*(int *)(*param_1 + 0x3c) + 0x422);
              if (iVar8 < 6) {
                FUN_ram_0018af8c(uVar4,1);
                sVar2 = *(short *)(iVar16 + 0x5aa4);
                *(undefined2 *)(iVar16 + 0x5ab0) =
                     *(undefined2 *)(*(int *)(*param_1 + 0x3c) + 0x422);
              }
              else {
                sVar2 = *(short *)(iVar16 + 0x5aa4);
                *(undefined2 *)(iVar16 + 0x5ab0) = uVar4;
              }
            }
joined_r0x0010a500:
            if (sVar2 != 0) {
              FUN_ram_000ee260(s_qtn_node_update_mu_grp__add_into_ram_001c0664,uVar13,uVar12,
                               *(undefined2 *)(*(int *)(*param_1 + 0x3c) + 0x422),
                               *(undefined2 *)((int)param_1 + 0x422));
            }
            if (*(int *)(iVar15 + -0x124) != 0) {
              FUN_ram_000ee834();
              *(undefined4 *)(iVar15 + -0x124) = 0;
            }
          }
          else if (*(short *)(iVar16 + 0x5aa4) != 0) {
            FUN_ram_000ee260(s_qtn_node_update_mu_grp__ERROR__u_ram_001c0610,uVar13,uVar12);
          }
        }
      }
      iVar10 = iVar10 + -1;
      uVar13 = uVar13 + 1 & 0xff;
    } while (iVar10 != 0);
    if (param_4 == 0) {
      if (((param_5 != 0) && (param_3 == 0)) && (iVar5 != 0)) {
        FUN_ram_0010a144(param_1);
      }
    }
    else {
      thunk_FUN_ram_0039fe00(auStack_d0,&DAT_ram_001a6100,0x96);
      FUN_ram_0015914c(auStack_d0);
      auStack_d0[0] = (undefined1)param_1[0x19f];
      FUN_ram_000efab8(auStack_ca,param_2,0x18);
      FUN_ram_00159118(auStack_d0);
      if (((param_5 != 0) && (param_3 == 0)) && (iVar5 != 0)) {
        FUN_ram_0010a144(param_1);
      }
    }
  }
  return;
}


