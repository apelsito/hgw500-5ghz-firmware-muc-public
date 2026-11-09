/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011cd8c */

void FUN_ram_0011cd8c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 uVar10;
  int iVar11;
  
  uVar10 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c);
  iVar11 = *(int *)(param_2 + 0x10);
  iVar2 = FUN_ram_0011c26c(*(int *)(param_1 + 0x1c),iVar11);
  if (iVar2 != 0) {
    FUN_ram_0011cd14(param_1,param_2);
    iVar8 = *(int *)(iVar11 + 0xc);
    iVar4 = *(int *)(iVar11 + 0x18);
    puVar9 = (ushort *)(iVar8 * 0x4c + iVar2 + 0x7e0);
    if (iVar4 == 0) {
      *(undefined1 *)(puVar9 + 0x20) = 5;
      DAT_ram_80037140 = DAT_ram_80037140 + 1;
      return;
    }
    cVar1 = *(char *)(iVar11 + 8);
    *(char *)(puVar9 + 0x20) = cVar1;
    if (cVar1 == '\x01') {
      uVar6 = *(undefined4 *)(iVar11 + 0x14);
      uVar3 = (ushort)iVar4;
      puVar9[1] = uVar3;
      *puVar9 = (ushort)uVar6;
      puVar9[2] = *puVar9 + (uVar3 - 1) & 0xfff;
      puVar9[6] = puVar9[1] - 1 & *puVar9;
      uVar6 = *(undefined4 *)(iVar11 + 0x10);
      puVar9[7] = 0;
      *(char *)(puVar9 + 0x21) = (char)uVar6;
      uVar3 = *(ushort *)(iVar11 + 0x20);
      *(undefined1 *)(puVar9 + 10) = 0;
      puVar9[0x23] = uVar3;
      if (iVar8 == 0 || iVar8 == 3) {
        uVar7 = 0;
      }
      else if (iVar8 < 3) {
        uVar7 = 1;
      }
      else {
        uVar7 = 2;
        if (5 < iVar8) {
          uVar7 = 3;
        }
      }
      iVar8 = (uint)puVar9[1] << 4;
      *(undefined1 *)(puVar9 + 0x24) = uVar7;
      iVar4 = FUN_ram_000ee4c8(iVar8,0,2);
      if (iVar4 == 0) {
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined1 *)(puVar9 + 0x20) = 5;
        DAT_ram_80037140 = DAT_ram_80037140 + 1;
        iVar11 = *(int *)(iVar11 + 0x1c);
      }
      else {
        FUN_ram_000eea80(iVar4,0,iVar8);
        *(int *)(puVar9 + 4) = iVar4;
        FUN_ram_001148f0(uVar10,puVar9,1);
        DAT_ram_8003713c = DAT_ram_8003713c + 1;
        iVar11 = *(int *)(iVar11 + 0x1c);
      }
      if (iVar11 == 0) {
        iVar11 = 0x1000000;
      }
      *(int *)(iVar2 + 0x66c) = iVar11;
      uVar3 = puVar9[0x23];
      *(undefined4 *)(iVar2 + 0x670) = 0;
      if ((uVar3 & 2) == 0) {
        uVar5 = *(uint *)(iVar2 + 0x38c) & 0xffffefff;
      }
      else {
        uVar5 = *(uint *)(iVar2 + 0x38c) | 0x1000;
      }
      *(uint *)(iVar2 + 0x38c) = uVar5;
      return;
    }
  }
  return;
}


