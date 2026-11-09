/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014316c */

void FUN_ram_0014316c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar1 = 0x43;
  do {
    if ((0x2e < iVar4) || (*(char *)(*(int *)(param_2 + 0x24b4) + iVar4) != '\0')) {
      iVar7 = param_2 + 0xa64;
      iVar6 = param_2 + 0x12c4;
      iVar5 = param_2 + 0x1b24;
      iVar3 = param_2 + 0x3fc + iVar4 * 0x16;
      *(undefined2 *)(iVar3 + 0xa0) = 0;
      *(undefined2 *)(iVar3 + 0xb2) = 0xf830;
      iVar3 = iVar4 * 0x16 + param_2;
      *(undefined2 *)(iVar3 + 0x49e) = 0;
      *(undefined2 *)(iVar3 + 0x4a0) = 0;
      *(undefined2 *)(iVar3 + 0x4a2) = 0;
      *(undefined2 *)(iVar3 + 0x4a4) = 0;
      *(undefined2 *)(iVar3 + 0x4a6) = 0;
      *(undefined2 *)(iVar3 + 0x4a8) = 0;
      *(undefined2 *)(iVar3 + 0x4aa) = 0;
      *(undefined2 *)(iVar3 + 0x4ac) = 0;
      iVar2 = iVar4 * 0x20;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar6 + iVar2) = 0;
      *(undefined4 *)(iVar5 + iVar2) = 0;
      iVar3 = iVar2 + 4;
      *(undefined4 *)(iVar7 + iVar3) = 0;
      *(undefined4 *)(iVar6 + iVar3) = 0;
      *(undefined4 *)(iVar5 + iVar3) = 0;
      iVar3 = iVar2 + 8;
      *(undefined4 *)(iVar7 + iVar3) = 0;
      *(undefined4 *)(iVar6 + iVar3) = 0;
      *(undefined4 *)(iVar5 + iVar3) = 0;
      iVar3 = iVar2 + 0xc;
      *(undefined4 *)(iVar7 + iVar3) = 0;
      *(undefined4 *)(iVar6 + iVar3) = 0;
      *(undefined4 *)(iVar5 + iVar3) = 0;
      iVar3 = iVar2 + 0x10;
      *(undefined4 *)(iVar7 + iVar3) = 0;
      *(undefined4 *)(iVar6 + iVar3) = 0;
      *(undefined4 *)(iVar5 + iVar3) = 0;
      iVar3 = iVar2 + 0x14;
      *(undefined4 *)(iVar7 + iVar3) = 0;
      *(undefined4 *)(iVar6 + iVar3) = 0;
      *(undefined4 *)(iVar5 + iVar3) = 0;
      iVar3 = iVar2 + 0x18;
      *(undefined4 *)(iVar7 + iVar3) = 0;
      *(undefined4 *)(iVar6 + iVar3) = 0;
      *(undefined4 *)(iVar5 + iVar3) = 0;
      iVar2 = iVar2 + 0x1c;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar6 + iVar2) = 0;
      *(undefined4 *)(iVar5 + iVar2) = 0;
      *(undefined4 *)(param_2 + 0x2384 + iVar4 * 4) = 0;
    }
    iVar1 = iVar1 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar1 != 0);
  return;
}


