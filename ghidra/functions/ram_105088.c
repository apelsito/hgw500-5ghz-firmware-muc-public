/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00105088 */

uint FUN_ram_00105088(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    if (param_2 == 0) {
      iVar5 = 0x3004;
      iVar3 = 0x3008;
    }
    else {
      iVar3 = (param_2 + -1) * 8;
      iVar5 = iVar3 + 0x307c;
      iVar3 = iVar3 + 0x3080;
    }
    iVar4 = *(int *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(iVar4 + iVar5);
    *param_3 = (char)uVar2;
    param_3[1] = (char)((uint)uVar2 >> 8);
    param_3[2] = (char)((uint)uVar2 >> 0x10);
    uVar1 = *(uint *)(iVar4 + iVar3);
    param_3[3] = (char)((uint)uVar2 >> 0x18);
    param_3[4] = (char)uVar1;
    param_3[5] = (char)(uVar1 >> 8);
    return uVar1 >> 0x1f;
  }
  return 0;
}


