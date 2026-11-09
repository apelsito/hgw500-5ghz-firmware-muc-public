/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fe74c */

/* WARNING: Removing unreachable block (ram,0x000fe75e) */

void FUN_ram_000fe74c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 + 3U >> 2;
  if (uVar1 != 0) {
    LP_START = 0xfe768;
    LP_END = 0xfe770;
    do {
      *param_1 = *param_2;
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
    return;
  }
  return;
}


