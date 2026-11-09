/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eee08 */

undefined4 FUN_ram_000eee08(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_ram_80038ee0;
  if (*param_1 - DAT_ram_80038ee0 < 0) {
    param_1[3] = param_1[2];
    param_1[2] = 0;
    *param_1 = param_1[1] + iVar1;
    return 1;
  }
  param_1[2] = param_1[2] + 1;
  return 0;
}


