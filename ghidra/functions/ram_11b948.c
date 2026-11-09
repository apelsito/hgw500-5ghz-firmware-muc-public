/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011b948 */

/* WARNING: Removing unreachable block (ram,0x0011b96e) */
/* WARNING: Removing unreachable block (ram,0x0011b980) */

void FUN_ram_0011b948(undefined4 param_1,ushort *param_2)

{
  ushort local_14;
  ushort local_12;
  ushort local_10;
  
  if (DAT_ram_0018c130 != 0) {
    if (((uint)param_2 & 1) == 0) {
      local_14 = *param_2;
      local_12 = param_2[1];
      local_10 = param_2[2];
    }
    else {
      FUN_ram_0039fe00(&local_14,param_2,6);
    }
    if (DAT_ram_0018c130 != 0) {
      local_14 = local_14 | 1;
    }
    FUN_ram_00103a8c(param_1,&local_14);
    FUN_ram_00104060(param_1,DAT_ram_0018c134,DAT_ram_0018c135);
  }
  return;
}


