/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128e60 */

void FUN_ram_00128e60(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  byte bVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  iVar6 = *(int *)(param_1 + 0x84);
  uVar7 = 0;
  if (iVar6 == 0) {
    return;
  }
  bVar5 = *(byte *)(iVar6 + 0x1a);
  if ((bVar5 & 4) != 0) {
    puVar10 = *(undefined4 **)(iVar6 + 0x1c);
    if (puVar10 == (undefined4 *)0x0) {
      bVar5 = bVar5 & 0xfb;
      *(byte *)(iVar6 + 0x1a) = bVar5;
    }
    else {
      do {
        FUN_ram_000ee834(*puVar10);
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10 = (undefined4 *)puVar10[2];
      } while (puVar10 != (undefined4 *)0x0);
      bVar5 = *(byte *)(iVar6 + 0x1a) & 0xfb;
      *(byte *)(iVar6 + 0x1a) = bVar5;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *(byte *)(iVar6 + 0x1a) = bVar5 | 4;
  }
  FUN_ram_80025588(param_3,1000);
  FUN_ram_80025588(*param_2,param_4);
  piVar9 = *(int **)(iVar6 + 0x1c);
  if (param_2 == (undefined4 *)0x0) {
LAB_ram_00128fac:
    *(undefined2 *)(iVar6 + 0x14) = uVar7;
    return;
  }
  if (piVar9 != (int *)0x0) {
    iVar8 = 0;
    do {
      iVar2 = param_2[2];
      piVar9[1] = iVar2;
      iVar2 = FUN_ram_000ee734(iVar2,0);
      *piVar9 = iVar2;
      if (iVar2 == 0) {
        pcVar4 = s__No_DDR_heap_memory_for_beacon_b_ram_001c3fa4;
        uVar3 = 0x10e;
        goto LAB_ram_00128fe4;
      }
      FUN_ram_0039fe00(iVar2,*param_2,piVar9[1]);
      piVar1 = param_2 + 2;
      param_2 = (undefined4 *)param_2[3];
      piVar9 = (int *)piVar9[2];
      iVar8 = iVar8 + *piVar1;
      uVar7 = (undefined2)iVar8;
      if (param_2 == (undefined4 *)0x0) goto LAB_ram_00128fac;
    } while (piVar9 != (int *)0x0);
  }
  *(undefined2 *)(iVar6 + 0x14) = uVar7;
  pcVar4 = s__Static_qtn_IE_descriptor_is_not_ram_001c3fcc;
  uVar3 = 0x119;
LAB_ram_00128fe4:
  FUN_ram_000eaac4(0,s_>>>>_WARNING_at__s__d___s__val_0_ram_001c3ccc,
                   s_qtn_if_qtn_beacon_c_ram_001c3cf8,uVar3,pcVar4);
  FUN_ram_000ec0ec();
  FUN_ram_000eaac4(0,s_<<<<_ram_001c3d50);
  return;
}


