/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c09c */

void FUN_ram_0011c09c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_2c [8];
  
  iVar6 = param_1 + 0x39c0;
  uVar5 = 0;
  iVar4 = 4;
  iVar2 = iVar6;
  iVar3 = iVar6;
  do {
    FUN_ram_000efab8(auStack_2c,iVar2,8);
    FUN_ram_000efab8(iVar2,param_2,8);
    uVar1 = FUN_ram_000eeb74(iVar3,auStack_2c,8);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 | uVar1;
    iVar2 = iVar2 + 8;
    param_2 = param_2 + 8;
    iVar3 = iVar3 + 8;
  } while (iVar4 != 0);
  if (uVar5 != 0) {
    FUN_ram_001583a8(param_1,iVar6);
    FUN_ram_0011bff8(iVar6);
  }
  return;
}


