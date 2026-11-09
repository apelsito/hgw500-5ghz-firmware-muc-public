/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183bdc */

uint FUN_ram_00183bdc(uint *param_1,uint param_2,uint param_3)

{
  return (*param_1 & param_2) >> (param_3 & 0x1f);
}


