/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c3f4 */

void FUN_ram_0011c3f4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_3 + 0xc);
  if (*(int *)(param_2 + 0x42c) != 0) {
    if (*(char *)(param_3 + 0x2c) == '\x01') {
      iVar3 = iVar2 + 0x1f;
    }
    else {
      iVar3 = param_2 + 0x9c;
    }
    iVar1 = *(int *)(iVar2 + 0x3a00);
    *(int *)(param_2 + 0x430) = iVar1;
    *(int *)(iVar2 + 0x3a00) = iVar1 + 1;
    *(int *)(param_2 + 0x434) = iVar1 + 1;
    *(int *)(iVar2 + 0x3a00) = iVar1 + 2;
    FUN_ram_00113edc(param_1,param_2,param_2 + 0x96,iVar3,*(undefined4 *)(param_2 + 0x428),
                     *(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x430));
    FUN_ram_00113edc(param_1,param_2,iVar3,param_2 + 0x96,*(undefined4 *)(param_2 + 0x42c),
                     *(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x434));
  }
  return;
}


