/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011d044 */

void FUN_ram_0011d044(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  iVar7 = *(int *)(param_2 + 0x10);
  uVar8 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c);
  uVar10 = *(uint *)(iVar7 + 0x18);
  iVar4 = FUN_ram_0011c26c(*(int *)(param_1 + 0x1c),iVar7);
  if (iVar4 == 0) {
    return;
  }
  FUN_ram_0011cf9c(param_1,param_2);
  uVar5 = *(uint *)(iVar7 + 0xc);
  cVar1 = *(char *)(iVar7 + 8);
  iVar9 = iVar4 + 0x7e0 + uVar5 * 0x4c;
  *(char *)(iVar9 + 0x3f) = cVar1;
  if (cVar1 != '\x01') {
    FUN_ram_0015813c(uVar8,iVar4,uVar5 & 0xff);
    return;
  }
  sVar2 = *(short *)(iVar9 + 0x1c);
  *(short *)(iVar9 + 0x16) = sVar2;
  if (0x100 < uVar10) {
    FUN_ram_000ee260(s_Bad_window_size_for_TX__d___rest_ram_001c2c18,uVar10,0x100);
    uVar5 = *(uint *)(iVar7 + 0xc);
    sVar2 = *(short *)(iVar9 + 0x16);
    uVar10 = 0x100;
  }
  *(short *)(iVar9 + 0x1a) = (short)uVar10;
  uVar6 = *(undefined4 *)(iVar7 + 0x10);
  *(ushort *)(iVar9 + 0x18) = sVar2 + (short)uVar10 + -1 & 0xfff;
  uVar3 = *(undefined2 *)(iVar7 + 0x20);
  *(char *)(iVar9 + 0x41) = (char)uVar6;
  *(undefined2 *)(iVar9 + 0x46) = uVar3;
  *(short *)(iVar9 + 0x44) = *(short *)(iVar9 + 0x44) + 1;
  FUN_ram_0015813c(uVar8,iVar4,uVar5 & 0xff);
  iVar7 = *(int *)(iVar7 + 0x1c);
  if (iVar7 == 0) {
    iVar7 = 0x1000000;
  }
  *(int *)(iVar4 + 0x66c) = iVar7;
  *(undefined4 *)(iVar4 + 0x670) = 0;
  DAT_ram_80037138 = DAT_ram_80037138 + 1;
  return;
}


