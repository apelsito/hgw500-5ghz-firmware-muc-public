/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010d3c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0010d3c8(int *param_1,int param_2)

{
  *(uint *)(*(int *)(*param_1 + 0x1c) + 0x4060) =
       *(uint *)(*(int *)(*param_1 + 0x1c) + 0x4060) & 0xfffffffe;
  *(undefined4 *)(param_2 + 0xc) = 6;
  _DAT_ram_e000002c = 0x8000800;
  sync();
  return 0x8000800;
}


