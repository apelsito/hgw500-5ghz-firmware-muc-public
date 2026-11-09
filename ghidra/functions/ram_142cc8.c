/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00142cc8 */

void FUN_ram_00142cc8(int param_1,int param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar8 = *(undefined4 *)(*(int *)(**(int **)(param_1 + 4) + 0x1c) + 0x3b20);
  if (param_3 != (uint *)0x0) {
    param_3[3] = (uint)*(byte *)(param_2 + 0x15);
    *param_3 = *param_3 | 1;
    iVar7 = 0x43;
    iVar5 = 0;
    puVar6 = param_3 + 0x8e1;
    do {
      iVar9 = 0;
      iVar3 = iVar5 * 0x16;
      *(undefined2 *)((int)param_3 + iVar3 + 0x49c) = 0;
      *(undefined2 *)((int)param_3 + iVar3 + 0x4ae) = 0xf830;
      do {
        iVar2 = iVar9 * 2;
        iVar9 = iVar9 + 1;
        *(undefined2 *)((int)param_3 + iVar2 + iVar3 + 0x49e) = 0;
      } while (iVar9 < 8);
      param_3[iVar5 * 8 + 0x299] = 0;
      param_3[iVar5 * 8 + 0x4b1] = 0;
      param_3[iVar5 * 8 + 0x6c9] = 0;
      param_3[iVar5 * 8 + 0x29a] = 0;
      param_3[iVar5 * 8 + 0x4b2] = 0;
      param_3[iVar5 * 8 + 0x6ca] = 0;
      param_3[iVar5 * 8 + 0x29b] = 0;
      param_3[iVar5 * 8 + 0x4b3] = 0;
      param_3[iVar5 * 8 + 0x6cb] = 0;
      param_3[iVar5 * 8 + 0x29c] = 0;
      param_3[iVar5 * 8 + 0x4b4] = 0;
      param_3[iVar5 * 8 + 0x6cc] = 0;
      param_3[iVar5 * 8 + 0x29d] = 0;
      param_3[iVar5 * 8 + 0x4b5] = 0;
      param_3[iVar5 * 8 + 0x6cd] = 0;
      param_3[iVar5 * 8 + 0x29e] = 0;
      param_3[iVar5 * 8 + 0x4b6] = 0;
      param_3[iVar5 * 8 + 0x6ce] = 0;
      param_3[iVar5 * 8 + 0x29f] = 0;
      param_3[iVar5 * 8 + 0x4b7] = 0;
      param_3[iVar5 * 8 + 0x6cf] = 0;
      param_3[iVar5 * 8 + 0x2a0] = 0;
      param_3[iVar5 * 8 + 0x4b8] = 0;
      param_3[iVar5 * 8 + 0x6d0] = 0;
      *puVar6 = 0;
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0);
    if (param_4 != 0) {
      *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_4 + 4);
      *(undefined1 *)((int)param_3 + 0x11) = *(undefined1 *)(param_4 + 5);
      uVar4 = *(undefined4 *)(param_1 + 0x408);
      *(undefined1 *)((int)param_3 + 0x12) = *(undefined1 *)(param_4 + 6);
      uVar1 = *(undefined1 *)(param_4 + 7);
      *(undefined1 *)(param_3 + 0x932) = 0;
      *(undefined1 *)((int)param_3 + 0x24c9) = 0;
      *(undefined1 *)(param_3 + 0x939) = 0;
      *(undefined1 *)((int)param_3 + 0x24e5) = 0;
      *(undefined1 *)((int)param_3 + 0x24ca) = 1;
      *(undefined1 *)((int)param_3 + 0x13) = uVar1;
      *(undefined2 *)(param_3 + 6) = 0xffff;
      *(char *)(param_1 + 0x683) = (char)uVar4;
      FUN_ram_0013d37c(param_1);
      FUN_ram_001034e0(uVar8,*(undefined1 *)(param_1 + 0x67c),0,0,*(undefined1 *)(param_1 + 0x683));
      uVar8 = DAT_ram_80038ee4;
      *(undefined4 *)(param_1 + 0xd68) = DAT_ram_80038ee0;
      *(undefined4 *)(param_1 + 0xd6c) = uVar8;
    }
  }
  return;
}


