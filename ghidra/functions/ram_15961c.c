/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015961c */

void FUN_ram_0015961c(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (param_3 == 3) {
    uVar3 = 6;
  }
  else if (param_3 == 2) {
    uVar3 = 5;
  }
  else {
    uVar3 = param_3 == 1;
  }
  iVar2 = *param_2;
  iVar1 = FUN_ram_00155e14((char)param_2[0x19f]);
  if ((*(uint *)(iVar1 + 0x94) & 0xf & (*(uint *)(iVar1 + 0x94) & 0xf00) >> 8) == 0) {
    FUN_ram_00158524(param_1,*(undefined1 *)(*(int *)(iVar2 + 0x38) + 0x67c),6,
                     *(byte *)(param_2 + 0x19f) | 0x1200400,0);
    FUN_ram_0012e164(param_1,param_2,uVar3,1);
    DAT_ram_80037988 = DAT_ram_80037988 + 1;
  }
  else {
    FUN_ram_00158524(param_1,*(undefined1 *)(*(int *)(iVar2 + 0x38) + 0x67c),5,
                     (uint)*(byte *)(param_2 + 0x19f),0);
    DAT_ram_80037984 = DAT_ram_80037984 + 1;
  }
  return;
}


