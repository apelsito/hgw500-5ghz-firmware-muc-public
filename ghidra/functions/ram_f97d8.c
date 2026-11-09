/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f97d8 */

undefined4 FUN_ram_000f97d8(int param_1,int *param_2)

{
  uint uVar1;
  
  if ((char)param_2[2] == '\0') {
    uVar1 = DAT_ram_0018c06c - *param_2;
    if ((&DAT_ram_002016bc)[0x30 - uVar1 / 0x6c] == 0) {
      FUN_ram_000ee260(s_Returning_already_freed_fd___d____ram_001bee1c);
    }
    (&DAT_ram_002016bc)[0x30 - uVar1 / 0x6c] = 0;
    param_2[1] = 0;
    **(int **)(param_1 + 0x468) = (int)param_2;
    *(int **)(param_1 + 0x468) = param_2 + 1;
    DAT_ram_0018c064 = DAT_ram_0018c064 + -1;
  }
  else {
    param_2[1] = 0;
    **(int **)(param_1 + 0x80c) = (int)param_2;
    *(int **)(param_1 + 0x80c) = param_2 + 1;
  }
  return 0;
}


