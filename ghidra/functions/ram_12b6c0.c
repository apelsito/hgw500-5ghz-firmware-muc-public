/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012b6c0 */

undefined1 FUN_ram_0012b6c0(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  bool bVar16;
  int *local_bc [7];
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  uVar1 = 0;
  iVar7 = FUN_ram_001030e8(*(undefined4 *)(param_1 + 0x3b20),1,0);
  if (iVar7 < 1) {
    if ((((*(char *)(param_1 + 0x46a0) != '\0') && (DAT_ram_0018c1a4 != 0)) &&
        (-1 < (int)((DAT_ram_80038ee4 -
                    (DAT_ram_0018c1b0 + CARRY4(DAT_ram_0018c1ac,DAT_ram_0018c1a4))) -
                   (uint)(DAT_ram_80038ee0 < DAT_ram_0018c1ac + DAT_ram_0018c1a4)))) &&
       (-1 < (int)((DAT_ram_80038ee4 -
                   (DAT_ram_0018c1a0 + (uint)CARRY4(DAT_ram_0018c1a4,DAT_ram_0018c19c))) -
                  (uint)(DAT_ram_80038ee0 < DAT_ram_0018c1a4 + DAT_ram_0018c19c)))) {
      iVar15 = *(int *)(param_2 + 0x7c);
      iVar7 = *(int *)(param_1 + 0x14);
      uVar10 = ((int)(*(byte *)(iVar15 + 0x10) & 0xfc) >> 2 & 0x1fU) + 1 & 0xf;
      if (iVar7 != 0) {
        bVar4 = true;
LAB_ram_0012b804:
        do {
          local_a0 = DAT_ram_001a664c;
          local_9c = DAT_ram_001a6650;
          local_98 = DAT_ram_001a6654;
          uVar11 = STATUS32;
          if ((uVar11 & 2) != 0) {
            STATUS32 = uVar11 & 0xfffffffd;
          }
          local_68 = DAT_ram_80038ee0;
          local_64 = DAT_ram_80038ee4;
          local_6c = COUNT0;
          uVar13 = AUX_IRQ_PENDING;
          if ((uVar13 & 8) != 0) {
            local_68 = DAT_ram_80038ee0 + 1;
            local_64 = DAT_ram_80038ee4 + (0xfffffffe < DAT_ram_80038ee0);
            local_6c = COUNT0;
          }
          STATUS32 = uVar11;
          local_84 = local_6c;
          local_80 = local_68;
          local_7c = local_64;
          local_74 = DAT_ram_001a6650 + local_68;
          local_70 = DAT_ram_001a6654 + local_64 + (uint)CARRY4(DAT_ram_001a6650,local_68);
          if (local_6c < 0x7a121) {
            uVar11 = 500000 - local_6c;
            local_78 = local_6c;
            if (uVar11 <= DAT_ram_001a664c) goto LAB_ram_0012b8f8;
          }
          else {
            uVar11 = 0;
LAB_ram_0012b8f8:
            local_70 = local_70 + (0xfffffffe < local_74);
            local_74 = local_74 + 1;
            local_78 = -uVar11;
          }
          local_78 = local_78 + DAT_ram_001a664c;
          local_94 = local_78;
          local_90 = local_74;
          local_8c = local_70;
          iVar8 = FUN_ram_00102bcc(*(undefined4 *)(param_1 + 0x3b20),*(undefined4 *)(param_2 + 8));
          uVar9 = local_8c;
          uVar13 = local_90;
          uVar11 = local_94;
          while (iVar8 == 0) {
            uVar2 = STATUS32;
            if ((uVar2 & 2) != 0) {
              STATUS32 = uVar2 & 0xfffffffd;
            }
            local_44 = COUNT0;
            uVar3 = AUX_IRQ_PENDING;
            local_40 = DAT_ram_80038ee0;
            local_3c = DAT_ram_80038ee4;
            if ((uVar3 & 8) != 0) {
              local_40 = DAT_ram_80038ee0 + 1;
              local_3c = DAT_ram_80038ee4 + (0xfffffffe < DAT_ram_80038ee0);
              local_44 = COUNT0;
            }
            STATUS32 = uVar2;
            local_5c = local_44;
            local_58 = local_40;
            local_54 = local_3c;
            local_50 = local_44;
            local_4c = local_40;
            local_48 = local_3c;
            bVar16 = local_3c < uVar9;
            if (local_3c == uVar9) {
              bVar16 = local_40 < uVar13;
            }
            if ((!bVar16 && (local_3c != uVar9 || local_40 != uVar13)) ||
               ((local_40 == uVar13 && local_3c == uVar9 && (uVar11 < local_44)))) {
              DAT_ram_800378ec = DAT_ram_800378ec + 1;
              return uVar1;
            }
            iVar8 = FUN_ram_00102bcc(*(undefined4 *)(param_1 + 0x3b20),*(undefined4 *)(param_2 + 8))
            ;
          }
          *(byte *)(iVar15 + 0x10) = *(byte *)(iVar15 + 0x10) & 3 | (byte)(uVar10 << 2);
          FUN_ram_000eea80(&DAT_ram_0020fce4,0,0x14);
          FUN_ram_000eea80(local_bc,0,0x1c);
          FUN_ram_000e7d50(param_1 + 0x3884);
          piVar12 = *(int **)(param_1 + 0x388c);
          puVar14 = (undefined1 *)(iVar15 + 0x11);
          if (piVar12 != (int *)0x0) {
            uVar11 = 0;
LAB_ram_0012ba50:
            do {
              iVar8 = *piVar12;
              if (((iVar8 != 0) && (piVar12 != *(int **)(iVar8 + 0x3c))) &&
                 (((*(uint *)((int)piVar12 + 0x3c2) & 0x100000) != 0 && (iVar8 == iVar7)))) {
                uVar13 = 1;
                iVar8 = 0x3e;
                LP_START = 0x12bad8;
                LP_END = 0x12bb00;
                do {
                  if ((((uint)*(byte *)((int)piVar12 + ((int)uVar13 >> 3) + 0x3f0) &
                       1 << (uVar13 & 7)) != 0) &&
                     (*(char *)(param_1 + 0x46a5 + uVar13 * 0x50) == '\x01')) {
                    if (((int)piVar12 + 0x96U & 1) == 0) {
                      if (((DAT_ram_0018c148 == *(short *)((int)piVar12 + 0x9a)) &&
                          (DAT_ram_0018c146 == (short)piVar12[0x26])) &&
                         (DAT_ram_0018c144 == *(short *)((int)piVar12 + 0x96))) {
                        iVar8 = 1;
                      }
                      else {
                        iVar8 = 0;
                      }
                    }
                    else {
                      uVar13 = FUN_ram_000eeb74((int)piVar12 + 0x96U,&DAT_ram_0018c144,6);
                      iVar8 = 1 - uVar13;
                      if (1 < uVar13) {
                        iVar8 = 0;
                      }
                    }
                    uVar13 = uVar11 + 1 & 0xff;
                    if ((iVar8 == 0) || (uVar11 == 0)) {
                      local_bc[uVar11] = piVar12;
                    }
                    else {
                      local_bc[uVar11] = local_bc[0];
                      local_bc[0] = piVar12;
                    }
                    if ((6 < uVar13) ||
                       (piVar12 = (int *)piVar12[0x45], uVar11 = uVar13, piVar12 == (int *)0x0))
                    goto LAB_ram_0012bba0;
                    goto LAB_ram_0012ba50;
                  }
                  uVar13 = uVar13 + 1 & 0xff;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            } while ((uVar11 < 7) && (piVar12 = (int *)piVar12[0x45], piVar12 != (int *)0x0));
          }
LAB_ram_0012bba0:
          if (local_bc[0] == (int *)0x0) {
            FUN_ram_000e7da8(param_1 + 0x3884);
            iVar7 = *(int *)(iVar7 + 4);
            if (iVar7 == 0) break;
            goto LAB_ram_0012b804;
          }
          uVar11 = 0;
          iVar8 = 0;
          piVar12 = local_bc[0];
          do {
            cVar6 = FUN_ram_0012a9ac(param_1,piVar12);
            iVar5 = piVar12[6];
            *puVar14 = (char)(short)iVar5;
            puVar14[1] = (byte)((ushort)(short)iVar5 >> 8) & 0xf | 0x10 | cVar6 << 5;
            uVar11 = uVar11 + 1 & 0xff;
            puVar14 = puVar14 + 2;
            if ((uVar11 != 1) && (*(int **)((int)&DAT_ram_0020fce0 + iVar8) = piVar12, 5 < uVar11))
            break;
            iVar8 = uVar11 * 4;
            piVar12 = local_bc[uVar11];
          } while (piVar12 != (int *)0x0);
          FUN_ram_000e7da8(param_1 + 0x3884);
          if (uVar11 < 2) {
LAB_ram_0012bd1c:
            iVar7 = *(int *)(iVar7 + 4);
          }
          else {
            uVar13 = iVar15 + 10;
            if (*(short *)(param_1 + 0x5aa4) != 0) {
              FUN_ram_000ee260(s_precoding_snd___u__token__0x_x__g_ram_001c4244,DAT_ram_80038ee0,
                               uVar10,*(undefined1 *)(param_1 + 0x46a0),uVar11);
            }
            DAT_ram_800378e8 = DAT_ram_800378e8 + 1;
            uVar9 = iVar7 + 0x18;
            if ((uVar13 & 1) == 0) {
              if ((uVar9 & 1) == 0) {
                *(undefined2 *)(iVar15 + 10) = *(undefined2 *)(iVar7 + 0x18);
                *(undefined2 *)(iVar15 + 0xc) = *(undefined2 *)(iVar7 + 0x1a);
                *(undefined2 *)(iVar15 + 0xe) = *(undefined2 *)(iVar7 + 0x1c);
              }
              else {
                FUN_ram_0039fe00(uVar13,uVar9,6);
              }
            }
            else {
              FUN_ram_0039fe00(uVar13,uVar9,6);
            }
            if (DAT_ram_0018c110 == '\x01') {
              *(byte *)(iVar15 + 10) = *(byte *)(iVar15 + 10) | 1;
            }
            iVar8 = FUN_ram_0012ab00(param_1,param_2,uVar11);
            if (iVar8 != 0) {
              uVar1 = *(undefined1 *)(param_1 + 0x46a0);
              goto LAB_ram_0012bd1c;
            }
            bVar4 = false;
            iVar7 = *(int *)(iVar7 + 4);
          }
        } while (iVar7 != 0);
        if (!bVar4) {
          return uVar1;
        }
      }
      DAT_ram_0018c1ac = DAT_ram_80038ee0;
      DAT_ram_0018c1b0 = DAT_ram_80038ee4;
    }
  }
  else {
    DAT_ram_80037994 = DAT_ram_80037994 + 1;
  }
  return uVar1;
}


