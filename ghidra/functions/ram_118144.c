/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00118144 */

undefined4 FUN_ram_00118144(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 4);
  if ((param_3 == 0) && (*(char *)(**(int **)(param_2 + 8) + 0x2c) == '\x06')) {
    FUN_ram_00117680(param_1,param_2,DAT_ram_8002c941,0,0);
    if (*(short *)(param_2 + 4) == sVar1) {
      DAT_ram_800373e4 = DAT_ram_800373e4 + 1;
    }
    else {
      DAT_ram_800373e0 = DAT_ram_800373e0 + 1;
    }
    return 1;
  }
  return 0;
}


