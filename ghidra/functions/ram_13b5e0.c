/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013b5e0 */

int FUN_ram_0013b5e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = DAT_ram_001a875c;
  local_14 = DAT_ram_001a8760;
  local_10 = DAT_ram_001a8764;
  local_c = DAT_ram_001a8768;
  if (param_1 != 0xff) {
    FUN_ram_000fb55c(*(undefined4 *)(*(int *)(**(int **)(param_2 + 0xc) + 0x1c) + 0x3b20),param_3,
                     param_1,&local_18,0,*(undefined1 *)(param_2 + 0x10),4);
  }
  return param_1;
}


