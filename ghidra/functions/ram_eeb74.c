/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eeb74 */

int FUN_ram_000eeb74(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int in_lp_count;
  char in_is_in_loop;
  
  if (param_3 == 0) goto LAB_ram_000eeb9a;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  LP_START = 0xeeb88;
  LP_END = 0xeeb9a;
  in_is_in_loop = '\x01';
  pbVar1 = param_1;
  pbVar2 = param_2;
  do {
    param_2 = pbVar2 + 1;
    param_1 = pbVar1 + 1;
    in_lp_count = param_3;
    if ((uint)*pbVar1 - (uint)*pbVar2 != 0) {
      return (uint)*pbVar1 - (uint)*pbVar2;
    }
LAB_ram_000eeb9a:
  } while ((in_is_in_loop != '\0') &&
          (param_3 = in_lp_count + -1, pbVar1 = param_1, pbVar2 = param_2, param_3 != 0));
  return 0;
}


