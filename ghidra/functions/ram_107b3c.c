/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00107b3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_00107b3c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined2 *puVar8;
  int *piVar9;
  code *pcVar10;
  int *piVar11;
  int local_40;
  undefined4 local_3c;
  
  piVar11 = *(int **)(param_2 + 0x1c);
  iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  local_40 = 0;
  piVar11[0xec6] = DAT_ram_0018c094;
  piVar11[0xe81] = param_2;
  FUN_ram_000e7d40(piVar11 + 0xf58,1);
  FUN_ram_000e7d40(piVar11 + 0xf5d,1);
  FUN_ram_000e7d40(piVar11 + 0xf62,1);
  piVar11[0xfe1] = -1;
  piVar11[0xfe2] = -1;
  piVar11[0xfe3] = -1;
  piVar11[0xfe4] = -1;
  if (DAT_ram_0018c010 == 3) {
    _DAT_ram_e00000f4 = 0xdb000027;
    FUN_ram_000ee260(s_________PMU_register_set_to____ram_001c0048);
    local_3c = _DAT_ram_e00000f4;
    FUN_ram_000ee260(&DAT_ram_001c0068);
    FUN_ram_000e4fa0(1000);
    if (DAT_ram_8002c8bc == '\x03') {
      *(undefined1 *)(iVar4 + 7) = 1;
    }
  }
  iVar5 = FUN_ram_000f9184(piVar11,param_1,piVar11 + 0xf64,&local_40);
  iVar4 = local_40;
  if ((local_40 != 0) || (iVar5 == 0)) goto LAB_ram_00107c90;
  piVar11[0xec8] = iVar5;
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_000e8310(param_2);
    FUN_ram_00137b8c(piVar11);
  }
  uVar6 = FUN_ram_000f939c(iVar5,0xc,0,0);
  piVar11[0xeca] = piVar11[0xeca] & 0xffffffefU | (uVar6 & 1) << 4;
  uVar6 = FUN_ram_000f939c(iVar5,1,0,0);
  piVar11[0xed0] = uVar6;
  if (0x80 < uVar6) {
    piVar11[0xed0] = 0x80;
  }
  *(undefined1 *)(piVar11 + 0xf6e) = 0xff;
  FUN_ram_000fb210(iVar5,3);
  uVar7 = extraout_r1;
  if (piVar11[0xed0] != 0) {
    uVar6 = 0;
    do {
      FUN_ram_000fb6f0(iVar5,uVar6 & 0xff);
      uVar6 = uVar6 + 1;
      uVar7 = extraout_r1_00;
    } while (uVar6 < (uint)piVar11[0xed0]);
  }
  *(byte *)(piVar11 + 0xed1) = *(byte *)(piVar11 + 0xed1) | 1;
  *(byte *)(piVar11 + 0xed1) = *(byte *)(piVar11 + 0xed1) | 2;
  *(byte *)(piVar11 + 0xed1) = *(byte *)(piVar11 + 0xed1) | 4;
  *(byte *)(piVar11 + 0xed1) = *(byte *)(piVar11 + 0xed1) | 8;
  iVar4 = FUN_ram_001076a4(piVar11,uVar7,4);
  if (iVar4 != 0) goto LAB_ram_00107c90;
  iVar4 = FUN_ram_0010774c(piVar11);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_001077e8(piVar11);
    if (iVar4 == 0) {
      local_40 = 0;
      local_40 = FUN_ram_001079ec(piVar11);
      if (local_40 == 0) {
        piVar11[0xc] = 0;
        iVar4 = FUN_ram_0012a098(piVar11,1,0);
        if (((((iVar4 == 0) && (iVar4 = FUN_ram_0012a098(piVar11,0,0), iVar4 == 0)) &&
             (iVar4 = FUN_ram_0012a098(piVar11,2,0), iVar4 == 0)) &&
            (iVar4 = FUN_ram_0012a098(piVar11,3,0), iVar4 == 0)) &&
           ((DAT_ram_8002c8bc != '\x03' || (iVar4 = FUN_ram_0012c67c(piVar11), iVar4 == 0)))) {
          uVar6 = piVar11[0xc];
          *(code **)(param_2 + 0x68) = FUN_ram_0010862c;
          *(code **)(param_2 + 0x80) = FUN_ram_00136614;
          *(undefined1 **)(param_2 + 0x6c) = &LAB_ram_00112614;
          piVar11[0xe7d] = (int)FUN_ram_0010862c;
          piVar11[0xc] = uVar6 | 0x10000;
          *(char *)(param_2 + 0x12) = (char)param_1;
          *(undefined1 *)(param_2 + 0xc) = 0x1f;
          *piVar11 = param_2;
          piVar11[0xe7e] = (int)&LAB_ram_001126dc;
          piVar11[0xe7f] = (int)&LAB_ram_0010cbb4;
          piVar9 = piVar11 + 0xe63;
          puVar8 = &DAT_ram_0018d1bc;
          iVar4 = 4;
          do {
            uVar3 = puVar8[1];
            iVar4 = iVar4 + -1;
            uVar1 = puVar8[2];
            uVar2 = puVar8[3];
            *(undefined2 *)(piVar9 + 0xd) = *puVar8;
            *(undefined2 *)((int)piVar9 + 0x36) = uVar3;
            *(undefined2 *)(piVar9 + 0xe) = uVar1;
            *(undefined2 *)((int)piVar9 + 0x3a) = uVar2;
            piVar9 = piVar9 + 2;
            puVar8 = puVar8 + 4;
          } while (iVar4 != 0);
          *(undefined1 *)((int)piVar11 + 0x1e) = 1;
          piVar11[0xc] = 0x4ee00;
          iVar4 = FUN_ram_000f939c(iVar5,2,0,0);
          if (iVar4 != 0) {
            piVar11[0xc] = piVar11[0xc] | 1;
          }
          iVar4 = FUN_ram_000f939c(iVar5,2,1,0);
          if (iVar4 != 0) {
            piVar11[0xc] = piVar11[0xc] | 4;
          }
          iVar4 = FUN_ram_000f939c(iVar5,2,2,0);
          if (iVar4 != 0) {
            piVar11[0xc] = piVar11[0xc] | 8;
          }
          iVar4 = FUN_ram_000f939c(iVar5,2,3,0);
          if (iVar4 != 0) {
            piVar11[0xc] = piVar11[0xc] | 0x20;
          }
          iVar4 = FUN_ram_000f939c(iVar5,2,4,0);
          if (iVar4 != 0) {
            piVar11[0xc] = piVar11[0xc] | 2;
          }
          uVar6 = FUN_ram_000f939c(iVar5,2,5,0);
          piVar11[0xeca] = (uVar6 & 1) * 2 | piVar11[0xeca] & 0xfffffffdU;
          iVar4 = FUN_ram_000f939c(iVar5,3,0,0);
          if (iVar4 != 0) {
            piVar11[0xc] = piVar11[0xc] | 0x10;
          }
          *(undefined2 *)(piVar11 + 0x114) = 0;
          *(undefined **)((int)piVar11 + 0x456) = &UNK_auxregs_0eff;
          *(undefined1 *)((int)piVar11 + 0x452) = 0;
          *(undefined1 *)((int)piVar11 + 0x453) = 0;
          *(undefined1 *)(piVar11 + 0x115) = 3;
          *(undefined2 *)(piVar11 + 0x116) = 0;
          *(undefined1 *)((int)piVar11 + 0x455) = 5;
          *(undefined1 *)((int)piVar11 + 0x45a) = 0xff;
          *(undefined1 *)((int)piVar11 + 0x476) = 0xff;
          *(undefined1 *)((int)piVar11 + 0x45b) = 0;
          *(undefined1 *)(piVar11 + 0x11a) = 1;
          *(undefined1 *)((int)piVar11 + 0x473) = 0;
          *(undefined1 *)((int)piVar11 + 0x477) = 0;
          piVar11[10] = piVar11[10] | 0x80000;
          FUN_ram_000f939c(iVar5,4,0,&local_3c);
          *(char *)((int)piVar11 + 0x3b36) = (char)local_3c;
          FUN_ram_000f939c(iVar5,4,1,&local_3c);
          pcVar10 = *(code **)(param_2 + 0x80);
          *(char *)((int)piVar11 + 0x3b37) = (char)local_3c;
          (*pcVar10)(param_2,param_6);
          iVar4 = FUN_ram_00107278(piVar11,param_4,param_5);
          if (iVar4 == 0) {
            if (*(byte *)((int)piVar11 + 0x1d) < 0xb) {
              *(ushort *)(piVar11 + 0x114) = *(ushort *)(piVar11 + 0x114) & 0xfffd | 0x20;
              if (DAT_ram_8002c8bc == '\x03') {
                if (DAT_ram_8002c8b0 == '\x01') goto LAB_ram_00108198;
LAB_ram_001081a0:
                uVar7 = 0;
LAB_ram_001081a4:
                FUN_ram_0012c6a4(uVar7);
                piVar11[0xe7b] = (int)&LAB_ram_00119ec8;
                piVar11[0xe7c] = (int)&LAB_ram_0011a378;
                FUN_ram_00146c38(param_2,1);
              }
            }
            else {
              *(ushort *)(piVar11 + 0x114) = *(ushort *)(piVar11 + 0x114) | 0x62;
              if (DAT_ram_8002c8bc == '\x03') {
                if (DAT_ram_8002c8b0 != '\x01') goto LAB_ram_001081a0;
LAB_ram_00108198:
                uVar7 = 1;
                goto LAB_ram_001081a4;
              }
            }
            FUN_ram_000e8350(param_2);
            iVar4 = FUN_ram_000e7e20(param_2);
            if (iVar4 == 0) {
              piVar11[0xe80] = 1;
              *(undefined1 *)(piVar11 + 0xe7a) = 0;
              if ((DAT_ram_8002c8bc == '\x03') && (DAT_ram_0018c248 == (int *)0x0)) {
                DAT_ram_0018c048 = &LAB_ram_00134a74;
                DAT_ram_0018c248 = piVar11;
              }
              uVar3 = FUN_ram_000e3a74(0);
              FUN_ram_0018afb8(uVar3);
              FUN_ram_000ee260(s_QMAT_SRAM_base_0x_08x_ram_001c006c,0x80070000);
              thunk_FUN_ram_00165230(piVar11);
              return 0;
            }
          }
        }
        else {
          local_40 = 5;
        }
        FUN_ram_0012a34c(piVar11);
      }
      FUN_ram_00107980(piVar11);
      FUN_ram_00107900(piVar11);
      FUN_ram_00107ac8(piVar11);
      iVar4 = local_40;
      goto LAB_ram_00107c90;
    }
    FUN_ram_00107900(piVar11);
  }
  FUN_ram_00107980(piVar11);
LAB_ram_00107c90:
  local_40 = iVar4;
  if (iVar5 != 0) {
    FUN_ram_000f9328(iVar5);
  }
  piVar11[0xeca] = piVar11[0xeca] & 0xfffffffeU | 1;
  return local_40;
}


