/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010e6c4 */

uint FUN_ram_0010e6c4(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x4094) = 0;
    if (param_3 == (uint *)0x0) {
      return 0;
    }
    uVar1 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar1 = param_2[4];
    *(undefined4 *)(param_1 + 0x4094) = 0;
    uVar2 = uVar2 >> 1 & 1;
    if (param_3 == (uint *)0x0) {
      return uVar2;
    }
  }
  *param_3 = uVar1;
  return uVar2;
}


