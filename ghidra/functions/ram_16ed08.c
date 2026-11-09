/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ed08 */

undefined4 FUN_ram_0016ed08(undefined4 param_1,undefined4 param_2)

{
  DAT_ram_00194bb8 = param_2;
  DAT_ram_00194be0 = param_1;
  FUN_ram_0016ebc4();
  DAT_ram_00194bbc = DAT_ram_00194bb8;
  return 0;
}


