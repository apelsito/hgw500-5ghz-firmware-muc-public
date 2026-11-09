/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011152c */

int FUN_ram_0011152c(int *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*param_1 + 0x1c);
  FUN_ram_000ee260(s_measurement_info_type__d_channel_ram_001c17cc,*(undefined4 *)(param_2 + 4),
                   param_2[0x18],*(undefined4 *)(param_2 + 0x24));
  puVar4 = (undefined1 *)(*(int *)(param_2 + 0x24) * 1000);
  iVar7 = 0;
  if (puVar4 < (undefined1 *)0x7d0) {
    param_2[8] = 2;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  else {
    uVar3 = (uint)*param_2;
    if (uVar3 == param_2[0x18]) {
      if (*(int *)(param_2 + 4) < 5) {
        puVar5 = *(undefined1 **)(param_2 + 0xc);
        if (puVar5 == (undefined1 *)0x0) {
          *(undefined1 **)(param_2 + 0xc) = &LAB_ram_000f4240;
          puVar5 = &LAB_ram_000f4240;
        }
        if (puVar5 <= puVar4) {
          iVar7 = 0;
          do {
            puVar4 = puVar4 + -(int)puVar5;
            iVar7 = iVar7 + 1;
          } while (puVar5 <= puVar4);
        }
        *(int *)(param_2 + 0x10) = iVar7;
        *(undefined1 **)(param_2 + 0x14) = puVar4;
        if (*(int *)(param_2 + 0x1c) == 0 && *(int *)(param_2 + 0x20) == 0) {
          uVar3 = 0;
        }
        uVar2 = 2000;
        if (*(int *)(param_2 + 0x1c) != 0 || *(int *)(param_2 + 0x20) != 0) {
          iVar7 = *(int *)(iVar6 + 0x3b20);
          uVar3 = *(uint *)(*(int *)(iVar7 + 0xc) + 0x3014);
          uVar1 = *(uint *)(param_2 + 0x1c) - uVar3;
          uVar3 = (*(int *)(param_2 + 0x20) - *(int *)(*(int *)(iVar7 + 0xc) + 0x3018)) -
                  (uint)(*(uint *)(param_2 + 0x1c) < uVar3);
          uVar2 = uVar1;
          if (uVar3 == 0 && uVar1 < 2000) {
            uVar2 = uVar1 + 2000;
            uVar3 = uVar3 + (0xfffff82f < uVar1);
          }
        }
        iVar6 = FUN_ram_00108bfc(*(undefined4 *)(iVar6 + 0x3b20),1,uVar2,uVar3,&LAB_ram_0010eb18,0,0
                                 ,0,0,param_1,param_2);
        if (iVar6 == 0) {
          return 0;
        }
        param_2[8] = 3;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        return iVar6;
      }
      param_2[8] = 4;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
    }
    else {
      param_2[8] = 1;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
    }
  }
  return -1;
}


