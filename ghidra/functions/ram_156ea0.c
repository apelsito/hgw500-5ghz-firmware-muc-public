/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156ea0 */

char FUN_ram_00156ea0(undefined4 param_1,uint param_2,char param_3,char *param_4)

{
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_2 != 7) && (param_2 != 4)) {
    param_3 = param_3 + '\x02';
    *param_4 = param_3;
    local_8 = DAT_ram_001aa578;
    local_4 = DAT_ram_001aa57c;
    if (param_2 < 8) {
      return *(char *)((int)&local_8 + param_2) + param_3 * '\b' + '@';
    }
    return param_3 * '\b' + '@';
  }
  *param_4 = '\x06';
  return param_3 + 'p';
}


