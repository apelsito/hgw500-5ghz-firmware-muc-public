/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103fb4 */

void FUN_ram_00103fb4(int param_1,undefined1 *param_2)

{
  **(uint **)(param_1 + 0x140) = **(uint **)(param_1 + 0x140) | 0x200;
  FUN_ram_0039fe00(&DAT_ram_001a5e78,param_2,6);
  FUN_ram_000fe74c(*(undefined4 *)(param_1 + 0x144),&DAT_ram_001a5e74,0x1c);
  FUN_ram_000ee260(s_hal_set_bfrpt_ra__set_USE_RA_in_v_ram_001bfa18,
                   **(undefined4 **)(param_1 + 0x140),&DAT_ram_001a5e74,*param_2,param_2[1],
                   param_2[2],param_2[3],param_2[4],param_2[5]);
  return;
}


