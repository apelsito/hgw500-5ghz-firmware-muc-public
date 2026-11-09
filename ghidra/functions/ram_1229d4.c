/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001229d4 */

void FUN_ram_001229d4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined1 local_e8 [6];
  undefined1 auStack_e2 [146];
  int local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  
  pcVar12 = *(char **)(param_2 + 0x10);
  iVar9 = *(int *)(param_1 + 0x1c);
  iVar3 = FUN_ram_000e6c28(0x11);
  if (iVar3 != 0) {
    if (*pcVar12 == '\x01') {
      thunk_FUN_ram_0039fe00(local_e8,&DAT_ram_001a625c,0x96);
      local_50[0] = DAT_ram_001a62f4;
      local_50[1] = DAT_ram_001a62f8;
      local_50[2] = DAT_ram_001a62fc;
      local_50[3] = DAT_ram_001a6300;
      local_40 = DAT_ram_001a6304;
      local_3c = DAT_ram_001a6308;
      DAT_ram_8003799c = DAT_ram_8003799c + 1;
      FUN_ram_0015914c(local_e8);
      iVar3 = 0;
      iVar8 = 0;
      iVar11 = 3;
      iVar10 = 0;
      do {
        iVar7 = 0;
        do {
          iVar2 = iVar7 * 0x24 + iVar10 * 0x58;
          iVar4 = FUN_ram_000eeb74(pcVar12 + iVar2 + 0x30,&DAT_ram_001c388c,6);
          if (iVar4 != 0) {
            FUN_ram_000e7d50(iVar9 + 0x3884);
            puVar5 = (undefined4 *)FUN_ram_00119258(iVar9 + 0x3880,pcVar12 + iVar2 + 0x30);
            FUN_ram_000e7da8(iVar9 + 0x3884);
            if ((puVar5 != (undefined4 *)0x0) &&
               (piVar6 = (int *)FUN_ram_0011a598(*puVar5,pcVar12 + iVar2 + 0x30),
               piVar6 != (int *)0x0)) {
              iVar4 = *(int *)(pcVar12 + iVar2 + 0x14);
              if ((iVar4 == 0) && (*piVar6 != 0)) {
                local_50[iVar8] = (int)piVar6;
                iVar8 = iVar8 + 1;
              }
              FUN_ram_0010a230(piVar6,pcVar12 + iVar2 + 0x18,iVar4,0,0);
              local_e8[iVar3] = (char)piVar6[0x19f];
              FUN_ram_000efab8(auStack_e2 + iVar3 * 0x18,pcVar12 + iVar2 + 0x18,0x18);
              iVar3 = iVar3 + 1;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        iVar11 = iVar11 + -1;
        iVar10 = iVar10 + 1;
      } while (iVar11 != 0);
      FUN_ram_0010a780(iVar9,0,2,0);
      FUN_ram_00159118(local_e8);
      iVar9 = 6;
      iVar3 = 0;
      do {
        if (local_50[iVar3] != 0) {
          DAT_ram_800379a0 = DAT_ram_800379a0 + 1;
          FUN_ram_0010a144();
        }
        iVar9 = iVar9 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar9 != 0);
    }
    else if (*pcVar12 == '\x02') {
      thunk_FUN_ram_0039fe00(local_e8,&DAT_ram_001a630c,0x96);
      local_50[0] = DAT_ram_001a63a4;
      local_50[1] = DAT_ram_001a63a8;
      local_50[2] = DAT_ram_001a63ac;
      local_50[3] = DAT_ram_001a63b0;
      local_40 = DAT_ram_001a63b4;
      local_3c = DAT_ram_001a63b8;
      DAT_ram_80037998 = DAT_ram_80037998 + 1;
      FUN_ram_0015914c(local_e8);
      iVar10 = 0;
      iVar3 = -1;
      iVar11 = 3;
      iVar8 = 0;
      do {
        bVar1 = false;
        iVar7 = 0;
        do {
          iVar2 = iVar7 * 0x24 + iVar10 * 0x58;
          iVar4 = FUN_ram_000eeb74(pcVar12 + iVar2 + 0x30,&DAT_ram_001c388c,6);
          if (iVar4 != 0) {
            FUN_ram_000e7d50(iVar9 + 0x3884);
            puVar5 = (undefined4 *)FUN_ram_00119258(iVar9 + 0x3880,pcVar12 + iVar2 + 0x30);
            FUN_ram_000e7da8(iVar9 + 0x3884);
            if (puVar5 == (undefined4 *)0x0) {
              piVar6 = (int *)0x0;
              if (!bVar1) goto LAB_ram_00122cec;
            }
            else {
              piVar6 = (int *)FUN_ram_0011a598(*puVar5,pcVar12 + iVar2 + 0x30);
              if (!bVar1) {
LAB_ram_00122cec:
                FUN_ram_0010a780(iVar9,pcVar12[iVar10 * 0x58 + 4],0,0);
                bVar1 = true;
              }
              if (piVar6 != (int *)0x0) {
                if ((*(int *)(pcVar12 + iVar2 + 0x14) == 0) && (*piVar6 != 0)) {
                  local_50[iVar8] = (int)piVar6;
                  iVar8 = iVar8 + 1;
                }
                FUN_ram_0010a230(piVar6,pcVar12 + iVar2 + 0x18,
                                 *(undefined4 *)(pcVar12 + iVar2 + 0x14),0,0);
                local_e8[iVar3 + 1] = (char)piVar6[0x19f];
                FUN_ram_000efab8(auStack_e2 + (iVar3 + 1) * 0x18,pcVar12 + iVar2 + 0x18,0x18);
                iVar3 = iVar3 + 1;
              }
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        iVar11 = iVar11 + -1;
        iVar10 = iVar10 + 1;
      } while (iVar11 != 0);
      FUN_ram_00159118(local_e8);
      iVar8 = 0;
      iVar10 = 6;
      do {
        if (local_50[iVar8] != 0) {
          DAT_ram_800379a0 = DAT_ram_800379a0 + 1;
          FUN_ram_0010a144();
        }
        iVar10 = iVar10 + -1;
        iVar8 = iVar8 + 1;
      } while (iVar10 != 0);
      if (iVar3 != -1) {
        FUN_ram_0010a780(iVar9,0,0,1);
      }
    }
    else {
      FUN_ram_000f2ccc(s_Invalid_operation_for_bulk_group_ram_001c3894);
    }
  }
  return;
}


