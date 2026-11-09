/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001365dc */

void FUN_ram_001365dc(int param_1,int param_2)

{
  undefined4 local_c;
  undefined2 local_8;
  
  local_c = DAT_ram_001a66a0;
  local_8 = DAT_ram_001a66a4;
  FUN_ram_00104fa4(*(undefined4 *)(param_1 + 0x3b20),*(undefined1 *)(param_2 + 0x10),&local_c,0);
  return;
}


