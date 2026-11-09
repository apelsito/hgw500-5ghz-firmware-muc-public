/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001054cc */

undefined4 FUN_ram_001054cc(int param_1,uint param_2,undefined2 *param_3)

{
  undefined4 *in_r6;
  int in_r9;
  int in_lp_count;
  char in_is_in_loop;
  
  if (param_3 == (undefined2 *)0x0) goto LAB_ram_00105540;
  if (2 < param_1) goto LAB_ram_00105540;
  if (param_1 < 0) goto LAB_ram_00105540;
  if (3 < (int)param_2) goto LAB_ram_00105540;
  if ((int)param_2 < 0) goto LAB_ram_00105540;
  if (param_1 == 0) {
    in_r9 = *(int *)(&DAT_ram_0018cd20 + param_2 * 4);
  }
  else if (param_1 == 1) {
    in_r9 = *(int *)(&DAT_ram_0018cd30 + param_2 * 4);
  }
  else {
    in_r9 = *(int *)(&DAT_ram_0018cd40 + param_2 * 4);
  }
  param_2 = 0;
  in_lp_count = 3;
  in_r6 = &DAT_ram_001a5ee8;
  LP_START = 0x105530;
  LP_END = 0x105540;
  in_is_in_loop = '\x01';
  do {
    if (in_r9 == in_r6[param_2]) {
      *param_3 = (short)param_2;
      return 0;
    }
    param_2 = param_2 + 1 & 0xffff;
LAB_ram_00105540:
  } while ((in_is_in_loop != '\0') && (in_lp_count = in_lp_count + -1, in_lp_count != 0));
  return 0xffffffff;
}


