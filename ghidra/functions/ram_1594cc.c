/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001594cc */

void FUN_ram_001594cc(undefined4 param_1,int *param_2,undefined4 param_3)

{
  FUN_ram_00158524(param_1,*(undefined1 *)(*(int *)(*param_2 + 0x38) + 0x67c),param_3,
                   (char)param_2[0x19f],1);
  DAT_ram_80037964 = DAT_ram_80037964 + 1;
  return;
}


