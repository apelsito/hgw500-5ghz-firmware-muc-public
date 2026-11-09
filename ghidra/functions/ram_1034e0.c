/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001034e0 */

void FUN_ram_001034e0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_3 & 0x7f) < 0x6d) {
    uVar1 = (uint)(byte)(&DAT_ram_0018c430)[param_5 + (param_3 & 0x7f) * 3];
  }
  *(uint *)(*(int *)(param_1 + 0x21c) + param_2 * 4) =
       (uVar1 & 7) << 0x1c | (param_4 & 1) << 0xf | (param_3 & 0x7f) << 0x14 | 0x80000000;
  return;
}


