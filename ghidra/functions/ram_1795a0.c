/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001795a0 */

void FUN_ram_001795a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (2 < param_2) {
    param_2 = 0;
  }
  param_2 = param_2 * 0x18;
  uVar1 = *(undefined4 *)(DAT_ram_0018c3e0 + param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + DAT_ram_0018c3e0 + 0x14);
  *param_1 = *(undefined4 *)(DAT_ram_0018c3e0 + param_2 + 0xc);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


