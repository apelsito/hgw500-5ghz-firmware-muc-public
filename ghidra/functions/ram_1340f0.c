/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001340f0 */

void FUN_ram_001340f0(int param_1,undefined4 param_2)

{
  if (DAT_ram_8002c8bc == '\x03') {
    *(undefined1 *)(param_1 + 0x401a) = 6;
    FUN_ram_00133c1c(param_1,&DAT_ram_0020d9d4,param_2);
    FUN_ram_00134f70(param_1,&DAT_ram_0020d9d4,0);
  }
  return;
}


