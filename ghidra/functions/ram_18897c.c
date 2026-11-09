/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018897c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018897c(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int in_lp_count;
  char in_is_in_loop;
  
  if (param_1 == (byte *)0x0 || param_2 == (byte *)0x0) goto LAB_ram_001889c0;
  in_lp_count = 0x4d;
  param_7 = 0;
  LP_START = 0x188994;
  LP_END = 0x1889c0;
  in_is_in_loop = '\x01';
  pbVar1 = param_1;
  pbVar2 = param_2;
  do {
    param_2 = pbVar2 + 1;
    param_1 = pbVar1 + 1;
    *(uint *)(param_7 * 4 + -0x19faff50) = *pbVar1 & 0xf | (*pbVar2 & 0xf) << 4;
    param_7 = param_7 + 1;
LAB_ram_001889c0:
  } while ((in_is_in_loop != '\0') &&
          (in_lp_count = in_lp_count + -1, pbVar1 = param_1, pbVar2 = param_2, in_lp_count != 0));
  _DAT_ram_e60501f8 = param_3;
  _DAT_ram_e605020c = param_4;
  return;
}


