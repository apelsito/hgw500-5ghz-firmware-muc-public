/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001794dc */

void FUN_ram_001794dc(int param_1)

{
  byte *pbVar1;
  int *in_r7;
  int *piVar2;
  byte *in_r9;
  byte *pbVar3;
  uint uVar4;
  uint in_lp_count;
  char in_is_in_loop;
  
  if (2 < param_1) {
    param_1 = 0;
  }
  pbVar1 = *(byte **)(DAT_ram_0018c3e0 + param_1 * 0x18);
  uVar4 = (uint)*(byte *)(param_1 * 0x18 + DAT_ram_0018c3e0 + 4);
  if (uVar4 == 0) goto LAB_ram_0017952c;
  LP_START = 0x17951c;
  LP_END = 0x17952c;
  in_is_in_loop = '\x01';
  piVar2 = &DAT_ram_002205e8;
  pbVar3 = pbVar1;
  in_lp_count = uVar4;
  do {
    in_r9 = pbVar3 + 1;
    in_r7 = piVar2 + 1;
    *piVar2 = (*pbVar3 & 0xc) * 0x40 + (uint)*pbVar3;
LAB_ram_0017952c:
  } while ((in_is_in_loop != '\0') &&
          (in_lp_count = in_lp_count - 1, piVar2 = in_r7, pbVar3 = in_r9, in_lp_count != 0));
  if (uVar4 < 0x40) {
    pbVar1 = pbVar1 + uVar4;
    piVar2 = &DAT_ram_002205e8 + uVar4;
    do {
      uVar4 = uVar4 + 1 & 0xff;
      *piVar2 = (uint)*pbVar1 + (*pbVar1 & 0xc) * 0x40 + 0x1000;
      pbVar1 = pbVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < 0x40);
    return;
  }
  return;
}


