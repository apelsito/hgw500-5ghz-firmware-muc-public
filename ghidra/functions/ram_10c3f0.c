/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010c3f0 */

void FUN_ram_0010c3f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x1c);
  if (*(short *)(iVar1 + 0x4058) == 0) {
    *(undefined2 *)(iVar1 + 0x4672) = 0;
    FUN_ram_0010be58(param_1);
  }
  else {
    *(undefined4 *)(iVar1 + 0x4668) = param_2;
    *(undefined4 *)(iVar1 + 0x466c) = param_3;
    *(undefined2 *)(iVar1 + 0x4670) = param_4;
    *(undefined2 *)(iVar1 + 0x4672) = 1;
    DAT_ram_800378b8 = DAT_ram_800378b8 + 1;
  }
  return;
}


