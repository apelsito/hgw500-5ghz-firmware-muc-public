/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014c4d8 */

undefined4 FUN_ram_0014c4d8(int param_1,uint param_2,uint param_3,byte *param_4,byte *param_5)

{
  uint uVar1;
  
  uVar1 = param_2 >> (*param_4 & 0x1f);
  if (param_4[1] != 0) {
    uVar1 = uVar1 + (param_2 >> (param_4[1] & 0x1f));
  }
  if (uVar1 < param_3) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | 1;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    return 1;
  }
  uVar1 = param_2 >> (*param_5 & 0x1f);
  if (param_5[1] != 0) {
    uVar1 = uVar1 + (param_2 >> (param_5[1] & 0x1f));
  }
  if (uVar1 < param_3) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return 2;
}


