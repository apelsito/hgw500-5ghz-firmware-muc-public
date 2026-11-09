/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00102fcc */

void FUN_ram_00102fcc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_3 == 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + param_2 * 0x10 + 0x488);
    uVar5 = *(uint *)(param_2 * 0x10 + 0x484 + *(int *)(param_1 + 0xc));
  }
  else if (param_3 == 1) {
    iVar4 = *(int *)(param_2 * 0x10 + 0x4e8 + *(int *)(param_1 + 0xc));
    uVar5 = *(uint *)(param_2 * 0x10 + 0x4e4 + *(int *)(param_1 + 0xc));
  }
  else {
    uVar5 = 0;
  }
  iVar4 = iVar4 + uVar5;
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = iVar4 - *(int *)(iVar2 + 0x3014);
  if ((uVar5 < uVar3) || (uVar3 < 500)) {
    iVar4 = *(int *)(iVar2 + 0x3014) + 500;
  }
  if (param_3 == 0) {
    *(int *)(iVar2 + param_2 * 0x10 + 0x488) = iVar4;
    STATUS32 = uVar1;
    return;
  }
  if (param_3 == 1) {
    *(int *)(param_2 * 0x10 + 0x4e8 + iVar2) = iVar4;
    STATUS32 = uVar1;
    return;
  }
  STATUS32 = uVar1;
  return;
}


