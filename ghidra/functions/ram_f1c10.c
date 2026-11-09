/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1c10 */

int FUN_ram_000f1c10(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_lp_count;
  char in_is_in_loop;
  
  if (DAT_ram_001cb294 == 0) goto LAB_ram_000f1c54;
  in_lp_count = 0x20;
  param_1 = 0;
  LP_START = 0xf1c28;
  LP_END = 0xf1c54;
  in_is_in_loop = '\x01';
  do {
    uVar3 = (uint)(param_1 >> 4) >> 0x1b;
    uVar1 = uVar3 + param_1;
    iVar2 = (int)uVar1 >> 5;
    uVar1 = 1 << ((uVar1 & 0x1f) - uVar3 & 0x1f);
    if ((uVar1 & (&DAT_ram_001cb290)[iVar2]) == 0) {
      (&DAT_ram_001cb290)[iVar2] = (&DAT_ram_001cb290)[iVar2] | uVar1;
      DAT_ram_001cb294 = DAT_ram_001cb294 + -1;
      return param_1;
    }
    param_1 = param_1 + 1;
LAB_ram_000f1c54:
  } while ((in_is_in_loop != '\0') && (in_lp_count = in_lp_count + -1, in_lp_count != 0));
  return -1;
}


