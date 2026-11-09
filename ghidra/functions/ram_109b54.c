/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00109b54 */

int * FUN_ram_00109b54(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = *(int *)(*(int *)*param_1 + 0x1c);
  iVar11 = 0xff;
  if (*(int *)(iVar10 + 0x3d9c) == 0) {
    FUN_ram_000ee260(s_No_free_QTN_nodes_available_ram_001c04f8);
  }
  else {
    if (DAT_ram_8002c8bc != '\x03') {
LAB_ram_00109c3c:
      iVar6 = iVar10 + 0x3db0;
      FUN_ram_000e7d50(iVar6);
      piVar9 = *(int **)(iVar10 + 0x3d9c);
      iVar3 = piVar9[0x357];
      *(int *)(iVar10 + 0x3d9c) = iVar3;
      if (iVar3 == 0) {
        *(int *)(iVar10 + 0x3da0) = iVar10 + 0x3d9c;
      }
      FUN_ram_000eea80(piVar9,0,0xd84);
      piVar9[0x358] = 0;
      **(undefined4 **)(iVar10 + 0x3da8) = piVar9;
      *(int **)(iVar10 + 0x3da8) = piVar9 + 0x358;
      FUN_ram_000e7da8(iVar6);
      if ((DAT_ram_8002c8bc == '\x03') && (iVar3 = thunk_FUN_ram_0014019c(piVar9,0), iVar3 != 0)) {
        FUN_ram_000ee260(s_Can_t_install_rate_algorithm_ram_001c0544);
        FUN_ram_001572a4(iVar11);
        FUN_ram_000e7d50(iVar6);
        piVar9[0x357] = 0;
        **(undefined4 **)(iVar10 + 0x3da0) = piVar9;
        piVar4 = *(int **)(iVar10 + 0x3da4);
        *(int **)(iVar10 + 0x3da0) = piVar9 + 0x357;
        if (piVar4 == piVar9) {
          iVar11 = piVar4[0x358];
          *(int *)(iVar10 + 0x3da4) = iVar11;
          if (iVar11 == 0) {
            *(int *)(iVar10 + 0x3da8) = iVar10 + 0x3da4;
          }
        }
        else {
          for (piVar8 = (int *)piVar4[0x358]; piVar8 != piVar9; piVar8 = (int *)piVar8[0x358]) {
            piVar4 = piVar8;
          }
          iVar11 = piVar8[0x358];
          piVar4[0x358] = iVar11;
          if (iVar11 == 0) {
            *(int **)(iVar10 + 0x3da8) = piVar4 + 0x358;
          }
        }
        FUN_ram_000e7da8(iVar6);
        return (int *)0x0;
      }
      *piVar9 = (int)param_2;
      uVar1 = STATUS32;
      if ((uVar1 & 2) != 0) {
        STATUS32 = uVar1 & 0xfffffffd;
      }
      *(int *)(*param_2 + 0x18) = *(int *)(*param_2 + 0x18) + 1;
      STATUS32 = uVar1;
      iVar3 = 0;
      piVar8 = piVar9 + 0x1f8;
      iVar6 = 0x10;
      piVar4 = piVar9 + 0xf;
      do {
        FUN_ram_000eea80(piVar8,0,0x4c);
        *(undefined1 *)(piVar9 + iVar3 * 0x13 + 0x208) = 0;
        *(undefined1 *)((int)piVar9 + iVar3 * 0x4c + 0x81f) = 0;
        piVar7 = piVar9 + iVar3 * 0x13 + 0x1fe;
        *(undefined2 *)((int)piVar7 + 2) = 0x100;
        *(undefined2 *)piVar7 = 0xff;
        *(undefined2 *)((int)piVar7 + -0x16) = 0x80;
        *(undefined2 *)(piVar7 + -5) = 0x7f;
        *(undefined2 *)piVar4 = 0xffff;
        piVar8 = piVar8 + 0x13;
        iVar6 = iVar6 + -1;
        iVar3 = iVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 2);
      } while (iVar6 != 0);
      *(undefined1 *)(piVar9 + 0x13a) = 0;
      *(undefined2 *)(piVar9 + 0x17) = 0xffff;
      DAT_ram_80037884 = 0;
      *(undefined1 *)((int)piVar9 + 0x4ea) = 1;
      *(char *)((int)piVar9 + 0xd67) = (char)param_4;
      piVar9[0x19b] = 0x400;
      piVar9[0x19c] = 0;
      piVar9[0x123] = 0;
      piVar9[0x124] = (int)(piVar9 + 0x123);
      piVar9[0x125] = 0;
      piVar9[0x126] = (int)(piVar9 + 0x125);
      piVar9[0x127] = 0;
      piVar9[0x128] = (int)(piVar9 + 0x127);
      piVar9[0x129] = 0;
      piVar9[0x12a] = (int)(piVar9 + 0x129);
      if (DAT_ram_8002c8bc == '\x03') {
        uVar2 = FUN_ram_0013b5e0(iVar11,param_2,param_3);
        *(undefined1 *)(piVar9 + 0x19f) = uVar2;
        *(undefined1 *)((int)piVar9 + 0x67e) = 6;
        uVar2 = FUN_ram_0013bb0c();
        *(undefined1 *)((int)piVar9 + 0x67f) = uVar2;
        if (*(byte *)(piVar9 + 0x19f) != 0xff) {
          *(int **)(iVar10 + 0x3b54 + (uint)*(byte *)(piVar9 + 0x19f) * 4) = piVar9;
        }
        *(undefined1 *)((int)piVar9 + 0x682) = 1;
        *(undefined1 *)((int)piVar9 + 0x67d) = 0xff;
      }
      piVar9[0x105] = 0;
      piVar9[0x106] = 0;
      piVar9[0x107] = 0;
      *(undefined1 *)((int)piVar9 + 0x40e) = 0;
      *(undefined1 *)(piVar9 + 0xea) = 0;
      FUN_ram_000f1120(*(undefined4 *)(iVar10 + 0x3a04),(char)piVar9[0x19f]);
      return piVar9;
    }
    if (((char)param_2[0xb] == '\x02') || (param_2[0xe] != 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    iVar11 = FUN_ram_000fb0e4(*(undefined4 *)(iVar10 + 0x3b20),param_4);
    if (iVar11 == 0xff) {
      FUN_ram_000ee260(s_Can_t_allocate_node___hal_keyall_ram_001c0518);
    }
    else {
      iVar3 = FUN_ram_0015727c(param_2,iVar11,uVar5);
      if (iVar3 != 0) goto LAB_ram_00109c3c;
    }
  }
  return (int *)0x0;
}


