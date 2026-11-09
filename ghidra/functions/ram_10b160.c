/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010b160 */

void FUN_ram_0010b160(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  
  if (DAT_ram_8002c8bc == '\x03') {
    bVar2 = *(byte *)(param_1 + 0x116);
    iVar9 = *(int *)(**(int **)param_1[2] + 0x1c);
    if ((bVar2 & 6) == 0) {
      *(byte *)(param_1 + 0x116) = bVar2 & 0xfe | 2;
      if ((bVar2 & 6 | 2) != 2) {
        puVar8 = &DAT_ram_00201934 + DAT_ram_0018c098;
        DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
        *puVar8 = 0xe;
        if (0x3f < DAT_ram_0018c098) {
          DAT_ram_0018c098 = 0;
        }
      }
      FUN_ram_001572a4(*(undefined1 *)(param_1 + 0x19f));
      FUN_ram_000fb6f0(*(undefined4 *)(iVar9 + 0x3b20),*(undefined1 *)(param_1 + 0x19f));
      uVar5 = (uint)*(byte *)(param_1 + 0x19f);
      if (*(char *)((int)param_1 + 0x681) != '\0') {
        FUN_ram_000fb6f0(*(undefined4 *)(iVar9 + 0x3b20),uVar5 + 0x40 & 0xff);
        uVar5 = (uint)*(byte *)(param_1 + 0x19f);
        *(undefined1 *)((int)param_1 + 0x681) = 0;
      }
      iVar7 = iVar9 + 0x37e4 + uVar5 * 4;
      cVar1 = *(char *)((int)param_1 + 0x67d);
      if (param_1 == *(undefined4 **)(iVar7 + 0x370)) {
        *(undefined4 *)(iVar7 + 0x370) = 0;
      }
      if (cVar1 == -1) {
        FUN_ram_000f0fdc(*(undefined4 *)(iVar9 + 0x3a04),uVar5);
      }
      else {
        FUN_ram_000fb6f0(*(undefined4 *)(iVar9 + 0x3b20));
        uVar4 = *(undefined4 *)(iVar9 + 0x3a04);
        *(undefined1 *)((int)param_1 + 0x67d) = 0xff;
        FUN_ram_000f0fdc(uVar4,*(undefined1 *)(param_1 + 0x19f));
      }
      if (DAT_ram_8002c8bc == '\x03') {
        FUN_ram_0012e794(iVar9,param_1);
        FUN_ram_0012d030(iVar9,param_1);
        FUN_ram_0012d134(iVar9,param_1);
      }
      FUN_ram_0010af74(iVar9,param_1);
      FUN_ram_001192fc(param_1);
      iVar7 = FUN_ram_000e7ad8(*(undefined4 *)(iVar9 + 0x3a04));
      if (iVar7 == 0) {
        if (*(int *)(iVar9 + 0x5b7c) == 0) {
          iVar7 = FUN_ram_000f7c10(0x14,iVar9,0,&LAB_ram_0011268c,3);
          *(int *)(iVar9 + 0x5b7c) = iVar7;
          if (iVar7 == 0) {
            FUN_ram_000ee260(s_Failed_to_add_timer_to_notify_ne_ram_001c0864);
          }
        }
        else {
          FUN_ram_800213a0();
        }
      }
      bVar2 = *(byte *)(param_1 + 0x116);
      *(byte *)(param_1 + 0x116) = bVar2 & 0xfd | 4;
      if ((bVar2 & 5 | 4) != 4) {
        puVar8 = &DAT_ram_00201934 + DAT_ram_0018c098;
        DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
        *puVar8 = 0xe;
        if (0x3f < DAT_ram_0018c098) {
          DAT_ram_0018c098 = 0;
        }
      }
      if (param_1[0x34b] != 0) {
        FUN_ram_000ee834();
        param_1[0x34b] = 0;
      }
      iVar7 = *(int *)*param_1;
      uVar5 = STATUS32;
      if ((uVar5 & 2) != 0) {
        STATUS32 = uVar5 & 0xfffffffd;
      }
      iVar10 = *(int *)(iVar7 + 0x18) + -1;
      *(int *)(iVar7 + 0x18) = iVar10;
      STATUS32 = uVar5;
      if (iVar10 == 0) {
        FUN_ram_000ee834(iVar7);
      }
      iVar7 = param_1[0x105];
      if (iVar10 == 0) {
        *(undefined4 *)*param_1 = 0;
      }
      if (iVar7 != 0) {
        FUN_ram_000f7d60();
      }
      FUN_ram_000e7d50(iVar9 + 0x3db0);
      param_1[0x357] = 0;
      **(undefined4 **)(iVar9 + 0x3da0) = param_1;
      *(undefined4 **)(iVar9 + 0x3da0) = param_1 + 0x357;
      puVar6 = *(undefined4 **)(iVar9 + 0x3da4);
      if (param_1 == puVar6) {
        iVar7 = puVar6[0x358];
        *(int *)(iVar9 + 0x3da4) = iVar7;
        if (iVar7 == 0) {
          *(int *)(iVar9 + 0x3da8) = iVar9 + 0x3da4;
        }
      }
      else {
        for (puVar3 = (undefined4 *)puVar6[0x358]; param_1 != puVar3;
            puVar3 = (undefined4 *)puVar3[0x358]) {
          puVar6 = puVar3;
        }
        iVar7 = puVar3[0x358];
        puVar6[0x358] = iVar7;
        if (iVar7 == 0) {
          *(undefined4 **)(iVar9 + 0x3da8) = puVar6 + 0x358;
        }
      }
      FUN_ram_000e7da8(iVar9 + 0x3db0);
      return;
    }
    puVar8 = &DAT_ram_00201934 + DAT_ram_0018c098;
    DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
    *puVar8 = 0xf;
    if (0x3f < DAT_ram_0018c098) {
      DAT_ram_0018c098 = 0;
      return;
    }
  }
  return;
}


