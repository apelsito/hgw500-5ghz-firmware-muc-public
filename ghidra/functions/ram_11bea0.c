/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011bea0 */

void FUN_ram_0011bea0(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar12 = *(int *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c);
  iVar4 = *(int *)(param_2 + 0x10);
  if ((DAT_ram_8002c93c == 0) && (*(char *)(iVar12 + 0x46a0) == '\0')) {
    FUN_ram_000eea80(iVar4,0,0xc00);
  }
  else {
    iVar9 = 0;
    iVar13 = iVar12 + 0x47dc;
    iVar6 = 0x40;
    do {
      uVar14 = 0;
      iVar3 = iVar9 * 0x50;
      puVar11 = (undefined1 *)(iVar4 + iVar9 * 0x30);
      do {
        while( true ) {
          iVar10 = *(int *)(iVar12 + iVar3 + 0x46a8 + uVar14 * 4);
          iVar7 = iVar4 + uVar14 + iVar9 * 0x30;
          if (iVar10 == 0) break;
          uVar2 = *(undefined1 *)(iVar10 + 0x67c);
          *(undefined2 *)(puVar11 + uVar14 * 2 + 2) = *(undefined2 *)(iVar10 + 0x18);
          *(undefined1 *)(iVar7 + 10) = uVar2;
          uVar14 = uVar14 + 1 & 0xff;
          if (3 < uVar14) goto LAB_ram_0011bf68;
        }
        *(undefined2 *)(puVar11 + uVar14 * 2 + 2) = 0;
        *(undefined1 *)(iVar7 + 10) = 0;
        uVar14 = uVar14 + 1 & 0xff;
      } while (uVar14 < 4);
LAB_ram_0011bf68:
      uVar8 = *(undefined4 *)(iVar13 + iVar3 + -0xf0);
      *puVar11 = *(undefined1 *)(iVar12 + 0x4770 + iVar3 + -0xcc);
      iVar7 = iVar13 + iVar3;
      uVar5 = *(undefined4 *)(iVar13 + iVar3 + -0xec);
      *(undefined4 *)(puVar11 + 0x28) = uVar8;
      cVar1 = *(char *)(iVar3 + iVar12 + 0x4770 + -0xcb);
      *(undefined4 *)(puVar11 + 0x2c) = uVar5;
      puVar11[1] = cVar1;
      if (cVar1 == '\x01' || cVar1 == '\x02') {
        uVar5 = *(undefined4 *)(iVar7 + -0x104);
        *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(iVar7 + -0x108);
        uVar8 = *(undefined4 *)(iVar7 + -0x100);
        *(undefined4 *)(puVar11 + 0x14) = uVar5;
        uVar5 = *(undefined4 *)(iVar7 + -0xfc);
        *(undefined4 *)(puVar11 + 0x18) = uVar8;
        uVar8 = *(undefined4 *)(iVar7 + -0xf8);
        *(undefined4 *)(puVar11 + 0x1c) = uVar5;
        uVar5 = *(undefined4 *)(iVar7 + -0xf4);
        *(undefined4 *)(puVar11 + 0x20) = uVar8;
        *(undefined4 *)(puVar11 + 0x24) = uVar5;
      }
      iVar6 = iVar6 + -1;
      iVar9 = (int)(char)((char)iVar9 + '\x01');
    } while (iVar6 != 0);
  }
  return;
}


