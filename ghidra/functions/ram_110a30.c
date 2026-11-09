/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110a30 */

void FUN_ram_00110a30(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  param_2[9] = 0;
  iVar2 = FUN_ram_00108bfc(*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x3b20),param_2[10] & 0x40,
                           *param_2,param_2[1],&LAB_ram_0010d260,param_2[4],&LAB_ram_0010d1f4,
                           param_2[5],&LAB_ram_0010d2f0,param_1,param_2);
  uVar1 = param_2[9];
  param_2[9] = uVar1 | 1;
  if (iVar2 != 0) {
    param_2[9] = uVar1 | 0x31;
  }
  return;
}


