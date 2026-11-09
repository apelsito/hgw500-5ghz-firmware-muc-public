/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001070c8 */

void FUN_ram_001070c8(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    param_1[10] = param_1[10] & 0xfffffbff;
  }
  else {
    param_1[10] = param_1[10] | 0x400;
  }
  if ((code *)param_1[0xe7f] != (code *)0x0) {
    (*(code *)param_1[0xe7f])(*param_1);
  }
  return;
}


