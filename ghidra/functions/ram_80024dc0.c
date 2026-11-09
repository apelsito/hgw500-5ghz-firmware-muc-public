/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80024dc0 */

void FUN_ram_80024dc0(int param_1)

{
  param_1 = param_1 * 0x1c;
  if (*(code **)(&DAT_ram_8002be60 + param_1) != (code *)0x0) {
    (**(code **)(&DAT_ram_8002be60 + param_1))(*(undefined4 *)(&DAT_ram_8002be64 + param_1));
  }
  if ((*(uint *)(&DAT_ram_8002be5c + param_1) & 1) != 0 &&
      (*(uint *)(&DAT_ram_8002be5c + param_1) & 2) != 0) {
    *(uint *)(&DAT_ram_8002be5c + param_1) = *(uint *)(&DAT_ram_8002be5c + param_1) | 4;
  }
  return;
}


